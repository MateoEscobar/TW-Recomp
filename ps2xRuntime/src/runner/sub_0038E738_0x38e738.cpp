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

// Function: sub_0038E738
// Address: 0x38e738 - 0x38e860
void sub_0038E738_0x38e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E738_0x38e738");
#endif

    switch (ctx->pc) {
        case 0x38e738u: goto label_38e738;
        case 0x38e73cu: goto label_38e73c;
        case 0x38e740u: goto label_38e740;
        case 0x38e744u: goto label_38e744;
        case 0x38e748u: goto label_38e748;
        case 0x38e74cu: goto label_38e74c;
        case 0x38e750u: goto label_38e750;
        case 0x38e754u: goto label_38e754;
        case 0x38e758u: goto label_38e758;
        case 0x38e75cu: goto label_38e75c;
        case 0x38e760u: goto label_38e760;
        case 0x38e764u: goto label_38e764;
        case 0x38e768u: goto label_38e768;
        case 0x38e76cu: goto label_38e76c;
        case 0x38e770u: goto label_38e770;
        case 0x38e774u: goto label_38e774;
        case 0x38e778u: goto label_38e778;
        case 0x38e77cu: goto label_38e77c;
        case 0x38e780u: goto label_38e780;
        case 0x38e784u: goto label_38e784;
        case 0x38e788u: goto label_38e788;
        case 0x38e78cu: goto label_38e78c;
        case 0x38e790u: goto label_38e790;
        case 0x38e794u: goto label_38e794;
        case 0x38e798u: goto label_38e798;
        case 0x38e79cu: goto label_38e79c;
        case 0x38e7a0u: goto label_38e7a0;
        case 0x38e7a4u: goto label_38e7a4;
        case 0x38e7a8u: goto label_38e7a8;
        case 0x38e7acu: goto label_38e7ac;
        case 0x38e7b0u: goto label_38e7b0;
        case 0x38e7b4u: goto label_38e7b4;
        case 0x38e7b8u: goto label_38e7b8;
        case 0x38e7bcu: goto label_38e7bc;
        case 0x38e7c0u: goto label_38e7c0;
        case 0x38e7c4u: goto label_38e7c4;
        case 0x38e7c8u: goto label_38e7c8;
        case 0x38e7ccu: goto label_38e7cc;
        case 0x38e7d0u: goto label_38e7d0;
        case 0x38e7d4u: goto label_38e7d4;
        case 0x38e7d8u: goto label_38e7d8;
        case 0x38e7dcu: goto label_38e7dc;
        case 0x38e7e0u: goto label_38e7e0;
        case 0x38e7e4u: goto label_38e7e4;
        case 0x38e7e8u: goto label_38e7e8;
        case 0x38e7ecu: goto label_38e7ec;
        case 0x38e7f0u: goto label_38e7f0;
        case 0x38e7f4u: goto label_38e7f4;
        case 0x38e7f8u: goto label_38e7f8;
        case 0x38e7fcu: goto label_38e7fc;
        case 0x38e800u: goto label_38e800;
        case 0x38e804u: goto label_38e804;
        case 0x38e808u: goto label_38e808;
        case 0x38e80cu: goto label_38e80c;
        case 0x38e810u: goto label_38e810;
        case 0x38e814u: goto label_38e814;
        case 0x38e818u: goto label_38e818;
        case 0x38e81cu: goto label_38e81c;
        case 0x38e820u: goto label_38e820;
        case 0x38e824u: goto label_38e824;
        case 0x38e828u: goto label_38e828;
        case 0x38e82cu: goto label_38e82c;
        case 0x38e830u: goto label_38e830;
        case 0x38e834u: goto label_38e834;
        case 0x38e838u: goto label_38e838;
        case 0x38e83cu: goto label_38e83c;
        case 0x38e840u: goto label_38e840;
        case 0x38e844u: goto label_38e844;
        case 0x38e848u: goto label_38e848;
        case 0x38e84cu: goto label_38e84c;
        case 0x38e850u: goto label_38e850;
        case 0x38e854u: goto label_38e854;
        case 0x38e858u: goto label_38e858;
        case 0x38e85cu: goto label_38e85c;
        default: break;
    }

    ctx->pc = 0x38e738u;

label_38e738:
    // 0x38e738: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x38e738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_38e73c:
    // 0x38e73c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x38e73cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_38e740:
    // 0x38e740: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x38e740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_38e744:
    // 0x38e744: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x38e744u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_38e748:
    // 0x38e748: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x38e748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_38e74c:
    // 0x38e74c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38e74cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e750:
    // 0x38e750: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x38e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_38e754:
    // 0x38e754: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x38e754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38e758:
    // 0x38e758: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x38e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_38e75c:
    // 0x38e75c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38e75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e760:
    // 0x38e760: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x38e760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_38e764:
    // 0x38e764: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38e764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e768:
    // 0x38e768: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x38e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_38e76c:
    // 0x38e76c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38e76cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e770:
    // 0x38e770: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x38e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_38e774:
    // 0x38e774: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x38e774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38e778:
    // 0x38e778: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x38e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_38e77c:
    // 0x38e77c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x38e77cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38e780:
    // 0x38e780: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38e780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38e784:
    // 0x38e784: 0x10000021  b           . + 4 + (0x21 << 2)
label_38e788:
    if (ctx->pc == 0x38E788u) {
        ctx->pc = 0x38E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E784u;
        // 0x38e788: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E78Cu;
        goto label_38e78c;
    }
    ctx->pc = 0x38E784u;
    {
        const bool branch_taken_0x38e784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E784u;
        // 0x38e788: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e784) {
            ctx->pc = 0x38E80Cu;
            goto label_38e80c;
        }
    }
    ctx->pc = 0x38E78Cu;
