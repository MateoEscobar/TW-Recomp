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

// Function: sub_0011BFA8
// Address: 0x11bfa8 - 0x11c0b8
void sub_0011BFA8_0x11bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BFA8_0x11bfa8");
#endif

    switch (ctx->pc) {
        case 0x11bfa8u: goto label_11bfa8;
        case 0x11bfacu: goto label_11bfac;
        case 0x11bfb0u: goto label_11bfb0;
        case 0x11bfb4u: goto label_11bfb4;
        case 0x11bfb8u: goto label_11bfb8;
        case 0x11bfbcu: goto label_11bfbc;
        case 0x11bfc0u: goto label_11bfc0;
        case 0x11bfc4u: goto label_11bfc4;
        case 0x11bfc8u: goto label_11bfc8;
        case 0x11bfccu: goto label_11bfcc;
        case 0x11bfd0u: goto label_11bfd0;
        case 0x11bfd4u: goto label_11bfd4;
        case 0x11bfd8u: goto label_11bfd8;
        case 0x11bfdcu: goto label_11bfdc;
        case 0x11bfe0u: goto label_11bfe0;
        case 0x11bfe4u: goto label_11bfe4;
        case 0x11bfe8u: goto label_11bfe8;
        case 0x11bfecu: goto label_11bfec;
        case 0x11bff0u: goto label_11bff0;
        case 0x11bff4u: goto label_11bff4;
        case 0x11bff8u: goto label_11bff8;
        case 0x11bffcu: goto label_11bffc;
        case 0x11c000u: goto label_11c000;
        case 0x11c004u: goto label_11c004;
        case 0x11c008u: goto label_11c008;
        case 0x11c00cu: goto label_11c00c;
        case 0x11c010u: goto label_11c010;
        case 0x11c014u: goto label_11c014;
        case 0x11c018u: goto label_11c018;
        case 0x11c01cu: goto label_11c01c;
        case 0x11c020u: goto label_11c020;
        case 0x11c024u: goto label_11c024;
        case 0x11c028u: goto label_11c028;
        case 0x11c02cu: goto label_11c02c;
        case 0x11c030u: goto label_11c030;
        case 0x11c034u: goto label_11c034;
        case 0x11c038u: goto label_11c038;
        case 0x11c03cu: goto label_11c03c;
        case 0x11c040u: goto label_11c040;
        case 0x11c044u: goto label_11c044;
        case 0x11c048u: goto label_11c048;
        case 0x11c04cu: goto label_11c04c;
        case 0x11c050u: goto label_11c050;
        case 0x11c054u: goto label_11c054;
        case 0x11c058u: goto label_11c058;
        case 0x11c05cu: goto label_11c05c;
        case 0x11c060u: goto label_11c060;
        case 0x11c064u: goto label_11c064;
        case 0x11c068u: goto label_11c068;
        case 0x11c06cu: goto label_11c06c;
        case 0x11c070u: goto label_11c070;
        case 0x11c074u: goto label_11c074;
        case 0x11c078u: goto label_11c078;
        case 0x11c07cu: goto label_11c07c;
        case 0x11c080u: goto label_11c080;
        case 0x11c084u: goto label_11c084;
        case 0x11c088u: goto label_11c088;
        case 0x11c08cu: goto label_11c08c;
        case 0x11c090u: goto label_11c090;
        case 0x11c094u: goto label_11c094;
        case 0x11c098u: goto label_11c098;
        case 0x11c09cu: goto label_11c09c;
        case 0x11c0a0u: goto label_11c0a0;
        case 0x11c0a4u: goto label_11c0a4;
        case 0x11c0a8u: goto label_11c0a8;
        case 0x11c0acu: goto label_11c0ac;
        case 0x11c0b0u: goto label_11c0b0;
        case 0x11c0b4u: goto label_11c0b4;
        default: break;
    }

    ctx->pc = 0x11bfa8u;

