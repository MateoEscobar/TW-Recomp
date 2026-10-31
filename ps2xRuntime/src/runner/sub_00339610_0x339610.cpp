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

// Function: sub_00339610
// Address: 0x339610 - 0x3397a0
void sub_00339610_0x339610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339610_0x339610");
#endif

    switch (ctx->pc) {
        case 0x339610u: goto label_339610;
        case 0x339614u: goto label_339614;
        case 0x339618u: goto label_339618;
        case 0x33961cu: goto label_33961c;
        case 0x339620u: goto label_339620;
        case 0x339624u: goto label_339624;
        case 0x339628u: goto label_339628;
        case 0x33962cu: goto label_33962c;
        case 0x339630u: goto label_339630;
        case 0x339634u: goto label_339634;
        case 0x339638u: goto label_339638;
        case 0x33963cu: goto label_33963c;
        case 0x339640u: goto label_339640;
        case 0x339644u: goto label_339644;
        case 0x339648u: goto label_339648;
        case 0x33964cu: goto label_33964c;
        case 0x339650u: goto label_339650;
        case 0x339654u: goto label_339654;
        case 0x339658u: goto label_339658;
        case 0x33965cu: goto label_33965c;
        case 0x339660u: goto label_339660;
        case 0x339664u: goto label_339664;
        case 0x339668u: goto label_339668;
        case 0x33966cu: goto label_33966c;
        case 0x339670u: goto label_339670;
        case 0x339674u: goto label_339674;
        case 0x339678u: goto label_339678;
        case 0x33967cu: goto label_33967c;
        case 0x339680u: goto label_339680;
        case 0x339684u: goto label_339684;
        case 0x339688u: goto label_339688;
        case 0x33968cu: goto label_33968c;
        case 0x339690u: goto label_339690;
        case 0x339694u: goto label_339694;
        case 0x339698u: goto label_339698;
        case 0x33969cu: goto label_33969c;
        case 0x3396a0u: goto label_3396a0;
        case 0x3396a4u: goto label_3396a4;
        case 0x3396a8u: goto label_3396a8;
        case 0x3396acu: goto label_3396ac;
        case 0x3396b0u: goto label_3396b0;
        case 0x3396b4u: goto label_3396b4;
        case 0x3396b8u: goto label_3396b8;
        case 0x3396bcu: goto label_3396bc;
        case 0x3396c0u: goto label_3396c0;
        case 0x3396c4u: goto label_3396c4;
        case 0x3396c8u: goto label_3396c8;
        case 0x3396ccu: goto label_3396cc;
        case 0x3396d0u: goto label_3396d0;
        case 0x3396d4u: goto label_3396d4;
        case 0x3396d8u: goto label_3396d8;
        case 0x3396dcu: goto label_3396dc;
        case 0x3396e0u: goto label_3396e0;
        case 0x3396e4u: goto label_3396e4;
        case 0x3396e8u: goto label_3396e8;
        case 0x3396ecu: goto label_3396ec;
        case 0x3396f0u: goto label_3396f0;
        case 0x3396f4u: goto label_3396f4;
        case 0x3396f8u: goto label_3396f8;
        case 0x3396fcu: goto label_3396fc;
        case 0x339700u: goto label_339700;
        case 0x339704u: goto label_339704;
        case 0x339708u: goto label_339708;
        case 0x33970cu: goto label_33970c;
        case 0x339710u: goto label_339710;
        case 0x339714u: goto label_339714;
        case 0x339718u: goto label_339718;
        case 0x33971cu: goto label_33971c;
        case 0x339720u: goto label_339720;
        case 0x339724u: goto label_339724;
        case 0x339728u: goto label_339728;
        case 0x33972cu: goto label_33972c;
        case 0x339730u: goto label_339730;
        case 0x339734u: goto label_339734;
        case 0x339738u: goto label_339738;
        case 0x33973cu: goto label_33973c;
        case 0x339740u: goto label_339740;
        case 0x339744u: goto label_339744;
        case 0x339748u: goto label_339748;
        case 0x33974cu: goto label_33974c;
        case 0x339750u: goto label_339750;
        case 0x339754u: goto label_339754;
        case 0x339758u: goto label_339758;
        case 0x33975cu: goto label_33975c;
        case 0x339760u: goto label_339760;
        case 0x339764u: goto label_339764;
        case 0x339768u: goto label_339768;
        case 0x33976cu: goto label_33976c;
        case 0x339770u: goto label_339770;
        case 0x339774u: goto label_339774;
        case 0x339778u: goto label_339778;
        case 0x33977cu: goto label_33977c;
        case 0x339780u: goto label_339780;
        case 0x339784u: goto label_339784;
        case 0x339788u: goto label_339788;
        case 0x33978cu: goto label_33978c;
        case 0x339790u: goto label_339790;
        case 0x339794u: goto label_339794;
        case 0x339798u: goto label_339798;
        case 0x33979cu: goto label_33979c;
        default: break;
    }

    ctx->pc = 0x339610u;

