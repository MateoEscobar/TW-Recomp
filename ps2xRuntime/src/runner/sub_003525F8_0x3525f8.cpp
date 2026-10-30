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

// Function: sub_003525F8
// Address: 0x3525f8 - 0x352788
void sub_003525F8_0x3525f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003525F8_0x3525f8");
#endif

    switch (ctx->pc) {
        case 0x3525f8u: goto label_3525f8;
        case 0x3525fcu: goto label_3525fc;
        case 0x352600u: goto label_352600;
        case 0x352604u: goto label_352604;
        case 0x352608u: goto label_352608;
        case 0x35260cu: goto label_35260c;
        case 0x352610u: goto label_352610;
        case 0x352614u: goto label_352614;
        case 0x352618u: goto label_352618;
        case 0x35261cu: goto label_35261c;
        case 0x352620u: goto label_352620;
        case 0x352624u: goto label_352624;
        case 0x352628u: goto label_352628;
        case 0x35262cu: goto label_35262c;
        case 0x352630u: goto label_352630;
        case 0x352634u: goto label_352634;
        case 0x352638u: goto label_352638;
        case 0x35263cu: goto label_35263c;
        case 0x352640u: goto label_352640;
        case 0x352644u: goto label_352644;
        case 0x352648u: goto label_352648;
        case 0x35264cu: goto label_35264c;
        case 0x352650u: goto label_352650;
        case 0x352654u: goto label_352654;
        case 0x352658u: goto label_352658;
        case 0x35265cu: goto label_35265c;
        case 0x352660u: goto label_352660;
        case 0x352664u: goto label_352664;
        case 0x352668u: goto label_352668;
        case 0x35266cu: goto label_35266c;
        case 0x352670u: goto label_352670;
        case 0x352674u: goto label_352674;
        case 0x352678u: goto label_352678;
        case 0x35267cu: goto label_35267c;
        case 0x352680u: goto label_352680;
        case 0x352684u: goto label_352684;
        case 0x352688u: goto label_352688;
        case 0x35268cu: goto label_35268c;
        case 0x352690u: goto label_352690;
        case 0x352694u: goto label_352694;
        case 0x352698u: goto label_352698;
        case 0x35269cu: goto label_35269c;
        case 0x3526a0u: goto label_3526a0;
        case 0x3526a4u: goto label_3526a4;
        case 0x3526a8u: goto label_3526a8;
        case 0x3526acu: goto label_3526ac;
        case 0x3526b0u: goto label_3526b0;
        case 0x3526b4u: goto label_3526b4;
        case 0x3526b8u: goto label_3526b8;
        case 0x3526bcu: goto label_3526bc;
        case 0x3526c0u: goto label_3526c0;
        case 0x3526c4u: goto label_3526c4;
        case 0x3526c8u: goto label_3526c8;
        case 0x3526ccu: goto label_3526cc;
        case 0x3526d0u: goto label_3526d0;
        case 0x3526d4u: goto label_3526d4;
        case 0x3526d8u: goto label_3526d8;
        case 0x3526dcu: goto label_3526dc;
        case 0x3526e0u: goto label_3526e0;
        case 0x3526e4u: goto label_3526e4;
        case 0x3526e8u: goto label_3526e8;
        case 0x3526ecu: goto label_3526ec;
        case 0x3526f0u: goto label_3526f0;
        case 0x3526f4u: goto label_3526f4;
        case 0x3526f8u: goto label_3526f8;
        case 0x3526fcu: goto label_3526fc;
        case 0x352700u: goto label_352700;
        case 0x352704u: goto label_352704;
        case 0x352708u: goto label_352708;
        case 0x35270cu: goto label_35270c;
        case 0x352710u: goto label_352710;
        case 0x352714u: goto label_352714;
        case 0x352718u: goto label_352718;
        case 0x35271cu: goto label_35271c;
        case 0x352720u: goto label_352720;
        case 0x352724u: goto label_352724;
        case 0x352728u: goto label_352728;
        case 0x35272cu: goto label_35272c;
        case 0x352730u: goto label_352730;
        case 0x352734u: goto label_352734;
        case 0x352738u: goto label_352738;
        case 0x35273cu: goto label_35273c;
        case 0x352740u: goto label_352740;
        case 0x352744u: goto label_352744;
        case 0x352748u: goto label_352748;
        case 0x35274cu: goto label_35274c;
        case 0x352750u: goto label_352750;
        case 0x352754u: goto label_352754;
        case 0x352758u: goto label_352758;
        case 0x35275cu: goto label_35275c;
        case 0x352760u: goto label_352760;
        case 0x352764u: goto label_352764;
        case 0x352768u: goto label_352768;
        case 0x35276cu: goto label_35276c;
        case 0x352770u: goto label_352770;
        case 0x352774u: goto label_352774;
        case 0x352778u: goto label_352778;
        case 0x35277cu: goto label_35277c;
        case 0x352780u: goto label_352780;
        case 0x352784u: goto label_352784;
        default: break;
    }

    ctx->pc = 0x3525f8u;