label_11bfa8:
    // 0x11bfa8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_11bfac:
    // 0x11bfac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_11bfb0:
    // 0x11bfb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11bfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bfb4:
    // 0x11bfb4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x11bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_11bfb8:
    // 0x11bfb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x11bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_11bfbc:
    // 0x11bfbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11bfc0:
    // 0x11bfc0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x11bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_11bfc4:
    // 0x11bfc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_11bfc8:
    // 0x11bfc8: 0xc0e4060  jal         func_390180
label_11bfcc:
    if (ctx->pc == 0x11BFCCu) {
        ctx->pc = 0x11BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFC8u;
        // 0x11bfcc: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BFD0u;
        goto label_11bfd0;
    }
    ctx->pc = 0x11BFC8u;
    SET_GPR_U32(ctx, 31, 0x11BFD0u);
    ctx->pc = 0x11BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFC8u;
    // 0x11bfcc: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11BFC8u, 0x11BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFD0u;
label_11bfd0:
    // 0x11bfd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11bfd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bfd4:
    // 0x11bfd4: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_11bfd8:
    if (ctx->pc == 0x11BFD8u) {
        ctx->pc = 0x11BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFD4u;
        // 0x11bfd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BFDCu;
        goto label_11bfdc;
    }
    ctx->pc = 0x11BFD4u;
    {
        const bool branch_taken_0x11bfd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFD4u;
        // 0x11bfd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfd4) {
            ctx->pc = 0x11BFF4u;
            goto label_11bff4;
        }
    }
    ctx->pc = 0x11BFDCu;
label_11bfdc:
    // 0x11bfdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11bfe0:
    // 0x11bfe0: 0xc04786c  jal         func_11E1B0
label_11bfe4:
    if (ctx->pc == 0x11BFE4u) {
        ctx->pc = 0x11BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFE0u;
        // 0x11bfe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BFE8u;
        goto label_11bfe8;
    }
    ctx->pc = 0x11BFE0u;
    SET_GPR_U32(ctx, 31, 0x11BFE8u);
    ctx->pc = 0x11BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFE0u;
    // 0x11bfe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B0u, 0x11BFE0u, 0x11BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFE8u;
label_11bfe8:
    // 0x11bfe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bfec:
    // 0x11bfec: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_11bff0:
    if (ctx->pc == 0x11BFF0u) {
        ctx->pc = 0x11BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFECu;
        // 0x11bff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BFF4u;
        goto label_11bff4;
    }
    ctx->pc = 0x11BFECu;
    {
        const bool branch_taken_0x11bfec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFECu;
        // 0x11bff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfec) {
            ctx->pc = 0x11C000u;
            goto label_11c000;
        }
    }
    ctx->pc = 0x11BFF4u;
label_11bff4:
    // 0x11bff4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11bff8:
    // 0x11bff8: 0x10000027  b           . + 4 + (0x27 << 2)
label_11bffc:
    if (ctx->pc == 0x11BFFCu) {
        ctx->pc = 0x11BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFF8u;
        // 0x11bffc: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C000u;
        goto label_11c000;
    }
    ctx->pc = 0x11BFF8u;
    {
        const bool branch_taken_0x11bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFF8u;
        // 0x11bffc: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bff8) {
            ctx->pc = 0x11C098u;
            goto label_11c098;
        }
    }
    ctx->pc = 0x11C000u;
label_11c000:
    // 0x11c000: 0xc0488ac  jal         func_1222B0
label_11c004:
    if (ctx->pc == 0x11C004u) {
        ctx->pc = 0x11C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C000u;
        // 0x11c004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C008u;
        goto label_11c008;
    }
    ctx->pc = 0x11C000u;
    SET_GPR_U32(ctx, 31, 0x11C008u);
    ctx->pc = 0x11C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C000u;
    // 0x11c004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x11C000u, 0x11C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C008u;
label_11c008:
    // 0x11c008: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x11c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11c00c:
    // 0x11c00c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_11c010:
    // 0x11c010: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c014:
    // 0x11c014: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x11c014u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_11c018:
    // 0x11c018: 0x863001b8  lh          $s0, 0x1B8($s1)
    ctx->pc = 0x11c018u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
