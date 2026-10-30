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

// Function: sub_00288BE0
// Address: 0x288be0 - 0x288c60
void sub_00288BE0_0x288be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288BE0_0x288be0");
#endif

    switch (ctx->pc) {
        case 0x288c04u: goto label_288c04;
        default: break;
    }

    ctx->pc = 0x288be0u;

    // 0x288be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288be4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x288be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288be8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x288be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x288bec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x288becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288bf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x288bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x288bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x288bf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x288bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288bfc: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x288BFCu;
    SET_GPR_U32(ctx, 31, 0x288C04u);
    ctx->pc = 0x288C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BFCu;
    // 0x288c00: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x288BFCu, 0x288C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C04u;
label_288c04:
    // 0x288c04: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x288c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288c08: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x288c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288c0c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x288c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x288c10: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x288c10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x288c14: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x288c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288c18: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x288c18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288c1c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x288c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x288c20: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x288c20u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x288c24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x288c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288c28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x288c28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288c2c: 0x0  nop
    ctx->pc = 0x288c2cu;
    // NOP
    // 0x288c30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x288c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288c34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x288c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x288c38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288c3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x288C3Cu;
    {
        const bool branch_taken_0x288c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C3Cu;
        // 0x288c40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c3c) {
            ctx->pc = 0x288C4Cu;
            goto label_288c4c;
        }
    }
    ctx->pc = 0x288C44u;
    // 0x288c44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288c48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_288c4c:
    // 0x288c4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x288c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288c50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x288c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288c54: 0x3e00008  jr          $ra
    ctx->pc = 0x288C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C54u;
        // 0x288c58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288C5Cu;
    // 0x288c5c: 0x0  nop
    ctx->pc = 0x288c5cu;
    // NOP
    ctx->pc = 0x288c60u;
}
