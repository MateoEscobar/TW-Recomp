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

// Function: sub_0029DF78
// Address: 0x29df78 - 0x29e168
void sub_0029DF78_0x29df78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DF78_0x29df78");
#endif

    switch (ctx->pc) {
        case 0x29dfe8u: goto label_29dfe8;
        case 0x29e020u: goto label_29e020;
        case 0x29e030u: goto label_29e030;
        case 0x29e038u: goto label_29e038;
        case 0x29e040u: goto label_29e040;
        case 0x29e06cu: goto label_29e06c;
        default: break;
    }

    ctx->pc = 0x29df78u;

    // 0x29df78: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x29df78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x29df7c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x29df7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x29df80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29df80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29df84: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x29df84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x29df88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29df88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29df8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29df8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29df90: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x29df90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x29df94: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x29df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x29df98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29df9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29df9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfa0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x29dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x29dfa4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x29dfa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfa8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x29dfa8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x29dfac: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x29dfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x29dfb0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x29dfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x29dfb4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x29dfb8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x29dfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x29dfbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29dfbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfc0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x29dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x29dfc4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29dfc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfc8: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x29dfc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29dfcc: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x29dfccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x29dfd0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x29dfd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x29dfd4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x29dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x29dfd8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x29dfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x29dfdc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29dfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29dfe0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x29DFE0u;
    SET_GPR_U32(ctx, 31, 0x29DFE8u);
    ctx->pc = 0x29DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFE0u;
    // 0x29dfe4: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x29DFE0u, 0x29DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFE8u;
label_29dfe8:
    // 0x29dfe8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x29dfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x29dfec: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x29dfecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x29dff0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29dff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29dff4: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x29dff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x29dff8: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x29dff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x29dffc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x29dffcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29e000: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29e000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e004: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29e004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29e008: 0x3c013fc8  lui         $at, 0x3FC8
    ctx->pc = 0x29e008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16328 << 16));
    // 0x29e00c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29e00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29e010: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29e010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x29e014: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29e014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e018: 0xc087502  jal         func_21D408
    ctx->pc = 0x29E018u;
    SET_GPR_U32(ctx, 31, 0x29E020u);
    ctx->pc = 0x29E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E018u;
    // 0x29e01c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29E018u, 0x29E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E020u;
label_29e020:
    // 0x29e020: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x29e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x29e024: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x29e024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x29e028: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e02c: 0x0  nop
    ctx->pc = 0x29e02cu;
    // NOP
label_29e030:
    // 0x29e030: 0xc137826  jal         func_4DE098
    ctx->pc = 0x29E030u;
    SET_GPR_U32(ctx, 31, 0x29E038u);
    ctx->pc = 0x29E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E030u;
    // 0x29e034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29E030u, 0x29E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E038u;
label_29e038:
    // 0x29e038: 0xc0e409a  jal         func_390268
    ctx->pc = 0x29E038u;
    SET_GPR_U32(ctx, 31, 0x29E040u);
    ctx->pc = 0x29E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E038u;
    // 0x29e03c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x29E038u, 0x29E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E040u;
label_29e040:
    // 0x29e040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29e040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e044: 0x52200034  beql        $s1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x29E044u;
    {
        const bool branch_taken_0x29e044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e044) {
            ctx->pc = 0x29E048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E044u;
            // 0x29e048: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E118u;
            goto label_29e118;
        }
    }
    ctx->pc = 0x29E04Cu;
    // 0x29e04c: 0x12340031  beq         $s1, $s4, . + 4 + (0x31 << 2)
    ctx->pc = 0x29E04Cu;
    {
        const bool branch_taken_0x29e04c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x29E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E04Cu;
        // 0x29e050: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e04c) {
            ctx->pc = 0x29E114u;
            goto label_29e114;
        }
    }
    ctx->pc = 0x29E054u;
    // 0x29e054: 0x27d24b00  addiu       $s2, $fp, 0x4B00
    ctx->pc = 0x29e054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
    // 0x29e058: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x29e058u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x29e05c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e060: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x29e060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x29e064: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x29E064u;
    SET_GPR_U32(ctx, 31, 0x29E06Cu);
    ctx->pc = 0x29E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E064u;
    // 0x29e068: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29E064u, 0x29E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E06Cu;
label_29e06c:
    // 0x29e06c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29e06cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x29e070: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x29e070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e074: 0x0  nop
    ctx->pc = 0x29e074u;
    // NOP
    // 0x29e078: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x29E078u;
    {
        const bool branch_taken_0x29e078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E078u;
        // 0x29e07c: 0x7ba40000  lq          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e078) {
            ctx->pc = 0x29E0FCu;
            goto label_29e0fc;
        }
    }
    ctx->pc = 0x29E080u;
    // 0x29e080: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x29e080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x29e084: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29e084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29e088: 0x7ae50000  lq          $a1, 0x0($s7)
    ctx->pc = 0x29e088u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x29e08c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x29e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x29e090: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29e090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29e094: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29e094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29e098: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29e098u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x29e09c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29e09cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29e0a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29e0a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29e0a4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29e0a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29e0a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29e0a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29e0ac: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29e0acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29e0b0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29e0b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29e0b4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29e0b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29e0b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29e0b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x29e0bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x29e0bcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x29e0c0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29e0c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29e0c4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29e0c4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29e0c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29e0cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29e0ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29e0d0: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x29e0d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x29e0d4: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x29e0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29e0d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29e0d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29e0dc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x29e0dcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x29e0e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29e0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x29e0e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x29e0e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e0e8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29e0ec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x29e0ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e0f0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x29e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x29e0f4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x29E0F4u;
    {
        const bool branch_taken_0x29e0f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0F4u;
        // 0x29e0f8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0f4) {
            ctx->pc = 0x29E114u;
            goto label_29e114;
        }
    }
    ctx->pc = 0x29E0FCu;
label_29e0fc:
    // 0x29e0fc: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x29e0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e100: 0x0  nop
    ctx->pc = 0x29e100u;
    // NOP
    // 0x29e104: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x29E104u;
    {
        const bool branch_taken_0x29e104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e104) {
            ctx->pc = 0x29E108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E104u;
            // 0x29e108: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E118u;
            goto label_29e118;
        }
    }
    ctx->pc = 0x29E10Cu;
    // 0x29e10c: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x29e10cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x29e110: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e114:
    // 0x29e114: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29e114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29e118:
    // 0x29e118: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x29e118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x29e11c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x29E11Cu;
    {
        const bool branch_taken_0x29e11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E11Cu;
        // 0x29e120: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e11c) {
            ctx->pc = 0x29E030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e030;
        }
    }
    ctx->pc = 0x29E124u;
    // 0x29e124: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x29e124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e128: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x29e128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29e12c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x29e12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29e130: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x29e130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29e134: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x29e134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29e138: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x29e138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e13c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x29e13cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e140: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x29e140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e144: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29e144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e148: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x29e148u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e14c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29e14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e150: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x29e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29e154: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x29e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29e158: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x29e158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29e15c: 0x3e00008  jr          $ra
    ctx->pc = 0x29E15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E15Cu;
        // 0x29e160: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E164u;
    // 0x29e164: 0x0  nop
    ctx->pc = 0x29e164u;
    // NOP
    ctx->pc = 0x29e168u;
}
