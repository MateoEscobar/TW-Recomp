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

// Function: sub_00392638
// Address: 0x392638 - 0x3928d0
void sub_00392638_0x392638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392638_0x392638");
#endif

    switch (ctx->pc) {
        case 0x392638u: goto label_392638;
        case 0x39263cu: goto label_39263c;
        case 0x392640u: goto label_392640;
        case 0x392644u: goto label_392644;
        case 0x392648u: goto label_392648;
        case 0x39264cu: goto label_39264c;
        case 0x392650u: goto label_392650;
        case 0x392654u: goto label_392654;
        case 0x392658u: goto label_392658;
        case 0x39265cu: goto label_39265c;
        case 0x392660u: goto label_392660;
        case 0x392664u: goto label_392664;
        case 0x392668u: goto label_392668;
        case 0x39266cu: goto label_39266c;
        case 0x392670u: goto label_392670;
        case 0x392674u: goto label_392674;
        case 0x392678u: goto label_392678;
        case 0x39267cu: goto label_39267c;
        case 0x392680u: goto label_392680;
        case 0x392684u: goto label_392684;
        case 0x392688u: goto label_392688;
        case 0x39268cu: goto label_39268c;
        case 0x392690u: goto label_392690;
        case 0x392694u: goto label_392694;
        case 0x392698u: goto label_392698;
        case 0x39269cu: goto label_39269c;
        case 0x3926a0u: goto label_3926a0;
        case 0x3926a4u: goto label_3926a4;
        case 0x3926a8u: goto label_3926a8;
        case 0x3926acu: goto label_3926ac;
        case 0x3926b0u: goto label_3926b0;
        case 0x3926b4u: goto label_3926b4;
        case 0x3926b8u: goto label_3926b8;
        case 0x3926bcu: goto label_3926bc;
        case 0x3926c0u: goto label_3926c0;
        case 0x3926c4u: goto label_3926c4;
        case 0x3926c8u: goto label_3926c8;
        case 0x3926ccu: goto label_3926cc;
        case 0x3926d0u: goto label_3926d0;
        case 0x3926d4u: goto label_3926d4;
        case 0x3926d8u: goto label_3926d8;
        case 0x3926dcu: goto label_3926dc;
        case 0x3926e0u: goto label_3926e0;
        case 0x3926e4u: goto label_3926e4;
        case 0x3926e8u: goto label_3926e8;
        case 0x3926ecu: goto label_3926ec;
        case 0x3926f0u: goto label_3926f0;
        case 0x3926f4u: goto label_3926f4;
        case 0x3926f8u: goto label_3926f8;
        case 0x3926fcu: goto label_3926fc;
        case 0x392700u: goto label_392700;
        case 0x392704u: goto label_392704;
        case 0x392708u: goto label_392708;
        case 0x39270cu: goto label_39270c;
        case 0x392710u: goto label_392710;
        case 0x392714u: goto label_392714;
        case 0x392718u: goto label_392718;
        case 0x39271cu: goto label_39271c;
        case 0x392720u: goto label_392720;
        case 0x392724u: goto label_392724;
        case 0x392728u: goto label_392728;
        case 0x39272cu: goto label_39272c;
        case 0x392730u: goto label_392730;
        case 0x392734u: goto label_392734;
        case 0x392738u: goto label_392738;
        case 0x39273cu: goto label_39273c;
        case 0x392740u: goto label_392740;
        case 0x392744u: goto label_392744;
        case 0x392748u: goto label_392748;
        case 0x39274cu: goto label_39274c;
        case 0x392750u: goto label_392750;
        case 0x392754u: goto label_392754;
        case 0x392758u: goto label_392758;
        case 0x39275cu: goto label_39275c;
        case 0x392760u: goto label_392760;
        case 0x392764u: goto label_392764;
        case 0x392768u: goto label_392768;
        case 0x39276cu: goto label_39276c;
        case 0x392770u: goto label_392770;
        case 0x392774u: goto label_392774;
        case 0x392778u: goto label_392778;
        case 0x39277cu: goto label_39277c;
        case 0x392780u: goto label_392780;
        case 0x392784u: goto label_392784;
        case 0x392788u: goto label_392788;
        case 0x39278cu: goto label_39278c;
        case 0x392790u: goto label_392790;
        case 0x392794u: goto label_392794;
        case 0x392798u: goto label_392798;
        case 0x39279cu: goto label_39279c;
        case 0x3927a0u: goto label_3927a0;
        case 0x3927a4u: goto label_3927a4;
        case 0x3927a8u: goto label_3927a8;
        case 0x3927acu: goto label_3927ac;
        case 0x3927b0u: goto label_3927b0;
        case 0x3927b4u: goto label_3927b4;
        case 0x3927b8u: goto label_3927b8;
        case 0x3927bcu: goto label_3927bc;
        case 0x3927c0u: goto label_3927c0;
        case 0x3927c4u: goto label_3927c4;
        case 0x3927c8u: goto label_3927c8;
        case 0x3927ccu: goto label_3927cc;
        case 0x3927d0u: goto label_3927d0;
        case 0x3927d4u: goto label_3927d4;
        case 0x3927d8u: goto label_3927d8;
        case 0x3927dcu: goto label_3927dc;
        case 0x3927e0u: goto label_3927e0;
        case 0x3927e4u: goto label_3927e4;
        case 0x3927e8u: goto label_3927e8;
        case 0x3927ecu: goto label_3927ec;
        case 0x3927f0u: goto label_3927f0;
        case 0x3927f4u: goto label_3927f4;
        case 0x3927f8u: goto label_3927f8;
        case 0x3927fcu: goto label_3927fc;
        case 0x392800u: goto label_392800;
        case 0x392804u: goto label_392804;
        case 0x392808u: goto label_392808;
        case 0x39280cu: goto label_39280c;
        case 0x392810u: goto label_392810;
        case 0x392814u: goto label_392814;
        case 0x392818u: goto label_392818;
        case 0x39281cu: goto label_39281c;
        case 0x392820u: goto label_392820;
        case 0x392824u: goto label_392824;
        case 0x392828u: goto label_392828;
        case 0x39282cu: goto label_39282c;
        case 0x392830u: goto label_392830;
        case 0x392834u: goto label_392834;
        case 0x392838u: goto label_392838;
        case 0x39283cu: goto label_39283c;
        case 0x392840u: goto label_392840;
        case 0x392844u: goto label_392844;
        case 0x392848u: goto label_392848;
        case 0x39284cu: goto label_39284c;
        case 0x392850u: goto label_392850;
        case 0x392854u: goto label_392854;
        case 0x392858u: goto label_392858;
        case 0x39285cu: goto label_39285c;
        case 0x392860u: goto label_392860;
        case 0x392864u: goto label_392864;
        case 0x392868u: goto label_392868;
        case 0x39286cu: goto label_39286c;
        case 0x392870u: goto label_392870;
        case 0x392874u: goto label_392874;
        case 0x392878u: goto label_392878;
        case 0x39287cu: goto label_39287c;
        case 0x392880u: goto label_392880;
        case 0x392884u: goto label_392884;
        case 0x392888u: goto label_392888;
        case 0x39288cu: goto label_39288c;
        case 0x392890u: goto label_392890;
        case 0x392894u: goto label_392894;
        case 0x392898u: goto label_392898;
        case 0x39289cu: goto label_39289c;
        case 0x3928a0u: goto label_3928a0;
        case 0x3928a4u: goto label_3928a4;
        case 0x3928a8u: goto label_3928a8;
        case 0x3928acu: goto label_3928ac;
        case 0x3928b0u: goto label_3928b0;
        case 0x3928b4u: goto label_3928b4;
        case 0x3928b8u: goto label_3928b8;
        case 0x3928bcu: goto label_3928bc;
        case 0x3928c0u: goto label_3928c0;
        case 0x3928c4u: goto label_3928c4;
        case 0x3928c8u: goto label_3928c8;
        case 0x3928ccu: goto label_3928cc;
        default: break;
    }

    ctx->pc = 0x392638u;

