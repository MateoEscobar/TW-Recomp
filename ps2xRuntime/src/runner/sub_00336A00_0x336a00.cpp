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

// Function: sub_00336A00
// Address: 0x336a00 - 0x336bb8
void sub_00336A00_0x336a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336A00_0x336a00");
#endif

    switch (ctx->pc) {
        case 0x336b1cu: goto label_336b1c;
        case 0x336b58u: goto label_336b58;
        case 0x336b64u: goto label_336b64;
        default: break;
    }

    ctx->pc = 0x336a00u;

    // 0x336a00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x336a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x336a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x336a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x336a08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x336a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336a0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x336a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x336a10: 0x46016329  min.s       $f12, $f12, $f1
    ctx->pc = 0x336a10u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[1]);
    // 0x336a14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x336a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x336a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a1c: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x336a1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x336a20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x336a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x336a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336a2c: 0x460065a8  max.s       $f22, $f12, $f0
    ctx->pc = 0x336a2cu;
    ctx->f[22] = std::max(ctx->f[12], ctx->f[0]);
    // 0x336a30: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x336a30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x336a34: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x336a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x336a38: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x336a38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336a3c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x336a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x336a40: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x336a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336a44: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x336a44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336a48: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x336a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336a4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x336a4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336a50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x336a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336a54: 0x4b0318c3  vaddw.x     $vf3, $vf3, $vf3w
    ctx->pc = 0x336a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x336a58: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x336a58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x336a5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x336a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x336a60: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x336a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x336a64: 0x0  nop
    ctx->pc = 0x336a64u;
    // NOP
    // 0x336a68: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x336a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336a6c: 0x0  nop
    ctx->pc = 0x336a6cu;
    // NOP
    // 0x336a70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x336A70u;
    {
        const bool branch_taken_0x336a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x336a70) {
            ctx->pc = 0x336A80u;
            goto label_336a80;
        }
    }
    ctx->pc = 0x336A78u;
    // 0x336a78: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x336a78u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x336a7c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x336a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336a80:
    // 0x336a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x336a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x336a84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x336a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x336a88: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x336a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x336a8c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x336a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x336a90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x336a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336a94: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x336a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x336a98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x336a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336a9c: 0x0  nop
    ctx->pc = 0x336a9cu;
    // NOP
    // 0x336aa0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x336AA0u;
    {
        const bool branch_taken_0x336aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x336AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AA0u;
        // 0x336aa4: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336aa0) {
            ctx->pc = 0x336AB0u;
            goto label_336ab0;
        }
    }
    ctx->pc = 0x336AA8u;
    // 0x336aa8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x336AA8u;
    {
        const bool branch_taken_0x336aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AA8u;
        // 0x336aac: 0x46166541  sub.s       $f21, $f12, $f22 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336aa8) {
            ctx->pc = 0x336B68u;
            goto label_336b68;
        }
    }
    ctx->pc = 0x336AB0u;
label_336ab0:
    // 0x336ab0: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x336ab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336ab4: 0x0  nop
    ctx->pc = 0x336ab4u;
    // NOP
    // 0x336ab8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x336AB8u;
    {
        const bool branch_taken_0x336ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x336ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AB8u;
        // 0x336abc: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ab8) {
            ctx->pc = 0x336AC8u;
            goto label_336ac8;
        }
    }
    ctx->pc = 0x336AC0u;
    // 0x336ac0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x336AC0u;
    {
        const bool branch_taken_0x336ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AC0u;
        // 0x336ac4: 0x46021082  mul.s       $f2, $f2, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ac0) {
            ctx->pc = 0x336B30u;
            goto label_336b30;
        }
    }
    ctx->pc = 0x336AC8u;
