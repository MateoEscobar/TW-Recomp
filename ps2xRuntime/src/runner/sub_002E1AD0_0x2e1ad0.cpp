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

// Function: sub_002E1AD0
// Address: 0x2e1ad0 - 0x2e1b60
void sub_002E1AD0_0x2e1ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1AD0_0x2e1ad0");
#endif

    ctx->pc = 0x2e1ad0u;

    // 0x2e1ad0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2e1ad0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1ad4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1ad8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2e1ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e1adc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e1adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e1ae0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e1ae0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2e1ae4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e1ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e1ae8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e1ae8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2e1aec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e1aecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2e1af0: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x2e1af0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e1af4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e1af4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2e1af8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2e1af8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2e1afc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2e1afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e1b00: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e1b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e1b04: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e1b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2e1b08: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2e1b08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2e1b0c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e1b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2e1b10: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2e1b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2e1b14: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2e1b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2e1b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e1b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1b1c: 0x9083003c  lbu         $v1, 0x3C($a0)
    ctx->pc = 0x2e1b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2e1b20: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1B20u;
    {
        const bool branch_taken_0x2e1b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B20u;
        // 0x2e1b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b20) {
            ctx->pc = 0x2E1B3Cu;
            goto label_2e1b3c;
        }
    }
    ctx->pc = 0x2E1B28u;
    // 0x2e1b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b2c: 0x0  nop
    ctx->pc = 0x2e1b2cu;
    // NOP
    // 0x2e1b30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1b34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1B34u;
    {
        const bool branch_taken_0x2e1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1b34) {
            ctx->pc = 0x2E1B48u;
            goto label_2e1b48;
        }
    }
    ctx->pc = 0x2E1B3Cu;
label_2e1b3c:
    // 0x2e1b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1b40: 0x0  nop
    ctx->pc = 0x2e1b40u;
    // NOP
    // 0x2e1b44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1b48:
    // 0x2e1b48: 0x0  nop
    ctx->pc = 0x2e1b48u;
    // NOP
    // 0x2e1b4c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1B4Cu;
    {
        const bool branch_taken_0x2e1b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1b4c) {
            ctx->pc = 0x2E1B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1B4Cu;
            // 0x2e1b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1B54u;
            goto label_2e1b54;
        }
    }
    ctx->pc = 0x2E1B54u;
label_2e1b54:
    // 0x2e1b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B54u;
        // 0x2e1b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1B5Cu;
    // 0x2e1b5c: 0x0  nop
    ctx->pc = 0x2e1b5cu;
    // NOP
    ctx->pc = 0x2e1b60u;
}
