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

// Function: sub_00225998
// Address: 0x225998 - 0x225a50
void sub_00225998_0x225998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225998_0x225998");
#endif

    switch (ctx->pc) {
        case 0x2259b8u: goto label_2259b8;
        case 0x2259c8u: goto label_2259c8;
        case 0x2259d8u: goto label_2259d8;
        case 0x225a0cu: goto label_225a0c;
        default: break;
    }

    ctx->pc = 0x225998u;

    // 0x225998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22599c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2259a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2259a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2259a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2259a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2259a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2259ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2259acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259b0: 0xc088e98  jal         func_223A60
    ctx->pc = 0x2259B0u;
    SET_GPR_U32(ctx, 31, 0x2259B8u);
    ctx->pc = 0x2259B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259B0u;
    // 0x2259b4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x2259B0u, 0x2259B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259B8u;
label_2259b8:
    // 0x2259b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2259B8u;
    {
        const bool branch_taken_0x2259b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2259b8) {
            ctx->pc = 0x2259D0u;
            goto label_2259d0;
        }
    }
    ctx->pc = 0x2259C0u;
    // 0x2259c0: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x2259C0u;
    SET_GPR_U32(ctx, 31, 0x2259C8u);
    ctx->pc = 0x2259C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259C0u;
    // 0x2259c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x2259C0u, 0x2259C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259C8u;
label_2259c8:
    // 0x2259c8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2259C8u;
    {
        const bool branch_taken_0x2259c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2259C8u;
        // 0x2259cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259c8) {
            ctx->pc = 0x225A34u;
            goto label_225a34;
        }
    }
    ctx->pc = 0x2259D0u;
label_2259d0:
    // 0x2259d0: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x2259D0u;
    SET_GPR_U32(ctx, 31, 0x2259D8u);
    ctx->pc = 0x2259D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259D0u;
    // 0x2259d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x2259D0u, 0x2259D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259D8u;
label_2259d8:
    // 0x2259d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2259d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2259dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2259dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2259e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2259e4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2259e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2259e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2259e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2259ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2259ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2259f0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2259f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2259f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2259f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2259f8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2259f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2259fc: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2259fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x225a00: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x225a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225a04: 0xc08859c  jal         func_221670
    ctx->pc = 0x225A04u;
    SET_GPR_U32(ctx, 31, 0x225A0Cu);
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x225A04u, 0x225A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225A0Cu;
label_225a0c:
    // 0x225a0c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x225a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x225a10: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x225a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x225a14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225a18: 0x0  nop
    ctx->pc = 0x225a18u;
    // NOP
    // 0x225a1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x225a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x225a20: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x225a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225a24: 0x0  nop
    ctx->pc = 0x225a24u;
    // NOP
    // 0x225a28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x225A28u;
    {
        const bool branch_taken_0x225a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x225a28) {
            ctx->pc = 0x225A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225A28u;
            // 0x225a2c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225A30u;
            goto label_225a30;
        }
    }
    ctx->pc = 0x225A30u;
label_225a30:
    // 0x225a30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225a34:
    // 0x225a34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225a38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a40: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x225a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x225a44: 0x3e00008  jr          $ra
    ctx->pc = 0x225A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A44u;
        // 0x225a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225A4Cu;
    // 0x225a4c: 0x0  nop
    ctx->pc = 0x225a4cu;
    // NOP
    ctx->pc = 0x225a50u;
}