label_339610:
    // 0x339610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x339610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_339614:
    // 0x339614: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x339614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_339618:
    // 0x339618: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x339618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_33961c:
    // 0x33961c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x33961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_339620:
    // 0x339620: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x339620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339624:
    // 0x339624: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x339624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_339628:
    // 0x339628: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x339628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33962c:
    // 0x33962c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x33962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_339630:
    // 0x339630: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x339630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_339634:
    // 0x339634: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x339634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_339638:
    // 0x339638: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x339638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_33963c:
    // 0x33963c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_339640:
    // 0x339640: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x339640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_339644:
    // 0x339644: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x339644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_339648:
    // 0x339648: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x339648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_33964c:
    // 0x33964c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x33964cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_339650:
    // 0x339650: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_339654:
    if (ctx->pc == 0x339654u) {
        ctx->pc = 0x339654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339650u;
        // 0x339654: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339658u;
        goto label_339658;
    }
    ctx->pc = 0x339650u;
    {
        const bool branch_taken_0x339650 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x339654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339650u;
        // 0x339654: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339650) {
            ctx->pc = 0x339678u;
            goto label_339678;
        }
    }
    ctx->pc = 0x339658u;
label_339658:
    // 0x339658: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x339658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_33965c:
    // 0x33965c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33965cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_339660:
    // 0x339660: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x339660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_339664:
    // 0x339664: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x339664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_339668:
    // 0x339668: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x339668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33966c:
    // 0x33966c: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x33966cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
label_339670:
    // 0x339670: 0x10000002  b           . + 4 + (0x2 << 2)
label_339674:
    if (ctx->pc == 0x339674u) {
        ctx->pc = 0x339674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339670u;
        // 0x339674: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339678u;
        goto label_339678;
    }
    ctx->pc = 0x339670u;
    {
        const bool branch_taken_0x339670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339670u;
        // 0x339674: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339670) {
            ctx->pc = 0x33967Cu;
            goto label_33967c;
        }
    }
    ctx->pc = 0x339678u;
label_339678:
    // 0x339678: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x339678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33967c:
    // 0x33967c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x33967cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_339680:
    // 0x339680: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x339680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
label_339684:
    // 0x339684: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x339684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_339688:
    // 0x339688: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x339688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33968c:
    // 0x33968c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339690:
    // 0x339690: 0xc10c4de  jal         func_431378
label_339694:
    if (ctx->pc == 0x339694u) {
        ctx->pc = 0x339694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339690u;
        // 0x339694: 0x26550010  addiu       $s5, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339698u;
        goto label_339698;
    }
    ctx->pc = 0x339690u;
    SET_GPR_U32(ctx, 31, 0x339698u);
    ctx->pc = 0x339694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339690u;
    // 0x339694: 0x26550010  addiu       $s5, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x339690u, 0x339698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339698u;
label_339698:
    // 0x339698: 0xc10c3ac  jal         func_430EB0
label_33969c:
    if (ctx->pc == 0x33969Cu) {
        ctx->pc = 0x33969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339698u;
        // 0x33969c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3396A0u;
        goto label_3396a0;
    }
    ctx->pc = 0x339698u;
    SET_GPR_U32(ctx, 31, 0x3396A0u);
    ctx->pc = 0x33969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339698u;
    // 0x33969c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x339698u, 0x3396A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396A0u;
