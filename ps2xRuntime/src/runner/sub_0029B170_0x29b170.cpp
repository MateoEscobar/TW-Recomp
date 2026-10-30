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

// Function: sub_0029B170
// Address: 0x29b170 - 0x29b238
void sub_0029B170_0x29b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B170_0x29b170");
#endif

    switch (ctx->pc) {
        case 0x29b1b8u: goto label_29b1b8;
        default: break;
    }

    ctx->pc = 0x29b170u;

    // 0x29b170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29b174: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29b178: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29b17c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b180: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x29b180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x29b184: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29B184u;
    {
        const bool branch_taken_0x29b184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B184u;
        // 0x29b188: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b184) {
            ctx->pc = 0x29B220u;
            goto label_29b220;
        }
    }
    ctx->pc = 0x29B18Cu;
    // 0x29b18c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b190: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x29b190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x29b194: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29b194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b19c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29b1a0: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x29b1a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x29b1a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x29b1a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29b1ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29b1acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b1b0: 0xc0a68f0  jal         func_29A3C0
    ctx->pc = 0x29B1B0u;
    SET_GPR_U32(ctx, 31, 0x29B1B8u);
    ctx->pc = 0x29B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1B0u;
    // 0x29b1b4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29B1B0u, 0x29B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1B8u;
label_29b1b8:
    // 0x29b1b8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29b1b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b1bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b1c0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29b1c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b1c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29b1c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29b1c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29b1c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29b1cc: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29b1ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29b1d0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29b1d0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29b1d4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x29b1d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29b1d8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x29b1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x29b1dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29b1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b1e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29b1e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29b1e4: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x29b1e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b1e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29b1e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b1ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29b1ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b1f0: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x29b1f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29b1f4: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x29b1f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29b1f8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x29b1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b200: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x29b200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x29b204: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29b204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b208: 0x0  nop
    ctx->pc = 0x29b208u;
    // NOP
    // 0x29b20c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29B20Cu;
    {
        const bool branch_taken_0x29b20c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B20Cu;
        // 0x29b210: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b20c) {
            ctx->pc = 0x29B218u;
            goto label_29b218;
        }
    }
    ctx->pc = 0x29B214u;
    // 0x29b214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b218:
    // 0x29b218: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B218u;
    {
        const bool branch_taken_0x29b218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B218u;
        // 0x29b21c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b218) {
            ctx->pc = 0x29B224u;
            goto label_29b224;
        }
    }
    ctx->pc = 0x29B220u;
label_29b220:
    // 0x29b220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b224:
    // 0x29b224: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29b224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b228: 0x3e00008  jr          $ra
    ctx->pc = 0x29B228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B228u;
        // 0x29b22c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B230u;
    // 0x29b230: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x29b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29b234: 0x0  nop
    ctx->pc = 0x29b234u;
    // NOP
    ctx->pc = 0x29b238u;
}
