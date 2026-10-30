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

// Function: sub_00312960
// Address: 0x312960 - 0x313028
void sub_00312960_0x312960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312960_0x312960");
#endif

    switch (ctx->pc) {
        case 0x3129a0u: goto label_3129a0;
        case 0x3129d0u: goto label_3129d0;
        case 0x3129ecu: goto label_3129ec;
        case 0x3129fcu: goto label_3129fc;
        case 0x312a84u: goto label_312a84;
        case 0x312ae0u: goto label_312ae0;
        case 0x312af0u: goto label_312af0;
        case 0x312b14u: goto label_312b14;
        case 0x312bbcu: goto label_312bbc;
        case 0x312bd8u: goto label_312bd8;
        case 0x312bf4u: goto label_312bf4;
        case 0x312c58u: goto label_312c58;
        case 0x312cf0u: goto label_312cf0;
        case 0x312cfcu: goto label_312cfc;
        case 0x312d08u: goto label_312d08;
        case 0x312d1cu: goto label_312d1c;
        case 0x312d40u: goto label_312d40;
        case 0x312d68u: goto label_312d68;
        case 0x312d88u: goto label_312d88;
        case 0x312da4u: goto label_312da4;
        case 0x312dc0u: goto label_312dc0;
        case 0x312dd8u: goto label_312dd8;
        case 0x312de8u: goto label_312de8;
        case 0x312e64u: goto label_312e64;
        case 0x312e8cu: goto label_312e8c;
        case 0x312f14u: goto label_312f14;
        case 0x312fa8u: goto label_312fa8;
        case 0x312fb0u: goto label_312fb0;
        case 0x312fd0u: goto label_312fd0;
        case 0x312fdcu: goto label_312fdc;
        default: break;
    }

    ctx->pc = 0x312960u;

    // 0x312960: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x312960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x312964: 0x7fb003b0  sq          $s0, 0x3B0($sp)
    ctx->pc = 0x312964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 16));
    // 0x312968: 0x7fb103a0  sq          $s1, 0x3A0($sp)
    ctx->pc = 0x312968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 17));
    // 0x31296c: 0x7fb20390  sq          $s2, 0x390($sp)
    ctx->pc = 0x31296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 18));
    // 0x312970: 0x7fb30380  sq          $s3, 0x380($sp)
    ctx->pc = 0x312970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 19));
    // 0x312974: 0x7fb40370  sq          $s4, 0x370($sp)
    ctx->pc = 0x312974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 20));
    // 0x312978: 0x7fb50360  sq          $s5, 0x360($sp)
    ctx->pc = 0x312978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 21));
    // 0x31297c: 0x7fb60350  sq          $s6, 0x350($sp)
    ctx->pc = 0x31297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 22));
    // 0x312980: 0x7fb70340  sq          $s7, 0x340($sp)
    ctx->pc = 0x312980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 23));
    // 0x312984: 0x7fbe0330  sq          $fp, 0x330($sp)
    ctx->pc = 0x312984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 30));
    // 0x312988: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x312988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
    // 0x31298c: 0xe7b503c8  swc1        $f21, 0x3C8($sp)
    ctx->pc = 0x31298cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 968), bits); }
    // 0x312990: 0xe7b403c0  swc1        $f20, 0x3C0($sp)
    ctx->pc = 0x312990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 960), bits); }
    // 0x312994: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x312994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
    // 0x312998: 0xc05959e  jal         func_165678
    ctx->pc = 0x312998u;
    SET_GPR_U32(ctx, 31, 0x3129A0u);
    ctx->pc = 0x31299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312998u;
    // 0x31299c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x312998u, 0x3129A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129A0u;
label_3129a0:
    // 0x3129a0: 0x10400192  beqz        $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x3129A0u;
    {
        const bool branch_taken_0x3129a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129A0u;
        // 0x3129a4: 0xafa20304  sw          $v0, 0x304($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129a0) {
            ctx->pc = 0x312FECu;
            goto label_312fec;
        }
    }
    ctx->pc = 0x3129A8u;
    // 0x3129a8: 0x84420092  lh          $v0, 0x92($v0)
    ctx->pc = 0x3129a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x3129ac: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x3129acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x3129b0: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x3129b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x3129b4: 0x8fa40304  lw          $a0, 0x304($sp)
    ctx->pc = 0x3129b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x3129b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3129b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3129bc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x3129bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3129c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3129c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3129c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3129c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3129c8: 0xc105bc2  jal         func_416F08
    ctx->pc = 0x3129C8u;
    SET_GPR_U32(ctx, 31, 0x3129D0u);
    ctx->pc = 0x3129CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129C8u;
    // 0x3129cc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x3129C8u, 0x3129D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129D0u;