label_3396a0:
    // 0x3396a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3396a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3396a4:
    // 0x3396a4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x3396a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_3396a8:
    // 0x3396a8: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x3396a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3396ac:
    // 0x3396ac: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3396b0:
    if (ctx->pc == 0x3396B0u) {
        ctx->pc = 0x3396B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396ACu;
        // 0x3396b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3396B4u;
        goto label_3396b4;
    }
    ctx->pc = 0x3396ACu;
    {
        const bool branch_taken_0x3396ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3396B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396ACu;
        // 0x3396b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3396ac) {
            ctx->pc = 0x3396F0u;
            goto label_3396f0;
        }
    }
    ctx->pc = 0x3396B4u;
label_3396b4:
    // 0x3396b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3396b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3396b8:
    // 0x3396b8: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x3396b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3396bc:
    // 0x3396bc: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x3396bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3396c0:
    // 0x3396c0: 0x2408005f  addiu       $t0, $zero, 0x5F
    ctx->pc = 0x3396c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_3396c4:
    // 0x3396c4: 0x0  nop
    ctx->pc = 0x3396c4u;
    // NOP
label_3396c8:
    // 0x3396c8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3396c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3396cc:
    // 0x3396cc: 0x50490001  beql        $v0, $t1, . + 4 + (0x1 << 2)
label_3396d0:
    if (ctx->pc == 0x3396D0u) {
        ctx->pc = 0x3396D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396CCu;
        // 0x3396d0: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3396D4u;
        goto label_3396d4;
    }
    ctx->pc = 0x3396CCu;
    {
        const bool branch_taken_0x3396cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x3396cc) {
            ctx->pc = 0x3396D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3396CCu;
            // 0x3396d0: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3396D4u;
            goto label_3396d4;
        }
    }
    ctx->pc = 0x3396D4u;
label_3396d4:
    // 0x3396d4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3396d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3396d8:
    // 0x3396d8: 0x50480001  beql        $v0, $t0, . + 4 + (0x1 << 2)
label_3396dc:
    if (ctx->pc == 0x3396DCu) {
        ctx->pc = 0x3396DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396D8u;
        // 0x3396dc: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3396E0u;
        goto label_3396e0;
    }
    ctx->pc = 0x3396D8u;
    {
        const bool branch_taken_0x3396d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x3396d8) {
            ctx->pc = 0x3396DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3396D8u;
            // 0x3396dc: 0xa0870000  sb          $a3, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3396E0u;
            goto label_3396e0;
        }
    }
    ctx->pc = 0x3396E0u;
label_3396e0:
    // 0x3396e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3396e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3396e4:
    // 0x3396e4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3396e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3396e8:
    // 0x3396e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3396ec:
    if (ctx->pc == 0x3396ECu) {
        ctx->pc = 0x3396ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396E8u;
        // 0x3396ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3396F0u;
        goto label_3396f0;
    }
    ctx->pc = 0x3396E8u;
    {
        const bool branch_taken_0x3396e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3396ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396E8u;
        // 0x3396ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3396e8) {
            ctx->pc = 0x3396C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3396c8;
        }
    }
    ctx->pc = 0x3396F0u;
label_3396f0:
    // 0x3396f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3396f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3396f4:
    // 0x3396f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3396f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3396f8:
    // 0x3396f8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3396f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3396fc:
    // 0x3396fc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3396fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_339700:
    // 0x339700: 0x40f809  jalr        $v0
label_339704:
    if (ctx->pc == 0x339704u) {
        ctx->pc = 0x339704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339700u;
        // 0x339704: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339708u;
        goto label_339708;
    }
    ctx->pc = 0x339700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339708u);
        ctx->pc = 0x339704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339700u;
        // 0x339704: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339700u, 0x339708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339708u;
