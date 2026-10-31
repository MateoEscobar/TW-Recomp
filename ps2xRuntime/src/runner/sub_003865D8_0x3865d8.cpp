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

// Function: sub_003865D8
// Address: 0x3865d8 - 0x386798
void sub_003865D8_0x3865d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003865D8_0x3865d8");
#endif

    switch (ctx->pc) {
        case 0x3865d8u: goto label_3865d8;
        case 0x3865dcu: goto label_3865dc;
        case 0x3865e0u: goto label_3865e0;
        case 0x3865e4u: goto label_3865e4;
        case 0x3865e8u: goto label_3865e8;
        case 0x3865ecu: goto label_3865ec;
        case 0x3865f0u: goto label_3865f0;
        case 0x3865f4u: goto label_3865f4;
        case 0x3865f8u: goto label_3865f8;
        case 0x3865fcu: goto label_3865fc;
        case 0x386600u: goto label_386600;
        case 0x386604u: goto label_386604;
        case 0x386608u: goto label_386608;
        case 0x38660cu: goto label_38660c;
        case 0x386610u: goto label_386610;
        case 0x386614u: goto label_386614;
        case 0x386618u: goto label_386618;
        case 0x38661cu: goto label_38661c;
        case 0x386620u: goto label_386620;
        case 0x386624u: goto label_386624;
        case 0x386628u: goto label_386628;
        case 0x38662cu: goto label_38662c;
        case 0x386630u: goto label_386630;
        case 0x386634u: goto label_386634;
        case 0x386638u: goto label_386638;
        case 0x38663cu: goto label_38663c;
        case 0x386640u: goto label_386640;
        case 0x386644u: goto label_386644;
        case 0x386648u: goto label_386648;
        case 0x38664cu: goto label_38664c;
        case 0x386650u: goto label_386650;
        case 0x386654u: goto label_386654;
        case 0x386658u: goto label_386658;
        case 0x38665cu: goto label_38665c;
        case 0x386660u: goto label_386660;
        case 0x386664u: goto label_386664;
        case 0x386668u: goto label_386668;
        case 0x38666cu: goto label_38666c;
        case 0x386670u: goto label_386670;
        case 0x386674u: goto label_386674;
        case 0x386678u: goto label_386678;
        case 0x38667cu: goto label_38667c;
        case 0x386680u: goto label_386680;
        case 0x386684u: goto label_386684;
        case 0x386688u: goto label_386688;
        case 0x38668cu: goto label_38668c;
        case 0x386690u: goto label_386690;
        case 0x386694u: goto label_386694;
        case 0x386698u: goto label_386698;
        case 0x38669cu: goto label_38669c;
        case 0x3866a0u: goto label_3866a0;
        case 0x3866a4u: goto label_3866a4;
        case 0x3866a8u: goto label_3866a8;
        case 0x3866acu: goto label_3866ac;
        case 0x3866b0u: goto label_3866b0;
        case 0x3866b4u: goto label_3866b4;
        case 0x3866b8u: goto label_3866b8;
        case 0x3866bcu: goto label_3866bc;
        case 0x3866c0u: goto label_3866c0;
        case 0x3866c4u: goto label_3866c4;
        case 0x3866c8u: goto label_3866c8;
        case 0x3866ccu: goto label_3866cc;
        case 0x3866d0u: goto label_3866d0;
        case 0x3866d4u: goto label_3866d4;
        case 0x3866d8u: goto label_3866d8;
        case 0x3866dcu: goto label_3866dc;
        case 0x3866e0u: goto label_3866e0;
        case 0x3866e4u: goto label_3866e4;
        case 0x3866e8u: goto label_3866e8;
        case 0x3866ecu: goto label_3866ec;
        case 0x3866f0u: goto label_3866f0;
        case 0x3866f4u: goto label_3866f4;
        case 0x3866f8u: goto label_3866f8;
        case 0x3866fcu: goto label_3866fc;
        case 0x386700u: goto label_386700;
        case 0x386704u: goto label_386704;
        case 0x386708u: goto label_386708;
        case 0x38670cu: goto label_38670c;
        case 0x386710u: goto label_386710;
        case 0x386714u: goto label_386714;
        case 0x386718u: goto label_386718;
        case 0x38671cu: goto label_38671c;
        case 0x386720u: goto label_386720;
        case 0x386724u: goto label_386724;
        case 0x386728u: goto label_386728;
        case 0x38672cu: goto label_38672c;
        case 0x386730u: goto label_386730;
        case 0x386734u: goto label_386734;
        case 0x386738u: goto label_386738;
        case 0x38673cu: goto label_38673c;
        case 0x386740u: goto label_386740;
        case 0x386744u: goto label_386744;
        case 0x386748u: goto label_386748;
        case 0x38674cu: goto label_38674c;
        case 0x386750u: goto label_386750;
        case 0x386754u: goto label_386754;
        case 0x386758u: goto label_386758;
        case 0x38675cu: goto label_38675c;
        case 0x386760u: goto label_386760;
        case 0x386764u: goto label_386764;
        case 0x386768u: goto label_386768;
        case 0x38676cu: goto label_38676c;
        case 0x386770u: goto label_386770;
        case 0x386774u: goto label_386774;
        case 0x386778u: goto label_386778;
        case 0x38677cu: goto label_38677c;
        case 0x386780u: goto label_386780;
        case 0x386784u: goto label_386784;
        case 0x386788u: goto label_386788;
        case 0x38678cu: goto label_38678c;
        case 0x386790u: goto label_386790;
        case 0x386794u: goto label_386794;
        default: break;
    }

    ctx->pc = 0x3865d8u;

