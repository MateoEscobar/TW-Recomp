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

// Function: sub_001426C0
// Address: 0x1426c0 - 0x142a58
void sub_001426C0_0x1426c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001426C0_0x1426c0");
#endif

    switch (ctx->pc) {
        case 0x1426c0u: goto label_1426c0;
        case 0x1426c4u: goto label_1426c4;
        case 0x1426c8u: goto label_1426c8;
        case 0x1426ccu: goto label_1426cc;
        case 0x1426d0u: goto label_1426d0;
        case 0x1426d4u: goto label_1426d4;
        case 0x1426d8u: goto label_1426d8;
        case 0x1426dcu: goto label_1426dc;
        case 0x1426e0u: goto label_1426e0;
        case 0x1426e4u: goto label_1426e4;
        case 0x1426e8u: goto label_1426e8;
        case 0x1426ecu: goto label_1426ec;
        case 0x1426f0u: goto label_1426f0;
        case 0x1426f4u: goto label_1426f4;
        case 0x1426f8u: goto label_1426f8;
        case 0x1426fcu: goto label_1426fc;
        case 0x142700u: goto label_142700;
        case 0x142704u: goto label_142704;
        case 0x142708u: goto label_142708;
        case 0x14270cu: goto label_14270c;
        case 0x142710u: goto label_142710;
        case 0x142714u: goto label_142714;
        case 0x142718u: goto label_142718;
        case 0x14271cu: goto label_14271c;
        case 0x142720u: goto label_142720;
        case 0x142724u: goto label_142724;
        case 0x142728u: goto label_142728;
        case 0x14272cu: goto label_14272c;
        case 0x142730u: goto label_142730;
        case 0x142734u: goto label_142734;
        case 0x142738u: goto label_142738;
        case 0x14273cu: goto label_14273c;
        case 0x142740u: goto label_142740;
        case 0x142744u: goto label_142744;
        case 0x142748u: goto label_142748;
        case 0x14274cu: goto label_14274c;
        case 0x142750u: goto label_142750;
        case 0x142754u: goto label_142754;
        case 0x142758u: goto label_142758;
        case 0x14275cu: goto label_14275c;
        case 0x142760u: goto label_142760;
        case 0x142764u: goto label_142764;
        case 0x142768u: goto label_142768;
        case 0x14276cu: goto label_14276c;
        case 0x142770u: goto label_142770;
        case 0x142774u: goto label_142774;
        case 0x142778u: goto label_142778;
        case 0x14277cu: goto label_14277c;
        case 0x142780u: goto label_142780;
        case 0x142784u: goto label_142784;
        case 0x142788u: goto label_142788;
        case 0x14278cu: goto label_14278c;
        case 0x142790u: goto label_142790;
        case 0x142794u: goto label_142794;
        case 0x142798u: goto label_142798;
        case 0x14279cu: goto label_14279c;
        case 0x1427a0u: goto label_1427a0;
        case 0x1427a4u: goto label_1427a4;
        case 0x1427a8u: goto label_1427a8;
        case 0x1427acu: goto label_1427ac;
        case 0x1427b0u: goto label_1427b0;
        case 0x1427b4u: goto label_1427b4;
        case 0x1427b8u: goto label_1427b8;
        case 0x1427bcu: goto label_1427bc;
        case 0x1427c0u: goto label_1427c0;
        case 0x1427c4u: goto label_1427c4;
        case 0x1427c8u: goto label_1427c8;
        case 0x1427ccu: goto label_1427cc;
        case 0x1427d0u: goto label_1427d0;
        case 0x1427d4u: goto label_1427d4;
        case 0x1427d8u: goto label_1427d8;
        case 0x1427dcu: goto label_1427dc;
        case 0x1427e0u: goto label_1427e0;
        case 0x1427e4u: goto label_1427e4;
        case 0x1427e8u: goto label_1427e8;
        case 0x1427ecu: goto label_1427ec;
        case 0x1427f0u: goto label_1427f0;
        case 0x1427f4u: goto label_1427f4;
        case 0x1427f8u: goto label_1427f8;
        case 0x1427fcu: goto label_1427fc;
        case 0x142800u: goto label_142800;
        case 0x142804u: goto label_142804;
        case 0x142808u: goto label_142808;
        case 0x14280cu: goto label_14280c;
        case 0x142810u: goto label_142810;
        case 0x142814u: goto label_142814;
        case 0x142818u: goto label_142818;
        case 0x14281cu: goto label_14281c;
        case 0x142820u: goto label_142820;
        case 0x142824u: goto label_142824;
        case 0x142828u: goto label_142828;
        case 0x14282cu: goto label_14282c;
        case 0x142830u: goto label_142830;
        case 0x142834u: goto label_142834;
        case 0x142838u: goto label_142838;
        case 0x14283cu: goto label_14283c;
        case 0x142840u: goto label_142840;
        case 0x142844u: goto label_142844;
        case 0x142848u: goto label_142848;
        case 0x14284cu: goto label_14284c;
        case 0x142850u: goto label_142850;
        case 0x142854u: goto label_142854;
        case 0x142858u: goto label_142858;
        case 0x14285cu: goto label_14285c;
        case 0x142860u: goto label_142860;
        case 0x142864u: goto label_142864;
        case 0x142868u: goto label_142868;
        case 0x14286cu: goto label_14286c;
        case 0x142870u: goto label_142870;
        case 0x142874u: goto label_142874;
        case 0x142878u: goto label_142878;
        case 0x14287cu: goto label_14287c;
        case 0x142880u: goto label_142880;
        case 0x142884u: goto label_142884;
        case 0x142888u: goto label_142888;
        case 0x14288cu: goto label_14288c;
        case 0x142890u: goto label_142890;
        case 0x142894u: goto label_142894;
        case 0x142898u: goto label_142898;
        case 0x14289cu: goto label_14289c;
        case 0x1428a0u: goto label_1428a0;
        case 0x1428a4u: goto label_1428a4;
        case 0x1428a8u: goto label_1428a8;
        case 0x1428acu: goto label_1428ac;
        case 0x1428b0u: goto label_1428b0;
        case 0x1428b4u: goto label_1428b4;
        case 0x1428b8u: goto label_1428b8;
        case 0x1428bcu: goto label_1428bc;
        case 0x1428c0u: goto label_1428c0;
        case 0x1428c4u: goto label_1428c4;
        case 0x1428c8u: goto label_1428c8;
        case 0x1428ccu: goto label_1428cc;
        case 0x1428d0u: goto label_1428d0;
        case 0x1428d4u: goto label_1428d4;
        case 0x1428d8u: goto label_1428d8;
        case 0x1428dcu: goto label_1428dc;
        case 0x1428e0u: goto label_1428e0;
        case 0x1428e4u: goto label_1428e4;
        case 0x1428e8u: goto label_1428e8;
        case 0x1428ecu: goto label_1428ec;
        case 0x1428f0u: goto label_1428f0;
        case 0x1428f4u: goto label_1428f4;
        case 0x1428f8u: goto label_1428f8;
        case 0x1428fcu: goto label_1428fc;
        case 0x142900u: goto label_142900;
        case 0x142904u: goto label_142904;
        case 0x142908u: goto label_142908;
        case 0x14290cu: goto label_14290c;
        case 0x142910u: goto label_142910;
        case 0x142914u: goto label_142914;
        case 0x142918u: goto label_142918;
        case 0x14291cu: goto label_14291c;
        case 0x142920u: goto label_142920;
        case 0x142924u: goto label_142924;
        case 0x142928u: goto label_142928;
        case 0x14292cu: goto label_14292c;
        case 0x142930u: goto label_142930;
        case 0x142934u: goto label_142934;
        case 0x142938u: goto label_142938;
        case 0x14293cu: goto label_14293c;
        case 0x142940u: goto label_142940;
        case 0x142944u: goto label_142944;
        case 0x142948u: goto label_142948;
        case 0x14294cu: goto label_14294c;
        case 0x142950u: goto label_142950;
        case 0x142954u: goto label_142954;
        case 0x142958u: goto label_142958;
        case 0x14295cu: goto label_14295c;
        case 0x142960u: goto label_142960;
        case 0x142964u: goto label_142964;
        case 0x142968u: goto label_142968;
        case 0x14296cu: goto label_14296c;
        case 0x142970u: goto label_142970;
        case 0x142974u: goto label_142974;
        case 0x142978u: goto label_142978;
        case 0x14297cu: goto label_14297c;
        case 0x142980u: goto label_142980;
        case 0x142984u: goto label_142984;
        case 0x142988u: goto label_142988;
        case 0x14298cu: goto label_14298c;
        case 0x142990u: goto label_142990;
        case 0x142994u: goto label_142994;
        case 0x142998u: goto label_142998;
        case 0x14299cu: goto label_14299c;
        case 0x1429a0u: goto label_1429a0;
        case 0x1429a4u: goto label_1429a4;
        case 0x1429a8u: goto label_1429a8;
        case 0x1429acu: goto label_1429ac;
        case 0x1429b0u: goto label_1429b0;
        case 0x1429b4u: goto label_1429b4;
        case 0x1429b8u: goto label_1429b8;
        case 0x1429bcu: goto label_1429bc;
        case 0x1429c0u: goto label_1429c0;
        case 0x1429c4u: goto label_1429c4;
        case 0x1429c8u: goto label_1429c8;
        case 0x1429ccu: goto label_1429cc;
        case 0x1429d0u: goto label_1429d0;
        case 0x1429d4u: goto label_1429d4;
        case 0x1429d8u: goto label_1429d8;
        case 0x1429dcu: goto label_1429dc;
        case 0x1429e0u: goto label_1429e0;
        case 0x1429e4u: goto label_1429e4;
        case 0x1429e8u: goto label_1429e8;
        case 0x1429ecu: goto label_1429ec;
        case 0x1429f0u: goto label_1429f0;
        case 0x1429f4u: goto label_1429f4;
        case 0x1429f8u: goto label_1429f8;
        case 0x1429fcu: goto label_1429fc;
        case 0x142a00u: goto label_142a00;
        case 0x142a04u: goto label_142a04;
        case 0x142a08u: goto label_142a08;
        case 0x142a0cu: goto label_142a0c;
        case 0x142a10u: goto label_142a10;
        case 0x142a14u: goto label_142a14;
        case 0x142a18u: goto label_142a18;
        case 0x142a1cu: goto label_142a1c;
        case 0x142a20u: goto label_142a20;
        case 0x142a24u: goto label_142a24;
        case 0x142a28u: goto label_142a28;
        case 0x142a2cu: goto label_142a2c;
        case 0x142a30u: goto label_142a30;
        case 0x142a34u: goto label_142a34;
        case 0x142a38u: goto label_142a38;
        case 0x142a3cu: goto label_142a3c;
        case 0x142a40u: goto label_142a40;
        case 0x142a44u: goto label_142a44;
        case 0x142a48u: goto label_142a48;
        case 0x142a4cu: goto label_142a4c;
        case 0x142a50u: goto label_142a50;
        case 0x142a54u: goto label_142a54;
        default: break;
    }

    ctx->pc = 0x1426c0u;