label_392638:
    // 0x392638: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x392638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
label_39263c:
    // 0x39263c: 0x7fb00320  sq          $s0, 0x320($sp)
    ctx->pc = 0x39263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 16));
label_392640:
    // 0x392640: 0x7fb10310  sq          $s1, 0x310($sp)
    ctx->pc = 0x392640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 17));
label_392644:
    // 0x392644: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x392644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_392648:
    // 0x392648: 0x7fb20300  sq          $s2, 0x300($sp)
    ctx->pc = 0x392648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 18));
label_39264c:
    // 0x39264c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x39264cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_392650:
    // 0x392650: 0x7fb302f0  sq          $s3, 0x2F0($sp)
    ctx->pc = 0x392650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 19));
label_392654:
    // 0x392654: 0x7fb502d0  sq          $s5, 0x2D0($sp)
    ctx->pc = 0x392654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 21));
label_392658:
    // 0x392658: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x392658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39265c:
    // 0x39265c: 0x7fb702b0  sq          $s7, 0x2B0($sp)
    ctx->pc = 0x39265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 23));
label_392660:
    // 0x392660: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x392660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392664:
    // 0x392664: 0xe7b40330  swc1        $f20, 0x330($sp)
    ctx->pc = 0x392664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_392668:
    // 0x392668: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x392668u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39266c:
    // 0x39266c: 0x7fb402e0  sq          $s4, 0x2E0($sp)
    ctx->pc = 0x39266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 20));