label_339708:
    // 0x339708: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x339708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33970c:
    // 0x33970c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x33970cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_339710:
    // 0x339710: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x339710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_339714:
    // 0x339714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x339714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_339718:
    // 0x339718: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x339718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_33971c:
    // 0x33971c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_339720:
    // 0x339720: 0xae160004  sw          $s6, 0x4($s0)
    ctx->pc = 0x339720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 22));
label_339724:
    // 0x339724: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x339724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_339728:
    // 0x339728: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x339728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_33972c:
    // 0x33972c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x33972cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_339730:
    // 0x339730: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x339730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_339734:
    // 0x339734: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x339734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_339738:
    // 0x339738: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x339738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_33973c:
    // 0x33973c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x33973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_339740:
    // 0x339740: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x339740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_339744:
    // 0x339744: 0xc0ce512  jal         func_339448
label_339748:
    if (ctx->pc == 0x339748u) {
        ctx->pc = 0x339748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339744u;
        // 0x339748: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33974Cu;
        goto label_33974c;
    }
    ctx->pc = 0x339744u;
    SET_GPR_U32(ctx, 31, 0x33974Cu);
    ctx->pc = 0x339748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339744u;
    // 0x339748: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339448u, 0x339744u, 0x33974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33974Cu;
label_33974c:
    // 0x33974c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_339750:
    if (ctx->pc == 0x339750u) {
        ctx->pc = 0x339750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33974Cu;
        // 0x339750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339754u;
        goto label_339754;
    }
    ctx->pc = 0x33974Cu;
    {
        const bool branch_taken_0x33974c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33974Cu;
        // 0x339750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33974c) {
            ctx->pc = 0x339768u;
            goto label_339768;
        }
    }
    ctx->pc = 0x339754u;
label_339754:
    // 0x339754: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x339754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_339758:
    // 0x339758: 0xc0ce4f0  jal         func_3393C0
label_33975c:
    if (ctx->pc == 0x33975Cu) {
        ctx->pc = 0x33975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339758u;
        // 0x33975c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339760u;
        goto label_339760;
    }
    ctx->pc = 0x339758u;
    SET_GPR_U32(ctx, 31, 0x339760u);
    ctx->pc = 0x33975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339758u;
    // 0x33975c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393C0u, 0x339758u, 0x339760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339760u;
label_339760:
    // 0x339760: 0x10000005  b           . + 4 + (0x5 << 2)
label_339764:
    if (ctx->pc == 0x339764u) {
        ctx->pc = 0x339764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339760u;
        // 0x339764: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339768u;
        goto label_339768;
    }
    ctx->pc = 0x339760u;
    {
        const bool branch_taken_0x339760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339760u;
        // 0x339764: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339760) {
            ctx->pc = 0x339778u;
            goto label_339778;
        }
    }
    ctx->pc = 0x339768u;
label_339768:
    // 0x339768: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x339768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_33976c:
    // 0x33976c: 0xc0ce4f0  jal         func_3393C0
label_339770:
    if (ctx->pc == 0x339770u) {
        ctx->pc = 0x339770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33976Cu;
        // 0x339770: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339774u;
        goto label_339774;
    }
    ctx->pc = 0x33976Cu;
    SET_GPR_U32(ctx, 31, 0x339774u);
    ctx->pc = 0x339770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33976Cu;
    // 0x339770: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3393C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3393C0u, 0x33976Cu, 0x339774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339774u;
label_339774:
    // 0x339774: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x339774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_339778:
    // 0x339778: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x339778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33977c:
    // 0x33977c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x33977cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_339780:
    // 0x339780: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x339780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_339784:
    // 0x339784: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x339784u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_339788:
    // 0x339788: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x339788u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33978c:
    // 0x33978c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x33978cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339790:
    // 0x339790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339794:
    // 0x339794: 0x3e00008  jr          $ra
label_339798:
    if (ctx->pc == 0x339798u) {
        ctx->pc = 0x339798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339794u;
        // 0x339798: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33979Cu;
        goto label_33979c;
    }
    ctx->pc = 0x339794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339794u;
        // 0x339798: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33979Cu;
label_33979c:
    // 0x33979c: 0x0  nop
    ctx->pc = 0x33979cu;
    // NOP
    ctx->pc = 0x3397a0u;
}
