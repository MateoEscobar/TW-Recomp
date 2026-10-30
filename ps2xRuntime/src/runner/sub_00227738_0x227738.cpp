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

// Function: sub_00227738
// Address: 0x227738 - 0x2278a8
void sub_00227738_0x227738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227738_0x227738");
#endif

    switch (ctx->pc) {
        case 0x227738u: goto label_227738;
        case 0x22773cu: goto label_22773c;
        case 0x227740u: goto label_227740;
        case 0x227744u: goto label_227744;
        case 0x227748u: goto label_227748;
        case 0x22774cu: goto label_22774c;
        case 0x227750u: goto label_227750;
        case 0x227754u: goto label_227754;
        case 0x227758u: goto label_227758;
        case 0x22775cu: goto label_22775c;
        case 0x227760u: goto label_227760;
        case 0x227764u: goto label_227764;
        case 0x227768u: goto label_227768;
        case 0x22776cu: goto label_22776c;
        case 0x227770u: goto label_227770;
        case 0x227774u: goto label_227774;
        case 0x227778u: goto label_227778;
        case 0x22777cu: goto label_22777c;
        case 0x227780u: goto label_227780;
        case 0x227784u: goto label_227784;
        case 0x227788u: goto label_227788;
        case 0x22778cu: goto label_22778c;
        case 0x227790u: goto label_227790;
        case 0x227794u: goto label_227794;
        case 0x227798u: goto label_227798;
        case 0x22779cu: goto label_22779c;
        case 0x2277a0u: goto label_2277a0;
        case 0x2277a4u: goto label_2277a4;
        case 0x2277a8u: goto label_2277a8;
        case 0x2277acu: goto label_2277ac;
        case 0x2277b0u: goto label_2277b0;
        case 0x2277b4u: goto label_2277b4;
        case 0x2277b8u: goto label_2277b8;
        case 0x2277bcu: goto label_2277bc;
        case 0x2277c0u: goto label_2277c0;
        case 0x2277c4u: goto label_2277c4;
        case 0x2277c8u: goto label_2277c8;
        case 0x2277ccu: goto label_2277cc;
        case 0x2277d0u: goto label_2277d0;
        case 0x2277d4u: goto label_2277d4;
        case 0x2277d8u: goto label_2277d8;
        case 0x2277dcu: goto label_2277dc;
        case 0x2277e0u: goto label_2277e0;
        case 0x2277e4u: goto label_2277e4;
        case 0x2277e8u: goto label_2277e8;
        case 0x2277ecu: goto label_2277ec;
        case 0x2277f0u: goto label_2277f0;
        case 0x2277f4u: goto label_2277f4;
        case 0x2277f8u: goto label_2277f8;
        case 0x2277fcu: goto label_2277fc;
        case 0x227800u: goto label_227800;
        case 0x227804u: goto label_227804;
        case 0x227808u: goto label_227808;
        case 0x22780cu: goto label_22780c;
        case 0x227810u: goto label_227810;
        case 0x227814u: goto label_227814;
        case 0x227818u: goto label_227818;
        case 0x22781cu: goto label_22781c;
        case 0x227820u: goto label_227820;
        case 0x227824u: goto label_227824;
        case 0x227828u: goto label_227828;
        case 0x22782cu: goto label_22782c;
        case 0x227830u: goto label_227830;
        case 0x227834u: goto label_227834;
        case 0x227838u: goto label_227838;
        case 0x22783cu: goto label_22783c;
        case 0x227840u: goto label_227840;
        case 0x227844u: goto label_227844;
        case 0x227848u: goto label_227848;
        case 0x22784cu: goto label_22784c;
        case 0x227850u: goto label_227850;
        case 0x227854u: goto label_227854;
        case 0x227858u: goto label_227858;
        case 0x22785cu: goto label_22785c;
        case 0x227860u: goto label_227860;
        case 0x227864u: goto label_227864;
        case 0x227868u: goto label_227868;
        case 0x22786cu: goto label_22786c;
        case 0x227870u: goto label_227870;
        case 0x227874u: goto label_227874;
        case 0x227878u: goto label_227878;
        case 0x22787cu: goto label_22787c;
        case 0x227880u: goto label_227880;
        case 0x227884u: goto label_227884;
        case 0x227888u: goto label_227888;
        case 0x22788cu: goto label_22788c;
        case 0x227890u: goto label_227890;
        case 0x227894u: goto label_227894;
        case 0x227898u: goto label_227898;
        case 0x22789cu: goto label_22789c;
        case 0x2278a0u: goto label_2278a0;
        case 0x2278a4u: goto label_2278a4;
        default: break;
    }

    ctx->pc = 0x227738u;

