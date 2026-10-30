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

// Function: sub_00124F38
// Address: 0x124f38 - 0x1250a8
void sub_00124F38_0x124f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124F38_0x124f38");
#endif

    switch (ctx->pc) {
        case 0x124f38u: goto label_124f38;
        case 0x124f3cu: goto label_124f3c;
        case 0x124f40u: goto label_124f40;
        case 0x124f44u: goto label_124f44;
        case 0x124f48u: goto label_124f48;
        case 0x124f4cu: goto label_124f4c;
        case 0x124f50u: goto label_124f50;
        case 0x124f54u: goto label_124f54;
        case 0x124f58u: goto label_124f58;
        case 0x124f5cu: goto label_124f5c;
        case 0x124f60u: goto label_124f60;
        case 0x124f64u: goto label_124f64;
        case 0x124f68u: goto label_124f68;
        case 0x124f6cu: goto label_124f6c;
        case 0x124f70u: goto label_124f70;
        case 0x124f74u: goto label_124f74;
        case 0x124f78u: goto label_124f78;
        case 0x124f7cu: goto label_124f7c;
        case 0x124f80u: goto label_124f80;
        case 0x124f84u: goto label_124f84;
        case 0x124f88u: goto label_124f88;
        case 0x124f8cu: goto label_124f8c;
        case 0x124f90u: goto label_124f90;
        case 0x124f94u: goto label_124f94;
        case 0x124f98u: goto label_124f98;
        case 0x124f9cu: goto label_124f9c;
        case 0x124fa0u: goto label_124fa0;
        case 0x124fa4u: goto label_124fa4;
        case 0x124fa8u: goto label_124fa8;
        case 0x124facu: goto label_124fac;
        case 0x124fb0u: goto label_124fb0;
        case 0x124fb4u: goto label_124fb4;
        case 0x124fb8u: goto label_124fb8;
        case 0x124fbcu: goto label_124fbc;
        case 0x124fc0u: goto label_124fc0;
        case 0x124fc4u: goto label_124fc4;
        case 0x124fc8u: goto label_124fc8;
        case 0x124fccu: goto label_124fcc;
        case 0x124fd0u: goto label_124fd0;
        case 0x124fd4u: goto label_124fd4;
        case 0x124fd8u: goto label_124fd8;
        case 0x124fdcu: goto label_124fdc;
        case 0x124fe0u: goto label_124fe0;
        case 0x124fe4u: goto label_124fe4;
        case 0x124fe8u: goto label_124fe8;
        case 0x124fecu: goto label_124fec;
        case 0x124ff0u: goto label_124ff0;
        case 0x124ff4u: goto label_124ff4;
        case 0x124ff8u: goto label_124ff8;
        case 0x124ffcu: goto label_124ffc;
        case 0x125000u: goto label_125000;
        case 0x125004u: goto label_125004;
        case 0x125008u: goto label_125008;
        case 0x12500cu: goto label_12500c;
        case 0x125010u: goto label_125010;
        case 0x125014u: goto label_125014;
        case 0x125018u: goto label_125018;
        case 0x12501cu: goto label_12501c;
        case 0x125020u: goto label_125020;
        case 0x125024u: goto label_125024;
        case 0x125028u: goto label_125028;
        case 0x12502cu: goto label_12502c;
        case 0x125030u: goto label_125030;
        case 0x125034u: goto label_125034;
        case 0x125038u: goto label_125038;
        case 0x12503cu: goto label_12503c;
        case 0x125040u: goto label_125040;
        case 0x125044u: goto label_125044;
        case 0x125048u: goto label_125048;
        case 0x12504cu: goto label_12504c;
        case 0x125050u: goto label_125050;
        case 0x125054u: goto label_125054;
        case 0x125058u: goto label_125058;
        case 0x12505cu: goto label_12505c;
        case 0x125060u: goto label_125060;
        case 0x125064u: goto label_125064;
        case 0x125068u: goto label_125068;
        case 0x12506cu: goto label_12506c;
        case 0x125070u: goto label_125070;
        case 0x125074u: goto label_125074;
        case 0x125078u: goto label_125078;
        case 0x12507cu: goto label_12507c;
        case 0x125080u: goto label_125080;
        case 0x125084u: goto label_125084;
        case 0x125088u: goto label_125088;
        case 0x12508cu: goto label_12508c;
        case 0x125090u: goto label_125090;
        case 0x125094u: goto label_125094;
        case 0x125098u: goto label_125098;
        case 0x12509cu: goto label_12509c;
        case 0x1250a0u: goto label_1250a0;
        case 0x1250a4u: goto label_1250a4;
        default: break;
    }

    ctx->pc = 0x124f38u;

