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

// Function: sub_0034D5D0
// Address: 0x34d5d0 - 0x34d938
void sub_0034D5D0_0x34d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D5D0_0x34d5d0");
#endif

    switch (ctx->pc) {
        case 0x34d6b0u: goto label_34d6b0;
        case 0x34d6d8u: goto label_34d6d8;
        case 0x34d700u: goto label_34d700;
        case 0x34d71cu: goto label_34d71c;
        case 0x34d79cu: goto label_34d79c;
        case 0x34d7c8u: goto label_34d7c8;
        case 0x34d7d0u: goto label_34d7d0;
        case 0x34d818u: goto label_34d818;
        case 0x34d830u: goto label_34d830;
        case 0x34d87cu: goto label_34d87c;
        default: break;
    }

    ctx->pc = 0x34d5d0u;

    // 0x34d5d0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x34d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x34d5d4: 0x3c016753  lui         $at, 0x6753
    ctx->pc = 0x34d5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)26451 << 16));
    // 0x34d5d8: 0x3421c21c  ori         $at, $at, 0xC21C
    ctx->pc = 0x34d5d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49692);
    // 0x34d5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34d5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d5e0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x34d5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x34d5e4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x34d5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5e8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x34d5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x34d5ec: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x34d5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x34d5f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34d5f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5f4: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x34d5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x34d5f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34d5f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5fc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x34d5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x34d600: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x34d600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x34d604: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x34d604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x34d608: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x34d608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x34d60c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x34d60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x34d610: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34d610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d614: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x34d614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x34d618: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x34d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x34d61c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x34d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x34d620: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x34d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x34d624: 0x7a820030  lq          $v0, 0x30($s4)
    ctx->pc = 0x34d624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x34d628: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x34d628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x34d62c: 0x7a830040  lq          $v1, 0x40($s4)
    ctx->pc = 0x34d62cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x34d630: 0x7a840000  lq          $a0, 0x0($s4)
    ctx->pc = 0x34d630u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34d634: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d638: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34d638u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d63c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34d63cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34d640: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34d640u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d644: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34d644u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34d648: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d64c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x34d64cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34d650: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d654: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d658: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d65c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34d65cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d660: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34d660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d664: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x34d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d668: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x34d668u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34d66c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d66cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d670: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34d670u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d674: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d678: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d67c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d67cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d680: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34d680u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d684: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x34d684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x34d688: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x34d688u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34d68c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x34d68cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34d690: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x34d690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d694: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x34d694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x34d698: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34d69c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34d6a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x34d6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34d6a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34d6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x34d6a8: 0xc0d2a98  jal         func_34AA60
    ctx->pc = 0x34D6A8u;
    SET_GPR_U32(ctx, 31, 0x34D6B0u);
    ctx->pc = 0x34D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D6A8u;
    // 0x34d6ac: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AA60u, 0x34D6A8u, 0x34D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D6B0u;
label_34d6b0:
    // 0x34d6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d6b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34d6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d6b8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x34d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x34d6bc: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x34d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x34d6c0: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x34d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x34d6c4: 0xc7af0054  lwc1        $f15, 0x54($sp)
    ctx->pc = 0x34d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x34d6c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x34d6c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x34d6cc: 0xc7b00040  lwc1        $f16, 0x40($sp)
    ctx->pc = 0x34d6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x34d6d0: 0xc0d2a34  jal         func_34A8D0
    ctx->pc = 0x34D6D0u;
    SET_GPR_U32(ctx, 31, 0x34D6D8u);
    ctx->pc = 0x34D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D6D0u;
    // 0x34d6d4: 0xc7b10044  lwc1        $f17, 0x44($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A8D0u, 0x34D6D0u, 0x34D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D6D8u;
label_34d6d8:
    // 0x34d6d8: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x34D6D8u;
    {
        const bool branch_taken_0x34d6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D6D8u;
        // 0x34d6dc: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d6d8) {
            ctx->pc = 0x34D8F0u;
            goto label_34d8f0;
        }
    }
    ctx->pc = 0x34D6E0u;
    // 0x34d6e0: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x34d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
    // 0x34d6e4: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x34d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x34d6e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34d6e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6ec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x34d6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d6f0: 0x27be0054  addiu       $fp, $sp, 0x54
    ctx->pc = 0x34d6f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x34d6f4: 0x26970010  addiu       $s7, $s4, 0x10
    ctx->pc = 0x34d6f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x34d6f8: 0x26960020  addiu       $s6, $s4, 0x20
    ctx->pc = 0x34d6f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x34d6fc: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x34d6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34d700:
    // 0x34d700: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x34d700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x34d704: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x34d704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d708: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x34d708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d70c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x34d70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d710: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x34d710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d714: 0xc0d2aca  jal         func_34AB28
    ctx->pc = 0x34D714u;
    SET_GPR_U32(ctx, 31, 0x34D71Cu);
    ctx->pc = 0x34D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D714u;
    // 0x34d718: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AB28u, 0x34D714u, 0x34D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D71Cu;
