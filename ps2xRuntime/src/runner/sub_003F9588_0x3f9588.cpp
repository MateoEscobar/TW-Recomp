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

// Function: sub_003F9588
// Address: 0x3f9588 - 0x3f9770
void sub_003F9588_0x3f9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9588_0x3f9588");
#endif

    switch (ctx->pc) {
        case 0x3f9588u: goto label_3f9588;
        case 0x3f958cu: goto label_3f958c;
        case 0x3f9590u: goto label_3f9590;
        case 0x3f9594u: goto label_3f9594;
        case 0x3f9598u: goto label_3f9598;
        case 0x3f959cu: goto label_3f959c;
        case 0x3f95a0u: goto label_3f95a0;
        case 0x3f95a4u: goto label_3f95a4;
        case 0x3f95a8u: goto label_3f95a8;
        case 0x3f95acu: goto label_3f95ac;
        case 0x3f95b0u: goto label_3f95b0;
        case 0x3f95b4u: goto label_3f95b4;
        case 0x3f95b8u: goto label_3f95b8;
        case 0x3f95bcu: goto label_3f95bc;
        case 0x3f95c0u: goto label_3f95c0;
        case 0x3f95c4u: goto label_3f95c4;
        case 0x3f95c8u: goto label_3f95c8;
        case 0x3f95ccu: goto label_3f95cc;
        case 0x3f95d0u: goto label_3f95d0;
        case 0x3f95d4u: goto label_3f95d4;
        case 0x3f95d8u: goto label_3f95d8;
        case 0x3f95dcu: goto label_3f95dc;
        case 0x3f95e0u: goto label_3f95e0;
        case 0x3f95e4u: goto label_3f95e4;
        case 0x3f95e8u: goto label_3f95e8;
        case 0x3f95ecu: goto label_3f95ec;
        case 0x3f95f0u: goto label_3f95f0;
        case 0x3f95f4u: goto label_3f95f4;
        case 0x3f95f8u: goto label_3f95f8;
        case 0x3f95fcu: goto label_3f95fc;
        case 0x3f9600u: goto label_3f9600;
        case 0x3f9604u: goto label_3f9604;
        case 0x3f9608u: goto label_3f9608;
        case 0x3f960cu: goto label_3f960c;
        case 0x3f9610u: goto label_3f9610;
        case 0x3f9614u: goto label_3f9614;
        case 0x3f9618u: goto label_3f9618;
        case 0x3f961cu: goto label_3f961c;
        case 0x3f9620u: goto label_3f9620;
        case 0x3f9624u: goto label_3f9624;
        case 0x3f9628u: goto label_3f9628;
        case 0x3f962cu: goto label_3f962c;
        case 0x3f9630u: goto label_3f9630;
        case 0x3f9634u: goto label_3f9634;
        case 0x3f9638u: goto label_3f9638;
        case 0x3f963cu: goto label_3f963c;
        case 0x3f9640u: goto label_3f9640;
        case 0x3f9644u: goto label_3f9644;
        case 0x3f9648u: goto label_3f9648;
        case 0x3f964cu: goto label_3f964c;
        case 0x3f9650u: goto label_3f9650;
        case 0x3f9654u: goto label_3f9654;
        case 0x3f9658u: goto label_3f9658;
        case 0x3f965cu: goto label_3f965c;
        case 0x3f9660u: goto label_3f9660;
        case 0x3f9664u: goto label_3f9664;
        case 0x3f9668u: goto label_3f9668;
        case 0x3f966cu: goto label_3f966c;
        case 0x3f9670u: goto label_3f9670;
        case 0x3f9674u: goto label_3f9674;
        case 0x3f9678u: goto label_3f9678;
        case 0x3f967cu: goto label_3f967c;
        case 0x3f9680u: goto label_3f9680;
        case 0x3f9684u: goto label_3f9684;
        case 0x3f9688u: goto label_3f9688;
        case 0x3f968cu: goto label_3f968c;
        case 0x3f9690u: goto label_3f9690;
        case 0x3f9694u: goto label_3f9694;
        case 0x3f9698u: goto label_3f9698;
        case 0x3f969cu: goto label_3f969c;
        case 0x3f96a0u: goto label_3f96a0;
        case 0x3f96a4u: goto label_3f96a4;
        case 0x3f96a8u: goto label_3f96a8;
        case 0x3f96acu: goto label_3f96ac;
        case 0x3f96b0u: goto label_3f96b0;
        case 0x3f96b4u: goto label_3f96b4;
        case 0x3f96b8u: goto label_3f96b8;
        case 0x3f96bcu: goto label_3f96bc;
        case 0x3f96c0u: goto label_3f96c0;
        case 0x3f96c4u: goto label_3f96c4;
        case 0x3f96c8u: goto label_3f96c8;
        case 0x3f96ccu: goto label_3f96cc;
        case 0x3f96d0u: goto label_3f96d0;
        case 0x3f96d4u: goto label_3f96d4;
        case 0x3f96d8u: goto label_3f96d8;
        case 0x3f96dcu: goto label_3f96dc;
        case 0x3f96e0u: goto label_3f96e0;
        case 0x3f96e4u: goto label_3f96e4;
        case 0x3f96e8u: goto label_3f96e8;
        case 0x3f96ecu: goto label_3f96ec;
        case 0x3f96f0u: goto label_3f96f0;
        case 0x3f96f4u: goto label_3f96f4;
        case 0x3f96f8u: goto label_3f96f8;
        case 0x3f96fcu: goto label_3f96fc;
        case 0x3f9700u: goto label_3f9700;
        case 0x3f9704u: goto label_3f9704;
        case 0x3f9708u: goto label_3f9708;
        case 0x3f970cu: goto label_3f970c;
        case 0x3f9710u: goto label_3f9710;
        case 0x3f9714u: goto label_3f9714;
        case 0x3f9718u: goto label_3f9718;
        case 0x3f971cu: goto label_3f971c;
        case 0x3f9720u: goto label_3f9720;
        case 0x3f9724u: goto label_3f9724;
        case 0x3f9728u: goto label_3f9728;
        case 0x3f972cu: goto label_3f972c;
        case 0x3f9730u: goto label_3f9730;
        case 0x3f9734u: goto label_3f9734;
        case 0x3f9738u: goto label_3f9738;
        case 0x3f973cu: goto label_3f973c;
        case 0x3f9740u: goto label_3f9740;
        case 0x3f9744u: goto label_3f9744;
        case 0x3f9748u: goto label_3f9748;
        case 0x3f974cu: goto label_3f974c;
        case 0x3f9750u: goto label_3f9750;
        case 0x3f9754u: goto label_3f9754;
        case 0x3f9758u: goto label_3f9758;
        case 0x3f975cu: goto label_3f975c;
        case 0x3f9760u: goto label_3f9760;
        case 0x3f9764u: goto label_3f9764;
        case 0x3f9768u: goto label_3f9768;
        case 0x3f976cu: goto label_3f976c;
        default: break;
    }

    ctx->pc = 0x3f9588u;

