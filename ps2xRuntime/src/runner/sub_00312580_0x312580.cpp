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

// Function: sub_00312580
// Address: 0x312580 - 0x3128a0
void sub_00312580_0x312580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312580_0x312580");
#endif

    switch (ctx->pc) {
        case 0x312580u: goto label_312580;
        case 0x312584u: goto label_312584;
        case 0x312588u: goto label_312588;
        case 0x31258cu: goto label_31258c;
        case 0x312590u: goto label_312590;
        case 0x312594u: goto label_312594;
        case 0x312598u: goto label_312598;
        case 0x31259cu: goto label_31259c;
        case 0x3125a0u: goto label_3125a0;
        case 0x3125a4u: goto label_3125a4;
        case 0x3125a8u: goto label_3125a8;
        case 0x3125acu: goto label_3125ac;
        case 0x3125b0u: goto label_3125b0;
        case 0x3125b4u: goto label_3125b4;
        case 0x3125b8u: goto label_3125b8;
        case 0x3125bcu: goto label_3125bc;
        case 0x3125c0u: goto label_3125c0;
        case 0x3125c4u: goto label_3125c4;
        case 0x3125c8u: goto label_3125c8;
        case 0x3125ccu: goto label_3125cc;
        case 0x3125d0u: goto label_3125d0;
        case 0x3125d4u: goto label_3125d4;
        case 0x3125d8u: goto label_3125d8;
        case 0x3125dcu: goto label_3125dc;
        case 0x3125e0u: goto label_3125e0;
        case 0x3125e4u: goto label_3125e4;
        case 0x3125e8u: goto label_3125e8;
        case 0x3125ecu: goto label_3125ec;
        case 0x3125f0u: goto label_3125f0;
        case 0x3125f4u: goto label_3125f4;
        case 0x3125f8u: goto label_3125f8;
        case 0x3125fcu: goto label_3125fc;
        case 0x312600u: goto label_312600;
        case 0x312604u: goto label_312604;
        case 0x312608u: goto label_312608;
        case 0x31260cu: goto label_31260c;
        case 0x312610u: goto label_312610;
        case 0x312614u: goto label_312614;
        case 0x312618u: goto label_312618;
        case 0x31261cu: goto label_31261c;
        case 0x312620u: goto label_312620;
        case 0x312624u: goto label_312624;
        case 0x312628u: goto label_312628;
        case 0x31262cu: goto label_31262c;
        case 0x312630u: goto label_312630;
        case 0x312634u: goto label_312634;
        case 0x312638u: goto label_312638;
        case 0x31263cu: goto label_31263c;
        case 0x312640u: goto label_312640;
        case 0x312644u: goto label_312644;
        case 0x312648u: goto label_312648;
        case 0x31264cu: goto label_31264c;
        case 0x312650u: goto label_312650;
        case 0x312654u: goto label_312654;
        case 0x312658u: goto label_312658;
        case 0x31265cu: goto label_31265c;
        case 0x312660u: goto label_312660;
        case 0x312664u: goto label_312664;
        case 0x312668u: goto label_312668;
        case 0x31266cu: goto label_31266c;
        case 0x312670u: goto label_312670;
        case 0x312674u: goto label_312674;
        case 0x312678u: goto label_312678;
        case 0x31267cu: goto label_31267c;
        case 0x312680u: goto label_312680;
        case 0x312684u: goto label_312684;
        case 0x312688u: goto label_312688;
        case 0x31268cu: goto label_31268c;
        case 0x312690u: goto label_312690;
        case 0x312694u: goto label_312694;
        case 0x312698u: goto label_312698;
        case 0x31269cu: goto label_31269c;
        case 0x3126a0u: goto label_3126a0;
        case 0x3126a4u: goto label_3126a4;
        case 0x3126a8u: goto label_3126a8;
        case 0x3126acu: goto label_3126ac;
        case 0x3126b0u: goto label_3126b0;
        case 0x3126b4u: goto label_3126b4;
        case 0x3126b8u: goto label_3126b8;
        case 0x3126bcu: goto label_3126bc;
        case 0x3126c0u: goto label_3126c0;
        case 0x3126c4u: goto label_3126c4;
        case 0x3126c8u: goto label_3126c8;
        case 0x3126ccu: goto label_3126cc;
        case 0x3126d0u: goto label_3126d0;
        case 0x3126d4u: goto label_3126d4;
        case 0x3126d8u: goto label_3126d8;
        case 0x3126dcu: goto label_3126dc;
        case 0x3126e0u: goto label_3126e0;
        case 0x3126e4u: goto label_3126e4;
        case 0x3126e8u: goto label_3126e8;
        case 0x3126ecu: goto label_3126ec;
        case 0x3126f0u: goto label_3126f0;
        case 0x3126f4u: goto label_3126f4;
        case 0x3126f8u: goto label_3126f8;
        case 0x3126fcu: goto label_3126fc;
        case 0x312700u: goto label_312700;
        case 0x312704u: goto label_312704;
        case 0x312708u: goto label_312708;
        case 0x31270cu: goto label_31270c;
        case 0x312710u: goto label_312710;
        case 0x312714u: goto label_312714;
        case 0x312718u: goto label_312718;
        case 0x31271cu: goto label_31271c;
        case 0x312720u: goto label_312720;
        case 0x312724u: goto label_312724;
        case 0x312728u: goto label_312728;
        case 0x31272cu: goto label_31272c;
        case 0x312730u: goto label_312730;
        case 0x312734u: goto label_312734;
        case 0x312738u: goto label_312738;
        case 0x31273cu: goto label_31273c;
        case 0x312740u: goto label_312740;
        case 0x312744u: goto label_312744;
        case 0x312748u: goto label_312748;
        case 0x31274cu: goto label_31274c;
        case 0x312750u: goto label_312750;
        case 0x312754u: goto label_312754;
        case 0x312758u: goto label_312758;
        case 0x31275cu: goto label_31275c;
        case 0x312760u: goto label_312760;
        case 0x312764u: goto label_312764;
        case 0x312768u: goto label_312768;
        case 0x31276cu: goto label_31276c;
        case 0x312770u: goto label_312770;
        case 0x312774u: goto label_312774;
        case 0x312778u: goto label_312778;
        case 0x31277cu: goto label_31277c;
        case 0x312780u: goto label_312780;
        case 0x312784u: goto label_312784;
        case 0x312788u: goto label_312788;
        case 0x31278cu: goto label_31278c;
        case 0x312790u: goto label_312790;
        case 0x312794u: goto label_312794;
        case 0x312798u: goto label_312798;
        case 0x31279cu: goto label_31279c;
        case 0x3127a0u: goto label_3127a0;
        case 0x3127a4u: goto label_3127a4;
        case 0x3127a8u: goto label_3127a8;
        case 0x3127acu: goto label_3127ac;
        case 0x3127b0u: goto label_3127b0;
        case 0x3127b4u: goto label_3127b4;
        case 0x3127b8u: goto label_3127b8;
        case 0x3127bcu: goto label_3127bc;
        case 0x3127c0u: goto label_3127c0;
        case 0x3127c4u: goto label_3127c4;
        case 0x3127c8u: goto label_3127c8;
        case 0x3127ccu: goto label_3127cc;
        case 0x3127d0u: goto label_3127d0;
        case 0x3127d4u: goto label_3127d4;
        case 0x3127d8u: goto label_3127d8;
        case 0x3127dcu: goto label_3127dc;
        case 0x3127e0u: goto label_3127e0;
        case 0x3127e4u: goto label_3127e4;
        case 0x3127e8u: goto label_3127e8;
        case 0x3127ecu: goto label_3127ec;
        case 0x3127f0u: goto label_3127f0;
        case 0x3127f4u: goto label_3127f4;
        case 0x3127f8u: goto label_3127f8;
        case 0x3127fcu: goto label_3127fc;
        case 0x312800u: goto label_312800;
        case 0x312804u: goto label_312804;
        case 0x312808u: goto label_312808;
        case 0x31280cu: goto label_31280c;
        case 0x312810u: goto label_312810;
        case 0x312814u: goto label_312814;
        case 0x312818u: goto label_312818;
        case 0x31281cu: goto label_31281c;
        case 0x312820u: goto label_312820;
        case 0x312824u: goto label_312824;
        case 0x312828u: goto label_312828;
        case 0x31282cu: goto label_31282c;
        case 0x312830u: goto label_312830;
        case 0x312834u: goto label_312834;
        case 0x312838u: goto label_312838;
        case 0x31283cu: goto label_31283c;
        case 0x312840u: goto label_312840;
        case 0x312844u: goto label_312844;
        case 0x312848u: goto label_312848;
        case 0x31284cu: goto label_31284c;
        case 0x312850u: goto label_312850;
        case 0x312854u: goto label_312854;
        case 0x312858u: goto label_312858;
        case 0x31285cu: goto label_31285c;
        case 0x312860u: goto label_312860;
        case 0x312864u: goto label_312864;
        case 0x312868u: goto label_312868;
        case 0x31286cu: goto label_31286c;
        case 0x312870u: goto label_312870;
        case 0x312874u: goto label_312874;
        case 0x312878u: goto label_312878;
        case 0x31287cu: goto label_31287c;
        case 0x312880u: goto label_312880;
        case 0x312884u: goto label_312884;
        case 0x312888u: goto label_312888;
        case 0x31288cu: goto label_31288c;
        case 0x312890u: goto label_312890;
        case 0x312894u: goto label_312894;
        case 0x312898u: goto label_312898;
        case 0x31289cu: goto label_31289c;
        default: break;
    }

    ctx->pc = 0x312580u;

