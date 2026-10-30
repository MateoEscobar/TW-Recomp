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

// Function: sub_00294F38
// Address: 0x294f38 - 0x295250
void sub_00294F38_0x294f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294F38_0x294f38");
#endif

    switch (ctx->pc) {
        case 0x294f90u: goto label_294f90;
        case 0x294fd4u: goto label_294fd4;
        case 0x295010u: goto label_295010;
        case 0x29505cu: goto label_29505c;
        case 0x295074u: goto label_295074;
        case 0x295094u: goto label_295094;
        case 0x2950acu: goto label_2950ac;
        case 0x2950e8u: goto label_2950e8;
        case 0x295120u: goto label_295120;
        case 0x295138u: goto label_295138;
        case 0x2951ccu: goto label_2951cc;
        default: break;
    }

    ctx->pc = 0x294f38u;

    // 0x294f38: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x294f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x294f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f40: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x294f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x294f44: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x294f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x294f48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f4c: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x294f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x294f50: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x294f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x294f54: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x294f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x294f58: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x294f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x294f5c: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x294f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x294f60: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x294f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x294f64: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x294f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x294f68: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x294f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x294f6c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x294f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x294f70: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x294f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x294f74: 0x92030270  lbu         $v1, 0x270($s0)
    ctx->pc = 0x294f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x294f78: 0x92020271  lbu         $v0, 0x271($s0)
    ctx->pc = 0x294f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 625)));
    // 0x294f7c: 0x643018  mult        $a2, $v1, $a0
    ctx->pc = 0x294f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x294f80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x294F80u;
    {
        const bool branch_taken_0x294f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F80u;
        // 0x294f84: 0xd08821  addu        $s1, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f80) {
            ctx->pc = 0x294FB8u;
            goto label_294fb8;
        }
    }
    ctx->pc = 0x294F88u;
    // 0x294f88: 0x2604024c  addiu       $a0, $s0, 0x24C
    ctx->pc = 0x294f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 588));
    // 0x294f8c: 0x92020270  lbu         $v0, 0x270($s0)
    ctx->pc = 0x294f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 624)));
label_294f90:
    // 0x294f90: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x294f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x294f94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294f98: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294f9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x294f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x294fa0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x294fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x294fa4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x294fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x294fa8: 0x92020271  lbu         $v0, 0x271($s0)
    ctx->pc = 0x294fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 625)));
    // 0x294fac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x294facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x294fb0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x294FB0u;
    {
        const bool branch_taken_0x294fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294fb0) {
            ctx->pc = 0x294FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294FB0u;
            // 0x294fb4: 0x92020270  lbu         $v0, 0x270($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294f90;
        }
    }
    ctx->pc = 0x294FB8u;
label_294fb8:
    // 0x294fb8: 0x8e040244  lw          $a0, 0x244($s0)
    ctx->pc = 0x294fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x294fbc: 0x90820333  lbu         $v0, 0x333($a0)
    ctx->pc = 0x294fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 819)));
    // 0x294fc0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x294fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x294fc4: 0x50400096  beql        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x294FC4u;
    {
        const bool branch_taken_0x294fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294fc4) {
            ctx->pc = 0x294FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294FC4u;
            // 0x294fc8: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295220u;
            goto label_295220;
        }
    }
    ctx->pc = 0x294FCCu;
    // 0x294fcc: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x294FCCu;
    SET_GPR_U32(ctx, 31, 0x294FD4u);
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x294FCCu, 0x294FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FD4u;
label_294fd4:
    // 0x294fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294fd8: 0x10430090  beq         $v0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x294FD8u;
    {
        const bool branch_taken_0x294fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x294FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FD8u;
        // 0x294fdc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fd8) {
            ctx->pc = 0x29521Cu;
            goto label_29521c;
        }
    }
    ctx->pc = 0x294FE0u;
    // 0x294fe0: 0x92020271  lbu         $v0, 0x271($s0)
    ctx->pc = 0x294fe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 625)));
    // 0x294fe4: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x294FE4u;
    {
        const bool branch_taken_0x294fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FE4u;
        // 0x294fe8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fe4) {
            ctx->pc = 0x29521Cu;
            goto label_29521c;
        }
    }
    ctx->pc = 0x294FECu;
    // 0x294fec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x294fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x294ff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x294ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x294ff4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x294ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x294ff8: 0x24551770  addiu       $s5, $v0, 0x1770
    ctx->pc = 0x294ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x294ffc: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x294ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x295000: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x295000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x295004: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x295004u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    // 0x295008: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x295008u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29500c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x29500cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_295010:
    // 0x295010: 0x8627fffa  lh          $a3, -0x6($s1)
    ctx->pc = 0x295010u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967290)));
    // 0x295014: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x295014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x295018: 0x8623fffe  lh          $v1, -0x2($s1)
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x29501c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295020: 0x8622fffc  lh          $v0, -0x4($s1)
    ctx->pc = 0x295020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x295024: 0x26050230  addiu       $a1, $s0, 0x230
    ctx->pc = 0x295024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x295028: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x295028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x29502c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x29502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x295030: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x295030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x295034: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x295034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295038: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x295038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29503c: 0x4bc2093d  vitof4.xyz  $vf2, $vf1
    ctx->pc = 0x29503cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x295040: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x295040u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x295044: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x295044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x295048: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x295048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x29504c: 0xe674001c  swc1        $f20, 0x1C($s3)
    ctx->pc = 0x29504cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x295050: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x295050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295054: 0xc136b30  jal         func_4DACC0
    ctx->pc = 0x295054u;
    SET_GPR_U32(ctx, 31, 0x29505Cu);
    ctx->pc = 0x295058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295054u;
    // 0x295058: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x295054u, 0x29505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29505Cu;