label_124f38:
    // 0x124f38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x124f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_124f3c:
    // 0x124f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124f40:
    // 0x124f40: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x124f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_124f44:
    // 0x124f44: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x124f44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_124f48:
    // 0x124f48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x124f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_124f4c:
    // 0x124f4c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x124f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124f50:
    // 0x124f50: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x124f50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_124f54:
    // 0x124f54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x124f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_124f58:
    // 0x124f58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124f5c:
    // 0x124f5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x124f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_124f60:
    // 0x124f60: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_124f64:
    if (ctx->pc == 0x124F64u) {
        ctx->pc = 0x124F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F60u;
        // 0x124f64: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F68u;
        goto label_124f68;
    }
    ctx->pc = 0x124F60u;
    {
        const bool branch_taken_0x124f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F60u;
        // 0x124f64: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f60) {
            ctx->pc = 0x124FCCu;
            goto label_124fcc;
        }
    }
    ctx->pc = 0x124F68u;
label_124f68:
    // 0x124f68: 0xc62d03e0  lwc1        $f13, 0x3E0($s1)
    ctx->pc = 0x124f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_124f6c:
    // 0x124f6c: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x124f6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124f70:
    // 0x124f70: 0x0  nop
    ctx->pc = 0x124f70u;
    // NOP
label_124f74:
    // 0x124f74: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_124f78:
    if (ctx->pc == 0x124F78u) {
        ctx->pc = 0x124F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F74u;
        // 0x124f78: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F7Cu;
        goto label_124f7c;
    }
    ctx->pc = 0x124F74u;
    {
        const bool branch_taken_0x124f74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x124F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F74u;
        // 0x124f78: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f74) {
            ctx->pc = 0x124F84u;
            goto label_124f84;
        }
    }
    ctx->pc = 0x124F7Cu;
label_124f7c:
    // 0x124f7c: 0x1000000f  b           . + 4 + (0xF << 2)
label_124f80:
    if (ctx->pc == 0x124F80u) {
        ctx->pc = 0x124F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F7Cu;
        // 0x124f80: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F84u;
        goto label_124f84;
    }
    ctx->pc = 0x124F7Cu;
    {
        const bool branch_taken_0x124f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F7Cu;
        // 0x124f80: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f7c) {
            ctx->pc = 0x124FBCu;
            goto label_124fbc;
        }
    }
    ctx->pc = 0x124F84u;
label_124f84:
    // 0x124f84: 0x26250260  addiu       $a1, $s1, 0x260
    ctx->pc = 0x124f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_124f88:
    // 0x124f88: 0xc136afa  jal         func_4DABE8
label_124f8c:
    if (ctx->pc == 0x124F8Cu) {
        ctx->pc = 0x124F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F88u;
        // 0x124f8c: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F90u;
        goto label_124f90;
    }
    ctx->pc = 0x124F88u;
    SET_GPR_U32(ctx, 31, 0x124F90u);
    ctx->pc = 0x124F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F88u;
    // 0x124f8c: 0x26260180  addiu       $a2, $s1, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x124F88u, 0x124F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F90u;
label_124f90:
    // 0x124f90: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x124f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_124f94:
    // 0x124f94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x124f94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_124f98:
    // 0x124f98: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x124f98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_124f9c:
    // 0x124f9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x124f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_124fa0:
    // 0x124fa0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x124fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_124fa4:
    // 0x124fa4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x124fa4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_124fa8:
    // 0x124fa8: 0x4a0003bf  vwaitq
    ctx->pc = 0x124fa8u;
    // VWAITQ (Q already resolved in this runtime)