label_3865d8:
    // 0x3865d8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3865d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3865dc:
    // 0x3865dc: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3865dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_3865e0:
    // 0x3865e0: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x3865e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_3865e4:
    // 0x3865e4: 0x24e767f0  addiu       $a3, $a3, 0x67F0
    ctx->pc = 0x3865e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26608));
label_3865e8:
    // 0x3865e8: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x3865e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_3865ec:
    // 0x3865ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3865ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3865f0:
    // 0x3865f0: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x3865f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3865f4:
    // 0x3865f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3865f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3865f8:
    // 0x3865f8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x3865f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
label_3865fc:
    // 0x3865fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3865fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_386600:
    // 0x386600: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x386600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_386604:
    // 0x386604: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x386604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_386608:
    // 0x386608: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x386608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_38660c:
    // 0x38660c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38660cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_386610:
    // 0x386610: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x386610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_386614:
    // 0x386614: 0x26160004  addiu       $s6, $s0, 0x4
    ctx->pc = 0x386614u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_386618:
    // 0x386618: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x386618u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_38661c:
    // 0x38661c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x38661cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386620:
    // 0x386620: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x386620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_386624:
    // 0x386624: 0x4614a542  mul.s       $f21, $f20, $f20
    ctx->pc = 0x386624u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_386628:
    // 0x386628: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x386628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_38662c:
    // 0x38662c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x38662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_386630:
    // 0x386630: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x386630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_386634:
    // 0x386634: 0xc10cff6  jal         func_433FD8
label_386638:
    if (ctx->pc == 0x386638u) {
        ctx->pc = 0x386638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386634u;
        // 0x386638: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38663Cu;
        goto label_38663c;
    }
    ctx->pc = 0x386634u;
    SET_GPR_U32(ctx, 31, 0x38663Cu);
    ctx->pc = 0x386638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386634u;
    // 0x386638: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x386634u, 0x38663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38663Cu;
label_38663c:
    // 0x38663c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_386640:
    // 0x386640: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x386640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_386644:
    // 0x386644: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x386644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_386648:
    // 0x386648: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
label_38664c:
    if (ctx->pc == 0x38664Cu) {
        ctx->pc = 0x38664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386648u;
        // 0x38664c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386650u;
        goto label_386650;
    }
    ctx->pc = 0x386648u;
    {
        const bool branch_taken_0x386648 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386648u;
        // 0x38664c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386648) {
            ctx->pc = 0x386754u;
            goto label_386754;
        }
    }
    ctx->pc = 0x386650u;
label_386650:
    // 0x386650: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x386650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_386654:
    // 0x386654: 0x0  nop
    ctx->pc = 0x386654u;
    // NOP
label_386658:
    // 0x386658: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x386658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_38665c:
    // 0x38665c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x38665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_386660:
    // 0x386660: 0x7d9821  addu        $s3, $v1, $sp
    ctx->pc = 0x386660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_386664:
    // 0x386664: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x386664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_386668:
    // 0x386668: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x386668u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38666c:
    // 0x38666c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x38666cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_386670:
    // 0x386670: 0x10000018  b           . + 4 + (0x18 << 2)