label_3129d0:
    // 0x3129d0: 0x10400186  beqz        $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x3129D0u;
    {
        const bool branch_taken_0x3129d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129D0u;
        // 0x3129d4: 0xafa20308  sw          $v0, 0x308($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129d0) {
            ctx->pc = 0x312FECu;
            goto label_312fec;
        }
    }
    ctx->pc = 0x3129D8u;
    // 0x3129d8: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x3129d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x3129dc: 0x34210a93  ori         $at, $at, 0xA93
    ctx->pc = 0x3129dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2707);
    // 0x3129e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3129e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3129e4: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x3129E4u;
    SET_GPR_U32(ctx, 31, 0x3129ECu);
    ctx->pc = 0x3129E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129E4u;
    // 0x3129e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x3129E4u, 0x3129ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129ECu;
label_3129ec:
    // 0x3129ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3129ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3129f0: 0x8fa40304  lw          $a0, 0x304($sp)
    ctx->pc = 0x3129f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x3129f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x3129F4u;
    SET_GPR_U32(ctx, 31, 0x3129FCu);
    ctx->pc = 0x3129F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3129F4u;
    // 0x3129f8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3129F4u, 0x3129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3129FCu;
label_3129fc:
    // 0x3129fc: 0xc4400250  lwc1        $f0, 0x250($v0)
    ctx->pc = 0x3129fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a00: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x312a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x312a04: 0x24420250  addiu       $v0, $v0, 0x250
    ctx->pc = 0x312a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x312a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x312a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x312a0c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312a10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x312a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x312a14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x312a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x312a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a1c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x312a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x312a20: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x312a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312a24: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x312a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x312a28: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x312a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x312a2c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x312a2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312a30: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x312a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312a34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x312a34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312a38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x312a38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312a3c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x312a3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312a40: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x312a40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312a44: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x312a44u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x312a48: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x312a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x312a4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x312a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312a50: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x312a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312a54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x312a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312a58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x312a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312a5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x312a5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x312a60: 0x4a0003bf  vwaitq
    ctx->pc = 0x312a60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x312a64: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x312a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312a68: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x312a68u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312a6c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x312a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x312a70: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x312a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x312a74: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x312a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x312a78: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x312a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x312a7c: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x312A7Cu;
    SET_GPR_U32(ctx, 31, 0x312A84u);
    ctx->pc = 0x312A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A7Cu;
    // 0x312a80: 0x7fa50040  sq          $a1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x312A7Cu, 0x312A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A84u;
label_312a84:
    // 0x312a84: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x312a84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312a88: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x312a88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312a8c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x312a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x312a90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x312a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x312a94: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x312a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x312a98: 0x27b70240  addiu       $s7, $sp, 0x240
    ctx->pc = 0x312a98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x312a9c: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x312a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
    // 0x312aa0: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x312aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312aa4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x312aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x312aa8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x312aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x312aac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x312aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312ab0: 0x27be0280  addiu       $fp, $sp, 0x280
    ctx->pc = 0x312ab0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x312ab4: 0xc7a10288  lwc1        $f1, 0x288($sp)
    ctx->pc = 0x312ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312ab8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x312ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312abc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x312abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x312ac0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x312ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x312ac4: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x312ac4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x312ac8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x312ac8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x312acc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x312accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ad0: 0xe7a302a0  swc1        $f3, 0x2A0($sp)
    ctx->pc = 0x312ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x312ad4: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x312ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ad8: 0xe7a10288  swc1        $f1, 0x288($sp)
    ctx->pc = 0x312ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x312adc: 0x0  nop
    ctx->pc = 0x312adcu;
    // NOP
label_312ae0:
    // 0x312ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x312ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ae4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x312ae4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x312ae8: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x312AE8u;
    SET_GPR_U32(ctx, 31, 0x312AF0u);
    ctx->pc = 0x312AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312AE8u;
    // 0x312aec: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x312AE8u, 0x312AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312AF0u;
