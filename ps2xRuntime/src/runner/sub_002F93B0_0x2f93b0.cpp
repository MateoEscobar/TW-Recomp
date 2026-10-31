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

// Function: sub_002F93B0
// Address: 0x2f93b0 - 0x2f95e0
void sub_002F93B0_0x2f93b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F93B0_0x2f93b0");
#endif

    switch (ctx->pc) {
        case 0x2f9408u: goto label_2f9408;
        case 0x2f953cu: goto label_2f953c;
        case 0x2f95b8u: goto label_2f95b8;
        default: break;
    }

    ctx->pc = 0x2f93b0u;

    // 0x2f93b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2f93b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2f93b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f93b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93b8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2f93b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2f93bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f93bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93c0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2f93c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2f93c4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2f93c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f93c8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2f93c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2f93cc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2f93ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x2f93d0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2f93d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2f93d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f93d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93d8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2f93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2f93dc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2f93dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2f93e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f93e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f93e4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2f93e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f93e8: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x2f93e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2f93ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f93ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f93f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f93f4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2f93f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f93f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f93f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93fc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2f93fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f9400: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2F9400u;
    SET_GPR_U32(ctx, 31, 0x2F9408u);
    ctx->pc = 0x2F9404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9400u;
    // 0x2f9404: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2F9400u, 0x2F9408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9408u;
label_2f9408:
    // 0x2f9408: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f9408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f940c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F940Cu;
    {
        const bool branch_taken_0x2f940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F940Cu;
        // 0x2f9410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f940c) {
            ctx->pc = 0x2F94C8u;
            goto label_2f94c8;
        }
    }
    ctx->pc = 0x2F9414u;
    // 0x2f9414: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f9414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f9418: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f9418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f941c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2f941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9420: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x2f9420u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9424: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f9424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f9428: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2f9428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f942c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2f942cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f9430: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2f9430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2f9434: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f9434u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9438: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f9438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f943c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2f943cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f9440: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x2f9440u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2f9444: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f9444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f9448: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2f9448u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2f944c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f944cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f9450: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f9450u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f9454: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2f9454u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f9458: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x2f9458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x2f945c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f945cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f9460: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f9460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9464: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f9464u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f9468: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f9468u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f946c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f946cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f9470: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x2f9470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x2f9474: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f9474u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9478: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2f9478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f947c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2f947cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f9480: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2f9480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2f9484: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2f9484u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2f9488: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f9488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2f948c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2f948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x2f9490: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f9490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2f9494: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2f9494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2f9498: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2f9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2f949c: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x2f949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x2f94a0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f94a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f94a4: 0xc4400144  lwc1        $f0, 0x144($v0)
    ctx->pc = 0x2f94a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f94a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f94a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f94ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f94acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2f94b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f94b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f94b4: 0x0  nop
    ctx->pc = 0x2f94b4u;
    // NOP
    // 0x2f94b8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2F94B8u;
    {
        const bool branch_taken_0x2f94b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94B8u;
        // 0x2f94bc: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94b8) {
            ctx->pc = 0x2F950Cu;
            goto label_2f950c;
        }
    }
    ctx->pc = 0x2F94C0u;
    // 0x2f94c0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2F94C0u;
    {
        const bool branch_taken_0x2f94c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F94C0u;
        // 0x2f94c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94c0) {
            ctx->pc = 0x2F95C4u;
            goto label_2f95c4;
        }
    }
    ctx->pc = 0x2F94C8u;
label_2f94c8:
    // 0x2f94c8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2f94c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f94cc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f94ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f94d0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f94d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f94d4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2f94d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f94d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f94d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f94dc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f94dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f94e0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2f94e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f94e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f94e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f94e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f94e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f94ec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f94ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f94f0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f94f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f94f4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f94f4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f94f8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f94f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2f94fc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2f94fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2f9500: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2f9500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x2f9504: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2f9504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2f9508: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2f9508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2f950c:
    // 0x2f950c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f9510: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2f9510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2f9514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9518: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x2f9518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x2f951c: 0x8e2447c4  lw          $a0, 0x47C4($s1)
    ctx->pc = 0x2f951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18372)));
    // 0x2f9520: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f9520u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511770u));
    // 0x2f9524: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f9524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9528: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f9528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f952c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f952cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9530: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2f9530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2f9534: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2F9534u;
    SET_GPR_U32(ctx, 31, 0x2F953Cu);
    ctx->pc = 0x2F9538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9534u;
    // 0x2f9538: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2F9534u, 0x2F953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F953Cu;
label_2f953c:
    // 0x2f953c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9540: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F9540u;
    {
        const bool branch_taken_0x2f9540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9540u;
        // 0x2f9544: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9540) {
            ctx->pc = 0x2F95C0u;
            goto label_2f95c0;
        }
    }
    ctx->pc = 0x2F9548u;
    // 0x2f9548: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2f9548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f954c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f9550: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f9550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f9554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f9554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f955c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f955cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9560: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f9560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f9564: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2f9564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f9568: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2f9568u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f956c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2f956cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f9570: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2f9570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f9574: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2f9574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2f9578: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f9578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f957c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2f957cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f9580: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2f9580u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2f9584: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f9584u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2f9588: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2f9588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f958c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2f958cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2f9590: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2f9590u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2f9594: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2f9594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2f9598: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x2f9598u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x2f959c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2f959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2f95a0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x2f95a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x2f95a4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x2f95a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x2f95a8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2f95a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2f95ac: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2f95acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f95b0: 0xc088878  jal         func_2221E0
    ctx->pc = 0x2F95B0u;
    SET_GPR_U32(ctx, 31, 0x2F95B8u);
    ctx->pc = 0x2F95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F95B0u;
    // 0x2f95b4: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x2F95B0u, 0x2F95B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F95B8u;
label_2f95b8:
    // 0x2f95b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F95B8u;
    {
        const bool branch_taken_0x2f95b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95B8u;
        // 0x2f95bc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f95b8) {
            ctx->pc = 0x2F95C8u;
            goto label_2f95c8;
        }
    }
    ctx->pc = 0x2F95C0u;
label_2f95c0:
    // 0x2f95c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f95c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f95c4:
    // 0x2f95c4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2f95c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2f95c8:
    // 0x2f95c8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2f95c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f95cc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2f95ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f95d0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2f95d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f95d4: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2f95d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f95d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F95D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F95D8u;
        // 0x2f95dc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F95D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F95E0u;
}