label_392670:
    // 0x392670: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x392670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_392674:
    // 0x392674: 0x7fb602c0  sq          $s6, 0x2C0($sp)
    ctx->pc = 0x392674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 22));
label_392678:
    // 0x392678: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x392678u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_39267c:
    // 0x39267c: 0x7fbe02a0  sq          $fp, 0x2A0($sp)
    ctx->pc = 0x39267cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 30));
label_392680:
    // 0x392680: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x392680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
label_392684:
    // 0x392684: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x392684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_392688:
    // 0x392688: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x392688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_39268c:
    // 0x39268c: 0xafa70280  sw          $a3, 0x280($sp)
    ctx->pc = 0x39268cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 7));
label_392690:
    // 0x392690: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x392690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_392694:
    // 0x392694: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x392694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_392698:
    // 0x392698: 0xafa80284  sw          $t0, 0x284($sp)
    ctx->pc = 0x392698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 8));
label_39269c:
    // 0x39269c: 0x60f809  jalr        $v1
label_3926a0:
    if (ctx->pc == 0x3926A0u) {
        ctx->pc = 0x3926A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39269Cu;
        // 0x3926a0: 0xafa90288  sw          $t1, 0x288($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3926A4u;
        goto label_3926a4;
    }
    ctx->pc = 0x39269Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3926A4u);
        ctx->pc = 0x3926A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39269Cu;
        // 0x3926a0: 0xafa90288  sw          $t1, 0x288($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39269Cu, 0x3926A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3926A4u;
label_3926a4:
    // 0x3926a4: 0x7ba30260  lq          $v1, 0x260($sp)
    ctx->pc = 0x3926a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_3926a8:
    // 0x3926a8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3926a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3926ac:
    // 0x3926ac: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3926acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3926b0:
    // 0x3926b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3926b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3926b4:
    // 0x3926b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3926b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3926b8:
    // 0x3926b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3926b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3926bc:
    // 0x3926bc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3926bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3926c0:
    // 0x3926c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3926c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3926c4:
    // 0x3926c4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3926c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3926c8:
    // 0x3926c8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3926c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3926cc:
    // 0x3926cc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3926ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3926d0:
    // 0x3926d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3926d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3926d4:
    // 0x3926d4: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x3926d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_3926d8:
    // 0x3926d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3926d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3926dc:
    // 0x3926dc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3926dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3926e0:
    // 0x3926e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3926e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3926e4:
    // 0x3926e4: 0xc089d2a  jal         func_2274A8