label_11c01c:
    // 0x11c01c: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x11c01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_11c020:
    // 0x11c020: 0x263101b8  addiu       $s1, $s1, 0x1B8
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
label_11c024:
    // 0x11c024: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11c024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11c028:
    // 0x11c028: 0xc0f809  jalr        $a2
label_11c02c:
    if (ctx->pc == 0x11C02Cu) {
        ctx->pc = 0x11C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C028u;
        // 0x11c02c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C030u;
        goto label_11c030;
    }
    ctx->pc = 0x11C028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11C030u);
        ctx->pc = 0x11C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C028u;
        // 0x11c02c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C028u, 0x11C030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C030u;
label_11c030:
    // 0x11c030: 0x7a430200  lq          $v1, 0x200($s2)
    ctx->pc = 0x11c030u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 512)));
label_11c034:
    // 0x11c034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c038:
    // 0x11c038: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x11c038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11c03c:
    // 0x11c03c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11c03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11c040:
    // 0x11c040: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x11c040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_11c044:
    // 0x11c044: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x11c044u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_11c048:
    // 0x11c048: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x11c048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_11c04c:
    // 0x11c04c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x11c04cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_11c050:
    // 0x11c050: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x11c050u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_11c054:
    // 0x11c054: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11c054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_11c058:
    // 0x11c058: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x11c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_11c05c:
    // 0x11c05c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x11c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_11c060:
    // 0x11c060: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11c064:
    // 0x11c064: 0x60f809  jalr        $v1
label_11c068:
    if (ctx->pc == 0x11C068u) {
        ctx->pc = 0x11C06Cu;
        goto label_11c06c;
    }
    ctx->pc = 0x11C064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C06Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C064u, 0x11C06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C06Cu;
label_11c06c:
    // 0x11c06c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x11c06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_11c070:
    // 0x11c070: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11c074:
    // 0x11c074: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11c074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_11c078:
    // 0x11c078: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x11c078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_11c07c:
    // 0x11c07c: 0xc0493ce  jal         func_124F38
label_11c080:
    if (ctx->pc == 0x11C080u) {
        ctx->pc = 0x11C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C07Cu;
        // 0x11c080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C084u;
        goto label_11c084;
    }
    ctx->pc = 0x11C07Cu;
    SET_GPR_U32(ctx, 31, 0x11C084u);
    ctx->pc = 0x11C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C07Cu;
    // 0x11c080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F38u, 0x11C07Cu, 0x11C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C084u;
label_11c084:
    // 0x11c084: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11c088:
    // 0x11c088: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11c088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11c08c:
    // 0x11c08c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x11c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11c090:
    // 0x11c090: 0x40f809  jalr        $v0
label_11c094:
    if (ctx->pc == 0x11C094u) {
        ctx->pc = 0x11C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C090u;
        // 0x11c094: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C098u;
        goto label_11c098;
    }
    ctx->pc = 0x11C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C098u);
        ctx->pc = 0x11C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C090u;
        // 0x11c094: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C090u, 0x11C098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C098u;
label_11c098:
    // 0x11c098: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x11c098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_11c09c:
    // 0x11c09c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x11c09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_11c0a0:
    // 0x11c0a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x11c0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11c0a4:
    // 0x11c0a4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x11c0a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11c0a8:
    // 0x11c0a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11c0ac:
    // 0x11c0ac: 0x3e00008  jr          $ra
label_11c0b0:
    if (ctx->pc == 0x11C0B0u) {
        ctx->pc = 0x11C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0ACu;
        // 0x11c0b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C0B4u;
        goto label_11c0b4;
    }
    ctx->pc = 0x11C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0ACu;
        // 0x11c0b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C0B4u;
label_11c0b4:
    // 0x11c0b4: 0x0  nop
    ctx->pc = 0x11c0b4u;
    // NOP
    ctx->pc = 0x11c0b8u;
}
