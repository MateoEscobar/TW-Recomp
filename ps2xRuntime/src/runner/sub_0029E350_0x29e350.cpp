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

// Function: sub_0029E350
// Address: 0x29e350 - 0x29e470
void sub_0029E350_0x29e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E350_0x29e350");
#endif

    switch (ctx->pc) {
        case 0x29e384u: goto label_29e384;
        case 0x29e3a0u: goto label_29e3a0;
        case 0x29e400u: goto label_29e400;
        default: break;
    }

    ctx->pc = 0x29e350u;

    // 0x29e350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29e354: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x29e354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x29e358: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x29e358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x29e35c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29e35cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e360: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x29e360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x29e364: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x29e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e368: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x29e368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x29e36c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29e36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e370: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x29e370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x29e374: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29e374u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29e378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29e37c: 0xc0a791c  jal         func_29E470
    ctx->pc = 0x29E37Cu;
    SET_GPR_U32(ctx, 31, 0x29E384u);
    ctx->pc = 0x29E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E37Cu;
    // 0x29e380: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E470u, 0x29E37Cu, 0x29E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E384u;
label_29e384:
    // 0x29e384: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29e384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e388: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x29e388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x29e38c: 0x26024b00  addiu       $v0, $s0, 0x4B00
    ctx->pc = 0x29e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x29e390: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x29e394: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29e394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e398: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x29E398u;
    SET_GPR_U32(ctx, 31, 0x29E3A0u);
    ctx->pc = 0x29E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E398u;
    // 0x29e39c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x29E398u, 0x29E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3A0u;
label_29e3a0:
    // 0x29e3a0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E3A0u;
    {
        const bool branch_taken_0x29e3a0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x29E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3A0u;
        // 0x29e3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3a0) {
            ctx->pc = 0x29E3BCu;
            goto label_29e3bc;
        }
    }
    ctx->pc = 0x29E3A8u;
    // 0x29e3a8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x29e3a8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29e3ac: 0x0  nop
    ctx->pc = 0x29e3acu;
    // NOP
    // 0x29e3b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29e3b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29e3b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29E3B4u;
    {
        const bool branch_taken_0x29e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3B4u;
        // 0x29e3b8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3b4) {
            ctx->pc = 0x29E3DCu;
            goto label_29e3dc;
        }
    }
    ctx->pc = 0x29E3BCu;
label_29e3bc:
    // 0x29e3bc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x29e3c0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x29e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29e3c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29e3c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29e3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29e3cc: 0x0  nop
    ctx->pc = 0x29e3ccu;
    // NOP
    // 0x29e3d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29e3d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29e3d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29e3d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29e3d8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x29e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_29e3dc:
    // 0x29e3dc: 0x86500092  lh          $s0, 0x92($s2)
    ctx->pc = 0x29e3dcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x29e3e0: 0xc44c1a80  lwc1        $f12, 0x1A80($v0)
    ctx->pc = 0x29e3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e3e4: 0x24834b00  addiu       $v1, $a0, 0x4B00
    ctx->pc = 0x29e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x29e3e8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x29e3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x29e3ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29e3f0: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x29e3f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x29e3f4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x29e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29e3f8: 0xc0cd790  jal         func_335E40
    ctx->pc = 0x29E3F8u;
    SET_GPR_U32(ctx, 31, 0x29E400u);
    ctx->pc = 0x29E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3F8u;
    // 0x29e3fc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x29E3F8u, 0x29E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E400u;
label_29e400:
    // 0x29e400: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x29e400u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e404: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29e404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e408: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x29e408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29e40c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29e40cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29e410: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29e410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x29e414: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29e414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29e418: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29e418u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29e41c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x29e41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e420: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x29e420u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e424: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x29e424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x29e428: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29e428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29e42c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29e42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29e430: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29e430u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29e434: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x29e434u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29e438: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x29e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x29e43c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x29e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x29e440: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x29e440u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x29e444: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x29e444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e448: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x29e448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e44c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x29e44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e450: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29e450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e454: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x29e454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29e458: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x29e458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x29e45c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x29e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x29e460: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x29e460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x29e464: 0x3e00008  jr          $ra
    ctx->pc = 0x29E464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E464u;
        // 0x29e468: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E46Cu;
    // 0x29e46c: 0x0  nop
    ctx->pc = 0x29e46cu;
    // NOP
    ctx->pc = 0x29e470u;
}
