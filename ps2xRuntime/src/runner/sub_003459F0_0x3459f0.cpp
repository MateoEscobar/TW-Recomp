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

// Function: sub_003459F0
// Address: 0x3459f0 - 0x345b90
void sub_003459F0_0x3459f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003459F0_0x3459f0");
#endif

    switch (ctx->pc) {
        case 0x345a90u: goto label_345a90;
        case 0x345ac8u: goto label_345ac8;
        case 0x345b18u: goto label_345b18;
        default: break;
    }

    ctx->pc = 0x3459f0u;

    // 0x3459f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3459f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3459f4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3459f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3459f8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3459f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3459fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3459fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a00: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x345a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x345a04: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x345a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345a08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x345a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x345a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x345a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a10: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x345a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x345a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a18: 0x78c70050  lq          $a3, 0x50($a2)
    ctx->pc = 0x345a18u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x345a1c: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x345a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345a20: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x345a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x345a24: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x345a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345a28: 0x79220010  lq          $v0, 0x10($t1)
    ctx->pc = 0x345a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x345a2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345a30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x345a30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345a34: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x345a34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345a38: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x345a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345a3c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x345a3cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345a40: 0xc4c20040  lwc1        $f2, 0x40($a2)
    ctx->pc = 0x345a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345a44: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x345a44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x345a48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x345a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345a4c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x345a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x345a50: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x345a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x345a54: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x345a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345a58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x345a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345a5c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x345a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x345a60: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x345a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345a64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x345a64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x345a68: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x345a68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x345a6c: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x345a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x345a70: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x345a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x345a74: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x345a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x345a78: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x345a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x345a7c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x345a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x345a80: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x345a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x345a84: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x345a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x345a88: 0xc0d2698  jal         func_349A60
    ctx->pc = 0x345A88u;
    SET_GPR_U32(ctx, 31, 0x345A90u);
    ctx->pc = 0x345A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A88u;
    // 0x345a8c: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A60u, 0x345A88u, 0x345A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A90u;
label_345a90:
    // 0x345a90: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x345A90u;
    {
        const bool branch_taken_0x345a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A90u;
        // 0x345a94: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a90) {
            ctx->pc = 0x345B74u;
            goto label_345b74;
        }
    }
    ctx->pc = 0x345A98u;
    // 0x345a98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x345a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x345a9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x345a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345aa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x345aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x345aa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x345aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345aac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x345aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x345ab0: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x345AB0u;
    {
        const bool branch_taken_0x345ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x345AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AB0u;
        // 0x345ab4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ab0) {
            ctx->pc = 0x345B5Cu;
            goto label_345b5c;
        }
    }
    ctx->pc = 0x345AB8u;
    // 0x345ab8: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x345ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x345abc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x345abcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x345ac0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x345ac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ac4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x345ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_345ac8:
    // 0x345ac8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x345ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x345acc: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x345accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x345ad0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x345ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345ad4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x345ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345ad8: 0x0  nop
    ctx->pc = 0x345ad8u;
    // NOP
    // 0x345adc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x345ADCu;
    {
        const bool branch_taken_0x345adc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345ADCu;
        // 0x345ae0: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345adc) {
            ctx->pc = 0x345AF8u;
            goto label_345af8;
        }
    }
    ctx->pc = 0x345AE4u;
    // 0x345ae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x345ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345ae8: 0x0  nop
    ctx->pc = 0x345ae8u;
    // NOP
    // 0x345aec: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x345AECu;
    {
        const bool branch_taken_0x345aec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AECu;
        // 0x345af0: 0x2466ffff  addiu       $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345aec) {
            ctx->pc = 0x345B50u;
            goto label_345b50;
        }
    }
    ctx->pc = 0x345AF4u;
    // 0x345af4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x345af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_345af8:
    // 0x345af8: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x345af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x345afc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x345afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345b00: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x345B00u;
    {
        const bool branch_taken_0x345b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B00u;
        // 0x345b04: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b00) {
            ctx->pc = 0x345B44u;
            goto label_345b44;
        }
    }
    ctx->pc = 0x345B08u;
    // 0x345b08: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x345b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x345b0c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x345b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x345b10: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x345b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x345b14: 0x0  nop
    ctx->pc = 0x345b14u;
    // NOP
label_345b18:
    // 0x345b18: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x345b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x345b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x345b20: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x345b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x345b24: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x345b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x345b28: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x345b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x345b2c: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x345b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x345b30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x345b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x345b34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x345b38: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x345b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345b3c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x345B3Cu;
    {
        const bool branch_taken_0x345b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B3Cu;
        // 0x345b40: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b3c) {
            ctx->pc = 0x345B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345b18;
        }
    }
    ctx->pc = 0x345B44u;
label_345b44:
    // 0x345b44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x345b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x345b48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x345b4c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x345b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_345b50:
    // 0x345b50: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x345b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345b54: 0x1467ffdc  bne         $v1, $a3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x345B54u;
    {
        const bool branch_taken_0x345b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x345B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B54u;
        // 0x345b58: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b54) {
            ctx->pc = 0x345AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345ac8;
        }
    }
    ctx->pc = 0x345B5Cu;
label_345b5c:
    // 0x345b5c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x345B5Cu;
    {
        const bool branch_taken_0x345b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B5Cu;
        // 0x345b60: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b5c) {
            ctx->pc = 0x345B74u;
            goto label_345b74;
        }
    }
    ctx->pc = 0x345B64u;
    // 0x345b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345b68: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x345b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x345b6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x345B6Cu;
    {
        const bool branch_taken_0x345b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B6Cu;
        // 0x345b70: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b6c) {
            ctx->pc = 0x345B78u;
            goto label_345b78;
        }
    }
    ctx->pc = 0x345B74u;
label_345b74:
    // 0x345b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345b78:
    // 0x345b78: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x345b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x345b7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x345b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x345b80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x345b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x345b84: 0x3e00008  jr          $ra
    ctx->pc = 0x345B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B84u;
        // 0x345b88: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345B8Cu;
    // 0x345b8c: 0x0  nop
    ctx->pc = 0x345b8cu;
    // NOP
    ctx->pc = 0x345b90u;
}
