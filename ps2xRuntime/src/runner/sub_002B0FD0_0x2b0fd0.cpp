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

// Function: sub_002B0FD0
// Address: 0x2b0fd0 - 0x2b1230
void sub_002B0FD0_0x2b0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0FD0_0x2b0fd0");
#endif

    switch (ctx->pc) {
        case 0x2b1040u: goto label_2b1040;
        case 0x2b107cu: goto label_2b107c;
        case 0x2b1088u: goto label_2b1088;
        case 0x2b1120u: goto label_2b1120;
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11c0u: goto label_2b11c0;
        case 0x2b11e0u: goto label_2b11e0;
        case 0x2b11f8u: goto label_2b11f8;
        default: break;
    }

    ctx->pc = 0x2b0fd0u;

    // 0x2b0fd0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2b0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2b0fd4: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2b0fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2b0fd8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2b0fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2b0fdc: 0x24e74b00  addiu       $a3, $a3, 0x4B00
    ctx->pc = 0x2b0fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19200));
    // 0x2b0fe0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2b0fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2b0fe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b0fe8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2b0fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2b0fec: 0x2451b880  addiu       $s1, $v0, -0x4780
    ctx->pc = 0x2b0fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
    // 0x2b0ff0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2b0ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2b0ff4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b0ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ff8: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2b0ff8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2b0ffc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b0ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1000: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2b1000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2b1004: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b1004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1008: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b1008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b100c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2b100cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2b1010: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2b1010u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2b1014: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2b1014u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2b1018: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2b1018u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2b101c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b1020: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b1020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1024: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x2b1024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x2b1028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b102c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b102cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2b1030: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b1030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b1034: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2b1034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b1038: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x2B1038u;
    SET_GPR_U32(ctx, 31, 0x2B1040u);
    ctx->pc = 0x2B103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1038u;
    // 0x2b103c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x2B1038u, 0x2B1040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1040u;
label_2b1040:
    // 0x2b1040: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b1040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b1044: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b1044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b1048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b104c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B104Cu;
    {
        const bool branch_taken_0x2b104c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b104c) {
            ctx->pc = 0x2B1050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B104Cu;
            // 0x2b1050: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1054u;
            goto label_2b1054;
        }
    }
    ctx->pc = 0x2B1054u;
label_2b1054:
    // 0x2b1054: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x2b1054u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b1058: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b1058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b105c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2b105cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2b1060: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b1060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2b1064: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2b1064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x2b1068: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x2b1068u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x2b106c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2b106cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x2b1070: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2b1070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2b1074: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2B1074u;
    SET_GPR_U32(ctx, 31, 0x2B107Cu);
    ctx->pc = 0x2B1078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1074u;
    // 0x2b1078: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2B1074u, 0x2B107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B107Cu;
label_2b107c:
    // 0x2b107c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b107cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b1080: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2B1080u;
    SET_GPR_U32(ctx, 31, 0x2B1088u);
    ctx->pc = 0x2B1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1080u;
    // 0x2b1084: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2B1080u, 0x2B1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1088u;
label_2b1088:
    // 0x2b1088: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2b1088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b108c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x2b108cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b1090: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b1090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b1094: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b1094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b1098: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b1098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b109c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2b109cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b10a0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2b10a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2b10a4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2b10a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2b10a8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b10a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b10ac: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2b10acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b10b0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2b10b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b10b4: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x2b10b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b10b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b10b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b10bc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2b10bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b10c0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2b10c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b10c4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2b10c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2b10c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2b10c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b10cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b10ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b10d0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b10d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b10d4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2b10d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b10d8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2b10d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b10dc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2b10dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b10e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2b10e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b10e4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2b10e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b10e8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2b10e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b10ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2b10ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b10f0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b10f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b10f4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2b10f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b10f8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2b10f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b10fc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2b10fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b1100: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2b1100u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2b1104: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2b1104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b1108: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2b1108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2b110c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2b110cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2b1110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1114: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2b1114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2b1118: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x2B1118u;
    SET_GPR_U32(ctx, 31, 0x2B1120u);
    ctx->pc = 0x2B111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1118u;
    // 0x2b111c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x2B1118u, 0x2B1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1120u;
