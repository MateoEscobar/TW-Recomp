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

// Function: sub_002FBEF0
// Address: 0x2fbef0 - 0x2fc158
void sub_002FBEF0_0x2fbef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBEF0_0x2fbef0");
#endif

    switch (ctx->pc) {
        case 0x2fbf64u: goto label_2fbf64;
        case 0x2fbfa8u: goto label_2fbfa8;
        case 0x2fbfb8u: goto label_2fbfb8;
        case 0x2fc048u: goto label_2fc048;
        case 0x2fc078u: goto label_2fc078;
        case 0x2fc088u: goto label_2fc088;
        case 0x2fc09cu: goto label_2fc09c;
        case 0x2fc0c4u: goto label_2fc0c4;
        default: break;
    }

    ctx->pc = 0x2fbef0u;

    // 0x2fbef0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2fbef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2fbef4: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x2fbef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x2fbef8: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x2fbef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x2fbefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf00: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x2fbf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x2fbf04: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2fbf04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf08: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x2fbf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x2fbf0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fbf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fbf10: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2fbf10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2fbf14: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2fbf14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf18: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2fbf18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2fbf1c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2fbf1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2fbf20: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2fbf20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2fbf24: 0x311700ff  andi        $s7, $t0, 0xFF
    ctx->pc = 0x2fbf24u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2fbf28: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x2fbf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x2fbf2c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2fbf2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2fbf30: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x2fbf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x2fbf34: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2fbf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x2fbf38: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x2fbf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x2fbf3c: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x2fbf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x2fbf40: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2fbf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2fbf44: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2fbf44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2fbf48: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2fbf48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2fbf4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fbf50: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2fbf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fbf54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fbf58: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x2fbf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x2fbf5c: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x2FBF5Cu;
    SET_GPR_U32(ctx, 31, 0x2FBF64u);
    ctx->pc = 0x2FBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF5Cu;
    // 0x2fbf60: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x2FBF5Cu, 0x2FBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF64u;
label_2fbf64:
    // 0x2fbf64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2fbf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2fbf68: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2fbf68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbf6c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2fbf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x2fbf70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fbf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fbf74: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2fbf74u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x511740u));
    // 0x2fbf78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fbf78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fbf7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fbf7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fbf80: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2fbf80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2fbf84: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2fbf84u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fbf88: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x2fbf88u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fbf8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2fbf8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2fbf90: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2fbf90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2fbf94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fbf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbf98: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2fbf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2fbf9c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fbf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fbfa0: 0xc0bf364  jal         func_2FCD90
    ctx->pc = 0x2FBFA0u;
    SET_GPR_U32(ctx, 31, 0x2FBFA8u);
    ctx->pc = 0x2FBFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBFA0u;
    // 0x2fbfa4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCD90u, 0x2FBFA0u, 0x2FBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBFA8u;
label_2fbfa8:
    // 0x2fbfa8: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2fbfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2fbfac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fbfacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2fbfb0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2FBFB0u;
    SET_GPR_U32(ctx, 31, 0x2FBFB8u);
    ctx->pc = 0x2FBFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBFB0u;
    // 0x2fbfb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2FBFB0u, 0x2FBFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBFB8u;
label_2fbfb8:
    // 0x2fbfb8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2fbfb8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2fbfbc: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x2fbfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x2fbfc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fbfc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fbfc4: 0x4615a528  max.s       $f20, $f20, $f21
    ctx->pc = 0x2fbfc4u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[21]);
    // 0x2fbfc8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2fbfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fbfcc: 0x0  nop
    ctx->pc = 0x2fbfccu;
    // NOP
    // 0x2fbfd0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2FBFD0u;
    {
        const bool branch_taken_0x2fbfd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFD0u;
        // 0x2fbfd4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbfd0) {
            ctx->pc = 0x2FC014u;
            goto label_2fc014;
        }
    }
    ctx->pc = 0x2FBFD8u;
    // 0x2fbfd8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2fbfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2fbfdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fbfdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fbfe0: 0x0  nop
    ctx->pc = 0x2fbfe0u;
    // NOP
    // 0x2fbfe4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2fbfe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fbfe8: 0x0  nop
    ctx->pc = 0x2fbfe8u;
    // NOP
    // 0x2fbfec: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBFECu;
    {
        const bool branch_taken_0x2fbfec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FBFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFECu;
        // 0x2fbff0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbfec) {
            ctx->pc = 0x2FC014u;
            goto label_2fc014;
        }
    }
    ctx->pc = 0x2FBFF4u;
    // 0x2fbff4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2fbff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2fbff8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fbff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fbffc: 0x0  nop
    ctx->pc = 0x2fbffcu;
    // NOP
    // 0x2fc000: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x2fc000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc004: 0x0  nop
    ctx->pc = 0x2fc004u;
    // NOP
    // 0x2fc008: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC008u;
    {
        const bool branch_taken_0x2fc008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC008u;
        // 0x2fc00c: 0x24160003  addiu       $s6, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc008) {
            ctx->pc = 0x2FC014u;
            goto label_2fc014;
        }
    }
    ctx->pc = 0x2FC010u;
    // 0x2fc010: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2fc010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fc014:
    // 0x2fc014: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x2fc014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x2fc018: 0x26c30004  addiu       $v1, $s6, 0x4
    ctx->pc = 0x2fc018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2fc01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fc020: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2fc020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2fc024: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2fc024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2fc028: 0x62b018  mult        $s6, $v1, $v0
    ctx->pc = 0x2fc028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x2fc02c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fc02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc030: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2fc030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2fc034: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2fc034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2fc038: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2fc038u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fc03c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2fc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2fc040: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fc040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fc044: 0x0  nop
    ctx->pc = 0x2fc044u;
    // NOP
