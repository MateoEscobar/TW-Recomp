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

// Function: sub_002F2088
// Address: 0x2f2088 - 0x2f2230
void sub_002F2088_0x2f2088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2088_0x2f2088");
#endif

    switch (ctx->pc) {
        case 0x2f2170u: goto label_2f2170;
        case 0x2f2184u: goto label_2f2184;
        case 0x2f2190u: goto label_2f2190;
        case 0x2f21a8u: goto label_2f21a8;
        case 0x2f21b4u: goto label_2f21b4;
        case 0x2f21c4u: goto label_2f21c4;
        case 0x2f21d4u: goto label_2f21d4;
        case 0x2f21dcu: goto label_2f21dc;
        case 0x2f21e4u: goto label_2f21e4;
        case 0x2f21f0u: goto label_2f21f0;
        case 0x2f21fcu: goto label_2f21fc;
        case 0x2f220cu: goto label_2f220c;
        case 0x2f2214u: goto label_2f2214;
        default: break;
    }

    ctx->pc = 0x2f2088u;

    // 0x2f2088: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f2088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f208c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f208cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f2090: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f2090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2f2094: 0x244416c0  addiu       $a0, $v0, 0x16C0
    ctx->pc = 0x2f2094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2f2098: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f2098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2f209c: 0x24a30090  addiu       $v1, $a1, 0x90
    ctx->pc = 0x2f209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x2f20a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f20a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f20a4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2f20a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f20a8: 0xc44116c0  lwc1        $f1, 0x16C0($v0)
    ctx->pc = 0x2f20a8u;
    { uint32_t bits = FAST_READ32(0x5116C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f20ac: 0xc4a00090  lwc1        $f0, 0x90($a1)
    ctx->pc = 0x2f20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f20b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f20b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f20b4: 0x0  nop
    ctx->pc = 0x2f20b4u;
    // NOP
    // 0x2f20b8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2F20B8u;
    {
        const bool branch_taken_0x2f20b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20B8u;
        // 0x2f20bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f20b8) {
            ctx->pc = 0x2F2108u;
            goto label_2f2108;
        }
    }
    ctx->pc = 0x2F20C0u;
    // 0x2f20c0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f20c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f20c4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2f20c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f20c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f20c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f20cc: 0x0  nop
    ctx->pc = 0x2f20ccu;
    // NOP
    // 0x2f20d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2F20D0u;
    {
        const bool branch_taken_0x2f20d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f20d0) {
            ctx->pc = 0x2F2108u;
            goto label_2f2108;
        }
    }
    ctx->pc = 0x2F20D8u;
    // 0x2f20d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2f20d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f20dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2f20dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f20e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f20e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f20e4: 0x0  nop
    ctx->pc = 0x2f20e4u;
    // NOP
    // 0x2f20e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2F20E8u;
    {
        const bool branch_taken_0x2f20e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f20e8) {
            ctx->pc = 0x2F2108u;
            goto label_2f2108;
        }
    }
    ctx->pc = 0x2F20F0u;
    // 0x2f20f0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2f20f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f20f4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2f20f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f20f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f20f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f20fc: 0x0  nop
    ctx->pc = 0x2f20fcu;
    // NOP
    // 0x2f2100: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2100u;
    {
        const bool branch_taken_0x2f2100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2100) {
            ctx->pc = 0x2F2104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2100u;
            // 0x2f2104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2108u;
            goto label_2f2108;
        }
    }
    ctx->pc = 0x2F2108u;
label_2f2108:
    // 0x2f2108: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F2108u;
    {
        const bool branch_taken_0x2f2108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2108u;
        // 0x2f210c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2108) {
            ctx->pc = 0x2F2218u;
            goto label_2f2218;
        }
    }
    ctx->pc = 0x2F2110u;
    // 0x2f2110: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2f2110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2f2114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2118: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f2118u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2f211c: 0x78a300a0  lq          $v1, 0xA0($a1)
    ctx->pc = 0x2f211cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x2f2120: 0x24b100a0  addiu       $s1, $a1, 0xA0
    ctx->pc = 0x2f2120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x2f2124: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f2124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2f2128: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f2128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f212c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f212cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f2130: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f2130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f2134: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2f2134u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f2138: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f213c: 0x78a20090  lq          $v0, 0x90($a1)
    ctx->pc = 0x2f213cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x2f2140: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f2140u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f2144: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f2144u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f2148: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f2148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f214c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f214cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f2150: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f2150u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f2154: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2f2154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2f2158: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2f2158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2f215c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f2160: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f2160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2f2164: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2f2164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2f2168: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2F2168u;
    SET_GPR_U32(ctx, 31, 0x2F2170u);
    ctx->pc = 0x2F216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2168u;
    // 0x2f216c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F2168u, 0x2F2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2170u;