label_312af0:
    // 0x312af0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x312af0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312af4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x312af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x312af8: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x312af8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x312afc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x312afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b00: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x312b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b04: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x312b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
    // 0x312b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x312b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b0c: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x312B0Cu;
    SET_GPR_U32(ctx, 31, 0x312B14u);
    ctx->pc = 0x312B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B0Cu;
    // 0x312b10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x312B0Cu, 0x312B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B14u;
label_312b14:
    // 0x312b14: 0x8fb00250  lw          $s0, 0x250($sp)
    ctx->pc = 0x312b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x312b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x312b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312b1c: 0x56040045  bnel        $s0, $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x312B1Cu;
    {
        const bool branch_taken_0x312b1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x312b1c) {
            ctx->pc = 0x312B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312B1Cu;
            // 0x312b20: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C34u;
            goto label_312c34;
        }
    }
    ctx->pc = 0x312B24u;
    // 0x312b24: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x312b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312b28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x312b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b2c: 0x7ba30290  lq          $v1, 0x290($sp)
    ctx->pc = 0x312b2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x312b30: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x312b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x312b34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x312b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312b38: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x312b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x312b3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x312b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312b40: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x312b40u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312b44: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x312b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x312b48: 0x7ba50240  lq          $a1, 0x240($sp)
    ctx->pc = 0x312b48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x312b4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x312b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312b50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x312b50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312b54: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x312b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312b58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x312b58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312b5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x312b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x312b60: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x312b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x312b64: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x312b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x312b68: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x312b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x312b6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x312b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312b70: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x312b70u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312b74: 0x7fa302d0  sq          $v1, 0x2D0($sp)
    ctx->pc = 0x312b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 3));
    // 0x312b78: 0x7fa302c0  sq          $v1, 0x2C0($sp)
    ctx->pc = 0x312b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 3));
    // 0x312b7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x312b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312b80: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x312b80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x312b84: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x312b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312b88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x312b88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312b8c: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x312b8cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x312b90: 0x7fa202d0  sq          $v0, 0x2D0($sp)
    ctx->pc = 0x312b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 2));
    // 0x312b94: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x312b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x312b98: 0x7fa502e0  sq          $a1, 0x2E0($sp)
    ctx->pc = 0x312b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 5));
    // 0x312b9c: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x312b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x312ba0: 0x7fa302b0  sq          $v1, 0x2B0($sp)
    ctx->pc = 0x312ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 3));
    // 0x312ba4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x312ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x312ba8: 0x7fa502f0  sq          $a1, 0x2F0($sp)
    ctx->pc = 0x312ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 5));
    // 0x312bac: 0x7fa502c0  sq          $a1, 0x2C0($sp)
    ctx->pc = 0x312bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 5));
    // 0x312bb0: 0x7fa602e0  sq          $a2, 0x2E0($sp)
    ctx->pc = 0x312bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 6));
    // 0x312bb4: 0xc092414  jal         func_249050
    ctx->pc = 0x312BB4u;
    SET_GPR_U32(ctx, 31, 0x312BBCu);
    ctx->pc = 0x312BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312BB4u;
    // 0x312bb8: 0x7fa602d0  sq          $a2, 0x2D0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x312BB4u, 0x312BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BBCu;
label_312bbc:
    // 0x312bbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x312bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312bc0: 0x5630001c  bnel        $s1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x312BC0u;
    {
        const bool branch_taken_0x312bc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x312bc0) {
            ctx->pc = 0x312BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312BC0u;
            // 0x312bc4: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C34u;
            goto label_312c34;
        }
    }
    ctx->pc = 0x312BC8u;
    // 0x312bc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x312bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x312bcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x312bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312bd0: 0xc0937ba  jal         func_24DEE8
    ctx->pc = 0x312BD0u;
    SET_GPR_U32(ctx, 31, 0x312BD8u);
    ctx->pc = 0x312BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312BD0u;
    // 0x312bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEE8u, 0x312BD0u, 0x312BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BD8u;