label_3f9588:
    // 0x3f9588: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3f9588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3f958c:
    // 0x3f958c: 0x7fb004b0  sq          $s0, 0x4B0($sp)
    ctx->pc = 0x3f958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 16));
label_3f9590:
    // 0x3f9590: 0x7fb20490  sq          $s2, 0x490($sp)
    ctx->pc = 0x3f9590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 18));
label_3f9594:
    // 0x3f9594: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f9594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9598:
    // 0x3f9598: 0x7fb30480  sq          $s3, 0x480($sp)
    ctx->pc = 0x3f9598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 19));
label_3f959c:
    // 0x3f959c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f959cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f95a0:
    // 0x3f95a0: 0x7fb104a0  sq          $s1, 0x4A0($sp)
    ctx->pc = 0x3f95a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 17));
label_3f95a4:
    // 0x3f95a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3f95a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f95a8:
    // 0x3f95a8: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x3f95a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_3f95ac:
    // 0x3f95ac: 0xc0ea146  jal         func_3A8518
label_3f95b0:
    if (ctx->pc == 0x3F95B0u) {
        ctx->pc = 0x3F95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95ACu;
        // 0x3f95b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F95B4u;
        goto label_3f95b4;
    }
    ctx->pc = 0x3F95ACu;
    SET_GPR_U32(ctx, 31, 0x3F95B4u);
    ctx->pc = 0x3F95B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F95ACu;
    // 0x3f95b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F95ACu, 0x3F95B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F95B4u;
label_3f95b4:
    // 0x3f95b4: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