label_1426c0:
    // 0x1426c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1426c4:
    // 0x1426c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1426c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1426c8:
    // 0x1426c8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1426c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1426cc:
    // 0x1426cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1426ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1426d0:
    // 0x1426d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1426d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1426d4:
    // 0x1426d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1426d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1426d8:
    // 0x1426d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1426d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1426dc:
    // 0x1426dc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1426dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1426e0:
    // 0x1426e0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1426e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1426e4:
    // 0x1426e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1426e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1426e8:
    // 0x1426e8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1426e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1426ec:
    // 0x1426ec: 0x8e42033c  lw          $v0, 0x33C($s2)
    ctx->pc = 0x1426ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_1426f0:
    // 0x1426f0: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_1426f4:
    if (ctx->pc == 0x1426F4u) {
        ctx->pc = 0x1426F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426F0u;
        // 0x1426f4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1426F8u;
        goto label_1426f8;
    }
    ctx->pc = 0x1426F0u;
    {
        const bool branch_taken_0x1426f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1426F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1426F0u;
        // 0x1426f4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1426f0) {
            ctx->pc = 0x142A28u;
            goto label_142a28;
        }
    }
    ctx->pc = 0x1426F8u;
label_1426f8:
    // 0x1426f8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1426f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1426fc:
    // 0x1426fc: 0x0  nop
    ctx->pc = 0x1426fcu;
    // NOP