label_2f2170:
    // 0x2f2170: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2f2170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2f2174: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f2174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f2178: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f217c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F217Cu;
    SET_GPR_U32(ctx, 31, 0x2F2184u);
    ctx->pc = 0x2F2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F217Cu;
    // 0x2f2180: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F217Cu, 0x2F2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2184u;
label_2f2184:
    // 0x2f2184: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f2188: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F2188u;
    SET_GPR_U32(ctx, 31, 0x2F2190u);
    ctx->pc = 0x2F218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2188u;
    // 0x2f218c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F2188u, 0x2F2190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2190u;
label_2f2190:
    // 0x2f2190: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f2190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f2194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f2194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2198: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f2198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2f219c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f219cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2f21a0: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2F21A0u;
    SET_GPR_U32(ctx, 31, 0x2F21A8u);
    ctx->pc = 0x2F21A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21A0u;
    // 0x2f21a4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2F21A0u, 0x2F21A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21A8u;
label_2f21a8:
    // 0x2f21a8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f21a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f21ac: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x2F21ACu;
    SET_GPR_U32(ctx, 31, 0x2F21B4u);
    ctx->pc = 0x2F21B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21ACu;
    // 0x2f21b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x2F21ACu, 0x2F21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21B4u;
label_2f21b4:
    // 0x2f21b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f21b8: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x2f21b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x2f21bc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x2F21BCu;
    SET_GPR_U32(ctx, 31, 0x2F21C4u);
    ctx->pc = 0x2F21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21BCu;
    // 0x2f21c0: 0x34a56964  ori         $a1, $a1, 0x6964 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26980);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F21BCu, 0x2F21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21C4u;
label_2f21c4:
    // 0x2f21c4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f21c8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f21c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f21cc: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x2F21CCu;
    SET_GPR_U32(ctx, 31, 0x2F21D4u);
    ctx->pc = 0x2F21D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21CCu;
    // 0x2f21d0: 0x24a57b48  addiu       $a1, $a1, 0x7B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x2F21CCu, 0x2F21D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21D4u;
label_2f21d4:
    // 0x2f21d4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2F21D4u;
    SET_GPR_U32(ctx, 31, 0x2F21DCu);
    ctx->pc = 0x2F21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21D4u;
    // 0x2f21d8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F21D4u, 0x2F21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21DCu;
label_2f21dc:
    // 0x2f21dc: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x2F21DCu;
    SET_GPR_U32(ctx, 31, 0x2F21E4u);
    ctx->pc = 0x2F21E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21DCu;
    // 0x2f21e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F21DCu, 0x2F21E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21E4u;
label_2f21e4:
    // 0x2f21e4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f21e8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x2F21E8u;
    SET_GPR_U32(ctx, 31, 0x2F21F0u);
    ctx->pc = 0x2F21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21E8u;
    // 0x2f21ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F21E8u, 0x2F21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21F0u;
label_2f21f0:
    // 0x2f21f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f21f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f21f4: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x2F21F4u;
    SET_GPR_U32(ctx, 31, 0x2F21FCu);
    ctx->pc = 0x2F21F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21F4u;
    // 0x2f21f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x2F21F4u, 0x2F21FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F21FCu;
label_2f21fc:
    // 0x2f21fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x2f2200: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f2200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f2204: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x2F2204u;
    SET_GPR_U32(ctx, 31, 0x2F220Cu);
    ctx->pc = 0x2F2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2204u;
    // 0x2f2208: 0x24a57b60  addiu       $a1, $a1, 0x7B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x2F2204u, 0x2F220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F220Cu;
label_2f220c:
    // 0x2f220c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x2F220Cu;
    SET_GPR_U32(ctx, 31, 0x2F2214u);
    ctx->pc = 0x2F2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F220Cu;
    // 0x2f2210: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F220Cu, 0x2F2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2214u;
label_2f2214:
    // 0x2f2214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2218:
    // 0x2f2218: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f2218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f221c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f221cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2220: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f2220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2224: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2f2224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f2228: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2228u;
        // 0x2f222c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2230u;
}
