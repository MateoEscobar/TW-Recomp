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

// Function: sub_002A4AE8
// Address: 0x2a4ae8 - 0x2a4cb8
void sub_002A4AE8_0x2a4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4AE8_0x2a4ae8");
#endif

    switch (ctx->pc) {
        case 0x2a4b48u: goto label_2a4b48;
        case 0x2a4b58u: goto label_2a4b58;
        case 0x2a4b88u: goto label_2a4b88;
        case 0x2a4b94u: goto label_2a4b94;
        case 0x2a4c78u: goto label_2a4c78;
        default: break;
    }

    ctx->pc = 0x2a4ae8u;

    // 0x2a4ae8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2a4ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2a4aec: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2a4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2a4af0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2a4af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2a4af4: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x2a4af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a4af8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2a4af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2a4afc: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x2a4afcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b00: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2a4b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2a4b04: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2a4b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2a4b08: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2a4b08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b0c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2a4b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2a4b10: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2a4b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2a4b14: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2a4b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2a4b18: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a4b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a4b1c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2a4b1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2a4b20: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2a4b20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2a4b24: 0x44166000  mfc1        $s6, $f12
    ctx->pc = 0x2a4b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x2a4b28: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2a4b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4b2c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a4b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2a4b30: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x2a4b34: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2a4b34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x2a4b38: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2a4b38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2a4b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4B3Cu;
    {
        const bool branch_taken_0x2a4b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B3Cu;
        // 0x2a4b40: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b3c) {
            ctx->pc = 0x2A4B50u;
            goto label_2a4b50;
        }
    }
    ctx->pc = 0x2A4B44u;
    // 0x2a4b44: 0x0  nop
    ctx->pc = 0x2a4b44u;
    // NOP
label_2a4b48:
    // 0x2a4b48: 0x622004e  bltzl       $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2A4B48u;
    {
        const bool branch_taken_0x2a4b48 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2a4b48) {
            ctx->pc = 0x2A4B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4B48u;
            // 0x2a4b4c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4C84u;
            goto label_2a4c84;
        }
    }
    ctx->pc = 0x2A4B50u;
label_2a4b50:
    // 0x2a4b50: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x2A4B50u;
    SET_GPR_U32(ctx, 31, 0x2A4B58u);
    ctx->pc = 0x2A4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B50u;
    // 0x2a4b54: 0x2684b8a0  addiu       $a0, $s4, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x2A4B50u, 0x2A4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B58u;
label_2a4b58:
    // 0x2a4b58: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2a4b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2a4b5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2a4b5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2a4b60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a4b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4b64: 0x26631740  addiu       $v1, $s3, 0x1740
    ctx->pc = 0x2a4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x2a4b68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a4b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4b6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a4b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a4b70: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2a4b70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4b74: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2a4b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4b78: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2a4b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2a4b7c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2a4b7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2a4b80: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2A4B80u;
    SET_GPR_U32(ctx, 31, 0x2A4B88u);
    ctx->pc = 0x2A4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B80u;
    // 0x2a4b84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2A4B80u, 0x2A4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B88u;
label_2a4b88:
    // 0x2a4b88: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2a4b88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2a4b8c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2A4B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A4B94u);
    ctx->pc = 0x2A4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B8Cu;
    // 0x2a4b90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2A4B8Cu, 0x2A4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B94u;
label_2a4b94:
    // 0x2a4b94: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a4b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4b98: 0x26431730  addiu       $v1, $s2, 0x1730
    ctx->pc = 0x2a4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5936));
    // 0x2a4b9c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x2a4b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a4ba0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a4ba0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a4ba4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2a4ba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2a4ba8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a4ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2a4bac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2a4bacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2a4bb0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a4bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a4bb4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2a4bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2a4bb8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2a4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4bbc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2a4bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4bc0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2a4bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4bc4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2a4bc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4bc8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a4bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a4bcc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2a4bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a4bd0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2a4bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a4bd4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2a4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2a4bd8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2a4bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4bdc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2a4bdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2a4be0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2a4be0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2a4be4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2a4be4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a4be8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2a4be8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2a4bec: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2a4becu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a4bf0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2a4bf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a4bf4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2a4bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2a4bf8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2a4bf8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2a4bfc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2a4bfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c00: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2a4c00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c04: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2a4c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c08: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2a4c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c0c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2a4c0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2a4c10: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2a4c10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c14: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2a4c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c18: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2a4c18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c1c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x2a4c1cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2a4c20: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2a4c20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2a4c24: 0x48b61000  qmtc2.ni    $s6, $vf2
    ctx->pc = 0x2a4c24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 22));
    // 0x2a4c28: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2a4c28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c2c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2a4c2cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2a4c30: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2a4c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2a4c34: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x2a4c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x2a4c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c3c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2a4c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2a4c40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a4c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a4c44: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x2a4c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x2a4c48: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2a4c48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2a4c4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2a4c4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2a4c50: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2a4c50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2a4c54: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2a4c54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2a4c58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2a4c58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2a4c5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2a4c5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2a4c60: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x2a4c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x2a4c64: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2a4c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2a4c68: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2a4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x2a4c6c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2a4c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2a4c70: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2A4C70u;
    SET_GPR_U32(ctx, 31, 0x2A4C78u);
    ctx->pc = 0x2A4C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C70u;
    // 0x2a4c74: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2A4C70u, 0x2A4C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C78u;
label_2a4c78:
    // 0x2a4c78: 0x1040ffb3  beqz        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x2A4C78u;
    {
        const bool branch_taken_0x2a4c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C78u;
        // 0x2a4c7c: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c78) {
            ctx->pc = 0x2A4B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4b48;
        }
    }
    ctx->pc = 0x2A4C80u;
    // 0x2a4c80: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2a4c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2a4c84:
    // 0x2a4c84: 0x7ee30000  sq          $v1, 0x0($s7)
    ctx->pc = 0x2a4c84u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
    // 0x2a4c88: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2a4c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a4c8c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2a4c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a4c90: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2a4c90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a4c94: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2a4c94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a4c98: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2a4c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a4c9c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2a4c9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a4ca0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2a4ca0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a4ca4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a4ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a4ca8: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2a4ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a4cac: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2a4cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a4cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CB0u;
        // 0x2a4cb4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4CB8u;
}