label_38e78c:
    // 0x38e78c: 0x0  nop
    ctx->pc = 0x38e78cu;
    // NOP
label_38e790:
    // 0x38e790: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x38e790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_38e794:
    // 0x38e794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38e798:
    // 0x38e798: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38e798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38e79c:
    // 0x38e79c: 0x5096001b  beql        $a0, $s6, . + 4 + (0x1B << 2)
label_38e7a0:
    if (ctx->pc == 0x38E7A0u) {
        ctx->pc = 0x38E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E79Cu;
        // 0x38e7a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7A4u;
        goto label_38e7a4;
    }
    ctx->pc = 0x38E79Cu;
    {
        const bool branch_taken_0x38e79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        if (branch_taken_0x38e79c) {
            ctx->pc = 0x38E7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E79Cu;
            // 0x38e7a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E80Cu;
            goto label_38e80c;
        }
    }
    ctx->pc = 0x38E7A4u;
label_38e7a4:
    // 0x38e7a4: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x38e7a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_38e7a8:
    // 0x38e7a8: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x38e7a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_38e7ac:
    // 0x38e7ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38e7acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38e7b0:
    // 0x38e7b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38e7b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38e7b4:
    // 0x38e7b4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38e7b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38e7b8:
    // 0x38e7b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38e7b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38e7bc:
    // 0x38e7bc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38e7bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38e7c0:
    // 0x38e7c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38e7c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38e7c4:
    // 0x38e7c4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x38e7c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38e7c8:
    // 0x38e7c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38e7c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38e7cc:
    // 0x38e7cc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38e7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38e7d0:
    // 0x38e7d0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38e7d0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_38e7d4:
    // 0x38e7d4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x38e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_38e7d8:
    // 0x38e7d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38e7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38e7dc:
    // 0x38e7dc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38e7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_38e7e0:
    // 0x38e7e0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x38e7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e7e4:
    // 0x38e7e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38e7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38e7e8:
    // 0x38e7e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_38e7ec:
    if (ctx->pc == 0x38E7ECu) {
        ctx->pc = 0x38E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7E8u;
        // 0x38e7ec: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E7F0u;
        goto label_38e7f0;
    }
    ctx->pc = 0x38E7E8u;
    {
        const bool branch_taken_0x38e7e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7E8u;
        // 0x38e7ec: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7e8) {
            ctx->pc = 0x38E808u;
            goto label_38e808;
        }
    }
    ctx->pc = 0x38E7F0u;
label_38e7f0:
    // 0x38e7f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38e7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_38e7f4:
    // 0x38e7f4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x38e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_38e7f8:
    // 0x38e7f8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x38e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_38e7fc:
    // 0x38e7fc: 0x237182b  sltu        $v1, $s1, $s7
    ctx->pc = 0x38e7fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_38e800:
    // 0x38e800: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_38e804:
    if (ctx->pc == 0x38E804u) {
        ctx->pc = 0x38E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E800u;
        // 0x38e804: 0x2828021  addu        $s0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E808u;
        goto label_38e808;
    }
    ctx->pc = 0x38E800u;
    {
        const bool branch_taken_0x38e800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E800u;
        // 0x38e804: 0x2828021  addu        $s0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e800) {
            ctx->pc = 0x38E82Cu;
            goto label_38e82c;
        }
    }
    ctx->pc = 0x38E808u;
label_38e808:
    // 0x38e808: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38e808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38e80c:
    // 0x38e80c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_38e810:
    // 0x38e810: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38e810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38e814:
    // 0x38e814: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38e818:
    // 0x38e818: 0x40f809  jalr        $v0
label_38e81c:
    if (ctx->pc == 0x38E81Cu) {
        ctx->pc = 0x38E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E818u;
        // 0x38e81c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E820u;
        goto label_38e820;
    }
    ctx->pc = 0x38E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E820u);
        ctx->pc = 0x38E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E818u;
        // 0x38e81c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E818u, 0x38E820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E820u;
label_38e820:
    // 0x38e820: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x38e820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38e824:
    // 0x38e824: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_38e828:
    if (ctx->pc == 0x38E828u) {
        ctx->pc = 0x38E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E824u;
        // 0x38e828: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E82Cu;
        goto label_38e82c;
    }
    ctx->pc = 0x38E824u;
    {
        const bool branch_taken_0x38e824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e824) {
            ctx->pc = 0x38E828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E824u;
            // 0x38e828: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e790;
        }
    }
    ctx->pc = 0x38E82Cu;
label_38e82c:
    // 0x38e82c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38e82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e830:
    // 0x38e830: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x38e830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38e834:
    // 0x38e834: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x38e834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38e838:
    // 0x38e838: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x38e838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38e83c:
    // 0x38e83c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x38e83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38e840:
    // 0x38e840: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x38e840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38e844:
    // 0x38e844: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x38e844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38e848:
    // 0x38e848: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x38e848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38e84c:
    // 0x38e84c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x38e84cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38e850:
    // 0x38e850: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38e850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38e854:
    // 0x38e854: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x38e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38e858:
    // 0x38e858: 0x3e00008  jr          $ra
label_38e85c:
    if (ctx->pc == 0x38E85Cu) {
        ctx->pc = 0x38E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E858u;
        // 0x38e85c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E860u;
        goto label_fallthrough_0x38e858;
    }
    ctx->pc = 0x38E858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E858u;
        // 0x38e85c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38e858:
    ctx->pc = 0x38E860u;
}