label_124fac:
    // 0x124fac: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x124facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_124fb0:
    // 0x124fb0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x124fb0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_124fb4:
    // 0x124fb4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x124fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_124fb8:
    // 0x124fb8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x124fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_124fbc:
    // 0x124fbc: 0xc620032c  lwc1        $f0, 0x32C($s1)
    ctx->pc = 0x124fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_124fc0:
    // 0x124fc0: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x124fc0u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
label_124fc4:
    // 0x124fc4: 0xc6210330  lwc1        $f1, 0x330($s1)
    ctx->pc = 0x124fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124fc8:
    // 0x124fc8: 0x4601a529  min.s       $f20, $f20, $f1
    ctx->pc = 0x124fc8u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[1]);
label_124fcc:
    // 0x124fcc: 0xc6220300  lwc1        $f2, 0x300($s1)
    ctx->pc = 0x124fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_124fd0:
    // 0x124fd0: 0xc6210308  lwc1        $f1, 0x308($s1)
    ctx->pc = 0x124fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124fd4:
    // 0x124fd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x124fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_124fd8:
    // 0x124fd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x124fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_124fdc:
    // 0x124fdc: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x124fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_124fe0:
    // 0x124fe0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x124fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_124fe4:
    // 0x124fe4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x124fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_124fe8:
    // 0x124fe8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x124fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124fec:
    // 0x124fec: 0x0  nop
    ctx->pc = 0x124fecu;
    // NOP
label_124ff0:
    // 0x124ff0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_124ff4:
    if (ctx->pc == 0x124FF4u) {
        ctx->pc = 0x124FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FF0u;
        // 0x124ff4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124FF8u;
        goto label_124ff8;
    }
    ctx->pc = 0x124FF0u;
    {
        const bool branch_taken_0x124ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FF0u;
        // 0x124ff4: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ff0) {
            ctx->pc = 0x125000u;
            goto label_125000;
        }
    }
    ctx->pc = 0x124FF8u;
label_124ff8:
    // 0x124ff8: 0x10000009  b           . + 4 + (0x9 << 2)
label_124ffc:
    if (ctx->pc == 0x124FFCu) {
        ctx->pc = 0x124FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FF8u;
        // 0x124ffc: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125000u;
        goto label_125000;
    }
    ctx->pc = 0x124FF8u;
    {
        const bool branch_taken_0x124ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FF8u;
        // 0x124ffc: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ff8) {
            ctx->pc = 0x125020u;
            goto label_125020;
        }
    }
    ctx->pc = 0x125000u;
label_125000:
    // 0x125000: 0xc62c0304  lwc1        $f12, 0x304($s1)
    ctx->pc = 0x125000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125004:
    // 0x125004: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x125004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_125008:
    // 0x125008: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x125008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12500c:
    // 0x12500c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12500cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_125010:
    // 0x125010: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x125010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125014:
    // 0x125014: 0x0  nop
    ctx->pc = 0x125014u;
    // NOP
label_125018:
    // 0x125018: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_12501c:
    if (ctx->pc == 0x12501Cu) {
        ctx->pc = 0x12501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125018u;
        // 0x12501c: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125020u;
        goto label_125020;
    }
    ctx->pc = 0x125018u;
    {
        const bool branch_taken_0x125018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125018u;
        // 0x12501c: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125018) {
            ctx->pc = 0x125030u;
            goto label_125030;
        }
    }
    ctx->pc = 0x125020u;
label_125020:
    // 0x125020: 0xc04953c  jal         func_1254F0
label_125024:
    if (ctx->pc == 0x125024u) {
        ctx->pc = 0x125024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125020u;
        // 0x125024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125028u;
        goto label_125028;
    }
    ctx->pc = 0x125020u;
    SET_GPR_U32(ctx, 31, 0x125028u);
    ctx->pc = 0x125024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125020u;
    // 0x125024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x125020u, 0x125028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125028u;
label_125028:
    // 0x125028: 0x10000006  b           . + 4 + (0x6 << 2)
