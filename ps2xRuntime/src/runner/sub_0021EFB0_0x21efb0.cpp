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

// Function: sub_0021EFB0
// Address: 0x21efb0 - 0x21f058
void sub_0021EFB0_0x21efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EFB0_0x21efb0");
#endif

    switch (ctx->pc) {
        case 0x21efd0u: goto label_21efd0;
        case 0x21f048u: goto label_21f048;
        default: break;
    }

    ctx->pc = 0x21efb0u;

    // 0x21efb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21efb4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21efb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21efbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21efbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efc0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21efc4: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x21efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21efc8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21EFC8u;
    SET_GPR_U32(ctx, 31, 0x21EFD0u);
    ctx->pc = 0x21EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFC8u;
    // 0x21efcc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21EFC8u, 0x21EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFD0u;
label_21efd0:
    // 0x21efd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EFD0u;
    {
        const bool branch_taken_0x21efd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21efd0) {
            ctx->pc = 0x21EFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EFD0u;
            // 0x21efd4: 0x86040092  lh          $a0, 0x92($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EFE4u;
            goto label_21efe4;
        }
    }
    ctx->pc = 0x21EFD8u;
    // 0x21efd8: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x21efdc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x21EFDCu;
    {
        const bool branch_taken_0x21efdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFDCu;
        // 0x21efe0: 0x906283b8  lbu         $v0, -0x7C48($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efdc) {
            ctx->pc = 0x21F048u;
            goto label_21f048;
        }
    }
    ctx->pc = 0x21EFE4u;
label_21efe4:
    // 0x21efe4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21efe8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21efe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21efec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21efecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eff0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21eff4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21eff8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21effc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x21effcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x21f000: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21f000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21f004: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21f004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21f008: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x21f008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x21f00c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x21f00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21f010: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x21f010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f014: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x21f014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f018: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x21f018u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f01c: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x21f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x21f020: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x21f020u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21f024: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x21f024u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21f028: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21f028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21f02c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21f02cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x21f030: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x21f030u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21f034: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x21f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f038: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x21f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x21f03c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x21f03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x21f040: 0xc04410c  jal         func_110430
    ctx->pc = 0x21F040u;
    SET_GPR_U32(ctx, 31, 0x21F048u);
    ctx->pc = 0x21F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F040u;
    // 0x21f044: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110430u, 0x21F040u, 0x21F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F048u;
label_21f048:
    // 0x21f048: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21f048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f04c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21f04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f050: 0x3e00008  jr          $ra
    ctx->pc = 0x21F050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F050u;
        // 0x21f054: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F058u;
}