label_312580:
    // 0x312580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x312580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_312584:
    // 0x312584: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x312584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_312588:
    // 0x312588: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x312588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_31258c:
    // 0x31258c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31258cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312590:
    // 0x312590: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x312590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_312594:
    // 0x312594: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x312594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_312598:
    // 0x312598: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x312598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_31259c:
    // 0x31259c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31259cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3125a0:
    // 0x3125a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3125a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_3125a4:
    // 0x3125a4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3125a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_3125a8:
    // 0x3125a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3125a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3125ac:
    // 0x3125ac: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3125acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3125b0:
    // 0x3125b0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x3125b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3125b4:
    // 0x3125b4: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x3125b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_3125b8:
    // 0x3125b8: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
label_3125bc:
    if (ctx->pc == 0x3125BCu) {
        ctx->pc = 0x3125BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125B8u;
        // 0x3125bc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125C0u;
        goto label_3125c0;
    }
    ctx->pc = 0x3125B8u;
    {
        const bool branch_taken_0x3125b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3125BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125B8u;
        // 0x3125bc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125b8) {
            ctx->pc = 0x312874u;
            goto label_312874;
        }
    }
    ctx->pc = 0x3125C0u;
label_3125c0:
    // 0x3125c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3125c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3125c4:
    // 0x3125c4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3125c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3125c8:
    // 0x3125c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3125c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3125cc:
    // 0x3125cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3125ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3125d0:
    // 0x3125d0: 0x800008  jr          $a0
