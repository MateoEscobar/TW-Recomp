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

// Function: sub_002C8F28
// Address: 0x2c8f28 - 0x2c8ff8
void sub_002C8F28_0x2c8f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8F28_0x2c8f28");
#endif

    switch (ctx->pc) {
        case 0x2c8f64u: goto label_2c8f64;
        default: break;
    }

    ctx->pc = 0x2c8f28u;

    // 0x2c8f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c8f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c8f2c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2c8f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8f30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c8f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c8f34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c8f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c8f38: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2c8f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8f3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8f40: 0x16260006  bne         $s1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8F40u;
    {
        const bool branch_taken_0x2c8f40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x2C8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F40u;
        // 0x2c8f44: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f40) {
            ctx->pc = 0x2C8F5Cu;
            goto label_2c8f5c;
        }
    }
    ctx->pc = 0x2C8F48u;
    // 0x2c8f48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2c8f4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c8f50: 0x8c440b84  lw          $a0, 0xB84($v0)
    ctx->pc = 0x2c8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x510B84u));
    // 0x2c8f54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8f58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c8f5c:
    // 0x2c8f5c: 0xc0a3678  jal         func_28D9E0
    ctx->pc = 0x2C8F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F64u);
    ctx->pc = 0x2C8F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8F5Cu;
    // 0x2c8f60: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2C8F5Cu, 0x2C8F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F64u;
label_2c8f64:
    // 0x2c8f64: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2c8f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2c8f68: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2c8f6c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2c8f70: 0x78450040  lq          $a1, 0x40($v0)
    ctx->pc = 0x2c8f70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c8f74: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c8f78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c8f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c8f7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c8f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c8f80: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2c8f80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8f84: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c8f84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2c8f88: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2c8f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2c8f8c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c8f8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c8f90: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c8f90u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2c8f94: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2c8f94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2c8f98: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2c8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2c8f9c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2c8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2c8fa0: 0x78440050  lq          $a0, 0x50($v0)
    ctx->pc = 0x2c8fa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c8fa4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c8fa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2c8fa8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2c8fa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2c8fac: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2c8facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2c8fb0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c8fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2c8fb4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c8fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2c8fb8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2c8fb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2c8fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8fc0: 0x0  nop
    ctx->pc = 0x2c8fc0u;
    // NOP
    // 0x2c8fc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c8fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c8fc8: 0x0  nop
    ctx->pc = 0x2c8fc8u;
    // NOP
    // 0x2c8fcc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8FCCu;
    {
        const bool branch_taken_0x2c8fcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FCCu;
        // 0x2c8fd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fcc) {
            ctx->pc = 0x2C8FE4u;
            goto label_2c8fe4;
        }
    }
    ctx->pc = 0x2C8FD4u;
    // 0x2c8fd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c8fd8: 0x8c440b8c  lw          $a0, 0xB8C($v0)
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2956)));
    // 0x2c8fdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8fe0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c8fe4:
    // 0x2c8fe4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c8fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8fe8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c8fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FF0u;
        // 0x2c8ff4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8FF8u;
}