label_3926e8:
    if (ctx->pc == 0x3926E8u) {
        ctx->pc = 0x3926E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926E4u;
        // 0x3926e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3926ECu;
        goto label_3926ec;
    }
    ctx->pc = 0x3926E4u;
    SET_GPR_U32(ctx, 31, 0x3926ECu);
    ctx->pc = 0x3926E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3926E4u;
    // 0x3926e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x3926E4u, 0x3926ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3926ECu;
label_3926ec:
    // 0x3926ec: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x3926ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
label_3926f0:
    // 0x3926f0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3926f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3926f4:
    // 0x3926f4: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x3926f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_3926f8:
    // 0x3926f8: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x3926f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_3926fc:
    // 0x3926fc: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_392700:
    if (ctx->pc == 0x392700u) {
        ctx->pc = 0x392700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926FCu;
        // 0x392700: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392704u;
        goto label_392704;
    }
    ctx->pc = 0x3926FCu;
    {
        const bool branch_taken_0x3926fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926FCu;
        // 0x392700: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3926fc) {
            ctx->pc = 0x39289Cu;
            goto label_39289c;
        }
    }
    ctx->pc = 0x392704u;
label_392704:
    // 0x392704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x392704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_392708:
    // 0x392708: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x392708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_39270c:
    // 0x39270c: 0x0  nop
    ctx->pc = 0x39270cu;
    // NOP
label_392710:
    // 0x392710: 0x8fa30284  lw          $v1, 0x284($sp)
    ctx->pc = 0x392710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_392714:
    // 0x392714: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x392714u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392718:
    // 0x392718: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_39271c:
    if (ctx->pc == 0x39271Cu) {
        ctx->pc = 0x39271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392718u;
        // 0x39271c: 0x8fb10280  lw          $s1, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392720u;
        goto label_392720;
    }
    ctx->pc = 0x392718u;
    {
        const bool branch_taken_0x392718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392718u;
        // 0x39271c: 0x8fb10280  lw          $s1, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392718) {
            ctx->pc = 0x39272Cu;
            goto label_39272c;
        }
    }
    ctx->pc = 0x392720u;
label_392720:
    // 0x392720: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x392720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392724:
    // 0x392724: 0x10570059  beq         $v0, $s7, . + 4 + (0x59 << 2)
label_392728:
    if (ctx->pc == 0x392728u) {
        ctx->pc = 0x392728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392724u;
        // 0x392728: 0x8fa3028c  lw          $v1, 0x28C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39272Cu;
        goto label_39272c;
    }
    ctx->pc = 0x392724u;
    {
        const bool branch_taken_0x392724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x392728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392724u;
        // 0x392728: 0x8fa3028c  lw          $v1, 0x28C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392724) {
            ctx->pc = 0x39288Cu;
            goto label_39288c;
        }
    }
    ctx->pc = 0x39272Cu;
label_39272c:
    // 0x39272c: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x39272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_392730:
    // 0x392730: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x392730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392734:
    // 0x392734: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_392738:
    if (ctx->pc == 0x392738u) {
        ctx->pc = 0x392738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392734u;
        // 0x392738: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39273Cu;
        goto label_39273c;
    }
    ctx->pc = 0x392734u;
    {
        const bool branch_taken_0x392734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x392738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392734u;
        // 0x392738: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392734) {
            ctx->pc = 0x392758u;
            goto label_392758;
        }
    }
    ctx->pc = 0x39273Cu;
label_39273c:
    // 0x39273c: 0xc087502  jal         func_21D408