label_312bd8:
    // 0x312bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312bdc: 0x56110015  bnel        $s0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x312BDCu;
    {
        const bool branch_taken_0x312bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x312bdc) {
            ctx->pc = 0x312BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312BDCu;
            // 0x312be0: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C34u;
            goto label_312c34;
        }
    }
    ctx->pc = 0x312BE4u;
    // 0x312be4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x312be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x312be8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x312be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312bec: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x312BECu;
    SET_GPR_U32(ctx, 31, 0x312BF4u);
    ctx->pc = 0x312BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312BECu;
    // 0x312bf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x312BECu, 0x312BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BF4u;
label_312bf4:
    // 0x312bf4: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x312bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
    // 0x312bf8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x312bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312bfc: 0x7e420060  sq          $v0, 0x60($s2)
    ctx->pc = 0x312bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), GPR_VEC(ctx, 2));
    // 0x312c00: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x312c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312c04: 0x7ba30240  lq          $v1, 0x240($sp)
    ctx->pc = 0x312c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x312c08: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x312c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312c0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x312c0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312c10: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x312c10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x312c14: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x312c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x312c18: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x312c18u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x312c1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x312c1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312c20: 0x0  nop
    ctx->pc = 0x312c20u;
    // NOP
    // 0x312c24: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x312c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x312c28: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x312c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x312c2c: 0x7e420080  sq          $v0, 0x80($s2)
    ctx->pc = 0x312c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 128), GPR_VEC(ctx, 2));
    // 0x312c30: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x312c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_312c34:
    // 0x312c34: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x312c34u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x312c38: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x312c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x312c3c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x312C3Cu;
    {
        const bool branch_taken_0x312c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C3Cu;
        // 0x312c40: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c3c) {
            ctx->pc = 0x312AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312ae0;
        }
    }
    ctx->pc = 0x312C44u;
    // 0x312c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x312c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c48: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x312c48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x312c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312c50: 0x26c60040  addiu       $a2, $s6, 0x40
    ctx->pc = 0x312c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x312c54: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x312c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_312c58:
    // 0x312c58: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x312c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x312c5c: 0x14490005  bne         $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x312C5Cu;
    {
        const bool branch_taken_0x312c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x312C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C5Cu;
        // 0x312c60: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c5c) {
            ctx->pc = 0x312C74u;
            goto label_312c74;
        }
    }
    ctx->pc = 0x312C64u;
    // 0x312c64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x312c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312c68: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x312C68u;
    {
        const bool branch_taken_0x312c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312c68) {
            ctx->pc = 0x312C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C68u;
            // 0x312c6c: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C74u;
            goto label_312c74;
        }
    }
    ctx->pc = 0x312C70u;
    // 0x312c70: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x312c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_312c74:
    // 0x312c74: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x312c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x312c78: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x312c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x312c7c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x312c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x312c80: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x312C80u;
    {
        const bool branch_taken_0x312c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312c80) {
            ctx->pc = 0x312C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C80u;
            // 0x312c84: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312CB4u;
            goto label_312cb4;
        }
    }
    ctx->pc = 0x312C88u;
    // 0x312c88: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x312c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x312c8c: 0x871018  mult        $v0, $a0, $a3
    ctx->pc = 0x312c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x312c90: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x312c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x312c94: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x312c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x312c98: 0x14490006  bne         $v0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x312C98u;
    {
        const bool branch_taken_0x312c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x312C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C98u;
        // 0x312c9c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c98) {
            ctx->pc = 0x312CB4u;
            goto label_312cb4;
        }
    }
    ctx->pc = 0x312CA0u;
    // 0x312ca0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x312ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x312ca4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x312ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ca8: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x312ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x312cac: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x312cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x312cb0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x312cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_312cb4:
    // 0x312cb4: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x312cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x312cb8: 0x2d020009  sltiu       $v0, $t0, 0x9
    ctx->pc = 0x312cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x312cbc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x312CBCu;
    {
        const bool branch_taken_0x312cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CBCu;
        // 0x312cc0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cbc) {
            ctx->pc = 0x312C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312c58;
        }
    }
    ctx->pc = 0x312CC4u;
    // 0x312cc4: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x312cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x312cc8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x312cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x312ccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x312cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x312cd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x312cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x312cd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x312cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312cd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x312cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x312cdc: 0x27be02e0  addiu       $fp, $sp, 0x2E0
    ctx->pc = 0x312cdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x312ce0: 0xafa40310  sw          $a0, 0x310($sp)
    ctx->pc = 0x312ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 4));
    // 0x312ce4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x312ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x312ce8: 0xafa2030c  sw          $v0, 0x30C($sp)
    ctx->pc = 0x312ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 2));
    // 0x312cec: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x312cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