label_29505c:
    // 0x29505c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x29505cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295060: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x295060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x295064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x295064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295068: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x295068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x29506c: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x29506Cu;
    SET_GPR_U32(ctx, 31, 0x295074u);
    ctx->pc = 0x295070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29506Cu;
    // 0x295070: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x29506Cu, 0x295074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295074u;
label_295074:
    // 0x295074: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x295074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295078: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x295078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29507c: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x29507cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x295080: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x295080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x295084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x295084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x295088: 0x26e51740  addiu       $a1, $s7, 0x1740
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 5952));
    // 0x29508c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x29508Cu;
    SET_GPR_U32(ctx, 31, 0x295094u);
    ctx->pc = 0x295090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29508Cu;
    // 0x295090: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x29508Cu, 0x295094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295094u;
label_295094:
    // 0x295094: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x295094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295098: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x295098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29509c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29509cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2950a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2950a4: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x2950A4u;
    SET_GPR_U32(ctx, 31, 0x2950ACu);
    ctx->pc = 0x2950A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950A4u;
    // 0x2950a8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2950A4u, 0x2950ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950ACu;
label_2950ac:
    // 0x2950ac: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2950acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2950b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2950b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2950b4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x2950b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2950b8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2950b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2950bc: 0x3c0140bc  lui         $at, 0x40BC
    ctx->pc = 0x2950bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16572 << 16));
    // 0x2950c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2950c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2950c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2950c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2950c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2950c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950cc: 0x8fc447c4  lw          $a0, 0x47C4($fp)
    ctx->pc = 0x2950ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18372)));
    // 0x2950d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2950d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950d4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2950d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2950d8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2950d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2950dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2950dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2950e0: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2950E0u;
    SET_GPR_U32(ctx, 31, 0x2950E8u);
    ctx->pc = 0x2950E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950E0u;
    // 0x2950e4: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2950E0u, 0x2950E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950E8u;
label_2950e8:
    // 0x2950e8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2950e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2950ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2950ECu;
    {
        const bool branch_taken_0x2950ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950ECu;
        // 0x2950f0: 0xc7ac0084  lwc1        $f12, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950ec) {
            ctx->pc = 0x295144u;
            goto label_295144;
        }
    }
    ctx->pc = 0x2950F4u;
    // 0x2950f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2950f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2950f8: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x2950f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x2950fc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2950fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x295100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x295100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295104: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x295104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295108: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x295108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x29510c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29510cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x295110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295114: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x295114u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x295118: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x295118u;
    SET_GPR_U32(ctx, 31, 0x295120u);
    ctx->pc = 0x29511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295118u;
    // 0x29511c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x295118u, 0x295120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295120u;