label_3525f8:
    // 0x3525f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3525f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3525fc:
    // 0x3525fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3525fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_352600:
    // 0x352600: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x352600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_352604:
    // 0x352604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_352608:
    // 0x352608: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x352608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_35260c:
    // 0x35260c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x35260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_352610:
    // 0x352610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_352614:
    // 0x352614: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x352614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_352618:
    // 0x352618: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x352618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
label_35261c:
    // 0x35261c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_352620:
    if (ctx->pc == 0x352620u) {
        ctx->pc = 0x352620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35261Cu;
        // 0x352620: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352624u;
        goto label_352624;
    }
    ctx->pc = 0x35261Cu;
    {
        const bool branch_taken_0x35261c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35261Cu;
        // 0x352620: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35261c) {
            ctx->pc = 0x3526ECu;
            goto label_3526ec;
        }
    }
    ctx->pc = 0x352624u;
label_352624:
    // 0x352624: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x352624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_352628:
    // 0x352628: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_35262c:
    if (ctx->pc == 0x35262Cu) {
        ctx->pc = 0x35262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352628u;
        // 0x35262c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352630u;
        goto label_352630;
    }
    ctx->pc = 0x352628u;
    {
        const bool branch_taken_0x352628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352628u;
        // 0x35262c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352628) {
            ctx->pc = 0x352644u;
            goto label_352644;
        }
    }
    ctx->pc = 0x352630u;
label_352630:
    // 0x352630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x352630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352634:
    // 0x352634: 0xc0552b8  jal         func_154AE0
label_352638:
    if (ctx->pc == 0x352638u) {
        ctx->pc = 0x352638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352634u;
        // 0x352638: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35263Cu;
        goto label_35263c;
    }
    ctx->pc = 0x352634u;
    SET_GPR_U32(ctx, 31, 0x35263Cu);
    ctx->pc = 0x352638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352634u;
    // 0x352638: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x352634u, 0x35263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35263Cu;
label_35263c:
    // 0x35263c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_352640:
    if (ctx->pc == 0x352640u) {
        ctx->pc = 0x352640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35263Cu;
        // 0x352640: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352644u;
        goto label_352644;
    }
    ctx->pc = 0x35263Cu;
    {
        const bool branch_taken_0x35263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35263Cu;
        // 0x352640: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35263c) {
            ctx->pc = 0x352774u;
            goto label_352774;
        }
    }
    ctx->pc = 0x352644u;
label_352644:
    // 0x352644: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x352644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_352648:
    // 0x352648: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_35264c:
    if (ctx->pc == 0x35264Cu) {
        ctx->pc = 0x35264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352648u;
        // 0x35264c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352650u;
        goto label_352650;
    }
    ctx->pc = 0x352648u;
    {
        const bool branch_taken_0x352648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352648u;
        // 0x35264c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352648) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x352650u;
label_352650:
    // 0x352650: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x352650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_352654:
    // 0x352654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x352654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352658:
    // 0x352658: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x352658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_35265c:
    // 0x35265c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x35265cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_352660:
    // 0x352660: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x352660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_352664:
    // 0x352664: 0x40f809  jalr        $v0
label_352668:
    if (ctx->pc == 0x352668u) {
        ctx->pc = 0x352668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352664u;
        // 0x352668: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35266Cu;
        goto label_35266c;
    }
    ctx->pc = 0x352664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35266Cu);
        ctx->pc = 0x352668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352664u;
        // 0x352668: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352664u, 0x35266Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35266Cu;
label_35266c:
    // 0x35266c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x35266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_352670:
    // 0x352670: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x352670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_352674:
    // 0x352674: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_352678:
    if (ctx->pc == 0x352678u) {
        ctx->pc = 0x352678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352674u;
        // 0x352678: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35267Cu;
        goto label_35267c;
    }
    ctx->pc = 0x352674u;
    {
        const bool branch_taken_0x352674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352674u;
        // 0x352678: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352674) {
            ctx->pc = 0x3526B0u;
            goto label_3526b0;
        }
    }
    ctx->pc = 0x35267Cu;