label_3f95b8:
    if (ctx->pc == 0x3F95B8u) {
        ctx->pc = 0x3F95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95B4u;
        // 0x3f95b8: 0x8e670024  lw          $a3, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F95BCu;
        goto label_3f95bc;
    }
    ctx->pc = 0x3F95B4u;
    {
        const bool branch_taken_0x3f95b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f95b4) {
            ctx->pc = 0x3F95B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F95B4u;
            // 0x3f95b8: 0x8e670024  lw          $a3, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9708u;
            goto label_3f9708;
        }
    }
    ctx->pc = 0x3F95BCu;
label_3f95bc:
    // 0x3f95bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3f95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3f95c0:
    // 0x3f95c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3f95c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3f95c4:
    // 0x3f95c4: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_3f95c8:
    if (ctx->pc == 0x3F95C8u) {
        ctx->pc = 0x3F95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95C4u;
        // 0x3f95c8: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F95CCu;
        goto label_3f95cc;
    }
    ctx->pc = 0x3F95C4u;
    {
        const bool branch_taken_0x3f95c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95C4u;
        // 0x3f95c8: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f95c4) {
            ctx->pc = 0x3F9754u;
            goto label_3f9754;
        }
    }
    ctx->pc = 0x3F95CCu;
label_3f95cc:
    // 0x3f95cc: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x3f95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3f95d0:
    // 0x3f95d0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_3f95d4:
    if (ctx->pc == 0x3F95D4u) {
        ctx->pc = 0x3F95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95D0u;
        // 0x3f95d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F95D8u;
        goto label_3f95d8;
    }
    ctx->pc = 0x3F95D0u;
    {
        const bool branch_taken_0x3f95d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95D0u;
        // 0x3f95d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f95d0) {
            ctx->pc = 0x3F96C8u;
            goto label_3f96c8;
        }
    }
    ctx->pc = 0x3F95D8u;
label_3f95d8:
    // 0x3f95d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f95d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f95dc:
    // 0x3f95dc: 0xc0e8e26  jal         func_3A3898
label_3f95e0:
    if (ctx->pc == 0x3F95E0u) {
        ctx->pc = 0x3F95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95DCu;
        // 0x3f95e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F95E4u;
        goto label_3f95e4;
    }
    ctx->pc = 0x3F95DCu;
    SET_GPR_U32(ctx, 31, 0x3F95E4u);
    ctx->pc = 0x3F95E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F95DCu;
    // 0x3f95e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3898u, 0x3F95DCu, 0x3F95E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F95E4u;
label_3f95e4:
    // 0x3f95e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3f95e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3f95e8:
    // 0x3f95e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f95e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f95ec:
    // 0x3f95ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f95ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f95f0:
    // 0x3f95f0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3f95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3f95f4:
    // 0x3f95f4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x3f95f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3f95f8:
    // 0x3f95f8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3f95f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3f95fc:
    // 0x3f95fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3f95fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f9600:
    // 0x3f9600: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3f9600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3f9604:
    // 0x3f9604: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f9604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f9608:
    // 0x3f9608: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f9608u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f960c:
    // 0x3f960c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f9610:
    // 0x3f9610: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f9610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f9614:
    // 0x3f9614: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f9614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f9618:
    // 0x3f9618: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f9618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f961c:
    // 0x3f961c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f961cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9620:
    // 0x3f9620: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f9620u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9624:
    // 0x3f9624: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f9624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9628:
    // 0x3f9628: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f9628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f962c:
    // 0x3f962c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f962cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f9630:
    // 0x3f9630: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f9630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9634:
    // 0x3f9634: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f9634u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f9638:
    // 0x3f9638: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f9638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f963c:
    // 0x3f963c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f963cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9640:
    // 0x3f9640: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f9640u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f9644:
    // 0x3f9644: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f9644u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f9648:
    // 0x3f9648: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f9648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f964c:
    // 0x3f964c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f964cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f9650:
    // 0x3f9650: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f9650u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f9654:
    // 0x3f9654: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f9654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f9658:
    // 0x3f9658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f9658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f965c:
    // 0x3f965c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3f965cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3f9660:
    // 0x3f9660: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f9660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f9664:
    // 0x3f9664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f9664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f9668:
    // 0x3f9668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f9668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f966c:
    // 0x3f966c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3f966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f9670:
    // 0x3f9670: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f9670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f9674:
    // 0x3f9674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f9674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f9678:
    // 0x3f9678: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3f9678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3f967c:
    // 0x3f967c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3f967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3f9680:
    // 0x3f9680: 0xc136b18  jal         func_4DAC60