label_3125d4:
    if (ctx->pc == 0x3125D4u) {
        ctx->pc = 0x3125D8u;
        goto label_3125d8;
    }
    ctx->pc = 0x3125D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3125D8u: goto label_3125d8;
            case 0x312610u: goto label_312610;
            case 0x31261Cu: goto label_31261c;
            case 0x312628u: goto label_312628;
            case 0x312668u: goto label_312668;
            case 0x312688u: goto label_312688;
            case 0x312874u: goto label_312874;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3125D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3125D8u;
label_3125d8:
    // 0x3125d8: 0xc08a61a  jal         func_229868
label_3125dc:
    if (ctx->pc == 0x3125DCu) {
        ctx->pc = 0x3125DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125D8u;
        // 0x3125dc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125E0u;
        goto label_3125e0;
    }
    ctx->pc = 0x3125D8u;
    SET_GPR_U32(ctx, 31, 0x3125E0u);
    ctx->pc = 0x3125DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125D8u;
    // 0x3125dc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3125D8u, 0x3125E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125E0u;
label_3125e0:
    // 0x3125e0: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
label_3125e4:
    if (ctx->pc == 0x3125E4u) {
        ctx->pc = 0x3125E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125E0u;
        // 0x3125e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125E8u;
        goto label_3125e8;
    }
    ctx->pc = 0x3125E0u;
    {
        const bool branch_taken_0x3125e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3125e0) {
            ctx->pc = 0x3125E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3125E0u;
            // 0x3125e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x3125E8u;
label_3125e8:
    // 0x3125e8: 0xc087502  jal         func_21D408
label_3125ec:
    if (ctx->pc == 0x3125ECu) {
        ctx->pc = 0x3125ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125E8u;
        // 0x3125ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125F0u;
        goto label_3125f0;
    }
    ctx->pc = 0x3125E8u;
    SET_GPR_U32(ctx, 31, 0x3125F0u);
    ctx->pc = 0x3125ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125E8u;
    // 0x3125ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3125E8u, 0x3125F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125F0u;
label_3125f0:
    // 0x3125f0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x3125f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_3125f4:
    // 0x3125f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3125f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3125f8:
    // 0x3125f8: 0x1462009f  bne         $v1, $v0, . + 4 + (0x9F << 2)
label_3125fc:
    if (ctx->pc == 0x3125FCu) {
        ctx->pc = 0x3125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125F8u;
        // 0x3125fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312600u;
        goto label_312600;
    }
    ctx->pc = 0x3125F8u;
    {
        const bool branch_taken_0x3125f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125F8u;
        // 0x3125fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125f8) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x312600u;
label_312600:
    // 0x312600: 0xc0c4766  jal         func_311D98
label_312604:
    if (ctx->pc == 0x312604u) {
        ctx->pc = 0x312604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312600u;
        // 0x312604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312608u;
        goto label_312608;
    }
    ctx->pc = 0x312600u;
    SET_GPR_U32(ctx, 31, 0x312608u);
    ctx->pc = 0x312604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312600u;
    // 0x312604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311D98u, 0x312600u, 0x312608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312608u;
label_312608:
    // 0x312608: 0x1000009b  b           . + 4 + (0x9B << 2)
label_31260c:
    if (ctx->pc == 0x31260Cu) {
        ctx->pc = 0x31260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312608u;
        // 0x31260c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312610u;
        goto label_312610;
    }
    ctx->pc = 0x312608u;
    {
        const bool branch_taken_0x312608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312608u;
        // 0x31260c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312608) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x312610u;
label_312610:
    // 0x312610: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x312610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_312614:
    // 0x312614: 0x10000016  b           . + 4 + (0x16 << 2)
label_312618:
    if (ctx->pc == 0x312618u) {
        ctx->pc = 0x312618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312614u;
        // 0x312618: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31261Cu;
        goto label_31261c;
    }
    ctx->pc = 0x312614u;
    {
        const bool branch_taken_0x312614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312614u;
        // 0x312618: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312614) {
            ctx->pc = 0x312670u;
            goto label_312670;
        }
    }
    ctx->pc = 0x31261Cu;
label_31261c:
    // 0x31261c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_312620:
    // 0x312620: 0x10000013  b           . + 4 + (0x13 << 2)
label_312624:
    if (ctx->pc == 0x312624u) {
        ctx->pc = 0x312624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312620u;
        // 0x312624: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312628u;
        goto label_312628;
    }
    ctx->pc = 0x312620u;
    {
        const bool branch_taken_0x312620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312620u;
        // 0x312624: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312620) {
            ctx->pc = 0x312670u;
            goto label_312670;
        }
    }
    ctx->pc = 0x312628u;
label_312628:
    // 0x312628: 0xc08a61a  jal         func_229868
label_31262c:
    if (ctx->pc == 0x31262Cu) {
        ctx->pc = 0x31262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312628u;
        // 0x31262c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312630u;
        goto label_312630;
    }
    ctx->pc = 0x312628u;
    SET_GPR_U32(ctx, 31, 0x312630u);
    ctx->pc = 0x31262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312628u;
    // 0x31262c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x312628u, 0x312630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312630u;
label_312630:
    // 0x312630: 0x50400091  beql        $v0, $zero, . + 4 + (0x91 << 2)
label_312634:
    if (ctx->pc == 0x312634u) {
        ctx->pc = 0x312634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312630u;
        // 0x312634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312638u;
        goto label_312638;
    }
    ctx->pc = 0x312630u;
    {
        const bool branch_taken_0x312630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312630) {
            ctx->pc = 0x312634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312630u;
            // 0x312634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x312638u;
label_312638:
    // 0x312638: 0xc087502  jal         func_21D408
label_31263c:
    if (ctx->pc == 0x31263Cu) {
        ctx->pc = 0x31263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312638u;
        // 0x31263c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312640u;
        goto label_312640;
    }
    ctx->pc = 0x312638u;
    SET_GPR_U32(ctx, 31, 0x312640u);
    ctx->pc = 0x31263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312638u;
    // 0x31263c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x312638u, 0x312640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312640u;
label_312640:
    // 0x312640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312644:
    // 0x312644: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x312644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_312648:
    // 0x312648: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x312648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_31264c:
    // 0x31264c: 0x1443008a  bne         $v0, $v1, . + 4 + (0x8A << 2)
label_312650:
    if (ctx->pc == 0x312650u) {
        ctx->pc = 0x312650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31264Cu;
        // 0x312650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312654u;
        goto label_312654;
    }
    ctx->pc = 0x31264Cu;
    {
        const bool branch_taken_0x31264c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x312650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31264Cu;
        // 0x312650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31264c) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x312654u;
label_312654:
    // 0x312654: 0xc0a3032  jal         func_28C0C8
label_312658:
    if (ctx->pc == 0x312658u) {
        ctx->pc = 0x312658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312654u;
        // 0x312658: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31265Cu;
        goto label_31265c;
    }
    ctx->pc = 0x312654u;
    SET_GPR_U32(ctx, 31, 0x31265Cu);
    ctx->pc = 0x312658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312654u;
    // 0x312658: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x312654u, 0x31265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31265Cu;
label_31265c:
    // 0x31265c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_312660:
    // 0x312660: 0x10000003  b           . + 4 + (0x3 << 2)
label_312664:
    if (ctx->pc == 0x312664u) {
        ctx->pc = 0x312664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312660u;
        // 0x312664: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312668u;
        goto label_312668;
    }
    ctx->pc = 0x312660u;
    {
        const bool branch_taken_0x312660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312660u;
        // 0x312664: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312660) {
            ctx->pc = 0x312670u;
            goto label_312670;
        }
    }
    ctx->pc = 0x312668u;
label_312668:
    // 0x312668: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x312668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31266c:
    // 0x31266c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_312670:
    // 0x312670: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x312670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_312674:
    // 0x312674: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x312674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_312678:
    // 0x312678: 0x60f809  jalr        $v1
label_31267c:
    if (ctx->pc == 0x31267Cu) {
        ctx->pc = 0x31267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312678u;
        // 0x31267c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312680u;
        goto label_312680;
    }
    ctx->pc = 0x312678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x312680u);
        ctx->pc = 0x31267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312678u;
        // 0x31267c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312678u, 0x312680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312680u;
label_312680:
    // 0x312680: 0x1000007d  b           . + 4 + (0x7D << 2)
label_312684:
    if (ctx->pc == 0x312684u) {
        ctx->pc = 0x312684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312680u;
        // 0x312684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312688u;
        goto label_312688;
    }
    ctx->pc = 0x312680u;
    {
        const bool branch_taken_0x312680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312680u;
        // 0x312684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312680) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x312688u;
label_312688:
    // 0x312688: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x312688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
label_31268c:
    // 0x31268c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312690:
    // 0x312690: 0x5462007a  bnel        $v1, $v0, . + 4 + (0x7A << 2)
label_312694:
    if (ctx->pc == 0x312694u) {
        ctx->pc = 0x312694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312690u;
        // 0x312694: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312698u;
        goto label_312698;
    }
    ctx->pc = 0x312690u;
    {
        const bool branch_taken_0x312690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x312690) {
            ctx->pc = 0x312694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312690u;
            // 0x312694: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31287Cu;
            goto label_31287c;
        }
    }
    ctx->pc = 0x312698u;
label_312698:
    // 0x312698: 0xc08a61a  jal         func_229868
label_31269c:
    if (ctx->pc == 0x31269Cu) {
        ctx->pc = 0x31269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312698u;
        // 0x31269c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126A0u;
        goto label_3126a0;
    }
    ctx->pc = 0x312698u;
    SET_GPR_U32(ctx, 31, 0x3126A0u);
    ctx->pc = 0x31269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312698u;
    // 0x31269c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x312698u, 0x3126A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126A0u;
label_3126a0:
    // 0x3126a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3126a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3126a4:
    // 0x3126a4: 0x12400074  beqz        $s2, . + 4 + (0x74 << 2)
label_3126a8:
    if (ctx->pc == 0x3126A8u) {
        ctx->pc = 0x3126A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126A4u;
        // 0x3126a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126ACu;
        goto label_3126ac;
    }
    ctx->pc = 0x3126A4u;
    {
        const bool branch_taken_0x3126a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126A4u;
        // 0x3126a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126a4) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x3126ACu;
label_3126ac:
    // 0x3126ac: 0xc05959e  jal         func_165678
label_3126b0:
    if (ctx->pc == 0x3126B0u) {
        ctx->pc = 0x3126B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126ACu;
        // 0x3126b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126B4u;
        goto label_3126b4;
    }
    ctx->pc = 0x3126ACu;
    SET_GPR_U32(ctx, 31, 0x3126B4u);
    ctx->pc = 0x3126B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126ACu;
    // 0x3126b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3126ACu, 0x3126B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126B4u;
label_3126b4:
    // 0x3126b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3126b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3126b8:
    // 0x3126b8: 0x1260006f  beqz        $s3, . + 4 + (0x6F << 2)
label_3126bc:
    if (ctx->pc == 0x3126BCu) {
        ctx->pc = 0x3126BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126B8u;
        // 0x3126bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126C0u;
        goto label_3126c0;
    }
    ctx->pc = 0x3126B8u;
    {
        const bool branch_taken_0x3126b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126B8u;
        // 0x3126bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126b8) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x3126C0u;
label_3126c0:
    // 0x3126c0: 0xc087502  jal         func_21D408
label_3126c4:
    if (ctx->pc == 0x3126C4u) {
        ctx->pc = 0x3126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126C0u;
        // 0x3126c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126C8u;
        goto label_3126c8;
    }
    ctx->pc = 0x3126C0u;
    SET_GPR_U32(ctx, 31, 0x3126C8u);
    ctx->pc = 0x3126C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126C0u;
    // 0x3126c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3126C0u, 0x3126C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126C8u;
label_3126c8:
    // 0x3126c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3126c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3126cc:
    // 0x3126cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3126ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3126d0:
    // 0x3126d0: 0xc0a44ac  jal         func_2912B0
label_3126d4:
    if (ctx->pc == 0x3126D4u) {
        ctx->pc = 0x3126D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126D0u;
        // 0x3126d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126D8u;
        goto label_3126d8;
    }
    ctx->pc = 0x3126D0u;
    SET_GPR_U32(ctx, 31, 0x3126D8u);
    ctx->pc = 0x3126D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126D0u;
    // 0x3126d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x3126D0u, 0x3126D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126D8u;
label_3126d8:
    // 0x3126d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3126d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3126dc:
    // 0x3126dc: 0x12800066  beqz        $s4, . + 4 + (0x66 << 2)
label_3126e0:
    if (ctx->pc == 0x3126E0u) {
        ctx->pc = 0x3126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126DCu;
        // 0x3126e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126E4u;
        goto label_3126e4;
    }
    ctx->pc = 0x3126DCu;
    {
        const bool branch_taken_0x3126dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126DCu;
        // 0x3126e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126dc) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x3126E4u;
label_3126e4:
    // 0x3126e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3126e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3126e8:
    // 0x3126e8: 0xc059856  jal         func_166158
label_3126ec:
    if (ctx->pc == 0x3126ECu) {
        ctx->pc = 0x3126ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126E8u;
        // 0x3126ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126F0u;
        goto label_3126f0;
    }
    ctx->pc = 0x3126E8u;
    SET_GPR_U32(ctx, 31, 0x3126F0u);
    ctx->pc = 0x3126ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126E8u;
    // 0x3126ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x3126E8u, 0x3126F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126F0u;
label_3126f0:
    // 0x3126f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3126f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3126f4:
    // 0x3126f4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x3126f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_3126f8:
    // 0x3126f8: 0xc059552  jal         func_165548
label_3126fc:
    if (ctx->pc == 0x3126FCu) {
        ctx->pc = 0x3126FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126F8u;
        // 0x3126fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312700u;
        goto label_312700;
    }
    ctx->pc = 0x3126F8u;
    SET_GPR_U32(ctx, 31, 0x312700u);
    ctx->pc = 0x3126FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126F8u;
    // 0x3126fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165548u, 0x3126F8u, 0x312700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312700u;
label_312700:
    // 0x312700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x312700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312704:
    // 0x312704: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x312704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_312708:
    // 0x312708: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_31270c:
    if (ctx->pc == 0x31270Cu) {
        ctx->pc = 0x31270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312708u;
        // 0x31270c: 0x904500d7  lbu         $a1, 0xD7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 215)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312710u;
        goto label_312710;
    }
    ctx->pc = 0x312708u;
    {
        const bool branch_taken_0x312708 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x31270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312708u;
        // 0x31270c: 0x904500d7  lbu         $a1, 0xD7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 215)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312708) {
            ctx->pc = 0x312724u;
            goto label_312724;
        }
    }
    ctx->pc = 0x312710u;
label_312710:
    // 0x312710: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x312710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_312714:
    // 0x312714: 0x0  nop
    ctx->pc = 0x312714u;
    // NOP
label_312718:
    // 0x312718: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x312718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_31271c:
    // 0x31271c: 0x10000008  b           . + 4 + (0x8 << 2)
label_312720:
    if (ctx->pc == 0x312720u) {
        ctx->pc = 0x312724u;
        goto label_312724;
    }
    ctx->pc = 0x31271Cu;
    {
        const bool branch_taken_0x31271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31271c) {
            ctx->pc = 0x312740u;
            goto label_312740;
        }
    }
    ctx->pc = 0x312724u;
label_312724:
    // 0x312724: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x312724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_312728:
    // 0x312728: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x312728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_31272c:
    // 0x31272c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_312730:
    // 0x312730: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x312730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_312734:
    // 0x312734: 0x0  nop
    ctx->pc = 0x312734u;
    // NOP
label_312738:
    // 0x312738: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x312738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_31273c:
    // 0x31273c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x31273cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_312740:
    // 0x312740: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x312740u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_312744:
    // 0x312744: 0x0  nop
    ctx->pc = 0x312744u;
    // NOP
label_312748:
    // 0x312748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x312748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_31274c:
    // 0x31274c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x31274cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_312750:
    // 0x312750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_312754:
    // 0x312754: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x312754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_312758:
    // 0x312758: 0x0  nop
    ctx->pc = 0x312758u;
    // NOP
label_31275c:
    // 0x31275c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31275cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_312760:
    // 0x312760: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x312760u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_312764:
    // 0x312764: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x312764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_312768:
    // 0x312768: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x312768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31276c:
    // 0x31276c: 0x0  nop
    ctx->pc = 0x31276cu;
    // NOP
label_312770:
    // 0x312770: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_312774:
    if (ctx->pc == 0x312774u) {
        ctx->pc = 0x312774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312770u;
        // 0x312774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312778u;
        goto label_312778;
    }
    ctx->pc = 0x312770u;
    {
        const bool branch_taken_0x312770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312770u;
        // 0x312774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312770) {
            ctx->pc = 0x3127CCu;
            goto label_3127cc;
        }
    }
    ctx->pc = 0x312778u;
label_312778:
    // 0x312778: 0x10000040  b           . + 4 + (0x40 << 2)
label_31277c:
    if (ctx->pc == 0x31277Cu) {
        ctx->pc = 0x31277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312778u;
        // 0x31277c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312780u;
        goto label_312780;
    }
    ctx->pc = 0x312778u;
    {
        const bool branch_taken_0x312778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312778u;
        // 0x31277c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312778) {
            ctx->pc = 0x31287Cu;
            goto label_31287c;
        }
    }
    ctx->pc = 0x312780u;
