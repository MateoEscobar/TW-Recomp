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

// Function: sub_002829E8
// Address: 0x2829e8 - 0x282b68
void sub_002829E8_0x2829e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002829E8_0x2829e8");
#endif

    switch (ctx->pc) {
        case 0x282a08u: goto label_282a08;
        case 0x282a18u: goto label_282a18;
        case 0x282a54u: goto label_282a54;
        case 0x282ad0u: goto label_282ad0;
        case 0x282af0u: goto label_282af0;
        case 0x282b30u: goto label_282b30;
        case 0x282b40u: goto label_282b40;
        default: break;
    }

    ctx->pc = 0x2829e8u;

    // 0x2829e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2829e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2829ec: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2829ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2829f0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2829f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2829f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2829f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829f8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2829f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2829fc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2829fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x282a00: 0xc089000  jal         func_224000
    ctx->pc = 0x282A00u;
    SET_GPR_U32(ctx, 31, 0x282A08u);
    ctx->pc = 0x282A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A00u;
    // 0x282a04: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x282A00u, 0x282A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A08u;
label_282a08:
    // 0x282a08: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x282A08u;
    {
        const bool branch_taken_0x282a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A08u;
        // 0x282a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a08) {
            ctx->pc = 0x282B4Cu;
            goto label_282b4c;
        }
    }
    ctx->pc = 0x282A10u;
    // 0x282a10: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x282A10u;
    SET_GPR_U32(ctx, 31, 0x282A18u);
    ctx->pc = 0x282A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A10u;
    // 0x282a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x282A10u, 0x282A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A18u;
label_282a18:
    // 0x282a18: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x282A18u;
    {
        const bool branch_taken_0x282a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A18u;
        // 0x282a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a18) {
            ctx->pc = 0x282B4Cu;
            goto label_282b4c;
        }
    }
    ctx->pc = 0x282A20u;
    // 0x282a20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x282a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x282a24: 0xc60101ac  lwc1        $f1, 0x1AC($s0)
    ctx->pc = 0x282a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282a28: 0xc440018c  lwc1        $f0, 0x18C($v0)
    ctx->pc = 0x282a28u;
    { uint32_t bits = FAST_READ32(0x51018Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282a2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x282a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282a30: 0x0  nop
    ctx->pc = 0x282a30u;
    // NOP
    // 0x282a34: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x282A34u;
    {
        const bool branch_taken_0x282a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x282A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A34u;
        // 0x282a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a34) {
            ctx->pc = 0x282B4Cu;
            goto label_282b4c;
        }
    }
    ctx->pc = 0x282A3Cu;
    // 0x282a3c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x282a3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x282a40: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x282a40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x282a44: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x282A44u;
    {
        const bool branch_taken_0x282a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A44u;
        // 0x282a48: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a44) {
            ctx->pc = 0x282B48u;
            goto label_282b48;
        }
    }
    ctx->pc = 0x282A4Cu;
    // 0x282a4c: 0xc08748a  jal         func_21D228
    ctx->pc = 0x282A4Cu;
    SET_GPR_U32(ctx, 31, 0x282A54u);
    ctx->pc = 0x282A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A4Cu;
    // 0x282a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D228u, 0x282A4Cu, 0x282A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A54u;
label_282a54:
    // 0x282a54: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x282a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x282a58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x282a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x282a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x282a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282a60: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x282a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282a64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x282a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x282a68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282a6c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x282a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x282a70: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x282a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x282a74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x282a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a78: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x282a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x282a7c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x282a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282a80: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x282a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x282a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a88: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x282a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x282a8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a90: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x282a90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x282a94: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x282a94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282a98: 0x7ba90080  lq          $t1, 0x80($sp)
    ctx->pc = 0x282a98u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282a9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x282a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x282aa0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x282aa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x282aa4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x282aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x282aa8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x282aa8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x282aac: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x282aacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x282ab0: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x282ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x282ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x282ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282ab8: 0x8d4447c4  lw          $a0, 0x47C4($t2)
    ctx->pc = 0x282ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 18372)));
    // 0x282abc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x282abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x282ac0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x282ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x282ac4: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x282ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x282ac8: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x282AC8u;
    SET_GPR_U32(ctx, 31, 0x282AD0u);
    ctx->pc = 0x282ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282AC8u;
    // 0x282acc: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x282AC8u, 0x282AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AD0u;
