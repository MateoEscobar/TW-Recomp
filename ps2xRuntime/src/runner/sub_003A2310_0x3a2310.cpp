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

// Function: sub_003A2310
// Address: 0x3a2310 - 0x3a2508
void sub_003A2310_0x3a2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2310_0x3a2310");
#endif

    switch (ctx->pc) {
        case 0x3a233cu: goto label_3a233c;
        case 0x3a2344u: goto label_3a2344;
        case 0x3a241cu: goto label_3a241c;
        case 0x3a2490u: goto label_3a2490;
        case 0x3a24a8u: goto label_3a24a8;
        default: break;
    }

    ctx->pc = 0x3a2310u;

    // 0x3a2310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a2314: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a2314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a2318: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a2318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a231c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2320: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3a2320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3a2324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a2328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a232c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3a232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a2330: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a2330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a2334: 0xc0e85a2  jal         func_3A1688
    ctx->pc = 0x3A2334u;
    SET_GPR_U32(ctx, 31, 0x3A233Cu);
    ctx->pc = 0x3A2338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2334u;
    // 0x3a2338: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1688u, 0x3A2334u, 0x3A233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A233Cu;
label_3a233c:
    // 0x3a233c: 0xc0e8568  jal         func_3A15A0
    ctx->pc = 0x3A233Cu;
    SET_GPR_U32(ctx, 31, 0x3A2344u);
    ctx->pc = 0x3A2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A233Cu;
    // 0x3a2340: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x3A233Cu, 0x3A2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2344u;
label_3a2344:
    // 0x3a2344: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3a2344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a2348: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x3a2348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x3a234c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3A234Cu;
    {
        const bool branch_taken_0x3a234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A234Cu;
        // 0x3a2350: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a234c) {
            ctx->pc = 0x3A241Cu;
            goto label_3a241c;
        }
    }
    ctx->pc = 0x3A2354u;
    // 0x3a2354: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x3a2354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3a2358: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2358u;
    {
        const bool branch_taken_0x3a2358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2358) {
            ctx->pc = 0x3A235Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2358u;
            // 0x3a235c: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A236Cu;
            goto label_3a236c;
        }
    }
    ctx->pc = 0x3A2360u;
    // 0x3a2360: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x3a2360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3a2364: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A2364u;
    {
        const bool branch_taken_0x3a2364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2364u;
        // 0x3a2368: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2364) {
            ctx->pc = 0x3A2398u;
            goto label_3a2398;
        }
    }
    ctx->pc = 0x3A236Cu;
label_3a236c:
    // 0x3a236c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x3a236cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3a2370: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x3a2370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a2374: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a2374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a2378: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3a2378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3a237c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x3a237cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a2380: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a2380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a2384: 0x4bc308a8  vadd.xyz    $vf2, $vf1, $vf3
    ctx->pc = 0x3a2384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a2388: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a2388u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a238c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a238cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a2390: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3a2390u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x3a2394: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a2394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3a2398:
    // 0x3a2398: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3a2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a239c: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x3a239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x3a23a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A23A0u;
    {
        const bool branch_taken_0x3a23a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23A0u;
        // 0x3a23a4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23a0) {
            ctx->pc = 0x3A23B4u;
            goto label_3a23b4;
        }
    }
    ctx->pc = 0x3A23A8u;
    // 0x3a23a8: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x3a23a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3a23ac: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3A23ACu;
    {
        const bool branch_taken_0x3a23ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23ACu;
        // 0x3a23b0: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23ac) {
            ctx->pc = 0x3A241Cu;
            goto label_3a241c;
        }
    }
    ctx->pc = 0x3A23B4u;
label_3a23b4:
    // 0x3a23b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a23b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a23b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A23B8u;
    {
        const bool branch_taken_0x3a23b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a23b8) {
            ctx->pc = 0x3A23BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A23B8u;
            // 0x3a23bc: 0x7a020040  lq          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A23D8u;
            goto label_3a23d8;
        }
    }
    ctx->pc = 0x3A23C0u;
    // 0x3a23c0: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x3a23c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a23c4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3a23c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a23c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a23c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3a23cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a23ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a23d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A23D0u;
    {
        const bool branch_taken_0x3a23d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23D0u;
        // 0x3a23d4: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23d0) {
            ctx->pc = 0x3A241Cu;
            goto label_3a241c;
        }
    }
    ctx->pc = 0x3A23D8u;