label_312780:
    // 0x312780: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x312780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_312784:
    // 0x312784: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x312784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_312788:
    // 0x312788: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x312788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31278c:
    // 0x31278c: 0x40f809  jalr        $v0
label_312790:
    if (ctx->pc == 0x312790u) {
        ctx->pc = 0x312790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31278Cu;
        // 0x312790: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312794u;
        goto label_312794;
    }
    ctx->pc = 0x31278Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312794u);
        ctx->pc = 0x312790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31278Cu;
        // 0x312790: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31278Cu, 0x312794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312794u;
label_312794:
    // 0x312794: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x312794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_312798:
    // 0x312798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31279c:
    // 0x31279c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31279cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3127a0:
    // 0x3127a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3127a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3127a4:
    // 0x3127a4: 0x40f809  jalr        $v0
label_3127a8:
    if (ctx->pc == 0x3127A8u) {
        ctx->pc = 0x3127A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127A4u;
        // 0x3127a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127ACu;
        goto label_3127ac;
    }
    ctx->pc = 0x3127A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3127ACu);
        ctx->pc = 0x3127A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127A4u;
        // 0x3127a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3127A4u, 0x3127ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3127ACu;
label_3127ac:
    // 0x3127ac: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3127acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3127b0:
    // 0x3127b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3127b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3127b4:
    // 0x3127b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3127b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3127b8:
    // 0x3127b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3127b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3127bc:
    // 0x3127bc: 0xc0add6e  jal         func_2B75B8