label_34d71c:
    // 0x34d71c: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x34d71cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34d720: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x34d720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x34d724: 0x7aa20030  lq          $v0, 0x30($s5)
    ctx->pc = 0x34d724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x34d728: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x34d728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x34d72c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x34d72cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34d730: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34d730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d734: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d734u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d738: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d73c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d73cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d740: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34d740u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d744: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x34d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d748: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x34d748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34d74c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x34d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34d750: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x34d750u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x34d754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d758: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34d758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d75c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x34d75cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d760: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x34d760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x34d764: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x34d764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34d768: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34d768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d76c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d76cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d770: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d774: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d778: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34d778u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d77c: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x34d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x34d780: 0xc7af0054  lwc1        $f15, 0x54($sp)
    ctx->pc = 0x34d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x34d784: 0x46000c46  mov.s       $f17, $f1
    ctx->pc = 0x34d784u;
    ctx->f[17] = FPU_MOV_S(ctx->f[1]);
    // 0x34d788: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34d788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d78c: 0x46000406  mov.s       $f16, $f0
    ctx->pc = 0x34d78cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[0]);
    // 0x34d790: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x34d790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34d794: 0xc0d2a34  jal         func_34A8D0
    ctx->pc = 0x34D794u;
    SET_GPR_U32(ctx, 31, 0x34D79Cu);
    ctx->pc = 0x34D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D794u;
    // 0x34d798: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A8D0u, 0x34D794u, 0x34D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D79Cu;
label_34d79c:
    // 0x34d79c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D79Cu;
    {
        const bool branch_taken_0x34d79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D79Cu;
        // 0x34d7a0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d79c) {
            ctx->pc = 0x34D7B4u;
            goto label_34d7b4;
        }
    }
    ctx->pc = 0x34D7A4u;
    // 0x34d7a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34d7a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34d7a8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x34d7a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d7ac: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x34D7ACu;
    {
        const bool branch_taken_0x34d7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7ACu;
        // 0x34d7b0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7ac) {
            ctx->pc = 0x34D700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d700;
        }
    }
    ctx->pc = 0x34D7B4u;
label_34d7b4:
    // 0x34d7b4: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x34d7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d7b8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x34D7B8u;
    {
        const bool branch_taken_0x34d7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7B8u;
        // 0x34d7bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7b8) {
            ctx->pc = 0x34D8F0u;
            goto label_34d8f0;
        }
    }
    ctx->pc = 0x34D7C0u;
    // 0x34d7c0: 0x26910030  addiu       $s1, $s4, 0x30
    ctx->pc = 0x34d7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x34d7c4: 0x0  nop
    ctx->pc = 0x34d7c4u;
    // NOP
label_34d7c8:
    // 0x34d7c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34d7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7cc: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x34d7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34d7d0:
    // 0x34d7d0: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x34d7d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34d7d4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x34d7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7d8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x34d7d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d7dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x34d7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34d7e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d7e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34d7e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d7e8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34d7e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34d7ec: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34d7ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d7f0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34d7f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34d7f4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x34d7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x34d7f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34d7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x34d7fc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x34d7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d800: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34d804: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x34d804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d808: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34d808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34d80c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x34d80cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d810: 0xc0d2aca  jal         func_34AB28
    ctx->pc = 0x34D810u;
    SET_GPR_U32(ctx, 31, 0x34D818u);
    ctx->pc = 0x34D814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D810u;
    // 0x34d814: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AB28u, 0x34D810u, 0x34D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D818u;
label_34d818:
    // 0x34d818: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x34d818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34d81c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x34d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x34d820: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x34d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d824: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x34d824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d828: 0xc0d2a98  jal         func_34AA60
    ctx->pc = 0x34D828u;
    SET_GPR_U32(ctx, 31, 0x34D830u);
    ctx->pc = 0x34D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D828u;
    // 0x34d82c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AA60u, 0x34D828u, 0x34D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D830u;
