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

// Function: sub_00275678
// Address: 0x275678 - 0x2759c0
void sub_00275678_0x275678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275678_0x275678");
#endif

    switch (ctx->pc) {
        case 0x2756ccu: goto label_2756cc;
        case 0x2756e4u: goto label_2756e4;
        case 0x2756f0u: goto label_2756f0;
        case 0x27570cu: goto label_27570c;
        case 0x275720u: goto label_275720;
        case 0x275950u: goto label_275950;
        case 0x275964u: goto label_275964;
        case 0x275970u: goto label_275970;
        case 0x275978u: goto label_275978;
        case 0x275988u: goto label_275988;
        case 0x275998u: goto label_275998;
        default: break;
    }

    ctx->pc = 0x275678u;

    // 0x275678: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x275678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x27567c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x275680: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x275680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x275684: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x275684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x275688: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x275688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x27568c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27568cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275690: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x275690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x275694: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x275694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275698: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x275698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x27569c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27569cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756a0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2756a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2756a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2756a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756a8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2756a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2756ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2756acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756b0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2756b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2756b4: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2756b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2756b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2756b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2756bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2756bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2756c0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2756c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2756c4: 0xc0e87c0  jal         func_3A1F00
    ctx->pc = 0x2756C4u;
    SET_GPR_U32(ctx, 31, 0x2756CCu);
    ctx->pc = 0x2756C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2756C4u;
    // 0x2756c8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x2756C4u, 0x2756CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756CCu;
label_2756cc:
    // 0x2756cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2756ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2756d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2756d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2756d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2756d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2756d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756dc: 0xc089aa8  jal         func_226AA0
    ctx->pc = 0x2756DCu;
    SET_GPR_U32(ctx, 31, 0x2756E4u);
    ctx->pc = 0x2756E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2756DCu;
    // 0x2756e0: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226AA0u, 0x2756DCu, 0x2756E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756E4u;
label_2756e4:
    // 0x2756e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2756e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2756e8: 0xc040596  jal         func_101658
    ctx->pc = 0x2756E8u;
    SET_GPR_U32(ctx, 31, 0x2756F0u);
    ctx->pc = 0x2756ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2756E8u;
    // 0x2756ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x2756E8u, 0x2756F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756F0u;
label_2756f0:
    // 0x2756f0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2756f4: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2756f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
    // 0x2756f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2756f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2756fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2756fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275700: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275704: 0xc095128  jal         func_2544A0
    ctx->pc = 0x275704u;
    SET_GPR_U32(ctx, 31, 0x27570Cu);
    ctx->pc = 0x275708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275704u;
    // 0x275708: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x275704u, 0x27570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27570Cu;
label_27570c:
    // 0x27570c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27570cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x275710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275718: 0xc095106  jal         func_254418
    ctx->pc = 0x275718u;
    SET_GPR_U32(ctx, 31, 0x275720u);
    ctx->pc = 0x27571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275718u;
    // 0x27571c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x275718u, 0x275720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275720u;
label_275720:
    // 0x275720: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x275720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275724: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x275724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x275728: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x275728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x27572c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x27572cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x275730: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x275730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275734: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x275734u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27573c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27573cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275740: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x275740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x275744: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x275744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x275748: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x275748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27574c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x27574cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x275750: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x275750u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x275754: 0x4a0003bf  vwaitq
    ctx->pc = 0x275754u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x275758: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x275758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x27575c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x27575cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x275760: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x275760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x275764: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x275764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x275768: 0x0  nop
    ctx->pc = 0x275768u;
    // NOP
    // 0x27576c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x27576cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275770: 0x0  nop
    ctx->pc = 0x275770u;
    // NOP
    // 0x275774: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x275774u;
    {
        const bool branch_taken_0x275774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275774u;
        // 0x275778: 0x7fa50060  sq          $a1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275774) {
            ctx->pc = 0x275890u;
            goto label_275890;
        }
    }
    ctx->pc = 0x27577Cu;
    // 0x27577c: 0x7ba60070  lq          $a2, 0x70($sp)
    ctx->pc = 0x27577cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275780: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x275780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x275784: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x275784u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x275788: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x275788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27578c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x27578cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x275790: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x275790u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x275794: 0x7ba70050  lq          $a3, 0x50($sp)
    ctx->pc = 0x275794u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275798: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x275798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x27579c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x27579cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2757a0: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x2757a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2757a4: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x2757a4u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2757a8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2757a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2757ac: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2757acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2757b0: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2757b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2757b4: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x2757b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2757b8: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x2757b8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2757bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2757bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2757c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2757c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2757c4: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2757c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2757c8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2757c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2757cc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2757ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2757d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2757d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2757d4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2757d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2757d8: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2757d8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2757dc: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x2757dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x2757e0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2757e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2757e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2757e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2757e8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2757e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2757ec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2757ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2757f0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2757f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x2757f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2757f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2757f8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2757f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2757fc: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x2757fcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x275800: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x275800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x275804: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x275804u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275808: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x275808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x27580c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27580cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275810: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x275810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x275814: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x275814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x275818: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x275818u;
    {
        const bool branch_taken_0x275818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275818u;
        // 0x27581c: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275818) {
            ctx->pc = 0x275888u;
            goto label_275888;
        }
    }
    ctx->pc = 0x275820u;
    // 0x275820: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x275820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x275824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275828: 0x0  nop
    ctx->pc = 0x275828u;
    // NOP
    // 0x27582c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x27582cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x275830: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x275830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x275834: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x275834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x275838: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x275838u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x27583c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x27583cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275840: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x275840u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275844: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x275844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x275848: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275848u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x27584c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x27584cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x275850: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x275850u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x275854: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x275854u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x275858: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x275858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x27585c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x27585cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x275860: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x275860u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x275864: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x275864u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x275868: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x275868u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x27586c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x27586cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x275870: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x275870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x275874: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x275874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x275878: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x275878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x27587c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x27587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x275880: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x275880u;
    {
        const bool branch_taken_0x275880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275880u;
        // 0x275884: 0x7fa400a0  sq          $a0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275880) {
            ctx->pc = 0x2758D0u;
            goto label_2758d0;
        }
    }
    ctx->pc = 0x275888u;