label_3127c0:
    if (ctx->pc == 0x3127C0u) {
        ctx->pc = 0x3127C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127BCu;
        // 0x3127c0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127C4u;
        goto label_3127c4;
    }
    ctx->pc = 0x3127BCu;
    SET_GPR_U32(ctx, 31, 0x3127C4u);
    ctx->pc = 0x3127C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127BCu;
    // 0x3127c0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75B8u, 0x3127BCu, 0x3127C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127C4u;
label_3127c4:
    // 0x3127c4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3127c8:
    if (ctx->pc == 0x3127C8u) {
        ctx->pc = 0x3127C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127C4u;
        // 0x3127c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127CCu;
        goto label_3127cc;
    }
    ctx->pc = 0x3127C4u;
    {
        const bool branch_taken_0x3127c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3127C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127C4u;
        // 0x3127c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3127c4) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x3127CCu;
label_3127cc:
    // 0x3127cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3127ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3127d0:
    // 0x3127d0: 0x2a360002  slti        $s6, $s1, 0x2
    ctx->pc = 0x3127d0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_3127d4:
    // 0x3127d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3127d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3127d8:
    // 0x3127d8: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x3127d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_3127dc:
    // 0x3127dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3127dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3127e0:
    // 0x3127e0: 0xc137826  jal         func_4DE098
label_3127e4:
    if (ctx->pc == 0x3127E4u) {
        ctx->pc = 0x3127E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127E0u;
        // 0x3127e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127E8u;
        goto label_3127e8;
    }
    ctx->pc = 0x3127E0u;
    SET_GPR_U32(ctx, 31, 0x3127E8u);
    ctx->pc = 0x3127E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127E0u;
    // 0x3127e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3127E0u, 0x3127E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127E8u;
label_3127e8:
    // 0x3127e8: 0xc0e409a  jal         func_390268
label_3127ec:
    if (ctx->pc == 0x3127ECu) {
        ctx->pc = 0x3127ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127E8u;
        // 0x3127ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127F0u;
        goto label_3127f0;
    }
    ctx->pc = 0x3127E8u;
    SET_GPR_U32(ctx, 31, 0x3127F0u);
    ctx->pc = 0x3127ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127E8u;
    // 0x3127ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3127E8u, 0x3127F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127F0u;
label_3127f0:
    // 0x3127f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3127f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3127f4:
    // 0x3127f4: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
label_3127f8:
    if (ctx->pc == 0x3127F8u) {
        ctx->pc = 0x3127F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127F4u;
        // 0x3127f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127FCu;
        goto label_3127fc;
    }
    ctx->pc = 0x3127F4u;
    {
        const bool branch_taken_0x3127f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3127f4) {
            ctx->pc = 0x3127F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127F4u;
            // 0x3127f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x3127FCu;
label_3127fc:
    // 0x3127fc: 0x56330004  bnel        $s1, $s3, . + 4 + (0x4 << 2)
label_312800:
    if (ctx->pc == 0x312800u) {
        ctx->pc = 0x312800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127FCu;
        // 0x312800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312804u;
        goto label_312804;
    }
    ctx->pc = 0x3127FCu;
    {
        const bool branch_taken_0x3127fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x3127fc) {
            ctx->pc = 0x312800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127FCu;
            // 0x312800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312810u;
            goto label_312810;
        }
    }
    ctx->pc = 0x312804u;
label_312804:
    // 0x312804: 0x52c00016  beql        $s6, $zero, . + 4 + (0x16 << 2)
label_312808:
    if (ctx->pc == 0x312808u) {
        ctx->pc = 0x312808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312804u;
        // 0x312808: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31280Cu;
        goto label_31280c;
    }
    ctx->pc = 0x312804u;
    {
        const bool branch_taken_0x312804 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x312804) {
            ctx->pc = 0x312808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312804u;
            // 0x312808: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x31280Cu;
label_31280c:
    // 0x31280c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312810:
    // 0x312810: 0xc08a08a  jal         func_228228
label_312814:
    if (ctx->pc == 0x312814u) {
        ctx->pc = 0x312814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312810u;
        // 0x312814: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312818u;
        goto label_312818;
    }
    ctx->pc = 0x312810u;
    SET_GPR_U32(ctx, 31, 0x312818u);
    ctx->pc = 0x312814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312810u;
    // 0x312814: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x312810u, 0x312818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312818u;
label_312818:
    // 0x312818: 0x50500011  beql        $v0, $s0, . + 4 + (0x11 << 2)
label_31281c:
    if (ctx->pc == 0x31281Cu) {
        ctx->pc = 0x31281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312818u;
        // 0x31281c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312820u;
        goto label_312820;
    }
    ctx->pc = 0x312818u;
    {
        const bool branch_taken_0x312818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x312818) {
            ctx->pc = 0x31281Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312818u;
            // 0x31281c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x312820u;
label_312820:
    // 0x312820: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x312820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_312824:
    // 0x312824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312828:
    // 0x312828: 0xc089998  jal         func_226660
label_31282c:
    if (ctx->pc == 0x31282Cu) {
        ctx->pc = 0x31282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312828u;
        // 0x31282c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x312830u;
        goto label_312830;
    }
    ctx->pc = 0x312828u;
    SET_GPR_U32(ctx, 31, 0x312830u);
    ctx->pc = 0x31282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312828u;
    // 0x31282c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x312828u, 0x312830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312830u;
label_312830:
    // 0x312830: 0x5050000b  beql        $v0, $s0, . + 4 + (0xB << 2)
label_312834:
    if (ctx->pc == 0x312834u) {
        ctx->pc = 0x312834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312830u;
        // 0x312834: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312838u;
        goto label_312838;
    }
    ctx->pc = 0x312830u;
    {
        const bool branch_taken_0x312830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x312830) {
            ctx->pc = 0x312834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312830u;
            // 0x312834: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x312838u;
label_312838:
    // 0x312838: 0xc087502  jal         func_21D408
label_31283c:
    if (ctx->pc == 0x31283Cu) {
        ctx->pc = 0x31283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312838u;
        // 0x31283c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312840u;
        goto label_312840;
    }
    ctx->pc = 0x312838u;
    SET_GPR_U32(ctx, 31, 0x312840u);
    ctx->pc = 0x31283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312838u;
    // 0x31283c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x312838u, 0x312840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312840u;
label_312840:
    // 0x312840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312844:
    // 0x312844: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x312844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_312848:
    // 0x312848: 0xc0a3658  jal         func_28D960
label_31284c:
    if (ctx->pc == 0x31284Cu) {
        ctx->pc = 0x31284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312848u;
        // 0x31284c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312850u;
        goto label_312850;
    }
    ctx->pc = 0x312848u;
    SET_GPR_U32(ctx, 31, 0x312850u);
    ctx->pc = 0x31284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312848u;
    // 0x31284c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x312848u, 0x312850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312850u;
label_312850:
    // 0x312850: 0x8203002d  lb          $v1, 0x2D($s0)
    ctx->pc = 0x312850u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_312854:
    // 0x312854: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x312854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_312858:
    // 0x312858: 0x1060ffc9  beqz        $v1, . + 4 + (-0x37 << 2)
label_31285c:
    if (ctx->pc == 0x31285Cu) {
        ctx->pc = 0x31285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312858u;
        // 0x31285c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312860u;
        goto label_312860;
    }
    ctx->pc = 0x312858u;
    {
        const bool branch_taken_0x312858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312858u;
        // 0x31285c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312858) {
            ctx->pc = 0x312780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312780;
        }
    }
    ctx->pc = 0x312860u;
label_312860:
    // 0x312860: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x312860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_312864:
    // 0x312864: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_312868:
    if (ctx->pc == 0x312868u) {
        ctx->pc = 0x312868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312864u;
        // 0x312868: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31286Cu;
        goto label_31286c;
    }
    ctx->pc = 0x312864u;
    {
        const bool branch_taken_0x312864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312864u;
        // 0x312868: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312864) {
            ctx->pc = 0x3127E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3127e0;
        }
    }
    ctx->pc = 0x31286Cu;
label_31286c:
    // 0x31286c: 0x10000002  b           . + 4 + (0x2 << 2)
label_312870:
    if (ctx->pc == 0x312870u) {
        ctx->pc = 0x312870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31286Cu;
        // 0x312870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312874u;
        goto label_312874;
    }
    ctx->pc = 0x31286Cu;
    {
        const bool branch_taken_0x31286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31286Cu;
        // 0x312870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31286c) {
            ctx->pc = 0x312878u;
            goto label_312878;
        }
    }
    ctx->pc = 0x312874u;
label_312874:
    // 0x312874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312878:
    // 0x312878: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x312878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31287c:
    // 0x31287c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31287cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_312880:
    // 0x312880: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x312880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_312884:
    // 0x312884: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x312884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_312888:
    // 0x312888: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x312888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31288c:
    // 0x31288c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31288cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312890:
    // 0x312890: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x312890u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312894:
    // 0x312894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312898:
    // 0x312898: 0x3e00008  jr          $ra
label_31289c:
    if (ctx->pc == 0x31289Cu) {
        ctx->pc = 0x31289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312898u;
        // 0x31289c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3128A0u;
        goto label_fallthrough_0x312898;
    }
    ctx->pc = 0x312898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312898u;
        // 0x31289c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x312898:
    ctx->pc = 0x3128A0u;
}