label_392740:
    if (ctx->pc == 0x392740u) {
        ctx->pc = 0x392740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39273Cu;
        // 0x392740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392744u;
        goto label_392744;
    }
    ctx->pc = 0x39273Cu;
    SET_GPR_U32(ctx, 31, 0x392744u);
    ctx->pc = 0x392740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39273Cu;
    // 0x392740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x39273Cu, 0x392744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392744u;
label_392744:
    // 0x392744: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x392744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_392748:
    // 0x392748: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x392748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39274c:
    // 0x39274c: 0x8fa30288  lw          $v1, 0x288($sp)
    ctx->pc = 0x39274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_392750:
    // 0x392750: 0x1043004e  beq         $v0, $v1, . + 4 + (0x4E << 2)
label_392754:
    if (ctx->pc == 0x392754u) {
        ctx->pc = 0x392754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392750u;
        // 0x392754: 0x8fa3028c  lw          $v1, 0x28C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392758u;
        goto label_392758;
    }
    ctx->pc = 0x392750u;
    {
        const bool branch_taken_0x392750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x392754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392750u;
        // 0x392754: 0x8fa3028c  lw          $v1, 0x28C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392750) {
            ctx->pc = 0x39288Cu;
            goto label_39288c;
        }
    }
    ctx->pc = 0x392758u;
label_392758:
    // 0x392758: 0x5260000a  beql        $s3, $zero, . + 4 + (0xA << 2)
label_39275c:
    if (ctx->pc == 0x39275Cu) {
        ctx->pc = 0x39275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392758u;
        // 0x39275c: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392760u;
        goto label_392760;
    }
    ctx->pc = 0x392758u;
    {
        const bool branch_taken_0x392758 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x392758) {
            ctx->pc = 0x39275Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392758u;
            // 0x39275c: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392784u;
            goto label_392784;
        }
    }
    ctx->pc = 0x392760u;
label_392760:
    // 0x392760: 0x12700007  beq         $s3, $s0, . + 4 + (0x7 << 2)
label_392764:
    if (ctx->pc == 0x392764u) {
        ctx->pc = 0x392764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392760u;
        // 0x392764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392768u;
        goto label_392768;
    }
    ctx->pc = 0x392760u;
    {
        const bool branch_taken_0x392760 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x392764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392760u;
        // 0x392764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392760) {
            ctx->pc = 0x392780u;
            goto label_392780;
        }
    }
    ctx->pc = 0x392768u;
label_392768:
    // 0x392768: 0xc088aa4  jal         func_222A90
label_39276c:
    if (ctx->pc == 0x39276Cu) {
        ctx->pc = 0x39276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392768u;
        // 0x39276c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392770u;
        goto label_392770;
    }
    ctx->pc = 0x392768u;
    SET_GPR_U32(ctx, 31, 0x392770u);
    ctx->pc = 0x39276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392768u;
    // 0x39276c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x392768u, 0x392770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392770u;
label_392770:
    // 0x392770: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_392774:
    if (ctx->pc == 0x392774u) {
        ctx->pc = 0x392774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392770u;
        // 0x392774: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392778u;
        goto label_392778;
    }
    ctx->pc = 0x392770u;
    {
        const bool branch_taken_0x392770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392770u;
        // 0x392774: 0x26120090  addiu       $s2, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392770) {
            ctx->pc = 0x392784u;
            goto label_392784;
        }
    }
    ctx->pc = 0x392778u;
