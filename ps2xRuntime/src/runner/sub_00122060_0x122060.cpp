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

// Function: sub_00122060
// Address: 0x122060 - 0x122128
void sub_00122060_0x122060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122060_0x122060");
#endif

    switch (ctx->pc) {
        case 0x12207cu: goto label_12207c;
        case 0x122090u: goto label_122090;
        case 0x1220a8u: goto label_1220a8;
        default: break;
    }

    ctx->pc = 0x122060u;

    // 0x122060: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x122064: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x122064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x122068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12206c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x12206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x122070: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122074: 0xc0ce05e  jal         func_338178
    ctx->pc = 0x122074u;
    SET_GPR_U32(ctx, 31, 0x12207Cu);
    ctx->pc = 0x122078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122074u;
    // 0x122078: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338178u, 0x122074u, 0x12207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12207Cu;
label_12207c:
    // 0x12207c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x12207cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x122080: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x122080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122084: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122088: 0x26090060  addiu       $t1, $s0, 0x60
    ctx->pc = 0x122088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x12208c: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x12208cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_122090:
    // 0x122090: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x122090u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x122094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x122094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122098: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x122098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12209c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220a0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1220a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220a4: 0x0  nop
    ctx->pc = 0x1220a4u;
    // NOP
label_1220a8:
    // 0x1220a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1220a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1220ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1220acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1220b0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1220b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1220b4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1220b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1220b8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1220b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1220bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1220bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1220c0: 0x482b1800  qmfc2.ni    $t3, $vf3
    ctx->pc = 0x1220c0u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1220c4: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x1220c4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1220c8: 0x0  nop
    ctx->pc = 0x1220c8u;
    // NOP
    // 0x1220cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1220ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1220d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1220d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1220d4: 0x0  nop
    ctx->pc = 0x1220d4u;
    // NOP
    // 0x1220d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1220D8u;
    {
        const bool branch_taken_0x1220d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1220d8) {
            ctx->pc = 0x1220DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1220D8u;
            // 0x1220dc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1220E0u;
            goto label_1220e0;
        }
    }
    ctx->pc = 0x1220E0u;
label_1220e0:
    // 0x1220e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1220e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1220e4: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1220e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1220e8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1220E8u;
    {
        const bool branch_taken_0x1220e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1220ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220E8u;
        // 0x1220ec: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220e8) {
            ctx->pc = 0x1220A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1220a8;
        }
    }
    ctx->pc = 0x1220F0u;
    // 0x1220f0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1220F0u;
    {
        const bool branch_taken_0x1220f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220F0u;
        // 0x1220f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220f0) {
            ctx->pc = 0x122114u;
            goto label_122114;
        }
    }
    ctx->pc = 0x1220F8u;
    // 0x1220f8: 0x38e20008  xori        $v0, $a3, 0x8
    ctx->pc = 0x1220f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)8);
    // 0x1220fc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x122100: 0x142400b  movn        $t0, $t2, $v0
    ctx->pc = 0x122100u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 10));
    // 0x122104: 0x209102b  sltu        $v0, $s0, $t1
    ctx->pc = 0x122104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x122108: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x122108u;
    {
        const bool branch_taken_0x122108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122108u;
        // 0x12210c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122108) {
            ctx->pc = 0x122090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122090;
        }
    }
    ctx->pc = 0x122110u;
    // 0x122110: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x122110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_122114:
    // 0x122114: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x122114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122118: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x122118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12211c: 0x3e00008  jr          $ra
    ctx->pc = 0x12211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12211Cu;
        // 0x122120: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12211Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122124u;
    // 0x122124: 0x0  nop
    ctx->pc = 0x122124u;
    // NOP
    ctx->pc = 0x122128u;
}
