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

// Function: sub_003A36E0
// Address: 0x3a36e0 - 0x3a37b8
void sub_003A36E0_0x3a36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A36E0_0x3a36e0");
#endif

    switch (ctx->pc) {
        case 0x3a3724u: goto label_3a3724;
        default: break;
    }

    ctx->pc = 0x3a36e0u;

    // 0x3a36e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3a36e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a36e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3a36e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3a36ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a36ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a36f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36f4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a36f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a36f8: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x3a36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x3a36fc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a36fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3a3700: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a3700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a3704: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x3a3704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x3a3708: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3a3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a370c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3a370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3a3710: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3a3710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a3714: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a3714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3a3718: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3a3718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3a371c: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x3A371Cu;
    SET_GPR_U32(ctx, 31, 0x3A3724u);
    ctx->pc = 0x3A3720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A371Cu;
    // 0x3a3720: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x3A371Cu, 0x3A3724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3724u;
label_3a3724:
    // 0x3a3724: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3a3724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3728: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A3728u;
    {
        const bool branch_taken_0x3a3728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3728u;
        // 0x3a372c: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3728) {
            ctx->pc = 0x3A37A4u;
            goto label_3a37a4;
        }
    }
    ctx->pc = 0x3A3730u;
    // 0x3a3730: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3a3730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x3a3734: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3a3734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3738: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0
    ctx->pc = 0x3a3738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
    // 0x3a373c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a373cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a3740: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a3740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3a3744: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a3744u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a3748: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a3748u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a374c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a374cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a3750: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a3750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a3754: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x3a3754u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3a3758: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a3758u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a375c: 0x24842dd0  addiu       $a0, $a0, 0x2DD0
    ctx->pc = 0x3a375cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11728));
    // 0x3a3760: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3a3760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x3a3764: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a3764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a3768: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a3768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a376c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a376cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a3770: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a3770u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a3774: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3a3774u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a3778: 0x97a9004c  lhu         $t1, 0x4C($sp)
    ctx->pc = 0x3a3778u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3a377c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3a377cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3a3780: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x3a3780u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3784: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3a3784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x3a3788: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3a3788u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3a378c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3790: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x3a3790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x3a3794: 0xad0a2de0  sw          $t2, 0x2DE0($t0)
    ctx->pc = 0x3a3794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6F2DE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F2DE0u, _value); } while (0);
    // 0x3a3798: 0xacc92de4  sw          $t1, 0x2DE4($a2)
    ctx->pc = 0x3a3798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6F2DE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F2DE4u, _value); } while (0);
    // 0x3a379c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A379Cu;
    {
        const bool branch_taken_0x3a379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A379Cu;
        // 0x3a37a0: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a379c) {
            ctx->pc = 0x3A37A8u;
            goto label_3a37a8;
        }
    }
    ctx->pc = 0x3A37A4u;
label_3a37a4:
    // 0x3a37a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a37a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a37a8:
    // 0x3a37a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3a37a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a37ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3A37ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37ACu;
        // 0x3a37b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A37ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A37B4u;
    // 0x3a37b4: 0x0  nop
    ctx->pc = 0x3a37b4u;
    // NOP
    ctx->pc = 0x3a37b8u;
}