label_275888:
    // 0x275888: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x275888u;
    {
        const bool branch_taken_0x275888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275888u;
        // 0x27588c: 0x7fa40070  sq          $a0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275888) {
            ctx->pc = 0x2758D0u;
            goto label_2758d0;
        }
    }
    ctx->pc = 0x275890u;
label_275890:
    // 0x275890: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x275890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275894: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x275894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x275898: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x275898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x27589c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x27589cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2758a0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2758a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2758a4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2758a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2758a8: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x2758a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2758ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2758acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2758b0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2758b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2758b4: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x2758b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2758b8: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x2758b8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2758bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2758bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2758c0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2758c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x2758c4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2758c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2758c8: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2758c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2758cc: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2758ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_2758d0:
    // 0x2758d0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2758d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2758d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2758d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2758d8: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x2758d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2758dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2758dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2758e0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2758e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2758e4: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x2758e4u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2758e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2758e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2758ec: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x2758ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2758f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2758f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2758f4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2758f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2758f8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2758f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2758fc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2758fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x275900: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x275900u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x275904: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x275904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275908: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x275908u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27590c: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x27590cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275910: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x275910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x275914: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x275914u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x275918: 0x4b8208ac  vsub.xy     $vf2, $vf1, $vf2
    ctx->pc = 0x275918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x27591c: 0x4a62033c  vmove.zw    $vf2, $vf0
    ctx->pc = 0x27591cu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x275920: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x275920u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x275924: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x275924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x275928: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x275928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27592c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x27592cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x275930: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x275930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x275934: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x275934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x275938: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x275938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27593c: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x27593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x275940: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x275940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x275944: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x275944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x275948: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x275948u;
    SET_GPR_U32(ctx, 31, 0x275950u);
    ctx->pc = 0x27594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275948u;
    // 0x27594c: 0x7fa30080  sq          $v1, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x275948u, 0x275950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275950u;
label_275950:
    // 0x275950: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x275950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275954: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x275954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x275958: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x275958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27595c: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x27595Cu;
    SET_GPR_U32(ctx, 31, 0x275964u);
    ctx->pc = 0x275960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27595Cu;
    // 0x275960: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x27595Cu, 0x275964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275964u;
label_275964:
    // 0x275964: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x275964u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x275968: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x275968u;
    SET_GPR_U32(ctx, 31, 0x275970u);
    ctx->pc = 0x27596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275968u;
    // 0x27596c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x275968u, 0x275970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275970u;
label_275970:
    // 0x275970: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x275970u;
    SET_GPR_U32(ctx, 31, 0x275978u);
    ctx->pc = 0x275974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275970u;
    // 0x275974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x275970u, 0x275978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275978u;
label_275978:
    // 0x275978: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x275978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27597c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275980: 0xc08f3e2  jal         func_23CF88
    ctx->pc = 0x275980u;
    SET_GPR_U32(ctx, 31, 0x275988u);
    ctx->pc = 0x275984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275980u;
    // 0x275984: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x275980u, 0x275988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275988u;
label_275988:
    // 0x275988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27598c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27598cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x275990: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x275990u;
    SET_GPR_U32(ctx, 31, 0x275998u);
    ctx->pc = 0x275994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275990u;
    // 0x275994: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x275990u, 0x275998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275998u;
label_275998:
    // 0x275998: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x275998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27599c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x27599cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2759a0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2759a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2759a4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2759a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2759a8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2759a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2759ac: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2759acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2759b0: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2759b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2759b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2759B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2759B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759B4u;
        // 0x2759b8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2759B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2759BCu;
    // 0x2759bc: 0x0  nop
    ctx->pc = 0x2759bcu;
    // NOP
    ctx->pc = 0x2759c0u;
}