label_3a23d8:
    // 0x3a23d8: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x3a23d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3a23dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a23dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a23e0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3a23e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3a23e4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a23e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3a23e8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a23e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3a23ec: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3a23ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3a23f0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x3a23f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x3a23f4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x3a23f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x3a23f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a23f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a23fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a23fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2400: 0x0  nop
    ctx->pc = 0x3a2400u;
    // NOP
    // 0x3a2404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a2404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2408: 0x0  nop
    ctx->pc = 0x3a2408u;
    // NOP
    // 0x3a240c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3A240Cu;
    {
        const bool branch_taken_0x3a240c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A240Cu;
        // 0x3a2410: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a240c) {
            ctx->pc = 0x3A241Cu;
            goto label_3a241c;
        }
    }
    ctx->pc = 0x3A2414u;
    // 0x3a2414: 0xc0cd6c2  jal         func_335B08
    ctx->pc = 0x3A2414u;
    SET_GPR_U32(ctx, 31, 0x3A241Cu);
    ctx->pc = 0x3A2418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2414u;
    // 0x3a2418: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B08u, 0x3A2414u, 0x3A241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A241Cu;
label_3a241c:
    // 0x3a241c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a2420: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3a2420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3a2424: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a2424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a2428: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A2428u;
    {
        const bool branch_taken_0x3a2428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2428) {
            ctx->pc = 0x3A242Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2428u;
            // 0x3a242c: 0xde020050  ld          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2450u;
            goto label_3a2450;
        }
    }
    ctx->pc = 0x3A2430u;
    // 0x3a2430: 0x3c01417a  lui         $at, 0x417A
    ctx->pc = 0x3a2430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16762 << 16));
    // 0x3a2434: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x3a2434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x3a2438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a243c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x3a243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2440: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3a2440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3a2444: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2444u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2448: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x3a2448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3a244c: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x3a244cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
label_3a2450:
    // 0x3a2450: 0x34038800  ori         $v1, $zero, 0x8800
    ctx->pc = 0x3a2450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x3a2454: 0x31abc  dsll32      $v1, $v1, 10
    ctx->pc = 0x3a2454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 10));
    // 0x3a2458: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a2458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a245c: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A245Cu;
    {
        const bool branch_taken_0x3a245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a245c) {
            ctx->pc = 0x3A2460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A245Cu;
            // 0x3a2460: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A24E8u;
            goto label_3a24e8;
        }
    }
    ctx->pc = 0x3A2464u;
    // 0x3a2464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2468: 0x0  nop
    ctx->pc = 0x3a2468u;
    // NOP
    // 0x3a246c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3a246cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2470: 0x0  nop
    ctx->pc = 0x3a2470u;
    // NOP
    // 0x3a2474: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x3A2474u;
    {
        const bool branch_taken_0x3a2474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2474) {
            ctx->pc = 0x3A2478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2474u;
            // 0x3a2478: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A24E8u;
            goto label_3a24e8;
        }
    }
    ctx->pc = 0x3A247Cu;
    // 0x3a247c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3a247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x3a2480: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3a2480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x3a2484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a2484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a2488: 0xc12e66c  jal         func_4B99B0
    ctx->pc = 0x3A2488u;
    SET_GPR_U32(ctx, 31, 0x3A2490u);
    ctx->pc = 0x4B99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B99B0u, 0x3A2488u, 0x3A2490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2490u;
label_3a2490:
    // 0x3a2490: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3a2490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x3a2494: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a2494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a2498: 0x0  nop
    ctx->pc = 0x3a2498u;
    // NOP
    // 0x3a249c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3a249cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a24a0: 0xc12e5be  jal         func_4B96F8
    ctx->pc = 0x3A24A0u;
    SET_GPR_U32(ctx, 31, 0x3A24A8u);
    ctx->pc = 0x3A24A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24A0u;
    // 0x3a24a4: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B96F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B96F8u, 0x3A24A0u, 0x3A24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24A8u;
label_3a24a8:
    // 0x3a24a8: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x3a24a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3a24ac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a24acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a24b0: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x3a24b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3a24b4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a24b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a24b8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3a24b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3a24bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a24bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a24c0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a24c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a24c4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a24c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3a24c8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a24c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a24cc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3a24ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3a24d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a24d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a24d4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3a24d4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a24d8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3a24d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x3a24dc: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x3a24dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x3a24e0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3a24e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x3a24e4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a24e8:
    // 0x3a24e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3a24ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a24ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a24f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a24f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a24f4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3a24f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a24f8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3a24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x3a24fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a24fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a2500: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2500u;
        // 0x3a2504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2508u;
}
