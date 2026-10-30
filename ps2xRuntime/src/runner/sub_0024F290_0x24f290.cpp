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

// Function: sub_0024F290
// Address: 0x24f290 - 0x24f718
void sub_0024F290_0x24f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F290_0x24f290");
#endif

    switch (ctx->pc) {
        case 0x24f304u: goto label_24f304;
        case 0x24f330u: goto label_24f330;
        case 0x24f488u: goto label_24f488;
        case 0x24f59cu: goto label_24f59c;
        case 0x24f608u: goto label_24f608;
        default: break;
    }

    ctx->pc = 0x24f290u;

    // 0x24f290: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24f294: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x24f294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x24f298: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x24f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x24f29c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24f29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2a0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x24f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x24f2a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24f2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2a8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x24f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x24f2ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24f2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24f2b4: 0x30f3ffff  andi        $s3, $a3, 0xFFFF
    ctx->pc = 0x24f2b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x24f2b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24f2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2c0: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x24f2c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f2c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24f2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2c8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x24f2c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f2cc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x24f2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24f2d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24f2d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24f2d4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x24f2d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24f2d8: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x24f2d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24f2dc: 0x4bc3112f  vmini.xyz   $vf4, $vf2, $vf3
    ctx->pc = 0x24f2dcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24f2e0: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x24f2e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24f2e4: 0x4bc3116b  vmax.xyz    $vf5, $vf2, $vf3
    ctx->pc = 0x24f2e4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24f2e8: 0x48232000  qmfc2.ni    $v1, $vf4
    ctx->pc = 0x24f2e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24f2ec: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x24f2ecu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x24f2f0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x24f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x24f2f4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x24f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x24f2f8: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x24f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x24f2fc: 0xc0887e0  jal         func_221F80
    ctx->pc = 0x24F2FCu;
    SET_GPR_U32(ctx, 31, 0x24F304u);
    ctx->pc = 0x24F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F2FCu;
    // 0x24f300: 0x7fa80030  sq          $t0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221F80u, 0x24F2FCu, 0x24F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F304u;
label_24f304:
    // 0x24f304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f308: 0x104300fb  beq         $v0, $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x24F308u;
    {
        const bool branch_taken_0x24f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F308u;
        // 0x24f30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f308) {
            ctx->pc = 0x24F6F8u;
            goto label_24f6f8;
        }
    }
    ctx->pc = 0x24F310u;
    // 0x24f310: 0x120000f8  beqz        $s0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x24F310u;
    {
        const bool branch_taken_0x24f310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F310u;
        // 0x24f314: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f310) {
            ctx->pc = 0x24F6F4u;
            goto label_24f6f4;
        }
    }
    ctx->pc = 0x24F318u;
    // 0x24f318: 0x3c01417f  lui         $at, 0x417F
    ctx->pc = 0x24f318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16767 << 16));
    // 0x24f31c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x24f31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x24f320: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24f320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24f324: 0x8c49a220  lw          $t1, -0x5DE0($v0)
    ctx->pc = 0x24f324u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943264)));
    // 0x24f328: 0x96030048  lhu         $v1, 0x48($s0)
    ctx->pc = 0x24f328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24f32c: 0x0  nop
    ctx->pc = 0x24f32cu;
    // NOP
