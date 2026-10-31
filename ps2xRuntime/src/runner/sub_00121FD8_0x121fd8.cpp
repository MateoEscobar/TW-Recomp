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

// Function: sub_00121FD8
// Address: 0x121fd8 - 0x122060
void sub_00121FD8_0x121fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121FD8_0x121fd8");
#endif

    switch (ctx->pc) {
        case 0x121ff0u: goto label_121ff0;
        default: break;
    }

    ctx->pc = 0x121fd8u;

    // 0x121fd8: 0x46006087  neg.s       $f2, $f12
    ctx->pc = 0x121fd8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[12]);
    // 0x121fdc: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x121fdcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121fe0: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x121fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x121fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fe8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x121fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fec: 0x0  nop
    ctx->pc = 0x121fecu;
    // NOP
label_121ff0:
    // 0x121ff0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x121ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121ff4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x121ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x121ff8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x121ff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x121ffc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x121ffcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x122000: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x122000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x122004: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x122004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x122008: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x122008u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12200c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x12200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122010: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x122010u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122014: 0x0  nop
    ctx->pc = 0x122014u;
    // NOP
    // 0x122018: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x122018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12201c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x12201cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122020: 0x0  nop
    ctx->pc = 0x122020u;
    // NOP
    // 0x122024: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x122024u;
    {
        const bool branch_taken_0x122024 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x122028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122024u;
        // 0x122028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122024) {
            ctx->pc = 0x122058u;
            goto label_122058;
        }
    }
    ctx->pc = 0x12202Cu;
    // 0x12202c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x12202cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x122030: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x122030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122034: 0x0  nop
    ctx->pc = 0x122034u;
    // NOP
    // 0x122038: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x122038u;
    {
        const bool branch_taken_0x122038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x122038) {
            ctx->pc = 0x12203Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122038u;
            // 0x12203c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122040u;
            goto label_122040;
        }
    }
    ctx->pc = 0x122040u;
label_122040:
    // 0x122040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x122040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x122044: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x122044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x122048: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x122048u;
    {
        const bool branch_taken_0x122048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122048u;
        // 0x12204c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122048) {
            ctx->pc = 0x121FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121ff0;
        }
    }
    ctx->pc = 0x122050u;
    // 0x122050: 0x3e00008  jr          $ra
    ctx->pc = 0x122050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122050u;
        // 0x122054: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122058u;
label_122058:
    // 0x122058: 0x3e00008  jr          $ra
    ctx->pc = 0x122058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122060u;
}