label_386674:
    if (ctx->pc == 0x386674u) {
        ctx->pc = 0x386674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386670u;
        // 0x386674: 0xafa400a4  sw          $a0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386678u;
        goto label_386678;
    }
    ctx->pc = 0x386670u;
    {
        const bool branch_taken_0x386670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386670u;
        // 0x386674: 0xafa400a4  sw          $a0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386670) {
            ctx->pc = 0x3866D4u;
            goto label_3866d4;
        }
    }
    ctx->pc = 0x386678u;
label_386678:
    // 0x386678: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x386678u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38667c:
    // 0x38667c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x38667cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_386680:
    // 0x386680: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x386680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_386684:
    // 0x386684: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x386684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_386688:
    // 0x386688: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x386688u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_38668c:
    // 0x38668c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38668cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_386690:
    // 0x386690: 0x0  nop
    ctx->pc = 0x386690u;
    // NOP
label_386694:
    // 0x386694: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x386694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_386698:
    // 0x386698: 0x0  nop
    ctx->pc = 0x386698u;
    // NOP
label_38669c:
    // 0x38669c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3866a0:
    if (ctx->pc == 0x3866A0u) {
        ctx->pc = 0x3866A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38669Cu;
        // 0x3866a0: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866A4u;
        goto label_3866a4;
    }
    ctx->pc = 0x38669Cu;
    {
        const bool branch_taken_0x38669c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3866A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38669Cu;
        // 0x3866a0: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38669c) {
            ctx->pc = 0x3866D0u;
            goto label_3866d0;
        }
    }
    ctx->pc = 0x3866A4u;
label_3866a4:
    // 0x3866a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3866a8:
    // 0x3866a8: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x3866a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3866ac:
    // 0x3866ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3866acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3866b0:
    // 0x3866b0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3866b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3866b4:
    // 0x3866b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3866b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3866b8:
    // 0x3866b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3866b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3866bc:
    // 0x3866bc: 0xc10c1bb  jal         func_4306EC
label_3866c0:
    if (ctx->pc == 0x3866C0u) {
        ctx->pc = 0x3866C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866BCu;
        // 0x3866c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866C4u;
        goto label_3866c4;
    }
    ctx->pc = 0x3866BCu;
    SET_GPR_U32(ctx, 31, 0x3866C4u);
    ctx->pc = 0x3866C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866BCu;
    // 0x3866c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x3866BCu, 0x3866C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866C4u;
label_3866c4:
    // 0x3866c4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3866c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3866c8:
    // 0x3866c8: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3866c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_3866cc:
    // 0x3866cc: 0x12a80b  movn        $s5, $zero, $s2
    ctx->pc = 0x3866ccu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_3866d0:
    // 0x3866d0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3866d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3866d4:
    // 0x3866d4: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x3866d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3866d8:
    // 0x3866d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3866dc:
    if (ctx->pc == 0x3866DCu) {
        ctx->pc = 0x3866DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866D8u;
        // 0x3866dc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866E0u;
        goto label_3866e0;
    }
    ctx->pc = 0x3866D8u;
    {
        const bool branch_taken_0x3866d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3866DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866D8u;
        // 0x3866dc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3866d8) {
            ctx->pc = 0x38670Cu;
            goto label_38670c;
        }
    }
    ctx->pc = 0x3866E0u;
label_3866e0:
    // 0x3866e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3866e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3866e4:
    // 0x3866e4: 0xc136afa  jal         func_4DABE8
label_3866e8:
    if (ctx->pc == 0x3866E8u) {
        ctx->pc = 0x3866E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866E4u;
        // 0x3866e8: 0x8fa600a4  lw          $a2, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3866ECu;
        goto label_3866ec;
    }
    ctx->pc = 0x3866E4u;
    SET_GPR_U32(ctx, 31, 0x3866ECu);
    ctx->pc = 0x3866E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866E4u;
    // 0x3866e8: 0x8fa600a4  lw          $a2, 0xA4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3866E4u, 0x3866ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866ECu;