label_282ad0:
    // 0x282ad0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x282ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282ad4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x282AD4u;
    {
        const bool branch_taken_0x282ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AD4u;
        // 0x282ad8: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ad4) {
            ctx->pc = 0x282B24u;
            goto label_282b24;
        }
    }
    ctx->pc = 0x282ADCu;
    // 0x282adc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x282adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x282ae0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282AE0u;
    {
        const bool branch_taken_0x282ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x282AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AE0u;
        // 0x282ae4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ae0) {
            ctx->pc = 0x282B18u;
            goto label_282b18;
        }
    }
    ctx->pc = 0x282AE8u;
    // 0x282ae8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x282AE8u;
    SET_GPR_U32(ctx, 31, 0x282AF0u);
    ctx->pc = 0x282AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282AE8u;
    // 0x282aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x282AE8u, 0x282AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AF0u;
label_282af0:
    // 0x282af0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x282af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x282af4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282AF4u;
    {
        const bool branch_taken_0x282af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AF4u;
        // 0x282af8: 0x97a2005c  lhu         $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282af4) {
            ctx->pc = 0x282B08u;
            goto label_282b08;
        }
    }
    ctx->pc = 0x282AFCu;
    // 0x282afc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x282afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x282b00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282B00u;
    {
        const bool branch_taken_0x282b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282b00) {
            ctx->pc = 0x282B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282B00u;
            // 0x282b04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282B1Cu;
            goto label_282b1c;
        }
    }
    ctx->pc = 0x282B08u;
label_282b08:
    // 0x282b08: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x282b08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x282b0c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x282b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x282b10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x282B10u;
    {
        const bool branch_taken_0x282b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b10) {
            ctx->pc = 0x282B1Cu;
            goto label_282b1c;
        }
    }
    ctx->pc = 0x282B18u;
label_282b18:
    // 0x282b18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x282b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_282b1c:
    // 0x282b1c: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x282B1Cu;
    {
        const bool branch_taken_0x282b1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x282B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B1Cu;
        // 0x282b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b1c) {
            ctx->pc = 0x282B4Cu;
            goto label_282b4c;
        }
    }
    ctx->pc = 0x282B24u;
label_282b24:
    // 0x282b24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x282b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b28: 0xc08f6d2  jal         func_23DB48
    ctx->pc = 0x282B28u;
    SET_GPR_U32(ctx, 31, 0x282B30u);
    ctx->pc = 0x282B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B28u;
    // 0x282b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB48u, 0x282B28u, 0x282B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B30u;
label_282b30:
    // 0x282b30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282B30u;
    {
        const bool branch_taken_0x282b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B30u;
        // 0x282b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b30) {
            ctx->pc = 0x282B4Cu;
            goto label_282b4c;
        }
    }
    ctx->pc = 0x282B38u;
    // 0x282b38: 0xc08f714  jal         func_23DC50
    ctx->pc = 0x282B38u;
    SET_GPR_U32(ctx, 31, 0x282B40u);
    ctx->pc = 0x282B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282B38u;
    // 0x282b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC50u, 0x282B38u, 0x282B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282B40u;
label_282b40:
    // 0x282b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282B40u;
    {
        const bool branch_taken_0x282b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B40u;
        // 0x282b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b40) {
            ctx->pc = 0x282B4Cu;
            goto label_282b4c;
        }
    }
    ctx->pc = 0x282B48u;
label_282b48:
    // 0x282b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282b4c:
    // 0x282b4c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x282b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x282b50: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x282b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x282b54: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x282b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x282b58: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x282b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x282B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282B5Cu;
        // 0x282b60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282B64u;
    // 0x282b64: 0x0  nop
    ctx->pc = 0x282b64u;
    // NOP
    ctx->pc = 0x282b68u;
}