label_12502c:
    if (ctx->pc == 0x12502Cu) {
        ctx->pc = 0x12502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125028u;
        // 0x12502c: 0x26300260  addiu       $s0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125030u;
        goto label_125030;
    }
    ctx->pc = 0x125028u;
    {
        const bool branch_taken_0x125028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125028u;
        // 0x12502c: 0x26300260  addiu       $s0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125028) {
            ctx->pc = 0x125044u;
            goto label_125044;
        }
    }
    ctx->pc = 0x125030u;
label_125030:
    // 0x125030: 0x46036501  sub.s       $f20, $f12, $f3
    ctx->pc = 0x125030u;
    ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
label_125034:
    // 0x125034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125038:
    // 0x125038: 0xc04953c  jal         func_1254F0
label_12503c:
    if (ctx->pc == 0x12503Cu) {
        ctx->pc = 0x12503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125038u;
        // 0x12503c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x125040u;
        goto label_125040;
    }
    ctx->pc = 0x125038u;
    SET_GPR_U32(ctx, 31, 0x125040u);
    ctx->pc = 0x12503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125038u;
    // 0x12503c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x125038u, 0x125040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125040u;
label_125040:
    // 0x125040: 0x26300260  addiu       $s0, $s1, 0x260
    ctx->pc = 0x125040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_125044:
    // 0x125044: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x125044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_125048:
    // 0x125048: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x125048u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_12504c:
    // 0x12504c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125050:
    // 0x125050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125054:
    // 0x125054: 0xc04942a  jal         func_1250A8
label_125058:
    if (ctx->pc == 0x125058u) {
        ctx->pc = 0x125058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125054u;
        // 0x125058: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12505Cu;
        goto label_12505c;
    }
    ctx->pc = 0x125054u;
    SET_GPR_U32(ctx, 31, 0x12505Cu);
    ctx->pc = 0x125058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125054u;
    // 0x125058: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250A8u, 0x125054u, 0x12505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12505Cu;
label_12505c:
    // 0x12505c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125060:
    // 0x125060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x125060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125064:
    // 0x125064: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x125064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_125068:
    // 0x125068: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x125068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_12506c:
    // 0x12506c: 0x60f809  jalr        $v1
label_125070:
    if (ctx->pc == 0x125070u) {
        ctx->pc = 0x125070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12506Cu;
        // 0x125070: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125074u;
        goto label_125074;
    }
    ctx->pc = 0x12506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x125074u);
        ctx->pc = 0x125070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12506Cu;
        // 0x125070: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12506Cu, 0x125074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125074u;
label_125074:
    // 0x125074: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x125074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
label_125078:
    // 0x125078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12507c:
    // 0x12507c: 0xa223046b  sb          $v1, 0x46B($s1)
    ctx->pc = 0x12507cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1131), (uint8_t)GPR_U32(ctx, 3));
label_125080:
    // 0x125080: 0x7e220250  sq          $v0, 0x250($s1)
    ctx->pc = 0x125080u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 592), GPR_VEC(ctx, 2));
label_125084:
    // 0x125084: 0x7e2201e0  sq          $v0, 0x1E0($s1)
    ctx->pc = 0x125084u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), GPR_VEC(ctx, 2));
label_125088:
    // 0x125088: 0x7e2202b0  sq          $v0, 0x2B0($s1)
    ctx->pc = 0x125088u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 688), GPR_VEC(ctx, 2));
label_12508c:
    // 0x12508c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12508cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_125090:
    // 0x125090: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x125090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_125094:
    // 0x125094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125098:
    // 0x125098: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x125098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12509c:
    // 0x12509c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x12509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1250a0:
    // 0x1250a0: 0x3e00008  jr          $ra
label_1250a4:
    if (ctx->pc == 0x1250A4u) {
        ctx->pc = 0x1250A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250A0u;
        // 0x1250a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250A8u;
        goto label_fallthrough_0x1250a0;
    }
    ctx->pc = 0x1250A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1250A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250A0u;
        // 0x1250a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1250A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1250a0:
    ctx->pc = 0x1250A8u;
}