label_312cf0:
    // 0x312cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312cf4: 0xc137826  jal         func_4DE098
    ctx->pc = 0x312CF4u;
    SET_GPR_U32(ctx, 31, 0x312CFCu);
    ctx->pc = 0x312CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312CF4u;
    // 0x312cf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x312CF4u, 0x312CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312CFCu;
label_312cfc:
    // 0x312cfc: 0xafb00314  sw          $s0, 0x314($sp)
    ctx->pc = 0x312cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 16));
    // 0x312d00: 0xc0e409a  jal         func_390268
    ctx->pc = 0x312D00u;
    SET_GPR_U32(ctx, 31, 0x312D08u);
    ctx->pc = 0x312D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D00u;
    // 0x312d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x312D00u, 0x312D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D08u;
label_312d08:
    // 0x312d08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x312d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d0c: 0x522000b4  beql        $s1, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x312D0Cu;
    {
        const bool branch_taken_0x312d0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x312d0c) {
            ctx->pc = 0x312D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312D0Cu;
            // 0x312d10: 0x8fb00314  lw          $s0, 0x314($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312FE0u;
            goto label_312fe0;
        }
    }
    ctx->pc = 0x312D14u;
    // 0x312d14: 0xc089f98  jal         func_227E60
    ctx->pc = 0x312D14u;
    SET_GPR_U32(ctx, 31, 0x312D1Cu);
    ctx->pc = 0x312D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D14u;
    // 0x312d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x312D14u, 0x312D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D1Cu;
label_312d1c:
    // 0x312d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312d20: 0x104300af  beq         $v0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x312D20u;
    {
        const bool branch_taken_0x312d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x312D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D20u;
        // 0x312d24: 0x8fb00314  lw          $s0, 0x314($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d20) {
            ctx->pc = 0x312FE0u;
            goto label_312fe0;
        }
    }
    ctx->pc = 0x312D28u;
    // 0x312d28: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x312d28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x312d2c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x312d2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312d30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x312d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312d34: 0x104300aa  beq         $v0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x312D34u;
    {
        const bool branch_taken_0x312d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x312D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D34u;
        // 0x312d38: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d34) {
            ctx->pc = 0x312FE0u;
            goto label_312fe0;
        }
    }
    ctx->pc = 0x312D3Cu;
    // 0x312d3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x312d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312d40:
    // 0x312d40: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x312d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x312d44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x312D44u;
    {
        const bool branch_taken_0x312d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D44u;
        // 0x312d48: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d44) {
            ctx->pc = 0x312D7Cu;
            goto label_312d7c;
        }
    }
    ctx->pc = 0x312D4Cu;
    // 0x312d4c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x312d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x312d50: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x312d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x312d54: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x312d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x312d58: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x312D58u;
    {
        const bool branch_taken_0x312d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312d58) {
            ctx->pc = 0x312D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312D58u;
            // 0x312d5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312d40;
        }
    }
    ctx->pc = 0x312D60u;
    // 0x312d60: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x312D60u;
    SET_GPR_U32(ctx, 31, 0x312D68u);
    ctx->pc = 0x312D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D60u;
    // 0x312d64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x312D60u, 0x312D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D68u;
label_312d68:
    // 0x312d68: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x312d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312d6c: 0x0  nop
    ctx->pc = 0x312d6cu;
    // NOP
    // 0x312d70: 0x4503fff3  bc1tl       . + 4 + (-0xD << 2)
    ctx->pc = 0x312D70u;
    {
        const bool branch_taken_0x312d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x312d70) {
            ctx->pc = 0x312D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312D70u;
            // 0x312d74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312d40;
        }
    }
    ctx->pc = 0x312D78u;
    // 0x312d78: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x312d78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312d7c:
    // 0x312d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d80: 0xc087502  jal         func_21D408
    ctx->pc = 0x312D80u;
    SET_GPR_U32(ctx, 31, 0x312D88u);
    ctx->pc = 0x312D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D80u;
    // 0x312d84: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x312D80u, 0x312D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D88u;