label_2b1120:
    // 0x2b1120: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b1120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b1124: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1128: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2b1128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2b112c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2b112cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1130: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2b1130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b1134: 0x4601b868  max.s       $f1, $f23, $f1
    ctx->pc = 0x2b1134u;
    ctx->f[1] = std::max(ctx->f[23], ctx->f[1]);
    // 0x2b1138: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x2b1138u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b113c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b113cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b1140: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b1140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1144: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b1144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b1148: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b1148u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b114c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b114cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b1150: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2b1150u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b1154: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2b1154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b1158: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2b1158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2b115c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2b115cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2b1160: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2b1160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2b1164: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2b1164u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2b1168: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2b1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2b116c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2b116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2b1170: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2b1170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2b1174: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2b1174u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b1178: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2b1178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b117c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2b117cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b1180: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x2b1180u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2b1184: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2b1184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2b1188: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2b1188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2b118c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b1190: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2b1190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x2b1194: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2b1194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2b1198: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2b1198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2b119c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x2b119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x2b11a0: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2B11A0u;
    SET_GPR_U32(ctx, 31, 0x2B11A8u);
    ctx->pc = 0x2B11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11A0u;
    // 0x2b11a4: 0x7fa60060  sq          $a2, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2B11A0u, 0x2B11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11A8u;
label_2b11a8:
    // 0x2b11a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b11a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b11ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b11acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b11b0: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B11B0u;
    {
        const bool branch_taken_0x2b11b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11B0u;
        // 0x2b11b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11b0) {
            ctx->pc = 0x2B1204u;
            goto label_2b1204;
        }
    }
    ctx->pc = 0x2B11B8u;
    // 0x2b11b8: 0xc092414  jal         func_249050
    ctx->pc = 0x2B11B8u;
    SET_GPR_U32(ctx, 31, 0x2B11C0u);
    ctx->pc = 0x2B11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11B8u;
    // 0x2b11bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x2B11B8u, 0x2B11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11C0u;
label_2b11c0:
    // 0x2b11c0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B11C0u;
    {
        const bool branch_taken_0x2b11c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b11c0) {
            ctx->pc = 0x2B11D8u;
            goto label_2b11d8;
        }
    }
    ctx->pc = 0x2B11C8u;
    // 0x2b11c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b11cc: 0x904302d5  lbu         $v1, 0x2D5($v0)
    ctx->pc = 0x2b11ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 725)));
    // 0x2b11d0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B11D0u;
    {
        const bool branch_taken_0x2b11d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11D0u;
        // 0x2b11d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11d0) {
            ctx->pc = 0x2B1204u;
            goto label_2b1204;
        }
    }
    ctx->pc = 0x2B11D8u;
label_2b11d8:
    // 0x2b11d8: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2B11D8u;
    SET_GPR_U32(ctx, 31, 0x2B11E0u);
    ctx->pc = 0x2B11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11D8u;
    // 0x2b11dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2B11D8u, 0x2B11E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11E0u;
label_2b11e0:
    // 0x2b11e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B11E0u;
    {
        const bool branch_taken_0x2b11e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11E0u;
        // 0x2b11e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11e0) {
            ctx->pc = 0x2B1204u;
            goto label_2b1204;
        }
    }
    ctx->pc = 0x2B11E8u;
    // 0x2b11e8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2b11e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2b11ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b11ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b11f0: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x2B11F0u;
    SET_GPR_U32(ctx, 31, 0x2B11F8u);
    ctx->pc = 0x2B11F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B11F0u;
    // 0x2b11f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x2B11F0u, 0x2B11F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B11F8u;
label_2b11f8:
    // 0x2b11f8: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2b11f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b11fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1200: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x2b1200u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_2b1204:
    // 0x2b1204: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2b1204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b1208: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2b1208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b120c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2b120cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b1210: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2b1210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b1214: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b1214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b1218: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2b1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b121c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2b121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b1220: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2b1220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b1224: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2b1224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b1228: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1228u;
        // 0x2b122c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1230u;
}