label_35267c:
    // 0x35267c: 0x0  nop
    ctx->pc = 0x35267cu;
    // NOP
label_352680:
    // 0x352680: 0xc062274  jal         func_1889D0
label_352684:
    if (ctx->pc == 0x352684u) {
        ctx->pc = 0x352684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352680u;
        // 0x352684: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352688u;
        goto label_352688;
    }
    ctx->pc = 0x352680u;
    SET_GPR_U32(ctx, 31, 0x352688u);
    ctx->pc = 0x352684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352680u;
    // 0x352684: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x352680u, 0x352688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352688u;
label_352688:
    // 0x352688: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x352688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_35268c:
    // 0x35268c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_352690:
    // 0x352690: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x352690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_352694:
    // 0x352694: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x352694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_352698:
    // 0x352698: 0x40f809  jalr        $v0
label_35269c:
    if (ctx->pc == 0x35269Cu) {
        ctx->pc = 0x35269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352698u;
        // 0x35269c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526A0u;
        goto label_3526a0;
    }
    ctx->pc = 0x352698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3526A0u);
        ctx->pc = 0x35269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352698u;
        // 0x35269c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352698u, 0x3526A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3526A0u;
label_3526a0:
    // 0x3526a0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3526a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3526a4:
    // 0x3526a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3526a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3526a8:
    // 0x3526a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_3526ac:
    if (ctx->pc == 0x3526ACu) {
        ctx->pc = 0x3526B0u;
        goto label_3526b0;
    }
    ctx->pc = 0x3526A8u;
    {
        const bool branch_taken_0x3526a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3526a8) {
            ctx->pc = 0x352680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352680;
        }
    }
    ctx->pc = 0x3526B0u;
label_3526b0:
    // 0x3526b0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3526b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3526b4:
    // 0x3526b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3526b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3526b8:
    // 0x3526b8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_3526bc:
    if (ctx->pc == 0x3526BCu) {
        ctx->pc = 0x3526BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526B8u;
        // 0x3526bc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526C0u;
        goto label_3526c0;
    }
    ctx->pc = 0x3526B8u;
    {
        const bool branch_taken_0x3526b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3526BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526B8u;
        // 0x3526bc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3526b8) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x3526C0u;
label_3526c0:
    // 0x3526c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3526c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3526c4:
    // 0x3526c4: 0xc0552b8  jal         func_154AE0
label_3526c8:
    if (ctx->pc == 0x3526C8u) {
        ctx->pc = 0x3526C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526C4u;
        // 0x3526c8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526CCu;
        goto label_3526cc;
    }
    ctx->pc = 0x3526C4u;
    SET_GPR_U32(ctx, 31, 0x3526CCu);
    ctx->pc = 0x3526C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3526C4u;
    // 0x3526c8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x3526C4u, 0x3526CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3526CCu;
label_3526cc:
    // 0x3526cc: 0x8e25b8b8  lw          $a1, -0x4748($s1)
    ctx->pc = 0x3526ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949048)));
label_3526d0:
    // 0x3526d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3526d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3526d4:
    // 0x3526d4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3526d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3526d8:
    // 0x3526d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3526d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3526dc:
    // 0x3526dc: 0x40f809  jalr        $v0
label_3526e0:
    if (ctx->pc == 0x3526E0u) {
        ctx->pc = 0x3526E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526DCu;
        // 0x3526e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526E4u;
        goto label_3526e4;
    }
    ctx->pc = 0x3526DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3526E4u);
        ctx->pc = 0x3526E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526DCu;
        // 0x3526e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3526DCu, 0x3526E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3526E4u;
label_3526e4:
    // 0x3526e4: 0x10000023  b           . + 4 + (0x23 << 2)
label_3526e8:
    if (ctx->pc == 0x3526E8u) {
        ctx->pc = 0x3526E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526E4u;
        // 0x3526e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526ECu;
        goto label_3526ec;
    }
    ctx->pc = 0x3526E4u;
    {
        const bool branch_taken_0x3526e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3526E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526E4u;
        // 0x3526e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3526e4) {
            ctx->pc = 0x352774u;
            goto label_352774;
        }
    }
    ctx->pc = 0x3526ECu;