label_2fc048:
    // 0x2fc048: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x2fc048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fc04c: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2fc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2fc050: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2fc050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc054: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2fc054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2fc058: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2fc058u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2fc05c: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x2fc05cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fc060: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2fc060u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2fc064: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2fc064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc068: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2fc068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc06c: 0x574823  subu        $t1, $v0, $s7
    ctx->pc = 0x2fc06cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2fc070: 0xc08aaba  jal         func_22AAE8
    ctx->pc = 0x2FC070u;
    SET_GPR_U32(ctx, 31, 0x2FC078u);
    ctx->pc = 0x2FC074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC070u;
    // 0x2fc074: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AAE8u, 0x2FC070u, 0x2FC078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC078u;
label_2fc078:
    // 0x2fc078: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2fc078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc07c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fc07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc080: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FC080u;
    {
        const bool branch_taken_0x2fc080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC080u;
        // 0x2fc084: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc080) {
            ctx->pc = 0x2FC0B0u;
            goto label_2fc0b0;
        }
    }
    ctx->pc = 0x2FC088u;
label_2fc088:
    // 0x2fc088: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fc088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc08c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fc08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fc090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc094: 0xc093dc6  jal         func_24F718
    ctx->pc = 0x2FC094u;
    SET_GPR_U32(ctx, 31, 0x2FC09Cu);
    ctx->pc = 0x2FC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC094u;
    // 0x2fc098: 0x27a800d4  addiu       $t0, $sp, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F718u, 0x2FC094u, 0x2FC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC09Cu;
label_2fc09c:
    // 0x2fc09c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC09Cu;
    {
        const bool branch_taken_0x2fc09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc09c) {
            ctx->pc = 0x2FC0CCu;
            goto label_2fc0cc;
        }
    }
    ctx->pc = 0x2FC0A4u;
    // 0x2fc0a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2fc0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2fc0a8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2fc0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2fc0ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fc0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2fc0b0:
    // 0x2fc0b0: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x2fc0b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2fc0b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC0B4u;
    {
        const bool branch_taken_0x2fc0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc0b4) {
            ctx->pc = 0x2FC0CCu;
            goto label_2fc0cc;
        }
    }
    ctx->pc = 0x2FC0BCu;
    // 0x2fc0bc: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2FC0BCu;
    SET_GPR_U32(ctx, 31, 0x2FC0C4u);
    ctx->pc = 0x2FC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC0BCu;
    // 0x2fc0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2FC0BCu, 0x2FC0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0C4u;
label_2fc0c4:
    // 0x2fc0c4: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2FC0C4u;
    {
        const bool branch_taken_0x2fc0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc0c4) {
            ctx->pc = 0x2FC0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC0C4u;
            // 0x2fc0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc088;
        }
    }
    ctx->pc = 0x2FC0CCu;
label_2fc0cc:
    // 0x2fc0cc: 0x1253000e  beq         $s2, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x2FC0CCu;
    {
        const bool branch_taken_0x2fc0cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x2FC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0CCu;
        // 0x2fc0d0: 0xc7a100d0  lwc1        $f1, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0cc) {
            ctx->pc = 0x2FC108u;
            goto label_2fc108;
        }
    }
    ctx->pc = 0x2FC0D4u;
    // 0x2fc0d4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x2fc0d4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc0d8: 0x0  nop
    ctx->pc = 0x2fc0d8u;
    // NOP
    // 0x2fc0dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fc0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fc0e0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2fc0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2fc0e4: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x2fc0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x2fc0e8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2fc0e8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2fc0ec: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x2fc0ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc0f0: 0x0  nop
    ctx->pc = 0x2fc0f0u;
    // NOP
    // 0x2fc0f4: 0x4500ffd4  bc1f        . + 4 + (-0x2C << 2)
    ctx->pc = 0x2FC0F4u;
    {
        const bool branch_taken_0x2fc0f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0F4u;
        // 0x2fc0f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0f4) {
            ctx->pc = 0x2FC048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc048;
        }
    }
    ctx->pc = 0x2FC0FCu;
    // 0x2fc0fc: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2fc0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC100u;
    {
        const bool branch_taken_0x2fc100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC100u;
        // 0x2fc104: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc100) {
            ctx->pc = 0x2FC10Cu;
            goto label_2fc10c;
        }
    }
    ctx->pc = 0x2FC108u;
label_2fc108:
    // 0x2fc108: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2fc108u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2fc10c:
    // 0x2fc10c: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x2fc10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2fc110: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2fc110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2fc114: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2fc114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2fc118: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2fc118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2fc11c: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2fc11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2fc120: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2fc120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2fc124: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2fc124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2fc128: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x2fc128u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2fc12c: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x2fc12cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2fc130: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x2fc130u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fc134: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2fc134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2fc138: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2fc138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2fc13c: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2fc13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2fc140: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2fc140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fc144: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2fc144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fc148: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2fc148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fc14c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC14Cu;
        // 0x2fc150: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC154u;
    // 0x2fc154: 0x0  nop
    ctx->pc = 0x2fc154u;
    // NOP
    ctx->pc = 0x2fc158u;
}