label_142700:
    // 0x142700: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x142700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_142704:
    // 0x142704: 0x0  nop
    ctx->pc = 0x142704u;
    // NOP
label_142708:
    // 0x142708: 0x450100c8  bc1t        . + 4 + (0xC8 << 2)
label_14270c:
    if (ctx->pc == 0x14270Cu) {
        ctx->pc = 0x14270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142708u;
        // 0x14270c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142710u;
        goto label_142710;
    }
    ctx->pc = 0x142708u;
    {
        const bool branch_taken_0x142708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142708u;
        // 0x14270c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142708) {
            ctx->pc = 0x142A2Cu;
            goto label_142a2c;
        }
    }
    ctx->pc = 0x142710u;
label_142710:
    // 0x142710: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_142714:
    // 0x142714: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
label_142718:
    if (ctx->pc == 0x142718u) {
        ctx->pc = 0x142718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142714u;
        // 0x142718: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14271Cu;
        goto label_14271c;
    }
    ctx->pc = 0x142714u;
    {
        const bool branch_taken_0x142714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142714u;
        // 0x142718: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142714) {
            ctx->pc = 0x142A30u;
            goto label_142a30;
        }
    }
    ctx->pc = 0x14271Cu;
label_14271c:
    // 0x14271c: 0xc047e6c  jal         func_11F9B0
label_142720:
    if (ctx->pc == 0x142720u) {
        ctx->pc = 0x142720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14271Cu;
        // 0x142720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142724u;
        goto label_142724;
    }
    ctx->pc = 0x14271Cu;
    SET_GPR_U32(ctx, 31, 0x142724u);
    ctx->pc = 0x142720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14271Cu;
    // 0x142720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x14271Cu, 0x142724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142724u;
label_142724:
    // 0x142724: 0x545200c1  bnel        $v0, $s2, . + 4 + (0xC1 << 2)
label_142728:
    if (ctx->pc == 0x142728u) {
        ctx->pc = 0x142728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142724u;
        // 0x142728: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14272Cu;
        goto label_14272c;
    }
    ctx->pc = 0x142724u;
    {
        const bool branch_taken_0x142724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x142724) {
            ctx->pc = 0x142728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142724u;
            // 0x142728: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142A2Cu;
            goto label_142a2c;
        }
    }
    ctx->pc = 0x14272Cu;
label_14272c:
    // 0x14272c: 0xc640032c  lwc1        $f0, 0x32C($s2)
    ctx->pc = 0x14272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_142730:
    // 0x142730: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x142730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_142734:
    // 0x142734: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x142734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_142738:
    // 0x142738: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x142738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_14273c:
    // 0x14273c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x14273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_142740:
    // 0x142740: 0xe65401a0  swc1        $f20, 0x1A0($s2)
    ctx->pc = 0x142740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
label_142744:
    // 0x142744: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