label_336ac8:
    // 0x336ac8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x336ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x336acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x336accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336ad0: 0x0  nop
    ctx->pc = 0x336ad0u;
    // NOP
    // 0x336ad4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x336ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x336ad8: 0x0  nop
    ctx->pc = 0x336ad8u;
    // NOP
    // 0x336adc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x336ADCu;
    {
        const bool branch_taken_0x336adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x336adc) {
            ctx->pc = 0x336AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336ADCu;
            // 0x336ae0: 0x46021502  mul.s       $f20, $f2, $f2 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336AF8u;
            goto label_336af8;
        }
    }
    ctx->pc = 0x336AE4u;
    // 0x336ae4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x336ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x336ae8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x336ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x336aec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x336aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x336af0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x336AF0u;
    {
        const bool branch_taken_0x336af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AF0u;
        // 0x336af4: 0x46021082  mul.s       $f2, $f2, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336af0) {
            ctx->pc = 0x336B30u;
            goto label_336b30;
        }
    }
    ctx->pc = 0x336AF8u;
label_336af8:
    // 0x336af8: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x336af8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x336afc: 0x0  nop
    ctx->pc = 0x336afcu;
    // NOP
    // 0x336b00: 0x0  nop
    ctx->pc = 0x336b00u;
    // NOP
    // 0x336b04: 0x460c0304  c1          0xC0304
    ctx->pc = 0x336b04u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x336b08: 0x0  nop
    ctx->pc = 0x336b08u;
    // NOP
    // 0x336b0c: 0x0  nop
    ctx->pc = 0x336b0cu;
    // NOP
    // 0x336b10: 0x460c1303  div.s       $f12, $f2, $f12
    ctx->pc = 0x336b10u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
    // 0x336b14: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x336B14u;
    SET_GPR_U32(ctx, 31, 0x336B1Cu);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x336B14u, 0x336B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B1Cu;
label_336b1c:
    // 0x336b1c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x336b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x336b20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x336b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x336b24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x336b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336b28: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x336b28u;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
    // 0x336b2c: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x336b2cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_336b30:
    // 0x336b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x336b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x336b34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x336b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x336b38: 0x0  nop
    ctx->pc = 0x336b38u;
    // NOP
    // 0x336b3c: 0x4616a301  sub.s       $f12, $f20, $f22
    ctx->pc = 0x336b3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x336b40: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x336b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x336b44: 0x0  nop
    ctx->pc = 0x336b44u;
    // NOP
    // 0x336b48: 0x0  nop
    ctx->pc = 0x336b48u;
    // NOP
    // 0x336b4c: 0x4600a516  rsqrt.s     $f20, $f20, $f0
    ctx->pc = 0x336b4cu;
    ctx->f[20] = FPU_RSQRT_S(ctx->f[20], ctx->f[0]);
    // 0x336b50: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x336B50u;
    SET_GPR_U32(ctx, 31, 0x336B58u);
    ctx->pc = 0x336B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336B50u;
    // 0x336b54: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x336B50u, 0x336B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B58u;
label_336b58:
    // 0x336b58: 0x4615b302  mul.s       $f12, $f22, $f21
    ctx->pc = 0x336b58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x336b5c: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x336B5Cu;
    SET_GPR_U32(ctx, 31, 0x336B64u);
    ctx->pc = 0x336B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336B5Cu;
    // 0x336b60: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x336B5Cu, 0x336B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B64u;
label_336b64:
    // 0x336b64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x336b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_336b68:
    // 0x336b68: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x336B68u;
    {
        const bool branch_taken_0x336b68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x336b68) {
            ctx->pc = 0x336B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336B68u;
            // 0x336b6c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336B70u;
            goto label_336b70;
        }
    }
    ctx->pc = 0x336B70u;
label_336b70:
    // 0x336b70: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x336b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336b74: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x336b74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336b78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x336b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336b7c: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x336b7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x336b80: 0x4be40998  vmulx.xyzw  $vf6, $vf1, $vf4x
    ctx->pc = 0x336b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x336b84: 0x4be511d8  vmulx.xyzw  $vf7, $vf2, $vf5x
    ctx->pc = 0x336b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x336b88: 0x4be73228  vadd.xyzw   $vf8, $vf6, $vf7
    ctx->pc = 0x336b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x336b8c: 0x48224000  qmfc2.ni    $v0, $vf8
    ctx->pc = 0x336b8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x336b90: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x336b90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x336b94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x336b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336b98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x336b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336ba0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x336ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x336ba4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x336ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x336ba8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x336ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x336bac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x336bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x336bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x336BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BB0u;
        // 0x336bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336BB8u;
}
