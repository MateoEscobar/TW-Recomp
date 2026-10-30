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

// Function: sub_00252B08
// Address: 0x252b08 - 0x252c28
void sub_00252B08_0x252b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252B08_0x252b08");
#endif

    switch (ctx->pc) {
        case 0x252bf8u: goto label_252bf8;
        default: break;
    }

    ctx->pc = 0x252b08u;

    // 0x252b08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252b0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252b10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252b14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x252b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x252b18: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x252b18u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x252b1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x252b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x252b20: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x252b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x252b24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x252b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x252b28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x252b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b2c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x252b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x252b30: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x252b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b34: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x252b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x252b38: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x252b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x252b3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252b40: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x252b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252b44: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x252b44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252b48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x252b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x252b4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x252b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252b50: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x252b50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x252b54: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x252b54u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252b58: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x252b58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x252b5c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x252b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252b60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x252b60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252b64: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x252b64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252b68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x252b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x252b6c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x252b6cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x252b70: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x252b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x252b74: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x252b74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x252b78: 0x0  nop
    ctx->pc = 0x252b78u;
    // NOP
    // 0x252b7c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x252b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252b80: 0x0  nop
    ctx->pc = 0x252b80u;
    // NOP
    // 0x252b84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x252B84u;
    {
        const bool branch_taken_0x252b84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B84u;
        // 0x252b88: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b84) {
            ctx->pc = 0x252B94u;
            goto label_252b94;
        }
    }
    ctx->pc = 0x252B8Cu;
    // 0x252b8c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x252B8Cu;
    {
        const bool branch_taken_0x252b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B8Cu;
        // 0x252b90: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b8c) {
            ctx->pc = 0x252C10u;
            goto label_252c10;
        }
    }
    ctx->pc = 0x252B94u;
label_252b94:
    // 0x252b94: 0x0  nop
    ctx->pc = 0x252b94u;
    // NOP
    // 0x252b98: 0x0  nop
    ctx->pc = 0x252b98u;
    // NOP
    // 0x252b9c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x252b9cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x252ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ba4: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x252ba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x252ba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x252ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x252bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252bb0: 0x0  nop
    ctx->pc = 0x252bb0u;
    // NOP
    // 0x252bb4: 0x0  nop
    ctx->pc = 0x252bb4u;
    // NOP
    // 0x252bb8: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x252bb8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x252bbc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x252bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x252bc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x252bc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252bc4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x252bc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x252bc8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x252bc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x252bcc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x252bccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x252bd0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x252bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x252bd4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x252bd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x252bd8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x252bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x252bdc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x252bdcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x252be0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x252be0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x252be4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x252be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x252be8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x252be8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x252bec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x252becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x252bf0: 0xc0937ba  jal         func_24DEE8
    ctx->pc = 0x252BF0u;
    SET_GPR_U32(ctx, 31, 0x252BF8u);
    ctx->pc = 0x252BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BF0u;
    // 0x252bf4: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEE8u, 0x252BF0u, 0x252BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BF8u;
label_252bf8:
    // 0x252bf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252BF8u;
    {
        const bool branch_taken_0x252bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BF8u;
        // 0x252bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bf8) {
            ctx->pc = 0x252C14u;
            goto label_252c14;
        }
    }
    ctx->pc = 0x252C00u;
    // 0x252c00: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x252c00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x252c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x252C08u;
    {
        const bool branch_taken_0x252c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C08u;
        // 0x252c0c: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c08) {
            ctx->pc = 0x252C14u;
            goto label_252c14;
        }
    }
    ctx->pc = 0x252C10u;
label_252c10:
    // 0x252c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252c14:
    // 0x252c14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x252c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252c18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x252c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252c20: 0x3e00008  jr          $ra
    ctx->pc = 0x252C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C20u;
        // 0x252c24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C28u;
}