label_142748:
    if (ctx->pc == 0x142748u) {
        ctx->pc = 0x142748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142744u;
        // 0x142748: 0xe641032c  swc1        $f1, 0x32C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 812), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14274Cu;
        goto label_14274c;
    }
    ctx->pc = 0x142744u;
    {
        const bool branch_taken_0x142744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x142748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142744u;
        // 0x142748: 0xe641032c  swc1        $f1, 0x32C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 812), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142744) {
            ctx->pc = 0x1427C8u;
            goto label_1427c8;
        }
    }
    ctx->pc = 0x14274Cu;
label_14274c:
    // 0x14274c: 0x8e420340  lw          $v0, 0x340($s2)
    ctx->pc = 0x14274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_142750:
    // 0x142750: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_142754:
    if (ctx->pc == 0x142754u) {
        ctx->pc = 0x142754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142750u;
        // 0x142754: 0xae40033c  sw          $zero, 0x33C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142758u;
        goto label_142758;
    }
    ctx->pc = 0x142750u;
    {
        const bool branch_taken_0x142750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142750u;
        // 0x142754: 0xae40033c  sw          $zero, 0x33C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142750) {
            ctx->pc = 0x142778u;
            goto label_142778;
        }
    }
    ctx->pc = 0x142758u;
label_142758:
    // 0x142758: 0x8e4502e8  lw          $a1, 0x2E8($s2)
    ctx->pc = 0x142758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 744)));
label_14275c:
    // 0x14275c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14275cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_142760:
    // 0x142760: 0x8e4402e0  lw          $a0, 0x2E0($s2)
    ctx->pc = 0x142760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
label_142764:
    // 0x142764: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x142764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_142768:
    // 0x142768: 0xc047b82  jal         func_11EE08
label_14276c:
    if (ctx->pc == 0x14276Cu) {
        ctx->pc = 0x14276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142768u;
        // 0x14276c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142770u;
        goto label_142770;
    }
    ctx->pc = 0x142768u;
    SET_GPR_U32(ctx, 31, 0x142770u);
    ctx->pc = 0x14276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142768u;
    // 0x14276c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x142768u, 0x142770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142770u;
label_142770:
    // 0x142770: 0x100000ae  b           . + 4 + (0xAE << 2)
label_142774:
    if (ctx->pc == 0x142774u) {
        ctx->pc = 0x142774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142770u;
        // 0x142774: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142778u;
        goto label_142778;
    }
    ctx->pc = 0x142770u;
    {
        const bool branch_taken_0x142770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142770u;
        // 0x142774: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142770) {
            ctx->pc = 0x142A2Cu;
            goto label_142a2c;
        }
    }
    ctx->pc = 0x142778u;
label_142778:
    // 0x142778: 0x8e4502e4  lw          $a1, 0x2E4($s2)
    ctx->pc = 0x142778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
label_14277c:
    // 0x14277c: 0x10a000aa  beqz        $a1, . + 4 + (0xAA << 2)
label_142780:
    if (ctx->pc == 0x142780u) {
        ctx->pc = 0x142780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14277Cu;
        // 0x142780: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142784u;
        goto label_142784;
    }
    ctx->pc = 0x14277Cu;
    {
        const bool branch_taken_0x14277c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x142780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14277Cu;
        // 0x142780: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14277c) {
            ctx->pc = 0x142A28u;
            goto label_142a28;
        }
    }
    ctx->pc = 0x142784u;
label_142784:
    // 0x142784: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x142784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_142788:
    // 0x142788: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x142788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14278c:
    // 0x14278c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x14278cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_142790:
    // 0x142790: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x142790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_142794:
    // 0x142794: 0x40f809  jalr        $v0
label_142798:
    if (ctx->pc == 0x142798u) {
        ctx->pc = 0x142798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142794u;
        // 0x142798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14279Cu;
        goto label_14279c;
    }
    ctx->pc = 0x142794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14279Cu);
        ctx->pc = 0x142798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142794u;
        // 0x142798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142794u, 0x14279Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14279Cu;
label_14279c:
    // 0x14279c: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_1427a0:
    if (ctx->pc == 0x1427A0u) {
        ctx->pc = 0x1427A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14279Cu;
        // 0x1427a0: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1427A4u;
        goto label_1427a4;
    }
    ctx->pc = 0x14279Cu;
    {
        const bool branch_taken_0x14279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14279Cu;
        // 0x1427a0: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14279c) {
            ctx->pc = 0x142A28u;
            goto label_142a28;
        }
    }
    ctx->pc = 0x1427A4u;
label_1427a4:
    // 0x1427a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1427a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1427a8:
    // 0x1427a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1427a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1427ac:
    // 0x1427ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1427acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1427b0:
    // 0x1427b0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1427b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1427b4:
    // 0x1427b4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1427b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1427b8:
    // 0x1427b8: 0x60f809  jalr        $v1
label_1427bc:
    if (ctx->pc == 0x1427BCu) {
        ctx->pc = 0x1427BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427B8u;
        // 0x1427bc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1427C0u;
        goto label_1427c0;
    }
    ctx->pc = 0x1427B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1427C0u);
        ctx->pc = 0x1427BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427B8u;
        // 0x1427bc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1427B8u, 0x1427C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1427C0u;