label_312d88:
    // 0x312d88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x312d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d8c: 0x924202d5  lbu         $v0, 0x2D5($s2)
    ctx->pc = 0x312d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 725)));
    // 0x312d90: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x312D90u;
    {
        const bool branch_taken_0x312d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D90u;
        // 0x312d94: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d90) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312D98u;
    // 0x312d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d9c: 0xc105bc2  jal         func_416F08
    ctx->pc = 0x312D9Cu;
    SET_GPR_U32(ctx, 31, 0x312DA4u);
    ctx->pc = 0x312DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D9Cu;
    // 0x312da0: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416F08u, 0x312D9Cu, 0x312DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312DA4u;
label_312da4:
    // 0x312da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312da8: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x312DA8u;
    {
        const bool branch_taken_0x312da8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DA8u;
        // 0x312dac: 0x8fa30308  lw          $v1, 0x308($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312da8) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312DB0u;
    // 0x312db0: 0x12030036  beq         $s0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x312DB0u;
    {
        const bool branch_taken_0x312db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x312DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DB0u;
        // 0x312db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312db0) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312DB8u;
    // 0x312db8: 0xc105896  jal         func_416258
    ctx->pc = 0x312DB8u;
    SET_GPR_U32(ctx, 31, 0x312DC0u);
    ctx->pc = 0x312DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312DB8u;
    // 0x312dbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x312DB8u, 0x312DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312DC0u;
label_312dc0:
    // 0x312dc0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x312dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x312dc4: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x312dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x312dc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x312dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312dcc: 0x8fa40310  lw          $a0, 0x310($sp)
    ctx->pc = 0x312dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x312dd0: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x312DD0u;
    SET_GPR_U32(ctx, 31, 0x312DD8u);
    ctx->pc = 0x312DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312DD0u;
    // 0x312dd4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x312DD0u, 0x312DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312DD8u;
label_312dd8:
    // 0x312dd8: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x312dd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x312ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312de0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x312DE0u;
    SET_GPR_U32(ctx, 31, 0x312DE8u);
    ctx->pc = 0x312DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312DE0u;
    // 0x312de4: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x312DE0u, 0x312DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312DE8u;
label_312de8:
    // 0x312de8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x312de8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312df0: 0x26420250  addiu       $v0, $s2, 0x250
    ctx->pc = 0x312df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x312df4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x312df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x312df8: 0xc6400250  lwc1        $f0, 0x250($s2)
    ctx->pc = 0x312df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312dfc: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x312dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x312e00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x312e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312e04: 0xe7a102e4  swc1        $f1, 0x2E4($sp)
    ctx->pc = 0x312e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x312e08: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x312e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312e0c: 0xe7a002e8  swc1        $f0, 0x2E8($sp)
    ctx->pc = 0x312e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x312e10: 0xe7d4000c  swc1        $f20, 0xC($fp)
    ctx->pc = 0x312e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x312e14: 0x7ba502e0  lq          $a1, 0x2E0($sp)
    ctx->pc = 0x312e14u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x312e18: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x312e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312e1c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x312e1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312e20: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x312e20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x312e24: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x312e24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312e28: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x312e28u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312e2c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x312e2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x312e30: 0x7fa502d0  sq          $a1, 0x2D0($sp)
    ctx->pc = 0x312e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 5));
    // 0x312e34: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x312e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312e38: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x312e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312e3c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x312e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312e40: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x312e40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312e44: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x312e44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x312e48: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x312e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
    // 0x312e4c: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x312e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    // 0x312e50: 0x7fa302b0  sq          $v1, 0x2B0($sp)
    ctx->pc = 0x312e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 3));
    // 0x312e54: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x312e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x312e58: 0x7fa302f0  sq          $v1, 0x2F0($sp)
    ctx->pc = 0x312e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
    // 0x312e5c: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x312E5Cu;
    SET_GPR_U32(ctx, 31, 0x312E64u);
    ctx->pc = 0x312E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312E5Cu;
    // 0x312e60: 0x7fa302e0  sq          $v1, 0x2E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x312E5Cu, 0x312E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312E64u;