label_227738:
    // 0x227738: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x227738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_22773c:
    // 0x22773c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x22773cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_227740:
    // 0x227740: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x227740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_227744:
    // 0x227744: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x227744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_227748:
    // 0x227748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x227748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22774c:
    // 0x22774c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x22774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_227750:
    // 0x227750: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x227750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_227754:
    // 0x227754: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x227754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_227758:
    // 0x227758: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x227758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_22775c:
    // 0x22775c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x22775cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_227760:
    // 0x227760: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x227760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_227764:
    // 0x227764: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x227764u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227768:
    // 0x227768: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x227768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_22776c:
    // 0x22776c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x22776cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227770:
    // 0x227770: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x227770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_227774:
    // 0x227774: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x227774u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227778:
    // 0x227778: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x227778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_22777c:
    // 0x22777c: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x22777cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_227780:
    // 0x227780: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x227780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_227784:
    // 0x227784: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x227784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_227788:
    // 0x227788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x227788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22778c:
    // 0x22778c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x22778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_227790:
    // 0x227790: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x227790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_227794:
    // 0x227794: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x227794u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_227798:
    // 0x227798: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
label_22779c:
    if (ctx->pc == 0x22779Cu) {
        ctx->pc = 0x22779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227798u;
        // 0x22779c: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277A0u;
        goto label_2277a0;
    }
    ctx->pc = 0x227798u;
    {
        const bool branch_taken_0x227798 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227798u;
        // 0x22779c: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227798) {
            ctx->pc = 0x22786Cu;
            goto label_22786c;
        }
    }
    ctx->pc = 0x2277A0u;
label_2277a0:
    // 0x2277a0: 0x24150228  addiu       $s5, $zero, 0x228
    ctx->pc = 0x2277a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2277a4:
    // 0x2277a4: 0x0  nop
    ctx->pc = 0x2277a4u;
    // NOP
label_2277a8:
    // 0x2277a8: 0x8fc4489c  lw          $a0, 0x489C($fp)
    ctx->pc = 0x2277a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_2277ac:
    // 0x2277ac: 0xc0e409a  jal         func_390268
label_2277b0:
    if (ctx->pc == 0x2277B0u) {
        ctx->pc = 0x2277B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277ACu;
        // 0x2277b0: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277B4u;
        goto label_2277b4;
    }
    ctx->pc = 0x2277ACu;
    SET_GPR_U32(ctx, 31, 0x2277B4u);
    ctx->pc = 0x2277B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277ACu;
    // 0x2277b0: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2277ACu, 0x2277B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277B4u;
label_2277b4:
    // 0x2277b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2277b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2277b8:
    // 0x2277b8: 0x12900026  beq         $s4, $s0, . + 4 + (0x26 << 2)
label_2277bc:
    if (ctx->pc == 0x2277BCu) {
        ctx->pc = 0x2277BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277B8u;
        // 0x2277bc: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2277C0u;
        goto label_2277c0;
    }
    ctx->pc = 0x2277B8u;
    {
        const bool branch_taken_0x2277b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x2277BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277B8u;
        // 0x2277bc: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277b8) {
            ctx->pc = 0x227854u;
            goto label_227854;
        }
    }
    ctx->pc = 0x2277C0u;
label_2277c0:
    // 0x2277c0: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2277c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2277c4:
    // 0x2277c4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2277c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2277c8:
    // 0x2277c8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2277c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2277cc:
    // 0x2277cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2277ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2277d0:
    // 0x2277d0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2277d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2277d4:
    // 0x2277d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2277d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2277d8:
    // 0x2277d8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2277d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2277dc:
    // 0x2277dc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2277dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2277e0:
    // 0x2277e0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2277e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2277e4:
    // 0x2277e4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2277e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2277e8:
    // 0x2277e8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2277e8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2277ec:
    // 0x2277ec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2277ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2277f0:
    // 0x2277f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2277f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2277f4:
    // 0x2277f4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2277f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2277f8:
    // 0x2277f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2277f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2277fc:
    // 0x2277fc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2277fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_227800:
    // 0x227800: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x227800u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_227804:
    // 0x227804: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x227804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_227808:
    // 0x227808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22780c:
    // 0x22780c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x22780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_227810:
    // 0x227810: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x227810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_227814:
    // 0x227814: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x227814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_227818:
    // 0x227818: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_22781c:
    if (ctx->pc == 0x22781Cu) {
        ctx->pc = 0x22781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227818u;
        // 0x22781c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x227820u;
        goto label_227820;
    }
    ctx->pc = 0x227818u;
    {
        const bool branch_taken_0x227818 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227818u;
        // 0x22781c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227818) {
            ctx->pc = 0x227854u;
            goto label_227854;
        }
    }
    ctx->pc = 0x227820u;