label_24f330:
    // 0x24f330: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x24f330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x24f334: 0x544000ed  bnel        $v0, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x24F334u;
    {
        const bool branch_taken_0x24f334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f334) {
            ctx->pc = 0x24F338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F334u;
            // 0x24f338: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F33Cu;
    // 0x24f33c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x24f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x24f340: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x24f340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24f344: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x24f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x24f348: 0x544000e8  bnel        $v0, $zero, . + 4 + (0xE8 << 2)
    ctx->pc = 0x24F348u;
    {
        const bool branch_taken_0x24f348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f348) {
            ctx->pc = 0x24F34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F348u;
            // 0x24f34c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F350u;
    // 0x24f350: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x24f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f354: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x24f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24f358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f35c: 0x0  nop
    ctx->pc = 0x24f35cu;
    // NOP
    // 0x24f360: 0x450300e2  bc1tl       . + 4 + (0xE2 << 2)
    ctx->pc = 0x24F360u;
    {
        const bool branch_taken_0x24f360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f360) {
            ctx->pc = 0x24F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F360u;
            // 0x24f364: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F368u;
    // 0x24f368: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x24f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f36c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x24f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f370: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24f370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f374: 0x0  nop
    ctx->pc = 0x24f374u;
    // NOP
    // 0x24f378: 0x450300dc  bc1tl       . + 4 + (0xDC << 2)
    ctx->pc = 0x24F378u;
    {
        const bool branch_taken_0x24f378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f378) {
            ctx->pc = 0x24F37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F378u;
            // 0x24f37c: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F380u;
    // 0x24f380: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x24f380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f384: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f388: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24f388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f38c: 0x0  nop
    ctx->pc = 0x24f38cu;
    // NOP
    // 0x24f390: 0x450300d6  bc1tl       . + 4 + (0xD6 << 2)
    ctx->pc = 0x24F390u;
    {
        const bool branch_taken_0x24f390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f390) {
            ctx->pc = 0x24F394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F390u;
            // 0x24f394: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F398u;
    // 0x24f398: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x24f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f39c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x24f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f3a0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x24f3a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f3a4: 0x0  nop
    ctx->pc = 0x24f3a4u;
    // NOP
    // 0x24f3a8: 0x450300d0  bc1tl       . + 4 + (0xD0 << 2)
    ctx->pc = 0x24F3A8u;
    {
        const bool branch_taken_0x24f3a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f3a8) {
            ctx->pc = 0x24F3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F3A8u;
            // 0x24f3ac: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F3B0u;
    // 0x24f3b0: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x24f3b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24f3b4: 0x4420083  bltzl       $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x24F3B4u;
    {
        const bool branch_taken_0x24f3b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24f3b4) {
            ctx->pc = 0x24F3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F3B4u;
            // 0x24f3b8: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F5C4u;
            goto label_24f5c4;
        }
    }
    ctx->pc = 0x24F3BCu;
    // 0x24f3bc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x24f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f3c0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x24f3c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24f3c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x24f3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f3c8: 0x46000ac6  mov.s       $f11, $f1
    ctx->pc = 0x24f3c8u;
    ctx->f[11] = FPU_MOV_S(ctx->f[1]);
    // 0x24f3cc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x24f3ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24f3d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24f3d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x24f3d4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x24f3d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24f3d8: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x24f3d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x24f3dc: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x24f3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x24f3e0: 0x0  nop
    ctx->pc = 0x24f3e0u;
    // NOP
    // 0x24f3e4: 0x0  nop
    ctx->pc = 0x24f3e4u;
    // NOP
    // 0x24f3e8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x24f3e8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x24f3ec: 0x0  nop
    ctx->pc = 0x24f3ecu;
    // NOP
    // 0x24f3f0: 0x0  nop
    ctx->pc = 0x24f3f0u;
    // NOP
    // 0x24f3f4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x24f3f4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x24f3f8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24f3f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24f3fc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x24f3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f400: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24f400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24f404: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24f404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24f408: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x24f408u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24f40c: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F40Cu;
    {
        const bool branch_taken_0x24f40c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x24F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F40Cu;
        // 0x24f410: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f40c) {
            ctx->pc = 0x24F420u;
            goto label_24f420;
        }
    }
    ctx->pc = 0x24F414u;
    // 0x24f414: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24f414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x24f418: 0x73823  negu        $a3, $a3
    ctx->pc = 0x24f418u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x24f41c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x24f41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_24f420:
    // 0x24f420: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x24F420u;
    {
        const bool branch_taken_0x24f420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f420) {
            ctx->pc = 0x24F424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F420u;
            // 0x24f424: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F428u;
    // 0x24f428: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x24f428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x24f42c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x24f42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24f430: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F430u;
    {
        const bool branch_taken_0x24f430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F430u;
        // 0x24f434: 0x24e2000f  addiu       $v0, $a3, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f430) {
            ctx->pc = 0x24F43Cu;
            goto label_24f43c;
        }
    }
    ctx->pc = 0x24F438u;
    // 0x24f438: 0x443823  subu        $a3, $v0, $a0
    ctx->pc = 0x24f438u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24f43c:
    // 0x24f43c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F43Cu;
    {
        const bool branch_taken_0x24f43c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F43Cu;
        // 0x24f440: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f43c) {
            ctx->pc = 0x24F454u;
            goto label_24f454;
        }
    }
    ctx->pc = 0x24F444u;
    // 0x24f444: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x24f444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x24f448: 0x4e000a7  bltz        $a3, . + 4 + (0xA7 << 2)
    ctx->pc = 0x24F448u;
    {
        const bool branch_taken_0x24f448 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x24F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F448u;
        // 0x24f44c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f448) {
            ctx->pc = 0x24F6E8u;
            goto label_24f6e8;
        }
    }
    ctx->pc = 0x24F450u;
    // 0x24f450: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24f450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24f454:
    // 0x24f454: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24f458: 0x84480028  lh          $t0, 0x28($v0)
    ctx->pc = 0x24f458u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x24f45c: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x24f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x24f460: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x24f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x24f464: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x24f464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f468: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F468u;
    {
        const bool branch_taken_0x24f468 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F468u;
        // 0x24f46c: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f468) {
            ctx->pc = 0x24F488u;
            goto label_24f488;
        }
    }
    ctx->pc = 0x24F470u;
    // 0x24f470: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x24f470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x24f474: 0x4e2009d  bltzl       $a3, . + 4 + (0x9D << 2)
    ctx->pc = 0x24F474u;
    {
        const bool branch_taken_0x24f474 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x24f474) {
            ctx->pc = 0x24F478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F474u;
            // 0x24f478: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F47Cu;
    // 0x24f47c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x24F47Cu;
    {
        const bool branch_taken_0x24f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F47Cu;
        // 0x24f480: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f47c) {
            ctx->pc = 0x24F59Cu;
            goto label_24f59c;
        }
    }
    ctx->pc = 0x24F484u;
    // 0x24f484: 0x0  nop
    ctx->pc = 0x24f484u;
    // NOP
label_24f488:
    // 0x24f488: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x24f488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f48c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x24f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x24f490: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x24f490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24f494: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24f494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f498: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F498u;
    {
        const bool branch_taken_0x24f498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f498) {
            ctx->pc = 0x24F49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F498u;
            // 0x24f49c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F4A0u;
            goto label_24f4a0;
        }
    }
    ctx->pc = 0x24F4A0u;