label_1427c0:
    // 0x1427c0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1427c4:
    if (ctx->pc == 0x1427C4u) {
        ctx->pc = 0x1427C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427C0u;
        // 0x1427c4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1427C8u;
        goto label_1427c8;
    }
    ctx->pc = 0x1427C0u;
    {
        const bool branch_taken_0x1427c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427C0u;
        // 0x1427c4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427c0) {
            ctx->pc = 0x142A2Cu;
            goto label_142a2c;
        }
    }
    ctx->pc = 0x1427C8u;
label_1427c8:
    // 0x1427c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1427c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1427cc:
    // 0x1427cc: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1427ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1427d0:
    // 0x1427d0: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x1427d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1427d4:
    // 0x1427d4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1427d8:
    if (ctx->pc == 0x1427D8u) {
        ctx->pc = 0x1427D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427D4u;
        // 0x1427d8: 0x265501e0  addiu       $s5, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1427DCu;
        goto label_1427dc;
    }
    ctx->pc = 0x1427D4u;
    {
        const bool branch_taken_0x1427d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427D4u;
        // 0x1427d8: 0x265501e0  addiu       $s5, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427d4) {
            ctx->pc = 0x14284Cu;
            goto label_14284c;
        }
    }
    ctx->pc = 0x1427DCu;
label_1427dc:
    // 0x1427dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1427dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1427e0:
    // 0x1427e0: 0x2643030c  addiu       $v1, $s2, 0x30C
    ctx->pc = 0x1427e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 780));
label_1427e4:
    // 0x1427e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1427e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1427e8:
    // 0x1427e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1427e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1427ec:
    // 0x1427ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1427ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1427f0:
    // 0x1427f0: 0x0  nop
    ctx->pc = 0x1427f0u;
    // NOP
label_1427f4:
    // 0x1427f4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_1427f8:
    if (ctx->pc == 0x1427F8u) {
        ctx->pc = 0x1427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427F4u;
        // 0x1427f8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1427FCu;
        goto label_1427fc;
    }
    ctx->pc = 0x1427F4u;
    {
        const bool branch_taken_0x1427f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427F4u;
        // 0x1427f8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427f4) {
            ctx->pc = 0x14284Cu;
            goto label_14284c;
        }
    }
    ctx->pc = 0x1427FCu;
label_1427fc:
    // 0x1427fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1427fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_142800:
    // 0x142800: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x142800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_142804:
    // 0x142804: 0x0  nop
    ctx->pc = 0x142804u;
    // NOP
label_142808:
    // 0x142808: 0xc641032c  lwc1        $f1, 0x32C($s2)
    ctx->pc = 0x142808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14280c:
    // 0x14280c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x14280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_142810:
    // 0x142810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_142814:
    // 0x142814: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x142814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_142818:
    // 0x142818: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x142818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_14281c:
    // 0x14281c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_142820:
    // 0x142820: 0xae440338  sw          $a0, 0x338($s2)
    ctx->pc = 0x142820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 4));
label_142824:
    // 0x142824: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x142824u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_142828:
    // 0x142828: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_14282c:
    if (ctx->pc == 0x14282Cu) {
        ctx->pc = 0x14282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142828u;
        // 0x14282c: 0xe641032c  swc1        $f1, 0x32C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 812), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x142830u;
        goto label_142830;
    }
    ctx->pc = 0x142828u;
    {
        const bool branch_taken_0x142828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142828u;
        // 0x14282c: 0xe641032c  swc1        $f1, 0x32C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 812), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142828) {
            ctx->pc = 0x14284Cu;
            goto label_14284c;
        }
    }
    ctx->pc = 0x142830u;
label_142830:
    // 0x142830: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_142834:
    // 0x142834: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x142834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_142838:
    // 0x142838: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x142838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14283c:
    // 0x14283c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14283cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_142840:
    // 0x142840: 0x0  nop
    ctx->pc = 0x142840u;
    // NOP
label_142844:
    // 0x142844: 0x4503fff0  bc1tl       . + 4 + (-0x10 << 2)
label_142848:
    if (ctx->pc == 0x142848u) {
        ctx->pc = 0x142848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142844u;
        // 0x142848: 0x8e420338  lw          $v0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14284Cu;
        goto label_14284c;
    }
    ctx->pc = 0x142844u;
    {
        const bool branch_taken_0x142844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142844) {
            ctx->pc = 0x142848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142844u;
            // 0x142848: 0x8e420338  lw          $v0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142808;
        }
    }
    ctx->pc = 0x14284Cu;
label_14284c:
    // 0x14284c: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x14284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_142850:
    // 0x142850: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x142850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_142854:
    // 0x142854: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x142854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_142858:
    // 0x142858: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_14285c:
    if (ctx->pc == 0x14285Cu) {
        ctx->pc = 0x14285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142858u;
        // 0x14285c: 0x8e450334  lw          $a1, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142860u;
        goto label_142860;
    }
    ctx->pc = 0x142858u;
    {
        const bool branch_taken_0x142858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142858) {
            ctx->pc = 0x14285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142858u;
            // 0x14285c: 0x8e450334  lw          $a1, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1428D4u;
            goto label_1428d4;
        }
    }
    ctx->pc = 0x142860u;
label_142860:
    // 0x142860: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x142860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_142864:
    // 0x142864: 0x244202ec  addiu       $v0, $v0, 0x2EC
    ctx->pc = 0x142864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 748));