label_227820:
    // 0x227820: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_227824:
    if (ctx->pc == 0x227824u) {
        ctx->pc = 0x227824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227820u;
        // 0x227824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227828u;
        goto label_227828;
    }
    ctx->pc = 0x227820u;
    {
        const bool branch_taken_0x227820 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x227824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227820u;
        // 0x227824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227820) {
            ctx->pc = 0x227838u;
            goto label_227838;
        }
    }
    ctx->pc = 0x227828u;
label_227828:
    // 0x227828: 0x260f809  jalr        $s3
label_22782c:
    if (ctx->pc == 0x22782Cu) {
        ctx->pc = 0x22782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227828u;
        // 0x22782c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227830u;
        goto label_227830;
    }
    ctx->pc = 0x227828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x227830u);
        ctx->pc = 0x22782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227828u;
        // 0x22782c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227828u, 0x227830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227830u;
label_227830:
    // 0x227830: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_227834:
    if (ctx->pc == 0x227834u) {
        ctx->pc = 0x227834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227830u;
        // 0x227834: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227838u;
        goto label_227838;
    }
    ctx->pc = 0x227830u;
    {
        const bool branch_taken_0x227830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227830u;
        // 0x227834: 0x8fc3489c  lw          $v1, 0x489C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227830) {
            ctx->pc = 0x227858u;
            goto label_227858;
        }
    }
    ctx->pc = 0x227838u;
label_227838:
    // 0x227838: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x227838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_22783c:
    // 0x22783c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22783cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_227840:
    // 0x227840: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x227840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_227844:
    // 0x227844: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x227844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_227848:
    // 0x227848: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x227848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_22784c:
    // 0x22784c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_227850:
    if (ctx->pc == 0x227850u) {
        ctx->pc = 0x227850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22784Cu;
        // 0x227850: 0x2e29021  addu        $s2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227854u;
        goto label_227854;
    }
    ctx->pc = 0x22784Cu;
    {
        const bool branch_taken_0x22784c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22784Cu;
        // 0x227850: 0x2e29021  addu        $s2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22784c) {
            ctx->pc = 0x22786Cu;
            goto label_22786c;
        }
    }
    ctx->pc = 0x227854u;
label_227854:
    // 0x227854: 0x8fc3489c  lw          $v1, 0x489C($fp)
    ctx->pc = 0x227854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 18588)));
label_227858:
    // 0x227858: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x227858u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_22785c:
    // 0x22785c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x22785cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_227860:
    // 0x227860: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x227860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_227864:
    // 0x227864: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_227868:
    if (ctx->pc == 0x227868u) {
        ctx->pc = 0x227868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227864u;
        // 0x227868: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22786Cu;
        goto label_22786c;
    }
    ctx->pc = 0x227864u;
    {
        const bool branch_taken_0x227864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227864u;
        // 0x227868: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227864) {
            ctx->pc = 0x2277A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2277a8;
        }
    }
    ctx->pc = 0x22786Cu;
label_22786c:
    // 0x22786c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22786cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_227870:
    // 0x227870: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x227870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_227874:
    // 0x227874: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x227874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_227878:
    // 0x227878: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x227878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_22787c:
    // 0x22787c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x22787cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_227880:
    // 0x227880: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x227880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_227884:
    // 0x227884: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x227884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_227888:
    // 0x227888: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x227888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22788c:
    // 0x22788c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x22788cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_227890:
    // 0x227890: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x227890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_227894:
    // 0x227894: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x227894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_227898:
    // 0x227898: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x227898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22789c:
    // 0x22789c: 0x3e00008  jr          $ra
label_2278a0:
    if (ctx->pc == 0x2278A0u) {
        ctx->pc = 0x2278A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22789Cu;
        // 0x2278a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278A4u;
        goto label_2278a4;
    }
    ctx->pc = 0x22789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22789Cu;
        // 0x2278a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278A4u;
label_2278a4:
    // 0x2278a4: 0x0  nop
    ctx->pc = 0x2278a4u;
    // NOP
    ctx->pc = 0x2278a8u;
}