label_3f9684:
    if (ctx->pc == 0x3F9684u) {
        ctx->pc = 0x3F9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9680u;
        // 0x3f9684: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9688u;
        goto label_3f9688;
    }
    ctx->pc = 0x3F9680u;
    SET_GPR_U32(ctx, 31, 0x3F9688u);
    ctx->pc = 0x3F9684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9680u;
    // 0x3f9684: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3F9680u, 0x3F9688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9688u;
label_3f9688:
    // 0x3f9688: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3f9688u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f968c:
    // 0x3f968c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3f968cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f9690:
    // 0x3f9690: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3f9690u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f9694:
    // 0x3f9694: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f9694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f9698:
    // 0x3f9698: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3f9698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f969c:
    // 0x3f969c: 0x26106eb8  addiu       $s0, $s0, 0x6EB8
    ctx->pc = 0x3f969cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28344));
label_3f96a0:
    // 0x3f96a0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3f96a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3f96a4:
    // 0x3f96a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f96a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f96a8:
    // 0x3f96a8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f96a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f96ac:
    // 0x3f96ac: 0xc0e9f84  jal         func_3A7E10
label_3f96b0:
    if (ctx->pc == 0x3F96B0u) {
        ctx->pc = 0x3F96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F96ACu;
        // 0x3f96b0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F96B4u;
        goto label_3f96b4;
    }
    ctx->pc = 0x3F96ACu;
    SET_GPR_U32(ctx, 31, 0x3F96B4u);
    ctx->pc = 0x3F96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F96ACu;
    // 0x3f96b0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3F96ACu, 0x3F96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F96B4u;
label_3f96b4:
    // 0x3f96b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f96b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f96b8:
    // 0x3f96b8: 0xc0f15bc  jal         func_3C56F0
label_3f96bc:
    if (ctx->pc == 0x3F96BCu) {
        ctx->pc = 0x3F96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F96B8u;
        // 0x3f96bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F96C0u;
        goto label_3f96c0;
    }
    ctx->pc = 0x3F96B8u;
    SET_GPR_U32(ctx, 31, 0x3F96C0u);
    ctx->pc = 0x3F96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F96B8u;
    // 0x3f96bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F96B8u, 0x3F96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F96C0u;
label_3f96c0:
    // 0x3f96c0: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x3f96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_3f96c4:
    // 0x3f96c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f96c8:
    // 0x3f96c8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3f96c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3f96cc:
    // 0x3f96cc: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x3f96ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_3f96d0:
    // 0x3f96d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3f96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f96d4:
    // 0x3f96d4: 0xae420124  sw          $v0, 0x124($s2)
    ctx->pc = 0x3f96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
label_3f96d8:
    // 0x3f96d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f96d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f96dc:
    // 0x3f96dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3f96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f96e0:
    // 0x3f96e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f96e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f96e4:
    // 0x3f96e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f96e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f96e8:
    // 0x3f96e8: 0x84640120  lh          $a0, 0x120($v1)
    ctx->pc = 0x3f96e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 288)));
label_3f96ec:
    // 0x3f96ec: 0x8c620124  lw          $v0, 0x124($v1)
    ctx->pc = 0x3f96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_3f96f0:
    // 0x3f96f0: 0x40f809  jalr        $v0
label_3f96f4:
    if (ctx->pc == 0x3F96F4u) {
        ctx->pc = 0x3F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F96F0u;
        // 0x3f96f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F96F8u;
        goto label_3f96f8;
    }
    ctx->pc = 0x3F96F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F96F8u);
        ctx->pc = 0x3F96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F96F0u;
        // 0x3f96f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F96F0u, 0x3F96F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F96F8u;
label_3f96f8:
    // 0x3f96f8: 0xc0e94d0  jal         func_3A5340
label_3f96fc:
    if (ctx->pc == 0x3F96FCu) {
        ctx->pc = 0x3F96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F96F8u;
        // 0x3f96fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9700u;
        goto label_3f9700;
    }
    ctx->pc = 0x3F96F8u;
    SET_GPR_U32(ctx, 31, 0x3F9700u);
    ctx->pc = 0x3F96FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F96F8u;
    // 0x3f96fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3F96F8u, 0x3F9700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9700u;
label_3f9700:
    // 0x3f9700: 0x10000014  b           . + 4 + (0x14 << 2)