label_3866ec:
    // 0x3866ec: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3866ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3866f0:
    // 0x3866f0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3866f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3866f4:
    // 0x3866f4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3866f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3866f8:
    // 0x3866f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3866f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3866fc:
    // 0x3866fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3866fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_386700:
    // 0x386700: 0x0  nop
    ctx->pc = 0x386700u;
    // NOP
label_386704:
    // 0x386704: 0x4500ffdc  bc1f        . + 4 + (-0x24 << 2)
label_386708:
    if (ctx->pc == 0x386708u) {
        ctx->pc = 0x38670Cu;
        goto label_38670c;
    }
    ctx->pc = 0x386704u;
    {
        const bool branch_taken_0x386704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x386704) {
            ctx->pc = 0x386678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386678;
        }
    }
    ctx->pc = 0x38670Cu;
label_38670c:
    // 0x38670c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386710:
    // 0x386710: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
label_386714:
    if (ctx->pc == 0x386714u) {
        ctx->pc = 0x386718u;
        goto label_386718;
    }
    ctx->pc = 0x386710u;
    {
        const bool branch_taken_0x386710 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x386710) {
            ctx->pc = 0x38674Cu;
            goto label_38674c;
        }
    }
    ctx->pc = 0x386718u;
label_386718:
    // 0x386718: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x386718u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_38671c:
    // 0x38671c: 0x3d7102b  sltu        $v0, $fp, $s7
    ctx->pc = 0x38671cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_386720:
    // 0x386720: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_386724:
    if (ctx->pc == 0x386724u) {
        ctx->pc = 0x386724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386720u;
        // 0x386724: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386728u;
        goto label_386728;
    }
    ctx->pc = 0x386720u;
    {
        const bool branch_taken_0x386720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386720u;
        // 0x386724: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386720) {
            ctx->pc = 0x38674Cu;
            goto label_38674c;
        }
    }
    ctx->pc = 0x386728u;
label_386728:
    // 0x386728: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x386728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_38672c:
    // 0x38672c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38672cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_386730:
    // 0x386730: 0x60f809  jalr        $v1
label_386734:
    if (ctx->pc == 0x386734u) {
        ctx->pc = 0x386734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386730u;
        // 0x386734: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386738u;
        goto label_386738;
    }
    ctx->pc = 0x386730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386738u);
        ctx->pc = 0x386734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386730u;
        // 0x386734: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386730u, 0x386738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386738u;
label_386738:
    // 0x386738: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x386738u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38673c:
    // 0x38673c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x38673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_386740:
    // 0x386740: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x386740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_386744:
    // 0x386744: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x386744u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_386748:
    // 0x386748: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x386748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_38674c:
    // 0x38674c: 0x1640ffc2  bnez        $s2, . + 4 + (-0x3E << 2)
label_386750:
    if (ctx->pc == 0x386750u) {
        ctx->pc = 0x386750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38674Cu;
        // 0x386750: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386754u;
        goto label_386754;
    }
    ctx->pc = 0x38674Cu;
    {
        const bool branch_taken_0x38674c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x386750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38674Cu;
        // 0x386750: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38674c) {
            ctx->pc = 0x386658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386658;
        }
    }
    ctx->pc = 0x386754u;
label_386754:
    // 0x386754: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x386754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_386758:
    // 0x386758: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x386758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_38675c:
    // 0x38675c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x38675cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_386760:
    // 0x386760: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x386760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_386764:
    // 0x386764: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x386764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_386768:
    // 0x386768: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x386768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_38676c:
    // 0x38676c: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x38676cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_386770:
    // 0x386770: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x386770u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_386774:
    // 0x386774: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x386774u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_386778:
    // 0x386778: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x386778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_38677c:
    // 0x38677c: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x38677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_386780:
    // 0x386780: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x386780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_386784:
    // 0x386784: 0x3e00008  jr          $ra
label_386788:
    if (ctx->pc == 0x386788u) {
        ctx->pc = 0x386788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386784u;
        // 0x386788: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38678Cu;
        goto label_38678c;
    }
    ctx->pc = 0x386784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386784u;
        // 0x386788: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38678Cu;
label_38678c:
    // 0x38678c: 0x0  nop
    ctx->pc = 0x38678cu;
    // NOP
label_386790:
    // 0x386790: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x386790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_386794:
    // 0x386794: 0x0  nop
    ctx->pc = 0x386794u;
    // NOP
    ctx->pc = 0x386798u;
}