label_392778:
    // 0x392778: 0x118823  negu        $s1, $s1
    ctx->pc = 0x392778u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_39277c:
    // 0x39277c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x39277cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392780:
    // 0x392780: 0x26120090  addiu       $s2, $s0, 0x90
    ctx->pc = 0x392780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_392784:
    // 0x392784: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x392784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_392788:
    // 0x392788: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x392788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_39278c:
    // 0x39278c: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x39278cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_392790:
    // 0x392790: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x392790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_392794:
    // 0x392794: 0x7ba901f0  lq          $t1, 0x1F0($sp)
    ctx->pc = 0x392794u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_392798:
    // 0x392798: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x392798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_39279c:
    // 0x39279c: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x39279cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_3927a0:
    // 0x3927a0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x3927a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_3927a4:
    // 0x3927a4: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x3927a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_3927a8:
    // 0x3927a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3927a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3927ac:
    // 0x3927ac: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x3927acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_3927b0:
    // 0x3927b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3927b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3927b4:
    // 0x3927b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3927b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3927b8:
    // 0x3927b8: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x3927b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_3927bc:
    // 0x3927bc: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x3927bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3927c0:
    // 0x3927c0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3927c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3927c4:
    // 0x3927c4: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x3927c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_3927c8:
    // 0x3927c8: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x3927c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_3927cc:
    // 0x3927cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3927ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3927d0:
    // 0x3927d0: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x3927d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_3927d4:
    // 0x3927d4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3927d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3927d8:
    // 0x3927d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3927d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3927dc:
    // 0x3927dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3927dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3927e0:
    // 0x3927e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3927e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3927e4:
    // 0x3927e4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3927e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3927e8:
    // 0x3927e8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3927e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3927ec:
    // 0x3927ec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3927ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3927f0:
    // 0x3927f0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3927f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3927f4:
    // 0x3927f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3927f4u;
    // VWAITQ (Q already resolved in this runtime)
label_3927f8:
    // 0x3927f8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3927f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3927fc:
    // 0x3927fc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3927fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_392800:
    // 0x392800: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x392800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_392804:
    // 0x392804: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x392804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_392808:
    // 0x392808: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x392808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_39280c:
    // 0x39280c: 0x0  nop
    ctx->pc = 0x39280cu;
    // NOP
label_392810:
    // 0x392810: 0x0  nop
    ctx->pc = 0x392810u;
    // NOP
label_392814:
    // 0x392814: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x392814u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_392818:
    // 0x392818: 0xe7a10210  swc1        $f1, 0x210($sp)
    ctx->pc = 0x392818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_39281c:
    // 0x39281c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x39281cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_392820:
    // 0x392820: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x392820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_392824:
    // 0x392824: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x392824u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_392828:
    // 0x392828: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x392828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_39282c:
    // 0x39282c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x39282cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_392830:
    // 0x392830: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x392830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_392834:
    // 0x392834: 0xc1036e2  jal         func_40DB88
label_392838:
    if (ctx->pc == 0x392838u) {
        ctx->pc = 0x392838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392834u;
        // 0x392838: 0x7fa20260  sq          $v0, 0x260($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39283Cu;
        goto label_39283c;
    }
    ctx->pc = 0x392834u;
    SET_GPR_U32(ctx, 31, 0x39283Cu);
    ctx->pc = 0x392838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392834u;
    // 0x392838: 0x7fa20260  sq          $v0, 0x260($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x392834u, 0x39283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39283Cu;
label_39283c:
    // 0x39283c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x39283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_392840:
    // 0x392840: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_392844:
    if (ctx->pc == 0x392844u) {
        ctx->pc = 0x392844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392840u;
        // 0x392844: 0x8fa3028c  lw          $v1, 0x28C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392848u;
        goto label_392848;
    }
    ctx->pc = 0x392840u;
    {
        const bool branch_taken_0x392840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392840u;
        // 0x392844: 0x8fa3028c  lw          $v1, 0x28C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392840) {
            ctx->pc = 0x39288Cu;
            goto label_39288c;
        }
    }
    ctx->pc = 0x392848u;
label_392848:
    // 0x392848: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x392848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39284c:
    // 0x39284c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39284cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392850:
    // 0x392850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392854:
    // 0x392854: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x392854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392858:
    // 0x392858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39285c:
    // 0x39285c: 0xc0875a0  jal         func_21D680