label_3526ec:
    // 0x3526ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3526ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3526f0:
    // 0x3526f0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_3526f4:
    if (ctx->pc == 0x3526F4u) {
        ctx->pc = 0x3526F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3526F0u;
        // 0x3526f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3526F8u;
        goto label_3526f8;
    }
    ctx->pc = 0x3526F0u;
    {
        const bool branch_taken_0x3526f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3526f0) {
            ctx->pc = 0x3526F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3526F0u;
            // 0x3526f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352774u;
            goto label_352774;
        }
    }
    ctx->pc = 0x3526F8u;
label_3526f8:
    // 0x3526f8: 0xc0d4dcc  jal         func_353730
label_3526fc:
    if (ctx->pc == 0x3526FCu) {
        ctx->pc = 0x352700u;
        goto label_352700;
    }
    ctx->pc = 0x3526F8u;
    SET_GPR_U32(ctx, 31, 0x352700u);
    ctx->pc = 0x353730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353730u, 0x3526F8u, 0x352700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352700u;
label_352700:
    // 0x352700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x352700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352704:
    // 0x352704: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_352708:
    if (ctx->pc == 0x352708u) {
        ctx->pc = 0x352708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352704u;
        // 0x352708: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35270Cu;
        goto label_35270c;
    }
    ctx->pc = 0x352704u;
    {
        const bool branch_taken_0x352704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x352708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352704u;
        // 0x352708: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352704) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x35270Cu;
label_35270c:
    // 0x35270c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x35270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_352710:
    // 0x352710: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x352710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_352714:
    // 0x352714: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x352714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_352718:
    // 0x352718: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x352718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_35271c:
    // 0x35271c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x35271cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_352720:
    // 0x352720: 0x24c624a8  addiu       $a2, $a2, 0x24A8
    ctx->pc = 0x352720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9384));
label_352724:
    // 0x352724: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x352724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_352728:
    // 0x352728: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x352728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35272c:
    // 0x35272c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x35272cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_352730:
    // 0x352730: 0xc0621b6  jal         func_1886D8
label_352734:
    if (ctx->pc == 0x352734u) {
        ctx->pc = 0x352734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352730u;
        // 0x352734: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352738u;
        goto label_352738;
    }
    ctx->pc = 0x352730u;
    SET_GPR_U32(ctx, 31, 0x352738u);
    ctx->pc = 0x352734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352730u;
    // 0x352734: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1886D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1886D8u, 0x352730u, 0x352738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352738u;
label_352738:
    // 0x352738: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_35273c:
    if (ctx->pc == 0x35273Cu) {
        ctx->pc = 0x35273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352738u;
        // 0x35273c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352740u;
        goto label_352740;
    }
    ctx->pc = 0x352738u;
    {
        const bool branch_taken_0x352738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352738u;
        // 0x35273c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352738) {
            ctx->pc = 0x352750u;
            goto label_352750;
        }
    }
    ctx->pc = 0x352740u;
label_352740:
    // 0x352740: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x352740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_352744:
    // 0x352744: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x352744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_352748:
    // 0x352748: 0x10000009  b           . + 4 + (0x9 << 2)
label_35274c:
    if (ctx->pc == 0x35274Cu) {
        ctx->pc = 0x35274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352748u;
        // 0x35274c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352750u;
        goto label_352750;
    }
    ctx->pc = 0x352748u;
    {
        const bool branch_taken_0x352748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352748u;
        // 0x35274c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352748) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x352750u;
label_352750:
    // 0x352750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x352750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352754:
    // 0x352754: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x352754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_352758:
    // 0x352758: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x352758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_35275c:
    // 0x35275c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x35275cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_352760:
    // 0x352760: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x352760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_352764:
    // 0x352764: 0x40f809  jalr        $v0
label_352768:
    if (ctx->pc == 0x352768u) {
        ctx->pc = 0x352768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352764u;
        // 0x352768: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35276Cu;
        goto label_35276c;
    }
    ctx->pc = 0x352764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35276Cu);
        ctx->pc = 0x352768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352764u;
        // 0x352768: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352764u, 0x35276Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35276Cu;
label_35276c:
    // 0x35276c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x35276cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_352770:
    // 0x352770: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x352770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352774:
    // 0x352774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x352774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352778:
    // 0x352778: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x352778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35277c:
    // 0x35277c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35277cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352780:
    // 0x352780: 0x3e00008  jr          $ra
label_352784:
    if (ctx->pc == 0x352784u) {
        ctx->pc = 0x352784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352780u;
        // 0x352784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352788u;
        goto label_fallthrough_0x352780;
    }
    ctx->pc = 0x352780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352780u;
        // 0x352784: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352780:
    ctx->pc = 0x352788u;
}