label_24f4a0:
    // 0x24f4a0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x24f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f4a4: 0x460b6201  sub.s       $f8, $f12, $f11
    ctx->pc = 0x24f4a4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x24f4a8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x24f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f4ac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x24f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f4b0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x24f4b0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f4b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24f4b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x24f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x24f4bc: 0x46010141  sub.s       $f5, $f0, $f1
    ctx->pc = 0x24f4bcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24f4c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24f4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f4c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24f4c8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x24f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f4cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24f4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4d0: 0x46020981  sub.s       $f6, $f1, $f2
    ctx->pc = 0x24f4d0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x24f4d4: 0x460359c1  sub.s       $f7, $f11, $f3
    ctx->pc = 0x24f4d4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x24f4d8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x24f4d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x24f4dc: 0x2810  mfhi        $a1
    ctx->pc = 0x24f4dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x24f4e0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x24f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x24f4e4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x24f4e8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x24f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f4ec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x24f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f4f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x24f4f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24f4f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24f4f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24f4f8: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x24f4f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x24f4fc: 0x46003882  mul.s       $f2, $f7, $f0
    ctx->pc = 0x24f4fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x24f500: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x24f500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x24f504: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x24f504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x24f508: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x24f508u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24f50c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x24f50cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24f510: 0x0  nop
    ctx->pc = 0x24f510u;
    // NOP
    // 0x24f514: 0x0  nop
    ctx->pc = 0x24f514u;
    // NOP
    // 0x24f518: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x24f518u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x24f51c: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x24f51cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f520: 0x0  nop
    ctx->pc = 0x24f520u;
    // NOP
    // 0x24f524: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x24F524u;
    {
        const bool branch_taken_0x24f524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F524u;
        // 0x24f528: 0x46001246  mov.s       $f9, $f2 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f524) {
            ctx->pc = 0x24F578u;
            goto label_24f578;
        }
    }
    ctx->pc = 0x24F52Cu;
    // 0x24f52c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f530: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24f530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24f534: 0x0  nop
    ctx->pc = 0x24f534u;
    // NOP
    // 0x24f538: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x24f538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f53c: 0x0  nop
    ctx->pc = 0x24f53cu;
    // NOP
    // 0x24f540: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x24F540u;
    {
        const bool branch_taken_0x24f540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f540) {
            ctx->pc = 0x24F578u;
            goto label_24f578;
        }
    }
    ctx->pc = 0x24F548u;
    // 0x24f548: 0x46053802  mul.s       $f0, $f7, $f5
    ctx->pc = 0x24f548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x24f54c: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x24f54cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x24f550: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24f550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24f554: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x24f554u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x24f558: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x24f558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f55c: 0x0  nop
    ctx->pc = 0x24f55cu;
    // NOP
    // 0x24f560: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F560u;
    {
        const bool branch_taken_0x24f560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f560) {
            ctx->pc = 0x24F578u;
            goto label_24f578;
        }
    }
    ctx->pc = 0x24F568u;
    // 0x24f568: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x24f568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f56c: 0x0  nop
    ctx->pc = 0x24f56cu;
    // NOP
    // 0x24f570: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24F570u;
    {
        const bool branch_taken_0x24f570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f570) {
            ctx->pc = 0x24F574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F570u;
            // 0x24f574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F578u;
            goto label_24f578;
        }
    }
    ctx->pc = 0x24F578u;