label_142868:
    // 0x142868: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x142868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_14286c:
    // 0x14286c: 0x0  nop
    ctx->pc = 0x14286cu;
    // NOP
label_142870:
    // 0x142870: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x142870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_142874:
    // 0x142874: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_142878:
    if (ctx->pc == 0x142878u) {
        ctx->pc = 0x142878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142874u;
        // 0x142878: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14287Cu;
        goto label_14287c;
    }
    ctx->pc = 0x142874u;
    {
        const bool branch_taken_0x142874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x142878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142874u;
        // 0x142878: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142874) {
            ctx->pc = 0x1428B8u;
            goto label_1428b8;
        }
    }
    ctx->pc = 0x14287Cu;
label_14287c:
    // 0x14287c: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x14287cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_142880:
    // 0x142880: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x142880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_142884:
    // 0x142884: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x142884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_142888:
    // 0x142888: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x142888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_14288c:
    // 0x14288c: 0x40f809  jalr        $v0
label_142890:
    if (ctx->pc == 0x142890u) {
        ctx->pc = 0x142890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14288Cu;
        // 0x142890: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142894u;
        goto label_142894;
    }
    ctx->pc = 0x14288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142894u);
        ctx->pc = 0x142890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14288Cu;
        // 0x142890: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14288Cu, 0x142894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142894u;
label_142894:
    // 0x142894: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_142898:
    if (ctx->pc == 0x142898u) {
        ctx->pc = 0x142898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142894u;
        // 0x142898: 0x8e672b04  lw          $a3, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14289Cu;
        goto label_14289c;
    }
    ctx->pc = 0x142894u;
    {
        const bool branch_taken_0x142894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142894u;
        // 0x142898: 0x8e672b04  lw          $a3, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142894) {
            ctx->pc = 0x1428B8u;
            goto label_1428b8;
        }
    }
    ctx->pc = 0x14289Cu;
label_14289c:
    // 0x14289c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14289cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1428a0:
    // 0x1428a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1428a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1428a4:
    // 0x1428a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1428a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1428a8:
    // 0x1428a8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1428a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1428ac:
    // 0x1428ac: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1428acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1428b0:
    // 0x1428b0: 0x60f809  jalr        $v1
label_1428b4:
    if (ctx->pc == 0x1428B4u) {
        ctx->pc = 0x1428B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428B0u;
        // 0x1428b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1428B8u;
        goto label_1428b8;
    }
    ctx->pc = 0x1428B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1428B8u);
        ctx->pc = 0x1428B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428B0u;
        // 0x1428b4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1428B0u, 0x1428B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1428B8u;
label_1428b8:
    // 0x1428b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1428b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1428bc:
    // 0x1428bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1428c0:
    // 0x1428c0: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1428c4:
    // 0x1428c4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1428c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1428c8:
    // 0x1428c8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_1428cc:
    if (ctx->pc == 0x1428CCu) {
        ctx->pc = 0x1428CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428C8u;
        // 0x1428cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1428D0u;
        goto label_1428d0;
    }
    ctx->pc = 0x1428C8u;
    {
        const bool branch_taken_0x1428c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428C8u;
        // 0x1428cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428c8) {
            ctx->pc = 0x142870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142870;
        }
    }
    ctx->pc = 0x1428D0u;
label_1428d0:
    // 0x1428d0: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x1428d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_1428d4:
    // 0x1428d4: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x1428d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1428d8:
    // 0x1428d8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1428d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1428dc:
    // 0x1428dc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1428dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1428e0:
    // 0x1428e0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1428e4:
    if (ctx->pc == 0x1428E4u) {
        ctx->pc = 0x1428E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428E0u;
        // 0x1428e4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1428E8u;
        goto label_1428e8;
    }
    ctx->pc = 0x1428E0u;
    {
        const bool branch_taken_0x1428e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428E0u;
        // 0x1428e4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428e0) {
            ctx->pc = 0x14299Cu;
            goto label_14299c;
        }
    }
    ctx->pc = 0x1428E8u;
label_1428e8:
    // 0x1428e8: 0xc641032c  lwc1        $f1, 0x32C($s2)
    ctx->pc = 0x1428e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1428ec:
    // 0x1428ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1428ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1428f0:
    // 0x1428f0: 0x8e430340  lw          $v1, 0x340($s2)
    ctx->pc = 0x1428f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_1428f4:
    // 0x1428f4: 0xc440030c  lwc1        $f0, 0x30C($v0)
    ctx->pc = 0x1428f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1428f8:
    // 0x1428f8: 0x0  nop
    ctx->pc = 0x1428f8u;
    // NOP
label_1428fc:
    // 0x1428fc: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1428fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_142900:
    // 0x142900: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_142904:
    if (ctx->pc == 0x142904u) {
        ctx->pc = 0x142904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142900u;
        // 0x142904: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142908u;
        goto label_142908;
    }
    ctx->pc = 0x142900u;
    {
        const bool branch_taken_0x142900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142900u;
        // 0x142904: 0x24a2fffe  addiu       $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142900) {
            ctx->pc = 0x1429A8u;
            goto label_1429a8;
        }
    }
    ctx->pc = 0x142908u;
label_142908:
    // 0x142908: 0x14820027  bne         $a0, $v0, . + 4 + (0x27 << 2)
