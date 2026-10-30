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

// Function: sub_0019B7D8
// Address: 0x19b7d8 - 0x19b8c0
void sub_0019B7D8_0x19b7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B7D8_0x19b7d8");
#endif

    switch (ctx->pc) {
        case 0x19b7e8u: goto label_19b7e8;
        case 0x19b890u: goto label_19b890;
        default: break;
    }

    ctx->pc = 0x19b7d8u;

    // 0x19b7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b7dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b7e0: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x19B7E0u;
    SET_GPR_U32(ctx, 31, 0x19B7E8u);
    ctx->pc = 0x19B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B7E0u;
    // 0x19b7e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x19B7E0u, 0x19B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B7E8u;
label_19b7e8:
    // 0x19b7e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19b7ec: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x19b7ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b7f0: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x19b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x19b7f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19b7f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19b7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b7fc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19b7fcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511770u));
    // 0x19b800: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x19b800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x19b804: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19b804u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19b808: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x19b808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19b80c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x19b80cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19b810: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x19b810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19b814: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x19b814u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19b818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b81c: 0x0  nop
    ctx->pc = 0x19b81cu;
    // NOP
    // 0x19b820: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x19b820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b824: 0x0  nop
    ctx->pc = 0x19b824u;
    // NOP
    // 0x19b828: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19B828u;
    {
        const bool branch_taken_0x19b828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b828) {
            ctx->pc = 0x19B83Cu;
            goto label_19b83c;
        }
    }
    ctx->pc = 0x19B830u;
    // 0x19b830: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19b830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b834: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19B834u;
    {
        const bool branch_taken_0x19b834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b834) {
            ctx->pc = 0x19B8A4u;
            goto label_19b8a4;
        }
    }
    ctx->pc = 0x19B83Cu;
label_19b83c:
    // 0x19b83c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19b83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19b840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b844: 0x0  nop
    ctx->pc = 0x19b844u;
    // NOP
    // 0x19b848: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b84c: 0x0  nop
    ctx->pc = 0x19b84cu;
    // NOP
    // 0x19b850: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x19B850u;
    {
        const bool branch_taken_0x19b850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b850) {
            ctx->pc = 0x19B854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B850u;
            // 0x19b854: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B86Cu;
            goto label_19b86c;
        }
    }
    ctx->pc = 0x19B858u;
    // 0x19b858: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x19b858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x19b85c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19b85cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19b860: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b864: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19B864u;
    {
        const bool branch_taken_0x19b864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b864) {
            ctx->pc = 0x19B8A4u;
            goto label_19b8a4;
        }
    }
    ctx->pc = 0x19B86Cu;
label_19b86c:
    // 0x19b86c: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x19b86cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x19b870: 0x0  nop
    ctx->pc = 0x19b870u;
    // NOP
    // 0x19b874: 0x0  nop
    ctx->pc = 0x19b874u;
    // NOP
    // 0x19b878: 0x460c0304  c1          0xC0304
    ctx->pc = 0x19b878u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x19b87c: 0x0  nop
    ctx->pc = 0x19b87cu;
    // NOP
    // 0x19b880: 0x0  nop
    ctx->pc = 0x19b880u;
    // NOP
    // 0x19b884: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x19b884u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x19b888: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x19B888u;
    SET_GPR_U32(ctx, 31, 0x19B890u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x19B888u, 0x19B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B890u;
label_19b890:
    // 0x19b890: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19b890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19b894: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19b894u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19b898: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b89c: 0x0  nop
    ctx->pc = 0x19b89cu;
    // NOP
    // 0x19b8a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19b8a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b8a4:
    // 0x19b8a4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x19b8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19b8a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19b8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x19b8ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b8b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19b8b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19b8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B8B8u;
        // 0x19b8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B8C0u;
}