label_24f578:
    // 0x24f578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F578u;
    {
        const bool branch_taken_0x24f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F578u;
        // 0x24f57c: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f578) {
            ctx->pc = 0x24F5A0u;
            goto label_24f5a0;
        }
    }
    ctx->pc = 0x24F580u;
    // 0x24f580: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f588: 0x0  nop
    ctx->pc = 0x24f588u;
    // NOP
    // 0x24f58c: 0x46004832  c.eq.s      $f9, $f0
    ctx->pc = 0x24f58cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f590: 0x0  nop
    ctx->pc = 0x24f590u;
    // NOP
    // 0x24f594: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x24F594u;
    {
        const bool branch_taken_0x24f594 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F594u;
        // 0x24f598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f594) {
            ctx->pc = 0x24F6F8u;
            goto label_24f6f8;
        }
    }
    ctx->pc = 0x24F59Cu;
label_24f59c:
    // 0x24f59c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x24f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_24f5a0:
    // 0x24f5a0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x24f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x24f5a4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24f5a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f5a8: 0x463ffb7  bgezl       $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x24F5A8u;
    {
        const bool branch_taken_0x24f5a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x24f5a8) {
            ctx->pc = 0x24F5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F5A8u;
            // 0x24f5ac: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f488;
        }
    }
    ctx->pc = 0x24F5B0u;
    // 0x24f5b0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x24f5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x24f5b4: 0x4e3fff9  bgezl       $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24F5B4u;
    {
        const bool branch_taken_0x24f5b4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x24f5b4) {
            ctx->pc = 0x24F5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F5B4u;
            // 0x24f5b8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f59c;
        }
    }
    ctx->pc = 0x24F5BCu;
    // 0x24f5bc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24F5BCu;
    {
        const bool branch_taken_0x24f5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5BCu;
        // 0x24f5c0: 0x8e100020  lw          $s0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5bc) {
            ctx->pc = 0x24F6ECu;
            goto label_24f6ec;
        }
    }
    ctx->pc = 0x24F5C4u;
label_24f5c4:
    // 0x24f5c4: 0x18800048  blez        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x24F5C4u;
    {
        const bool branch_taken_0x24f5c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x24F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5C4u;
        // 0x24f5c8: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5c4) {
            ctx->pc = 0x24F6E8u;
            goto label_24f6e8;
        }
    }
    ctx->pc = 0x24F5CCu;
    // 0x24f5cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x24f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f5d0: 0xc64b0000  lwc1        $f11, 0x0($s2)
    ctx->pc = 0x24f5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24f5d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24f5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5d8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x24f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f5dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24f5dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5e0: 0xc6490004  lwc1        $f9, 0x4($s2)
    ctx->pc = 0x24f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24f5e4: 0x460b0201  sub.s       $f8, $f0, $f11
    ctx->pc = 0x24f5e4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
    // 0x24f5e8: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x24f5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24f5ec: 0x460909c1  sub.s       $f7, $f1, $f9
    ctx->pc = 0x24f5ecu;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x24f5f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f5f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24f5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24f5f8: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x24f5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x24f5fc: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x24f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x24f600: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24f600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24f604: 0x0  nop
    ctx->pc = 0x24f604u;
    // NOP
label_24f608:
    // 0x24f608: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x24F608u;
    {
        const bool branch_taken_0x24f608 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x24f608) {
            ctx->pc = 0x24F60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F608u;
            // 0x24f60c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F610u;
            goto label_24f610;
        }
    }
    ctx->pc = 0x24F610u;