label_295120:
    // 0x295120: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x295120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295124: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x295124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x295128: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x295128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29512c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29512cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x295130: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x295130u;
    SET_GPR_U32(ctx, 31, 0x295138u);
    ctx->pc = 0x295134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295130u;
    // 0x295134: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x295130u, 0x295138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295138u;
label_295138:
    // 0x295138: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x295138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29513c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29513cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x295140: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x295140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_295144:
    // 0x295144: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x295144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295148: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x295148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29514c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29514cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x295150: 0x4bc2097d  vftoi4.xyz  $vf2, $vf1
    ctx->pc = 0x295150u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x295154: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x295154u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x295158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29515c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x295160: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x295160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x295164: 0x97a70040  lhu         $a3, 0x40($sp)
    ctx->pc = 0x295164u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295168: 0x97a80044  lhu         $t0, 0x44($sp)
    ctx->pc = 0x295168u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x29516c: 0x97a90048  lhu         $t1, 0x48($sp)
    ctx->pc = 0x29516cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x295170: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x295170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x295174: 0x82400  sll         $a0, $t0, 16
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x295178: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x295178u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x29517c: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x29517cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x295180: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x295180u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x295184: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x295184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x295188: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x295188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x29518c: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x29518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x295190: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x295190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x295194: 0xa6270000  sh          $a3, 0x0($s1)
    ctx->pc = 0x295194u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x295198: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x295198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29519c: 0xa6280002  sh          $t0, 0x2($s1)
    ctx->pc = 0x29519cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x2951a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2951a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2951a4: 0x4bc2093d  vitof4.xyz  $vf2, $vf1
    ctx->pc = 0x2951a4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2951a8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2951a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2951ac: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2951acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2951b0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2951b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2951b4: 0xe6d4001c  swc1        $f20, 0x1C($s6)
    ctx->pc = 0x2951b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x2951b8: 0xa6290004  sh          $t1, 0x4($s1)
    ctx->pc = 0x2951b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x2951bc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2951bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2951c0: 0x8e040244  lw          $a0, 0x244($s0)
    ctx->pc = 0x2951c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x2951c4: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2951C4u;
    SET_GPR_U32(ctx, 31, 0x2951CCu);
    ctx->pc = 0x2951C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2951C4u;
    // 0x2951c8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2951C4u, 0x2951CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2951CCu;
label_2951cc:
    // 0x2951cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2951ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2951d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2951d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2951d4: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2951D4u;
    {
        const bool branch_taken_0x2951d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2951d4) {
            ctx->pc = 0x2951D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2951D4u;
            // 0x2951d8: 0x92020271  lbu         $v0, 0x271($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 625)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29520Cu;
            goto label_29520c;
        }
    }
    ctx->pc = 0x2951DCu;
    // 0x2951dc: 0x92020270  lbu         $v0, 0x270($s0)
    ctx->pc = 0x2951dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x2951e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2951e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2951e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2951e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2951e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2951e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2951ec: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2951ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2951f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2951f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2951f4: 0xa064024c  sb          $a0, 0x24C($v1)
    ctx->pc = 0x2951f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 588), (uint8_t)GPR_U32(ctx, 4));
    // 0x2951f8: 0x92020272  lbu         $v0, 0x272($s0)
    ctx->pc = 0x2951f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 626)));
    // 0x2951fc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2951fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295200: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x295200u;
    {
        const bool branch_taken_0x295200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295200) {
            ctx->pc = 0x295204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295200u;
            // 0x295204: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295220u;
            goto label_295220;
        }
    }
    ctx->pc = 0x295208u;
    // 0x295208: 0x92020271  lbu         $v0, 0x271($s0)
    ctx->pc = 0x295208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 625)));
label_29520c:
    // 0x29520c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29520cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x295210: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x295210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x295214: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x295214u;
    {
        const bool branch_taken_0x295214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295214u;
        // 0x295218: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295214) {
            ctx->pc = 0x295010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295010;
        }
    }
    ctx->pc = 0x29521Cu;
label_29521c:
    // 0x29521c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x29521cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_295220:
    // 0x295220: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x295220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x295224: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x295224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x295228: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x295228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29522c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x29522cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x295230: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x295230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x295234: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x295234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x295238: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x295238u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29523c: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x29523cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x295240: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x295240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x295244: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x295244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x295248: 0x3e00008  jr          $ra
    ctx->pc = 0x295248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295248u;
        // 0x29524c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295250u;
}