label_312e64:
    // 0x312e64: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x312e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x312e68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x312e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e70: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x312e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x312e74: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x312e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x312e78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x312e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x312e7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x312e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e80: 0x8fa60310  lw          $a2, 0x310($sp)
    ctx->pc = 0x312e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x312e84: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x312E84u;
    SET_GPR_U32(ctx, 31, 0x312E8Cu);
    ctx->pc = 0x312E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312E84u;
    // 0x312e88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x312E84u, 0x312E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312E8Cu;
label_312e8c:
    // 0x312e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312e90: 0x16620045  bne         $s3, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x312E90u;
    {
        const bool branch_taken_0x312e90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x312e90) {
            ctx->pc = 0x312FA8u;
            goto label_312fa8;
        }
    }
    ctx->pc = 0x312E98u;
    // 0x312e98: 0x680000b  bltz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x312E98u;
    {
        const bool branch_taken_0x312e98 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x312E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E98u;
        // 0x312e9c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e98) {
            ctx->pc = 0x312EC8u;
            goto label_312ec8;
        }
    }
    ctx->pc = 0x312EA0u;
    // 0x312ea0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x312ea0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312ea4: 0x2862018  mult        $a0, $s4, $a2
    ctx->pc = 0x312ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x312ea8: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x312ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x312eac: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x312eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x312eb0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x312eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x312eb4: 0x78820080  lq          $v0, 0x80($a0)
    ctx->pc = 0x312eb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x312eb8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x312eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x312ebc: 0x78830060  lq          $v1, 0x60($a0)
    ctx->pc = 0x312ebcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x312ec0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x312EC0u;
    {
        const bool branch_taken_0x312ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EC0u;
        // 0x312ec4: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ec0) {
            ctx->pc = 0x312FA8u;
            goto label_312fa8;
        }
    }
    ctx->pc = 0x312EC8u;
label_312ec8:
    // 0x312ec8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x312ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312ecc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x312eccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ed0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x312ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312ed4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x312ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312ed8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x312ed8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x312edc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x312edcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x312ee0: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x312ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312ee4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x312ee4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x312ee8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x312ee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312eec: 0xe7a202c0  swc1        $f2, 0x2C0($sp)
    ctx->pc = 0x312eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x312ef0: 0xe7a102c4  swc1        $f1, 0x2C4($sp)
    ctx->pc = 0x312ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
    // 0x312ef4: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x312ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
    // 0x312ef8: 0xe7a302cc  swc1        $f3, 0x2CC($sp)
    ctx->pc = 0x312ef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
    // 0x312efc: 0x8fa40304  lw          $a0, 0x304($sp)
    ctx->pc = 0x312efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x312f00: 0x7ba202c0  lq          $v0, 0x2C0($sp)
    ctx->pc = 0x312f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x312f04: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x312f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x312f08: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x312f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x312f0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x312F0Cu;
    SET_GPR_U32(ctx, 31, 0x312F14u);
    ctx->pc = 0x312F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312F0Cu;
    // 0x312f10: 0x7fa202b0  sq          $v0, 0x2B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x312F0Cu, 0x312F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312F14u;
label_312f14:
    // 0x312f14: 0xc4400250  lwc1        $f0, 0x250($v0)
    ctx->pc = 0x312f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312f18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x312f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x312f1c: 0x24420250  addiu       $v0, $v0, 0x250
    ctx->pc = 0x312f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x312f20: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x312f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x312f24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x312f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312f28: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x312f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x312f2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x312f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f30: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x312f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x312f34: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x312f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x312f38: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x312f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x312f3c: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x312f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x312f40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x312f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x312f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f48: 0xe7a002e4  swc1        $f0, 0x2E4($sp)
    ctx->pc = 0x312f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x312f4c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x312f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312f50: 0xe7a102e8  swc1        $f1, 0x2E8($sp)
    ctx->pc = 0x312f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 744), bits); }
    // 0x312f54: 0xe7d4000c  swc1        $f20, 0xC($fp)
    ctx->pc = 0x312f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x312f58: 0x7ba802e0  lq          $t0, 0x2E0($sp)
    ctx->pc = 0x312f58u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x312f5c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x312f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312f60: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x312f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x312f64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x312f64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312f68: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x312f68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312f6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x312f6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312f70: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x312f70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x312f74: 0x7fa802d0  sq          $t0, 0x2D0($sp)
    ctx->pc = 0x312f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 8));
    // 0x312f78: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x312f78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x312f7c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x312f7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312f80: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x312f80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x312f84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x312f84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x312f88: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x312f88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x312f8c: 0x7fa202f0  sq          $v0, 0x2F0($sp)
    ctx->pc = 0x312f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 2));
    // 0x312f90: 0x7fa202e0  sq          $v0, 0x2E0($sp)
    ctx->pc = 0x312f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 2));
    // 0x312f94: 0x7fa302b0  sq          $v1, 0x2B0($sp)
    ctx->pc = 0x312f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 3));
    // 0x312f98: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x312f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x312f9c: 0x7fa302f0  sq          $v1, 0x2F0($sp)
    ctx->pc = 0x312f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 3));
    // 0x312fa0: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x312FA0u;
    SET_GPR_U32(ctx, 31, 0x312FA8u);
    ctx->pc = 0x312FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FA0u;
    // 0x312fa4: 0x7fa302e0  sq          $v1, 0x2E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x312FA0u, 0x312FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FA8u;