label_392860:
    if (ctx->pc == 0x392860u) {
        ctx->pc = 0x392860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39285Cu;
        // 0x392860: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392864u;
        goto label_392864;
    }
    ctx->pc = 0x39285Cu;
    SET_GPR_U32(ctx, 31, 0x392864u);
    ctx->pc = 0x392860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39285Cu;
    // 0x392860: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x39285Cu, 0x392864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392864u;
label_392864:
    // 0x392864: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x392864u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_392868:
    // 0x392868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x392868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39286c:
    // 0x39286c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39286cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392870:
    // 0x392870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x392870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392874:
    // 0x392874: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x392874u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_392878:
    // 0x392878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39287c:
    // 0x39287c: 0x1164021  addu        $t0, $t0, $s6
    ctx->pc = 0x39287cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
label_392880:
    // 0x392880: 0xc08764a  jal         func_21D928
label_392884:
    if (ctx->pc == 0x392884u) {
        ctx->pc = 0x392884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392880u;
        // 0x392884: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392888u;
        goto label_392888;
    }
    ctx->pc = 0x392880u;
    SET_GPR_U32(ctx, 31, 0x392888u);
    ctx->pc = 0x392884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392880u;
    // 0x392884: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D928u, 0x392880u, 0x392888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392888u;
label_392888:
    // 0x392888: 0x8fa3028c  lw          $v1, 0x28C($sp)
    ctx->pc = 0x392888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_39288c:
    // 0x39288c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x39288cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_392890:
    // 0x392890: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x392890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_392894:
    // 0x392894: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_392898:
    if (ctx->pc == 0x392898u) {
        ctx->pc = 0x392898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392894u;
        // 0x392898: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39289Cu;
        goto label_39289c;
    }
    ctx->pc = 0x392894u;
    {
        const bool branch_taken_0x392894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392894u;
        // 0x392898: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392894) {
            ctx->pc = 0x392710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392710;
        }
    }
    ctx->pc = 0x39289Cu;
label_39289c:
    // 0x39289c: 0x7bb00320  lq          $s0, 0x320($sp)
    ctx->pc = 0x39289cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_3928a0:
    // 0x3928a0: 0x7bb10310  lq          $s1, 0x310($sp)
    ctx->pc = 0x3928a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_3928a4:
    // 0x3928a4: 0x7bb20300  lq          $s2, 0x300($sp)
    ctx->pc = 0x3928a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_3928a8:
    // 0x3928a8: 0x7bb302f0  lq          $s3, 0x2F0($sp)
    ctx->pc = 0x3928a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_3928ac:
    // 0x3928ac: 0x7bb402e0  lq          $s4, 0x2E0($sp)
    ctx->pc = 0x3928acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_3928b0:
    // 0x3928b0: 0x7bb502d0  lq          $s5, 0x2D0($sp)
    ctx->pc = 0x3928b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_3928b4:
    // 0x3928b4: 0x7bb602c0  lq          $s6, 0x2C0($sp)
    ctx->pc = 0x3928b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_3928b8:
    // 0x3928b8: 0x7bb702b0  lq          $s7, 0x2B0($sp)
    ctx->pc = 0x3928b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_3928bc:
    // 0x3928bc: 0x7bbe02a0  lq          $fp, 0x2A0($sp)
    ctx->pc = 0x3928bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_3928c0:
    // 0x3928c0: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x3928c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_3928c4:
    // 0x3928c4: 0xc7b40330  lwc1        $f20, 0x330($sp)
    ctx->pc = 0x3928c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3928c8:
    // 0x3928c8: 0x3e00008  jr          $ra
label_3928cc:
    if (ctx->pc == 0x3928CCu) {
        ctx->pc = 0x3928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928C8u;
        // 0x3928cc: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928D0u;
        goto label_fallthrough_0x3928c8;
    }
    ctx->pc = 0x3928C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928C8u;
        // 0x3928cc: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3928C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3928c8:
    ctx->pc = 0x3928D0u;
}