label_34d830:
    // 0x34d830: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x34d830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34d834: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x34d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x34d838: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x34d838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d83c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x34d83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34d840: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34d840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34d844: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34d844u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d848: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34d848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d84c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34d84cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d850: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34d850u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34d854: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x34d854u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34d858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d85c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34d85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d860: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x34d860u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d864: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x34d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x34d868: 0xc7ae0050  lwc1        $f14, 0x50($sp)
    ctx->pc = 0x34d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x34d86c: 0xc7af0054  lwc1        $f15, 0x54($sp)
    ctx->pc = 0x34d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x34d870: 0xc7b00040  lwc1        $f16, 0x40($sp)
    ctx->pc = 0x34d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x34d874: 0xc0d2a34  jal         func_34A8D0
    ctx->pc = 0x34D874u;
    SET_GPR_U32(ctx, 31, 0x34D87Cu);
    ctx->pc = 0x34D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D874u;
    // 0x34d878: 0xc7b10044  lwc1        $f17, 0x44($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A8D0u, 0x34D874u, 0x34D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D87Cu;
label_34d87c:
    // 0x34d87c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34D87Cu;
    {
        const bool branch_taken_0x34d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D87Cu;
        // 0x34d880: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d87c) {
            ctx->pc = 0x34D898u;
            goto label_34d898;
        }
    }
    ctx->pc = 0x34D884u;
    // 0x34d884: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34d884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34d888: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x34d888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d88c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x34D88Cu;
    {
        const bool branch_taken_0x34d88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D88Cu;
        // 0x34d890: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d88c) {
            ctx->pc = 0x34D7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d7d0;
        }
    }
    ctx->pc = 0x34D894u;
    // 0x34d894: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x34d894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_34d898:
    // 0x34d898: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34D898u;
    {
        const bool branch_taken_0x34d898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D898u;
        // 0x34d89c: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d898) {
            ctx->pc = 0x34D8B4u;
            goto label_34d8b4;
        }
    }
    ctx->pc = 0x34D8A0u;
    // 0x34d8a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34d8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34d8a4: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x34d8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d8a8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x34D8A8u;
    {
        const bool branch_taken_0x34d8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8A8u;
        // 0x34d8ac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8a8) {
            ctx->pc = 0x34D7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d7c8;
        }
    }
    ctx->pc = 0x34D8B0u;
    // 0x34d8b0: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x34d8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_34d8b4:
    // 0x34d8b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34D8B4u;
    {
        const bool branch_taken_0x34d8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8B4u;
        // 0x34d8b8: 0xc7a10048  lwc1        $f1, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8b4) {
            ctx->pc = 0x34D8F0u;
            goto label_34d8f0;
        }
    }
    ctx->pc = 0x34D8BCu;
    // 0x34d8bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d8bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d8c0: 0x0  nop
    ctx->pc = 0x34d8c0u;
    // NOP
    // 0x34d8c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34d8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d8c8: 0x0  nop
    ctx->pc = 0x34d8c8u;
    // NOP
    // 0x34d8cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x34D8CCu;
    {
        const bool branch_taken_0x34d8cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d8cc) {
            ctx->pc = 0x34D8F0u;
            goto label_34d8f0;
        }
    }
    ctx->pc = 0x34D8D4u;
    // 0x34d8d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d8d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34d8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d8dc: 0x0  nop
    ctx->pc = 0x34d8dcu;
    // NOP
    // 0x34d8e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34d8e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d8e4: 0x0  nop
    ctx->pc = 0x34d8e4u;
    // NOP
    // 0x34d8e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34D8E8u;
    {
        const bool branch_taken_0x34d8e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8E8u;
        // 0x34d8ec: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8e8) {
            ctx->pc = 0x34D904u;
            goto label_34d904;
        }
    }
    ctx->pc = 0x34D8F0u;
label_34d8f0:
    // 0x34d8f0: 0x3c016e01  lui         $at, 0x6E01
    ctx->pc = 0x34d8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28161 << 16));
    // 0x34d8f4: 0x34213f39  ori         $at, $at, 0x3F39
    ctx->pc = 0x34d8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16185);
    // 0x34d8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34d8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d8fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34D8FCu;
    {
        const bool branch_taken_0x34d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D8FCu;
        // 0x34d900: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8fc) {
            ctx->pc = 0x34D908u;
            goto label_34d908;
        }
    }
    ctx->pc = 0x34D904u;
label_34d904:
    // 0x34d904: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x34d904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_34d908:
    // 0x34d908: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x34d908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x34d90c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x34d90cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x34d910: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x34d910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34d914: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x34d914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x34d918: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x34d918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x34d91c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x34d91cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34d920: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x34d920u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34d924: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x34d924u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34d928: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x34d928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34d92c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x34d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d930: 0x3e00008  jr          $ra
    ctx->pc = 0x34D930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D930u;
        // 0x34d934: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D938u;
}