label_24f610:
    // 0x24f610: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x24f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24f614: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x24f614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x24f618: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x24f618u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24f61c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f620: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x24f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f624: 0x46024941  sub.s       $f5, $f9, $f2
    ctx->pc = 0x24f624u;
    ctx->f[5] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x24f628: 0x46045981  sub.s       $f6, $f11, $f4
    ctx->pc = 0x24f628u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[4]);
    // 0x24f62c: 0x1810  mfhi        $v1
    ctx->pc = 0x24f62cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24f630: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24f630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x24f634: 0x1033021  addu        $a2, $t0, $v1
    ctx->pc = 0x24f634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x24f638: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x24f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f63c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x24f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f640: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x24f640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x24f644: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x24f644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x24f648: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x24f648u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x24f64c: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x24f64cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x24f650: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x24f650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x24f654: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x24f654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x24f658: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x24f658u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24f65c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x24f65cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24f660: 0x0  nop
    ctx->pc = 0x24f660u;
    // NOP
    // 0x24f664: 0x0  nop
    ctx->pc = 0x24f664u;
    // NOP
    // 0x24f668: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x24f668u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x24f66c: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x24f66cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f670: 0x0  nop
    ctx->pc = 0x24f670u;
    // NOP
    // 0x24f674: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x24F674u;
    {
        const bool branch_taken_0x24f674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F674u;
        // 0x24f678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f674) {
            ctx->pc = 0x24F6C8u;
            goto label_24f6c8;
        }
    }
    ctx->pc = 0x24F67Cu;
    // 0x24f67c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f680: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24f680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24f684: 0x0  nop
    ctx->pc = 0x24f684u;
    // NOP
    // 0x24f688: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x24f688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f68c: 0x0  nop
    ctx->pc = 0x24f68cu;
    // NOP
    // 0x24f690: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x24F690u;
    {
        const bool branch_taken_0x24f690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f690) {
            ctx->pc = 0x24F6C8u;
            goto label_24f6c8;
        }
    }
    ctx->pc = 0x24F698u;
    // 0x24f698: 0x46082802  mul.s       $f0, $f5, $f8
    ctx->pc = 0x24f698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x24f69c: 0x46073042  mul.s       $f1, $f6, $f7
    ctx->pc = 0x24f69cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x24f6a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24f6a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24f6a4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x24f6a4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x24f6a8: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x24f6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f6ac: 0x0  nop
    ctx->pc = 0x24f6acu;
    // NOP
    // 0x24f6b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24F6B0u;
    {
        const bool branch_taken_0x24f6b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f6b0) {
            ctx->pc = 0x24F6C8u;
            goto label_24f6c8;
        }
    }
    ctx->pc = 0x24F6B8u;
    // 0x24f6b8: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x24f6b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f6bc: 0x0  nop
    ctx->pc = 0x24f6bcu;
    // NOP
    // 0x24f6c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24F6C0u;
    {
        const bool branch_taken_0x24f6c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f6c0) {
            ctx->pc = 0x24F6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F6C0u;
            // 0x24f6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6C8u;
            goto label_24f6c8;
        }
    }
    ctx->pc = 0x24F6C8u;
label_24f6c8:
    // 0x24f6c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F6C8u;
    {
        const bool branch_taken_0x24f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f6c8) {
            ctx->pc = 0x24F6E0u;
            goto label_24f6e0;
        }
    }
    ctx->pc = 0x24F6D0u;
    // 0x24f6d0: 0x460c1032  c.eq.s      $f2, $f12
    ctx->pc = 0x24f6d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f6d4: 0x0  nop
    ctx->pc = 0x24f6d4u;
    // NOP
    // 0x24f6d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24F6D8u;
    {
        const bool branch_taken_0x24f6d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6D8u;
        // 0x24f6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6d8) {
            ctx->pc = 0x24F6F8u;
            goto label_24f6f8;
        }
    }
    ctx->pc = 0x24F6E0u;
label_24f6e0:
    // 0x24f6e0: 0x5c80ffc9  bgtzl       $a0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x24F6E0u;
    {
        const bool branch_taken_0x24f6e0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x24f6e0) {
            ctx->pc = 0x24F6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F6E0u;
            // 0x24f6e4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f608;
        }
    }
    ctx->pc = 0x24F6E8u;
label_24f6e8:
    // 0x24f6e8: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x24f6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24f6ec:
    // 0x24f6ec: 0x5600ff10  bnel        $s0, $zero, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x24F6ECu;
    {
        const bool branch_taken_0x24f6ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f6ec) {
            ctx->pc = 0x24F6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F6ECu;
            // 0x24f6f0: 0x96030048  lhu         $v1, 0x48($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f330;
        }
    }
    ctx->pc = 0x24F6F4u;
label_24f6f4:
    // 0x24f6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f6f8:
    // 0x24f6f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x24f6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24f6fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x24f6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24f700: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x24f700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24f704: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x24f704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24f708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f70c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F70Cu;
        // 0x24f710: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F714u;
    // 0x24f714: 0x0  nop
    ctx->pc = 0x24f714u;
    // NOP
    ctx->pc = 0x24f718u;
}