label_14290c:
    if (ctx->pc == 0x14290Cu) {
        ctx->pc = 0x142910u;
        goto label_142910;
    }
    ctx->pc = 0x142908u;
    {
        const bool branch_taken_0x142908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x142908) {
            ctx->pc = 0x1429A8u;
            goto label_1429a8;
        }
    }
    ctx->pc = 0x142910u;
label_142910:
    // 0x142910: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_142914:
    // 0x142914: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x142914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_142918:
    // 0x142918: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x142918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_14291c:
    // 0x14291c: 0x60f809  jalr        $v1
label_142920:
    if (ctx->pc == 0x142920u) {
        ctx->pc = 0x142920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14291Cu;
        // 0x142920: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142924u;
        goto label_142924;
    }
    ctx->pc = 0x14291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142924u);
        ctx->pc = 0x142920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14291Cu;
        // 0x142920: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14291Cu, 0x142924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142924u;
label_142924:
    // 0x142924: 0x8e4502e0  lw          $a1, 0x2E0($s2)
    ctx->pc = 0x142924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
label_142928:
    // 0x142928: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x142928u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_14292c:
    // 0x14292c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_142930:
    // 0x142930: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_142934:
    // 0x142934: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_142938:
    // 0x142938: 0x60f809  jalr        $v1
label_14293c:
    if (ctx->pc == 0x14293Cu) {
        ctx->pc = 0x14293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142938u;
        // 0x14293c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142940u;
        goto label_142940;
    }
    ctx->pc = 0x142938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142940u);
        ctx->pc = 0x14293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142938u;
        // 0x14293c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142938u, 0x142940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142940u;
label_142940:
    // 0x142940: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x142940u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_142944:
    // 0x142944: 0x0  nop
    ctx->pc = 0x142944u;
    // NOP
label_142948:
    // 0x142948: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_14294c:
    if (ctx->pc == 0x14294Cu) {
        ctx->pc = 0x142950u;
        goto label_142950;
    }
    ctx->pc = 0x142948u;
    {
        const bool branch_taken_0x142948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142948) {
            ctx->pc = 0x1429A8u;
            goto label_1429a8;
        }
    }
    ctx->pc = 0x142950u;
label_142950:
    // 0x142950: 0x8e4502e0  lw          $a1, 0x2E0($s2)
    ctx->pc = 0x142950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
label_142954:
    // 0x142954: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_142958:
    // 0x142958: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x142958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14295c:
    // 0x14295c: 0x86300190  lh          $s0, 0x190($s1)
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 400)));
label_142960:
    // 0x142960: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x142960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_142964:
    // 0x142964: 0x26310190  addiu       $s1, $s1, 0x190
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_142968:
    // 0x142968: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x142968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_14296c:
    // 0x14296c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x14296cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_142970:
    // 0x142970: 0x60f809  jalr        $v1
label_142974:
    if (ctx->pc == 0x142974u) {
        ctx->pc = 0x142974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142970u;
        // 0x142974: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142978u;
        goto label_142978;
    }
    ctx->pc = 0x142970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142978u);
        ctx->pc = 0x142974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142970u;
        // 0x142974: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142970u, 0x142978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142978u;
label_142978:
    // 0x142978: 0xc64c0330  lwc1        $f12, 0x330($s2)
    ctx->pc = 0x142978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14297c:
    // 0x14297c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142980:
    // 0x142980: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x142980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_142984:
    // 0x142984: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x142984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_142988:
    // 0x142988: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x142988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_14298c:
    // 0x14298c: 0x40f809  jalr        $v0
label_142990:
    if (ctx->pc == 0x142990u) {
        ctx->pc = 0x142990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14298Cu;
        // 0x142990: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x142994u;
        goto label_142994;
    }
    ctx->pc = 0x14298Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x142994u);
        ctx->pc = 0x142990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14298Cu;
        // 0x142990: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14298Cu, 0x142994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x142994u;
label_142994:
    // 0x142994: 0x10000004  b           . + 4 + (0x4 << 2)
label_142998:
    if (ctx->pc == 0x142998u) {
        ctx->pc = 0x14299Cu;
        goto label_14299c;
    }
    ctx->pc = 0x142994u;
    {
        const bool branch_taken_0x142994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142994) {
            ctx->pc = 0x1429A8u;
            goto label_1429a8;
        }
    }
    ctx->pc = 0x14299Cu;
label_14299c:
    // 0x14299c: 0xae430338  sw          $v1, 0x338($s2)
    ctx->pc = 0x14299cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 3));
label_1429a0:
    // 0x1429a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1429a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1429a4:
    // 0x1429a4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1429a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1429a8:
    // 0x1429a8: 0xc0482a6  jal         func_120A98
label_1429ac:
    if (ctx->pc == 0x1429ACu) {
        ctx->pc = 0x1429ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429A8u;
        // 0x1429ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1429B0u;
        goto label_1429b0;
    }
    ctx->pc = 0x1429A8u;
    SET_GPR_U32(ctx, 31, 0x1429B0u);
    ctx->pc = 0x1429ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429A8u;
    // 0x1429ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x1429A8u, 0x1429B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429B0u;