label_312fa8:
    // 0x312fa8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x312FA8u;
    SET_GPR_U32(ctx, 31, 0x312FB0u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x312FA8u, 0x312FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FB0u;
label_312fb0:
    // 0x312fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fb4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312FB4u;
    {
        const bool branch_taken_0x312fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FB4u;
        // 0x312fb8: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fb4) {
            ctx->pc = 0x312FD0u;
            goto label_312fd0;
        }
    }
    ctx->pc = 0x312FBCu;
    // 0x312fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x312fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fc4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x312fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fc8: 0xc0b322a  jal         func_2CC8A8
    ctx->pc = 0x312FC8u;
    SET_GPR_U32(ctx, 31, 0x312FD0u);
    ctx->pc = 0x312FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FC8u;
    // 0x312fcc: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC8A8u, 0x312FC8u, 0x312FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FD0u;
label_312fd0:
    // 0x312fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x312fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fd4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x312FD4u;
    SET_GPR_U32(ctx, 31, 0x312FDCu);
    ctx->pc = 0x312FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FD4u;
    // 0x312fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x312FD4u, 0x312FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FDCu;
label_312fdc:
    // 0x312fdc: 0x8fb00314  lw          $s0, 0x314($sp)
    ctx->pc = 0x312fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_312fe0:
    // 0x312fe0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x312fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x312fe4: 0x1440ff42  bnez        $v0, . + 4 + (-0xBE << 2)
    ctx->pc = 0x312FE4u;
    {
        const bool branch_taken_0x312fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FE4u;
        // 0x312fe8: 0x8fa4030c  lw          $a0, 0x30C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fe4) {
            ctx->pc = 0x312CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312cf0;
        }
    }
    ctx->pc = 0x312FECu;
label_312fec:
    // 0x312fec: 0x7bb003b0  lq          $s0, 0x3B0($sp)
    ctx->pc = 0x312fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x312ff0: 0x7bb103a0  lq          $s1, 0x3A0($sp)
    ctx->pc = 0x312ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x312ff4: 0x7bb20390  lq          $s2, 0x390($sp)
    ctx->pc = 0x312ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x312ff8: 0x7bb30380  lq          $s3, 0x380($sp)
    ctx->pc = 0x312ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x312ffc: 0x7bb40370  lq          $s4, 0x370($sp)
    ctx->pc = 0x312ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x313000: 0x7bb50360  lq          $s5, 0x360($sp)
    ctx->pc = 0x313000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x313004: 0x7bb60350  lq          $s6, 0x350($sp)
    ctx->pc = 0x313004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x313008: 0x7bb70340  lq          $s7, 0x340($sp)
    ctx->pc = 0x313008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x31300c: 0x7bbe0330  lq          $fp, 0x330($sp)
    ctx->pc = 0x31300cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x313010: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x313010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x313014: 0xc7b503c8  lwc1        $f21, 0x3C8($sp)
    ctx->pc = 0x313014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x313018: 0xc7b403c0  lwc1        $f20, 0x3C0($sp)
    ctx->pc = 0x313018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31301c: 0x3e00008  jr          $ra
    ctx->pc = 0x31301Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31301Cu;
        // 0x313020: 0x27bd03d0  addiu       $sp, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31301Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313024u;
    // 0x313024: 0x0  nop
    ctx->pc = 0x313024u;
    // NOP
    ctx->pc = 0x313028u;
}