label_3f9704:
    if (ctx->pc == 0x3F9704u) {
        ctx->pc = 0x3F9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9700u;
        // 0x3f9704: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9708u;
        goto label_3f9708;
    }
    ctx->pc = 0x3F9700u;
    {
        const bool branch_taken_0x3f9700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9700u;
        // 0x3f9704: 0x7bb004b0  lq          $s0, 0x4B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9700) {
            ctx->pc = 0x3F9754u;
            goto label_3f9754;
        }
    }
    ctx->pc = 0x3F9708u;
label_3f9708:
    // 0x3f9708: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3f970c:
    if (ctx->pc == 0x3F970Cu) {
        ctx->pc = 0x3F970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9708u;
        // 0x3f970c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9710u;
        goto label_3f9710;
    }
    ctx->pc = 0x3F9708u;
    {
        const bool branch_taken_0x3f9708 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9708u;
        // 0x3f970c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9708) {
            ctx->pc = 0x3F972Cu;
            goto label_3f972c;
        }
    }
    ctx->pc = 0x3F9710u;
label_3f9710:
    // 0x3f9710: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3f9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3f9714:
    // 0x3f9714: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3f9714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f9718:
    // 0x3f9718: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3f9718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3f971c:
    // 0x3f971c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3f9720:
    // 0x3f9720: 0x60f809  jalr        $v1
label_3f9724:
    if (ctx->pc == 0x3F9724u) {
        ctx->pc = 0x3F9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9720u;
        // 0x3f9724: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9728u;
        goto label_3f9728;
    }
    ctx->pc = 0x3F9720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F9728u);
        ctx->pc = 0x3F9724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9720u;
        // 0x3f9724: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9720u, 0x3F9728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F9728u;
label_3f9728:
    // 0x3f9728: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x3f9728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_3f972c:
    // 0x3f972c: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x3f972cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_3f9730:
    // 0x3f9730: 0xae400124  sw          $zero, 0x124($s2)
    ctx->pc = 0x3f9730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
label_3f9734:
    // 0x3f9734: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f9734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f9738:
    // 0x3f9738: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x3f9738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_3f973c:
    // 0x3f973c: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x3f973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_3f9740:
    // 0x3f9740: 0x60f809  jalr        $v1
label_3f9744:
    if (ctx->pc == 0x3F9744u) {
        ctx->pc = 0x3F9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9740u;
        // 0x3f9744: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9748u;
        goto label_3f9748;
    }
    ctx->pc = 0x3F9740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F9748u);
        ctx->pc = 0x3F9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9740u;
        // 0x3f9744: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9740u, 0x3F9748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F9748u;
label_3f9748:
    // 0x3f9748: 0xc0e94b2  jal         func_3A52C8
label_3f974c:
    if (ctx->pc == 0x3F974Cu) {
        ctx->pc = 0x3F974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9748u;
        // 0x3f974c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F9750u;
        goto label_3f9750;
    }
    ctx->pc = 0x3F9748u;
    SET_GPR_U32(ctx, 31, 0x3F9750u);
    ctx->pc = 0x3F974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9748u;
    // 0x3f974c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52C8u, 0x3F9748u, 0x3F9750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9750u;
label_3f9750:
    // 0x3f9750: 0x7bb004b0  lq          $s0, 0x4B0($sp)
    ctx->pc = 0x3f9750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3f9754:
    // 0x3f9754: 0x7bb104a0  lq          $s1, 0x4A0($sp)
    ctx->pc = 0x3f9754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3f9758:
    // 0x3f9758: 0x7bb20490  lq          $s2, 0x490($sp)
    ctx->pc = 0x3f9758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3f975c:
    // 0x3f975c: 0x7bb30480  lq          $s3, 0x480($sp)
    ctx->pc = 0x3f975cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3f9760:
    // 0x3f9760: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x3f9760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_3f9764:
    // 0x3f9764: 0x3e00008  jr          $ra
label_3f9768:
    if (ctx->pc == 0x3F9768u) {
        ctx->pc = 0x3F9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9764u;
        // 0x3f9768: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F976Cu;
        goto label_3f976c;
    }
    ctx->pc = 0x3F9764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9764u;
        // 0x3f9768: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F976Cu;
label_3f976c:
    // 0x3f976c: 0x0  nop
    ctx->pc = 0x3f976cu;
    // NOP
    ctx->pc = 0x3f9770u;
}