label_1429b0:
    // 0x1429b0: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x1429b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_1429b4:
    // 0x1429b4: 0x8e450338  lw          $a1, 0x338($s2)
    ctx->pc = 0x1429b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1429b8:
    // 0x1429b8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1429b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1429bc:
    // 0x1429bc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1429bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1429c0:
    // 0x1429c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1429c4:
    if (ctx->pc == 0x1429C4u) {
        ctx->pc = 0x1429C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429C0u;
        // 0x1429c4: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1429C8u;
        goto label_1429c8;
    }
    ctx->pc = 0x1429C0u;
    {
        const bool branch_taken_0x1429c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429C0u;
        // 0x1429c4: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429c0) {
            ctx->pc = 0x1429ECu;
            goto label_1429ec;
        }
    }
    ctx->pc = 0x1429C8u;
label_1429c8:
    // 0x1429c8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1429c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1429cc:
    // 0x1429cc: 0x24a60270  addiu       $a2, $a1, 0x270
    ctx->pc = 0x1429ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
label_1429d0:
    // 0x1429d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1429d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1429d4:
    // 0x1429d4: 0x24a50260  addiu       $a1, $a1, 0x260
    ctx->pc = 0x1429d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 608));
label_1429d8:
    // 0x1429d8: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1429d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_1429dc:
    // 0x1429dc: 0xc0cda80  jal         func_336A00
label_1429e0:
    if (ctx->pc == 0x1429E0u) {
        ctx->pc = 0x1429E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429DCu;
        // 0x1429e0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1429E4u;
        goto label_1429e4;
    }
    ctx->pc = 0x1429DCu;
    SET_GPR_U32(ctx, 31, 0x1429E4u);
    ctx->pc = 0x1429E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429DCu;
    // 0x1429e0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x1429DCu, 0x1429E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429E4u;
label_1429e4:
    // 0x1429e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1429e8:
    if (ctx->pc == 0x1429E8u) {
        ctx->pc = 0x1429E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429E4u;
        // 0x1429e8: 0x8e460338  lw          $a2, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1429ECu;
        goto label_1429ec;
    }
    ctx->pc = 0x1429E4u;
    {
        const bool branch_taken_0x1429e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429E4u;
        // 0x1429e8: 0x8e460338  lw          $a2, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429e4) {
            ctx->pc = 0x142A00u;
            goto label_142a00;
        }
    }
    ctx->pc = 0x1429ECu;
label_1429ec:
    // 0x1429ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1429ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1429f0:
    // 0x1429f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1429f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1429f4:
    // 0x1429f4: 0x78430250  lq          $v1, 0x250($v0)
    ctx->pc = 0x1429f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 592)));
label_1429f8:
    // 0x1429f8: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x1429f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_1429fc:
    // 0x1429fc: 0x8e460338  lw          $a2, 0x338($s2)
    ctx->pc = 0x1429fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_142a00:
    // 0x142a00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x142a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_142a04:
    // 0x142a04: 0x8e470334  lw          $a3, 0x334($s2)
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_142a08:
    // 0x142a08: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x142a08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_142a0c:
    // 0x142a0c: 0xc050b6e  jal         func_142DB8
label_142a10:
    if (ctx->pc == 0x142A10u) {
        ctx->pc = 0x142A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A0Cu;
        // 0x142a10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142A14u;
        goto label_142a14;
    }
    ctx->pc = 0x142A0Cu;
    SET_GPR_U32(ctx, 31, 0x142A14u);
    ctx->pc = 0x142A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A0Cu;
    // 0x142a10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142DB8u, 0x142A0Cu, 0x142A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A14u;
label_142a14:
    // 0x142a14: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x142a14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_142a18:
    // 0x142a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x142a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_142a1c:
    // 0x142a1c: 0x7e420180  sq          $v0, 0x180($s2)
    ctx->pc = 0x142a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
label_142a20:
    // 0x142a20: 0xc04828c  jal         func_120A30
label_142a24:
    if (ctx->pc == 0x142A24u) {
        ctx->pc = 0x142A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A20u;
        // 0x142a24: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x142A28u;
        goto label_142a28;
    }
    ctx->pc = 0x142A20u;
    SET_GPR_U32(ctx, 31, 0x142A28u);
    ctx->pc = 0x142A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A20u;
    // 0x142a24: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x142A20u, 0x142A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A28u;
label_142a28:
    // 0x142a28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x142a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_142a2c:
    // 0x142a2c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x142a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_142a30:
    // 0x142a30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x142a30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_142a34:
    // 0x142a34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_142a38:
    // 0x142a38: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x142a38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_142a3c:
    // 0x142a3c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x142a3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_142a40:
    // 0x142a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142a44:
    // 0x142a44: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x142a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_142a48:
    // 0x142a48: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x142a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_142a4c:
    // 0x142a4c: 0x3e00008  jr          $ra
label_142a50:
    if (ctx->pc == 0x142A50u) {
        ctx->pc = 0x142A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A4Cu;
        // 0x142a50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142A54u;
        goto label_142a54;
    }
    ctx->pc = 0x142A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A4Cu;
        // 0x142a50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142A54u;
label_142a54:
    // 0x142a54: 0x0  nop
    ctx->pc = 0x142a54u;
    // NOP
    ctx->pc = 0x142a58u;
}
