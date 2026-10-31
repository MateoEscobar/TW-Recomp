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

// Function: sub_00142AC8
// Address: 0x142ac8 - 0x142d28
void sub_00142AC8_0x142ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142AC8_0x142ac8");
#endif

    switch (ctx->pc) {
        case 0x142b44u: goto label_142b44;
        case 0x142b50u: goto label_142b50;
        case 0x142bacu: goto label_142bac;
        case 0x142bb8u: goto label_142bb8;
        case 0x142c14u: goto label_142c14;
        case 0x142c20u: goto label_142c20;
        case 0x142cf0u: goto label_142cf0;
        default: break;
    }

    ctx->pc = 0x142ac8u;

    // 0x142ac8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x142ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x142acc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x142accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x142ad0: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x142ad0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x142ad4: 0x244216e0  addiu       $v0, $v0, 0x16E0
    ctx->pc = 0x142ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5856));
    // 0x142ad8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x142ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x142adc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x142adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x142ae0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x142ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x142ae4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x142ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x142ae8: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x142ae8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x142aec: 0x46186d02  mul.s       $f20, $f13, $f24
    ctx->pc = 0x142aecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[13], ctx->f[24]);
    // 0x142af0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x142af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x142af4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x142af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x142af8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x142af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x142afc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x142afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x142b00: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x142b00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x142b04: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x142b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x142b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x142b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b0c: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x142b0cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x142b10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x142b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b14: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x142b14u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x142b18: 0x46007e86  mov.s       $f26, $f15
    ctx->pc = 0x142b18u;
    ctx->f[26] = FPU_MOV_S(ctx->f[15]);
    // 0x142b1c: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x142b1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x142b20: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x142b20u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x142b24: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x142b24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x142b28: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x142b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b2c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x142b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x142b30: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x142b30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x142b34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142b34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142b38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x142b38u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116E0u));
    // 0x142b3c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x142B3Cu;
    SET_GPR_U32(ctx, 31, 0x142B44u);
    ctx->pc = 0x142B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B3Cu;
    // 0x142b40: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x142B3Cu, 0x142B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B44u;
label_142b44:
    // 0x142b44: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x142b44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x142b48: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x142B48u;
    SET_GPR_U32(ctx, 31, 0x142B50u);
    ctx->pc = 0x142B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B48u;
    // 0x142b4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x142B48u, 0x142B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B50u;
label_142b50:
    // 0x142b50: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x142b50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142b54: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x142b54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x142b58: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x142b58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142b5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x142b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142b60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x142b60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x142b64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x142b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142b68: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x142b68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142b6c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x142b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x142b70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x142b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x142b74: 0x24421700  addiu       $v0, $v0, 0x1700
    ctx->pc = 0x142b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5888));
    // 0x142b78: 0x4619ad42  mul.s       $f21, $f21, $f25
    ctx->pc = 0x142b78u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
    // 0x142b7c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x142b7cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x511700u));
    // 0x142b80: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x142b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142b84: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x142b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142b88: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x142b88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x142b8c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x142b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142b90: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x142b90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x142b94: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x142b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x142b98: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x142b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x142b9c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x142b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x142ba0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x142ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x142ba4: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x142BA4u;
    SET_GPR_U32(ctx, 31, 0x142BACu);
    ctx->pc = 0x142BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BA4u;
    // 0x142ba8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x142BA4u, 0x142BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BACu;
label_142bac:
    // 0x142bac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x142bacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x142bb0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x142BB0u;
    SET_GPR_U32(ctx, 31, 0x142BB8u);
    ctx->pc = 0x142BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BB0u;
    // 0x142bb4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x142BB0u, 0x142BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BB8u;
label_142bb8:
    // 0x142bb8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x142bb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142bbc: 0x4618bdc2  mul.s       $f23, $f23, $f24
    ctx->pc = 0x142bbcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x142bc0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x142bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x142bc4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x142bc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142bc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x142bc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x142bcc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x142bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142bd0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x142bd0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142bd4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x142bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x142bd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x142bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x142bdc: 0x244216f0  addiu       $v0, $v0, 0x16F0
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5872));
    // 0x142be0: 0x4619bdc2  mul.s       $f23, $f23, $f25
    ctx->pc = 0x142be0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x142be4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x142be4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116F0u));
    // 0x142be8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x142be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142bec: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x142becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142bf0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x142bf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x142bf4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x142bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142bf8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x142bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x142bfc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x142bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x142c00: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x142c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x142c04: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x142c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x142c08: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x142c08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x142c0c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x142C0Cu;
    SET_GPR_U32(ctx, 31, 0x142C14u);
    ctx->pc = 0x142C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C0Cu;
    // 0x142c10: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x142C0Cu, 0x142C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C14u;
label_142c14:
    // 0x142c14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x142c14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x142c18: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x142C18u;
    SET_GPR_U32(ctx, 31, 0x142C20u);
    ctx->pc = 0x142C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C18u;
    // 0x142c1c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x142C18u, 0x142C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C20u;
label_142c20:
    // 0x142c20: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x142c20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142c24: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x142c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142c28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x142c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x142c2c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x142c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142c30: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x142c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x142c34: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x142c34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142c38: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x142c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x142c3c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x142c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x142c40: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x142c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x142c44: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x142c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x142c48: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x142c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142c4c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x142c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142c50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x142c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x142c54: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x142c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x142c58: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x142c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x142c5c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x142c5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142c60: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x142c60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142c64: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x142c64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x142c68: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x142c68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142c6c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x142c6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142c70: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x142c70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x142c74: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x142c74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x142c78: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x142c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142c7c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x142c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x142c80: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x142c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x142c84: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x142c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142c88: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x142c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x142c8c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x142c8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x142c90: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x142c90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x142c94: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x142c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x142c98: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x142c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x142c9c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x142c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142ca0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x142ca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x142ca4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x142ca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x142ca8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x142ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142cac: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x142cacu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x142cb0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x142cb0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x142cb4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x142cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142cb8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x142cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x142cbc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x142cbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x142cc0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x142cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x142cc4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x142cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x142cc8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x142cc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x142ccc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x142cccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x142cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x142cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cd8: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x142cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x142cdc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x142cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ce0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x142ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x142ce4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x142ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ce8: 0xc050a96  jal         func_142A58
    ctx->pc = 0x142CE8u;
    SET_GPR_U32(ctx, 31, 0x142CF0u);
    ctx->pc = 0x142CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CE8u;
    // 0x142cec: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A58u, 0x142CE8u, 0x142CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CF0u;
label_142cf0:
    // 0x142cf0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x142cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x142cf4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x142cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x142cf8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x142cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x142cfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x142cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x142d00: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x142d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x142d04: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x142d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x142d08: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x142d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x142d0c: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x142d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x142d10: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x142d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x142d14: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x142d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x142d18: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x142d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x142D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142D1Cu;
        // 0x142d20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142D24u;
    // 0x142d24: 0x0  nop
    ctx->pc = 0x142d24u;
    // NOP
    ctx->pc = 0x142d28u;
}
