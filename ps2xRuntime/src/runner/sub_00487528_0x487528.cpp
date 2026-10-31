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

// Function: sub_00487528
// Address: 0x487528 - 0x487958
void sub_00487528_0x487528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487528_0x487528");
#endif

    switch (ctx->pc) {
        case 0x487528u: goto label_487528;
        case 0x48752cu: goto label_48752c;
        case 0x487530u: goto label_487530;
        case 0x487534u: goto label_487534;
        case 0x487538u: goto label_487538;
        case 0x48753cu: goto label_48753c;
        case 0x487540u: goto label_487540;
        case 0x487544u: goto label_487544;
        case 0x487548u: goto label_487548;
        case 0x48754cu: goto label_48754c;
        case 0x487550u: goto label_487550;
        case 0x487554u: goto label_487554;
        case 0x487558u: goto label_487558;
        case 0x48755cu: goto label_48755c;
        case 0x487560u: goto label_487560;
        case 0x487564u: goto label_487564;
        case 0x487568u: goto label_487568;
        case 0x48756cu: goto label_48756c;
        case 0x487570u: goto label_487570;
        case 0x487574u: goto label_487574;
        case 0x487578u: goto label_487578;
        case 0x48757cu: goto label_48757c;
        case 0x487580u: goto label_487580;
        case 0x487584u: goto label_487584;
        case 0x487588u: goto label_487588;
        case 0x48758cu: goto label_48758c;
        case 0x487590u: goto label_487590;
        case 0x487594u: goto label_487594;
        case 0x487598u: goto label_487598;
        case 0x48759cu: goto label_48759c;
        case 0x4875a0u: goto label_4875a0;
        case 0x4875a4u: goto label_4875a4;
        case 0x4875a8u: goto label_4875a8;
        case 0x4875acu: goto label_4875ac;
        case 0x4875b0u: goto label_4875b0;
        case 0x4875b4u: goto label_4875b4;
        case 0x4875b8u: goto label_4875b8;
        case 0x4875bcu: goto label_4875bc;
        case 0x4875c0u: goto label_4875c0;
        case 0x4875c4u: goto label_4875c4;
        case 0x4875c8u: goto label_4875c8;
        case 0x4875ccu: goto label_4875cc;
        case 0x4875d0u: goto label_4875d0;
        case 0x4875d4u: goto label_4875d4;
        case 0x4875d8u: goto label_4875d8;
        case 0x4875dcu: goto label_4875dc;
        case 0x4875e0u: goto label_4875e0;
        case 0x4875e4u: goto label_4875e4;
        case 0x4875e8u: goto label_4875e8;
        case 0x4875ecu: goto label_4875ec;
        case 0x4875f0u: goto label_4875f0;
        case 0x4875f4u: goto label_4875f4;
        case 0x4875f8u: goto label_4875f8;
        case 0x4875fcu: goto label_4875fc;
        case 0x487600u: goto label_487600;
        case 0x487604u: goto label_487604;
        case 0x487608u: goto label_487608;
        case 0x48760cu: goto label_48760c;
        case 0x487610u: goto label_487610;
        case 0x487614u: goto label_487614;
        case 0x487618u: goto label_487618;
        case 0x48761cu: goto label_48761c;
        case 0x487620u: goto label_487620;
        case 0x487624u: goto label_487624;
        case 0x487628u: goto label_487628;
        case 0x48762cu: goto label_48762c;
        case 0x487630u: goto label_487630;
        case 0x487634u: goto label_487634;
        case 0x487638u: goto label_487638;
        case 0x48763cu: goto label_48763c;
        case 0x487640u: goto label_487640;
        case 0x487644u: goto label_487644;
        case 0x487648u: goto label_487648;
        case 0x48764cu: goto label_48764c;
        case 0x487650u: goto label_487650;
        case 0x487654u: goto label_487654;
        case 0x487658u: goto label_487658;
        case 0x48765cu: goto label_48765c;
        case 0x487660u: goto label_487660;
        case 0x487664u: goto label_487664;
        case 0x487668u: goto label_487668;
        case 0x48766cu: goto label_48766c;
        case 0x487670u: goto label_487670;
        case 0x487674u: goto label_487674;
        case 0x487678u: goto label_487678;
        case 0x48767cu: goto label_48767c;
        case 0x487680u: goto label_487680;
        case 0x487684u: goto label_487684;
        case 0x487688u: goto label_487688;
        case 0x48768cu: goto label_48768c;
        case 0x487690u: goto label_487690;
        case 0x487694u: goto label_487694;
        case 0x487698u: goto label_487698;
        case 0x48769cu: goto label_48769c;
        case 0x4876a0u: goto label_4876a0;
        case 0x4876a4u: goto label_4876a4;
        case 0x4876a8u: goto label_4876a8;
        case 0x4876acu: goto label_4876ac;
        case 0x4876b0u: goto label_4876b0;
        case 0x4876b4u: goto label_4876b4;
        case 0x4876b8u: goto label_4876b8;
        case 0x4876bcu: goto label_4876bc;
        case 0x4876c0u: goto label_4876c0;
        case 0x4876c4u: goto label_4876c4;
        case 0x4876c8u: goto label_4876c8;
        case 0x4876ccu: goto label_4876cc;
        case 0x4876d0u: goto label_4876d0;
        case 0x4876d4u: goto label_4876d4;
        case 0x4876d8u: goto label_4876d8;
        case 0x4876dcu: goto label_4876dc;
        case 0x4876e0u: goto label_4876e0;
        case 0x4876e4u: goto label_4876e4;
        case 0x4876e8u: goto label_4876e8;
        case 0x4876ecu: goto label_4876ec;
        case 0x4876f0u: goto label_4876f0;
        case 0x4876f4u: goto label_4876f4;
        case 0x4876f8u: goto label_4876f8;
        case 0x4876fcu: goto label_4876fc;
        case 0x487700u: goto label_487700;
        case 0x487704u: goto label_487704;
        case 0x487708u: goto label_487708;
        case 0x48770cu: goto label_48770c;
        case 0x487710u: goto label_487710;
        case 0x487714u: goto label_487714;
        case 0x487718u: goto label_487718;
        case 0x48771cu: goto label_48771c;
        case 0x487720u: goto label_487720;
        case 0x487724u: goto label_487724;
        case 0x487728u: goto label_487728;
        case 0x48772cu: goto label_48772c;
        case 0x487730u: goto label_487730;
        case 0x487734u: goto label_487734;
        case 0x487738u: goto label_487738;
        case 0x48773cu: goto label_48773c;
        case 0x487740u: goto label_487740;
        case 0x487744u: goto label_487744;
        case 0x487748u: goto label_487748;
        case 0x48774cu: goto label_48774c;
        case 0x487750u: goto label_487750;
        case 0x487754u: goto label_487754;
        case 0x487758u: goto label_487758;
        case 0x48775cu: goto label_48775c;
        case 0x487760u: goto label_487760;
        case 0x487764u: goto label_487764;
        case 0x487768u: goto label_487768;
        case 0x48776cu: goto label_48776c;
        case 0x487770u: goto label_487770;
        case 0x487774u: goto label_487774;
        case 0x487778u: goto label_487778;
        case 0x48777cu: goto label_48777c;
        case 0x487780u: goto label_487780;
        case 0x487784u: goto label_487784;
        case 0x487788u: goto label_487788;
        case 0x48778cu: goto label_48778c;
        case 0x487790u: goto label_487790;
        case 0x487794u: goto label_487794;
        case 0x487798u: goto label_487798;
        case 0x48779cu: goto label_48779c;
        case 0x4877a0u: goto label_4877a0;
        case 0x4877a4u: goto label_4877a4;
        case 0x4877a8u: goto label_4877a8;
        case 0x4877acu: goto label_4877ac;
        case 0x4877b0u: goto label_4877b0;
        case 0x4877b4u: goto label_4877b4;
        case 0x4877b8u: goto label_4877b8;
        case 0x4877bcu: goto label_4877bc;
        case 0x4877c0u: goto label_4877c0;
        case 0x4877c4u: goto label_4877c4;
        case 0x4877c8u: goto label_4877c8;
        case 0x4877ccu: goto label_4877cc;
        case 0x4877d0u: goto label_4877d0;
        case 0x4877d4u: goto label_4877d4;
        case 0x4877d8u: goto label_4877d8;
        case 0x4877dcu: goto label_4877dc;
        case 0x4877e0u: goto label_4877e0;
        case 0x4877e4u: goto label_4877e4;
        case 0x4877e8u: goto label_4877e8;
        case 0x4877ecu: goto label_4877ec;
        case 0x4877f0u: goto label_4877f0;
        case 0x4877f4u: goto label_4877f4;
        case 0x4877f8u: goto label_4877f8;
        case 0x4877fcu: goto label_4877fc;
        case 0x487800u: goto label_487800;
        case 0x487804u: goto label_487804;
        case 0x487808u: goto label_487808;
        case 0x48780cu: goto label_48780c;
        case 0x487810u: goto label_487810;
        case 0x487814u: goto label_487814;
        case 0x487818u: goto label_487818;
        case 0x48781cu: goto label_48781c;
        case 0x487820u: goto label_487820;
        case 0x487824u: goto label_487824;
        case 0x487828u: goto label_487828;
        case 0x48782cu: goto label_48782c;
        case 0x487830u: goto label_487830;
        case 0x487834u: goto label_487834;
        case 0x487838u: goto label_487838;
        case 0x48783cu: goto label_48783c;
        case 0x487840u: goto label_487840;
        case 0x487844u: goto label_487844;
        case 0x487848u: goto label_487848;
        case 0x48784cu: goto label_48784c;
        case 0x487850u: goto label_487850;
        case 0x487854u: goto label_487854;
        case 0x487858u: goto label_487858;
        case 0x48785cu: goto label_48785c;
        case 0x487860u: goto label_487860;
        case 0x487864u: goto label_487864;
        case 0x487868u: goto label_487868;
        case 0x48786cu: goto label_48786c;
        case 0x487870u: goto label_487870;
        case 0x487874u: goto label_487874;
        case 0x487878u: goto label_487878;
        case 0x48787cu: goto label_48787c;
        case 0x487880u: goto label_487880;
        case 0x487884u: goto label_487884;
        case 0x487888u: goto label_487888;
        case 0x48788cu: goto label_48788c;
        case 0x487890u: goto label_487890;
        case 0x487894u: goto label_487894;
        case 0x487898u: goto label_487898;
        case 0x48789cu: goto label_48789c;
        case 0x4878a0u: goto label_4878a0;
        case 0x4878a4u: goto label_4878a4;
        case 0x4878a8u: goto label_4878a8;
        case 0x4878acu: goto label_4878ac;
        case 0x4878b0u: goto label_4878b0;
        case 0x4878b4u: goto label_4878b4;
        case 0x4878b8u: goto label_4878b8;
        case 0x4878bcu: goto label_4878bc;
        case 0x4878c0u: goto label_4878c0;
        case 0x4878c4u: goto label_4878c4;
        case 0x4878c8u: goto label_4878c8;
        case 0x4878ccu: goto label_4878cc;
        case 0x4878d0u: goto label_4878d0;
        case 0x4878d4u: goto label_4878d4;
        case 0x4878d8u: goto label_4878d8;
        case 0x4878dcu: goto label_4878dc;
        case 0x4878e0u: goto label_4878e0;
        case 0x4878e4u: goto label_4878e4;
        case 0x4878e8u: goto label_4878e8;
        case 0x4878ecu: goto label_4878ec;
        case 0x4878f0u: goto label_4878f0;
        case 0x4878f4u: goto label_4878f4;
        case 0x4878f8u: goto label_4878f8;
        case 0x4878fcu: goto label_4878fc;
        case 0x487900u: goto label_487900;
        case 0x487904u: goto label_487904;
        case 0x487908u: goto label_487908;
        case 0x48790cu: goto label_48790c;
        case 0x487910u: goto label_487910;
        case 0x487914u: goto label_487914;
        case 0x487918u: goto label_487918;
        case 0x48791cu: goto label_48791c;
        case 0x487920u: goto label_487920;
        case 0x487924u: goto label_487924;
        case 0x487928u: goto label_487928;
        case 0x48792cu: goto label_48792c;
        case 0x487930u: goto label_487930;
        case 0x487934u: goto label_487934;
        case 0x487938u: goto label_487938;
        case 0x48793cu: goto label_48793c;
        case 0x487940u: goto label_487940;
        case 0x487944u: goto label_487944;
        case 0x487948u: goto label_487948;
        case 0x48794cu: goto label_48794c;
        case 0x487950u: goto label_487950;
        case 0x487954u: goto label_487954;
        default: break;
    }

    ctx->pc = 0x487528u;

label_487528:
    // 0x487528: 0x27bdb950  addiu       $sp, $sp, -0x46B0
    ctx->pc = 0x487528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294949200));
label_48752c:
    // 0x48752c: 0x7fb046a0  sq          $s0, 0x46A0($sp)
    ctx->pc = 0x48752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18080), GPR_VEC(ctx, 16));
label_487530:
    // 0x487530: 0x7fb14690  sq          $s1, 0x4690($sp)
    ctx->pc = 0x487530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18064), GPR_VEC(ctx, 17));
label_487534:
    // 0x487534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x487534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487538:
    // 0x487538: 0x7fb34670  sq          $s3, 0x4670($sp)
    ctx->pc = 0x487538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18032), GPR_VEC(ctx, 19));
label_48753c:
    // 0x48753c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x48753cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_487540:
    // 0x487540: 0x7fb44660  sq          $s4, 0x4660($sp)
    ctx->pc = 0x487540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18016), GPR_VEC(ctx, 20));
label_487544:
    // 0x487544: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x487544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_487548:
    // 0x487548: 0x7fb54650  sq          $s5, 0x4650($sp)
    ctx->pc = 0x487548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18000), GPR_VEC(ctx, 21));
label_48754c:
    // 0x48754c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x48754cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_487550:
    // 0x487550: 0x7fb64640  sq          $s6, 0x4640($sp)
    ctx->pc = 0x487550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17984), GPR_VEC(ctx, 22));
label_487554:
    // 0x487554: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x487554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_487558:
    // 0x487558: 0x7fb74630  sq          $s7, 0x4630($sp)
    ctx->pc = 0x487558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17968), GPR_VEC(ctx, 23));
label_48755c:
    // 0x48755c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x48755cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_487560:
    // 0x487560: 0x7fb24680  sq          $s2, 0x4680($sp)
    ctx->pc = 0x487560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18048), GPR_VEC(ctx, 18));
label_487564:
    // 0x487564: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x487564u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_487568:
    // 0x487568: 0xffbf4620  sd          $ra, 0x4620($sp)
    ctx->pc = 0x487568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 17952), GPR_U64(ctx, 31));
label_48756c:
    // 0x48756c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_487570:
    // 0x487570: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x487570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_487574:
    // 0x487574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x487574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_487578:
    // 0x487578: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x487578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_48757c:
    // 0x48757c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48757cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487580:
    // 0x487580: 0x40f809  jalr        $v0
label_487584:
    if (ctx->pc == 0x487584u) {
        ctx->pc = 0x487584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487580u;
        // 0x487584: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487588u;
        goto label_487588;
    }
    ctx->pc = 0x487580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487588u);
        ctx->pc = 0x487584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487580u;
        // 0x487584: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487580u, 0x487588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487588u;
label_487588:
    // 0x487588: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x487588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_48758c:
    // 0x48758c: 0x40f809  jalr        $v0
label_487590:
    if (ctx->pc == 0x487590u) {
        ctx->pc = 0x487590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48758Cu;
        // 0x487590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487594u;
        goto label_487594;
    }
    ctx->pc = 0x48758Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487594u);
        ctx->pc = 0x487590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48758Cu;
        // 0x487590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48758Cu, 0x487594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487594u;
label_487594:
    // 0x487594: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x487594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_487598:
    // 0x487598: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_48759c:
    if (ctx->pc == 0x48759Cu) {
        ctx->pc = 0x48759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487598u;
        // 0x48759c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4875A0u;
        goto label_4875a0;
    }
    ctx->pc = 0x487598u;
    {
        const bool branch_taken_0x487598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487598u;
        // 0x48759c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487598) {
            ctx->pc = 0x4875D0u;
            goto label_4875d0;
        }
    }
    ctx->pc = 0x4875A0u;
label_4875a0:
    // 0x4875a0: 0x820800ff  lb          $t0, 0xFF($s0)
    ctx->pc = 0x4875a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 255)));
label_4875a4:
    // 0x4875a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4875a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4875a8:
    // 0x4875a8: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x4875a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_4875ac:
    // 0x4875ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4875acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4875b0:
    // 0x4875b0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x4875b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4875b4:
    // 0x4875b4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x4875b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4875b8:
    // 0x4875b8: 0xc11eff2  jal         func_47BFC8
label_4875bc:
    if (ctx->pc == 0x4875BCu) {
        ctx->pc = 0x4875BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875B8u;
        // 0x4875bc: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4875C0u;
        goto label_4875c0;
    }
    ctx->pc = 0x4875B8u;
    SET_GPR_U32(ctx, 31, 0x4875C0u);
    ctx->pc = 0x4875BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4875B8u;
    // 0x4875bc: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4875B8u, 0x4875C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4875C0u;
label_4875c0:
    // 0x4875c0: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x4875c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_4875c4:
    // 0x4875c4: 0xc11f024  jal         func_47C090
label_4875c8:
    if (ctx->pc == 0x4875C8u) {
        ctx->pc = 0x4875C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875C4u;
        // 0x4875c8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4875CCu;
        goto label_4875cc;
    }
    ctx->pc = 0x4875C4u;
    SET_GPR_U32(ctx, 31, 0x4875CCu);
    ctx->pc = 0x4875C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4875C4u;
    // 0x4875c8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4875C4u, 0x4875CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4875CCu;
label_4875cc:
    // 0x4875cc: 0xa3a000ff  sb          $zero, 0xFF($sp)
    ctx->pc = 0x4875ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
label_4875d0:
    // 0x4875d0: 0xc121750  jal         func_485D40
label_4875d4:
    if (ctx->pc == 0x4875D4u) {
        ctx->pc = 0x4875D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875D0u;
        // 0x4875d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4875D8u;
        goto label_4875d8;
    }
    ctx->pc = 0x4875D0u;
    SET_GPR_U32(ctx, 31, 0x4875D8u);
    ctx->pc = 0x4875D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4875D0u;
    // 0x4875d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D40u, 0x4875D0u, 0x4875D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4875D8u;
label_4875d8:
    // 0x4875d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4875d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4875dc:
    // 0x4875dc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_4875e0:
    if (ctx->pc == 0x4875E0u) {
        ctx->pc = 0x4875E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875DCu;
        // 0x4875e0: 0xa3a00100  sb          $zero, 0x100($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4875E4u;
        goto label_4875e4;
    }
    ctx->pc = 0x4875DCu;
    {
        const bool branch_taken_0x4875dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4875dc) {
            ctx->pc = 0x4875E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4875DCu;
            // 0x4875e0: 0xa3a00100  sb          $zero, 0x100($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4875F4u;
            goto label_4875f4;
        }
    }
    ctx->pc = 0x4875E4u;
label_4875e4:
    // 0x4875e4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x4875e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_4875e8:
    // 0x4875e8: 0x40f809  jalr        $v0
label_4875ec:
    if (ctx->pc == 0x4875ECu) {
        ctx->pc = 0x4875ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875E8u;
        // 0x4875ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4875F0u;
        goto label_4875f0;
    }
    ctx->pc = 0x4875E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4875F0u);
        ctx->pc = 0x4875ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875E8u;
        // 0x4875ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4875E8u, 0x4875F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4875F0u;
label_4875f0:
    // 0x4875f0: 0xa3a00100  sb          $zero, 0x100($sp)
    ctx->pc = 0x4875f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 0));
label_4875f4:
    // 0x4875f4: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_4875f8:
    if (ctx->pc == 0x4875F8u) {
        ctx->pc = 0x4875F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875F4u;
        // 0x4875f8: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4875FCu;
        goto label_4875fc;
    }
    ctx->pc = 0x4875F4u;
    {
        const bool branch_taken_0x4875f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4875F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4875F4u;
        // 0x4875f8: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4875f4) {
            ctx->pc = 0x487680u;
            goto label_487680;
        }
    }
    ctx->pc = 0x4875FCu;
label_4875fc:
    // 0x4875fc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x4875fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_487600:
    // 0x487600: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_487604:
    if (ctx->pc == 0x487604u) {
        ctx->pc = 0x487604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487600u;
        // 0x487604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487608u;
        goto label_487608;
    }
    ctx->pc = 0x487600u;
    {
        const bool branch_taken_0x487600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487600u;
        // 0x487604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487600) {
            ctx->pc = 0x487680u;
            goto label_487680;
        }
    }
    ctx->pc = 0x487608u;
label_487608:
    // 0x487608: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x487608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_48760c:
    // 0x48760c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487610:
    // 0x487610: 0x40f809  jalr        $v0
label_487614:
    if (ctx->pc == 0x487614u) {
        ctx->pc = 0x487614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487610u;
        // 0x487614: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487618u;
        goto label_487618;
    }
    ctx->pc = 0x487610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487618u);
        ctx->pc = 0x487614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487610u;
        // 0x487614: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487610u, 0x487618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487618u;
label_487618:
    // 0x487618: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x487618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_48761c:
    // 0x48761c: 0x40f809  jalr        $v0
label_487620:
    if (ctx->pc == 0x487620u) {
        ctx->pc = 0x487620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48761Cu;
        // 0x487620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487624u;
        goto label_487624;
    }
    ctx->pc = 0x48761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487624u);
        ctx->pc = 0x487620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48761Cu;
        // 0x487620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48761Cu, 0x487624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487624u;
label_487624:
    // 0x487624: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x487624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_487628:
    // 0x487628: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_48762c:
    if (ctx->pc == 0x48762Cu) {
        ctx->pc = 0x48762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487628u;
        // 0x48762c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487630u;
        goto label_487630;
    }
    ctx->pc = 0x487628u;
    {
        const bool branch_taken_0x487628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487628u;
        // 0x48762c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487628) {
            ctx->pc = 0x487660u;
            goto label_487660;
        }
    }
    ctx->pc = 0x487630u;
label_487630:
    // 0x487630: 0x822800ff  lb          $t0, 0xFF($s1)
    ctx->pc = 0x487630u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 255)));
label_487634:
    // 0x487634: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x487634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_487638:
    // 0x487638: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x487638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_48763c:
    // 0x48763c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48763cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487640:
    // 0x487640: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x487640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_487644:
    // 0x487644: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x487644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_487648:
    // 0x487648: 0xc11eff2  jal         func_47BFC8
label_48764c:
    if (ctx->pc == 0x48764Cu) {
        ctx->pc = 0x48764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487648u;
        // 0x48764c: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487650u;
        goto label_487650;
    }
    ctx->pc = 0x487648u;
    SET_GPR_U32(ctx, 31, 0x487650u);
    ctx->pc = 0x48764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487648u;
    // 0x48764c: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x487648u, 0x487650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487650u;
label_487650:
    // 0x487650: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x487650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_487654:
    // 0x487654: 0xc11f024  jal         func_47C090
label_487658:
    if (ctx->pc == 0x487658u) {
        ctx->pc = 0x487658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487654u;
        // 0x487658: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48765Cu;
        goto label_48765c;
    }
    ctx->pc = 0x487654u;
    SET_GPR_U32(ctx, 31, 0x48765Cu);
    ctx->pc = 0x487658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487654u;
    // 0x487658: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x487654u, 0x48765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48765Cu;
label_48765c:
    // 0x48765c: 0xa3a001ff  sb          $zero, 0x1FF($sp)
    ctx->pc = 0x48765cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 511), (uint8_t)GPR_U32(ctx, 0));
label_487660:
    // 0x487660: 0xc121750  jal         func_485D40
label_487664:
    if (ctx->pc == 0x487664u) {
        ctx->pc = 0x487664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487660u;
        // 0x487664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487668u;
        goto label_487668;
    }
    ctx->pc = 0x487660u;
    SET_GPR_U32(ctx, 31, 0x487668u);
    ctx->pc = 0x487664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487660u;
    // 0x487664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D40u, 0x487660u, 0x487668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487668u;
label_487668:
    // 0x487668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x487668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48766c:
    // 0x48766c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_487670:
    if (ctx->pc == 0x487670u) {
        ctx->pc = 0x487670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48766Cu;
        // 0x487670: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487674u;
        goto label_487674;
    }
    ctx->pc = 0x48766Cu;
    {
        const bool branch_taken_0x48766c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48766c) {
            ctx->pc = 0x487670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48766Cu;
            // 0x487670: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487684u;
            goto label_487684;
        }
    }
    ctx->pc = 0x487674u;
label_487674:
    // 0x487674: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x487674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_487678:
    // 0x487678: 0x40f809  jalr        $v0
label_48767c:
    if (ctx->pc == 0x48767Cu) {
        ctx->pc = 0x48767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487678u;
        // 0x48767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487680u;
        goto label_487680;
    }
    ctx->pc = 0x487678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487680u);
        ctx->pc = 0x48767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487678u;
        // 0x48767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487678u, 0x487680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487680u;
label_487680:
    // 0x487680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x487680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487684:
    // 0x487684: 0xc1214c2  jal         func_485308
label_487688:
    if (ctx->pc == 0x487688u) {
        ctx->pc = 0x487688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487684u;
        // 0x487688: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48768Cu;
        goto label_48768c;
    }
    ctx->pc = 0x487684u;
    SET_GPR_U32(ctx, 31, 0x48768Cu);
    ctx->pc = 0x487688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487684u;
    // 0x487688: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485308u, 0x487684u, 0x48768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48768Cu;
label_48768c:
    // 0x48768c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48768cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487690:
    // 0x487690: 0x122000a5  beqz        $s1, . + 4 + (0xA5 << 2)
label_487694:
    if (ctx->pc == 0x487694u) {
        ctx->pc = 0x487694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487690u;
        // 0x487694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487698u;
        goto label_487698;
    }
    ctx->pc = 0x487690u;
    {
        const bool branch_taken_0x487690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x487694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487690u;
        // 0x487694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487690) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x487698u;
label_487698:
    // 0x487698: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x487698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_48769c:
    // 0x48769c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4876a0:
    if (ctx->pc == 0x4876A0u) {
        ctx->pc = 0x4876A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48769Cu;
        // 0x4876a0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4876A4u;
        goto label_4876a4;
    }
    ctx->pc = 0x48769Cu;
    {
        const bool branch_taken_0x48769c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4876A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48769Cu;
        // 0x4876a0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48769c) {
            ctx->pc = 0x4876B4u;
            goto label_4876b4;
        }
    }
    ctx->pc = 0x4876A4u;
label_4876a4:
    // 0x4876a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4876a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4876a8:
    // 0x4876a8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_4876ac:
    if (ctx->pc == 0x4876ACu) {
        ctx->pc = 0x4876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876A8u;
        // 0x4876ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4876B0u;
        goto label_4876b0;
    }
    ctx->pc = 0x4876A8u;
    {
        const bool branch_taken_0x4876a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4876a8) {
            ctx->pc = 0x4876ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4876A8u;
            // 0x4876ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487708u;
            goto label_487708;
        }
    }
    ctx->pc = 0x4876B0u;
label_4876b0:
    // 0x4876b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4876b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4876b4:
    // 0x4876b4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x4876b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4876b8:
    // 0x4876b8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x4876b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4876bc:
    // 0x4876bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4876bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4876c0:
    // 0x4876c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4876c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4876c4:
    // 0x4876c4: 0xc1217e4  jal         func_485F90
label_4876c8:
    if (ctx->pc == 0x4876C8u) {
        ctx->pc = 0x4876C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876C4u;
        // 0x4876c8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4876CCu;
        goto label_4876cc;
    }
    ctx->pc = 0x4876C4u;
    SET_GPR_U32(ctx, 31, 0x4876CCu);
    ctx->pc = 0x4876C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4876C4u;
    // 0x4876c8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F90u, 0x4876C4u, 0x4876CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4876CCu;
label_4876cc:
    // 0x4876cc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_4876d0:
    if (ctx->pc == 0x4876D0u) {
        ctx->pc = 0x4876D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876CCu;
        // 0x4876d0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4876D4u;
        goto label_4876d4;
    }
    ctx->pc = 0x4876CCu;
    {
        const bool branch_taken_0x4876cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4876cc) {
            ctx->pc = 0x4876D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4876CCu;
            // 0x4876d0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487708u;
            goto label_487708;
        }
    }
    ctx->pc = 0x4876D4u;
label_4876d4:
    // 0x4876d4: 0xc12164a  jal         func_485928
label_4876d8:
    if (ctx->pc == 0x4876D8u) {
        ctx->pc = 0x4876D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876D4u;
        // 0x4876d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4876DCu;
        goto label_4876dc;
    }
    ctx->pc = 0x4876D4u;
    SET_GPR_U32(ctx, 31, 0x4876DCu);
    ctx->pc = 0x4876D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4876D4u;
    // 0x4876d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4876D4u, 0x4876DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4876DCu;
label_4876dc:
    // 0x4876dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4876dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4876e0:
    // 0x4876e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4876e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4876e4:
    // 0x4876e4: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x4876e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
label_4876e8:
    // 0x4876e8: 0xc11eff2  jal         func_47BFC8
label_4876ec:
    if (ctx->pc == 0x4876ECu) {
        ctx->pc = 0x4876ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876E8u;
        // 0x4876ec: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4876F0u;
        goto label_4876f0;
    }
    ctx->pc = 0x4876E8u;
    SET_GPR_U32(ctx, 31, 0x4876F0u);
    ctx->pc = 0x4876ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4876E8u;
    // 0x4876ec: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4876E8u, 0x4876F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4876F0u;
label_4876f0:
    // 0x4876f0: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x4876f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_4876f4:
    // 0x4876f4: 0xc11f024  jal         func_47C090
label_4876f8:
    if (ctx->pc == 0x4876F8u) {
        ctx->pc = 0x4876F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876F4u;
        // 0x4876f8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4876FCu;
        goto label_4876fc;
    }
    ctx->pc = 0x4876F4u;
    SET_GPR_U32(ctx, 31, 0x4876FCu);
    ctx->pc = 0x4876F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4876F4u;
    // 0x4876f8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4876F4u, 0x4876FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4876FCu;
label_4876fc:
    // 0x4876fc: 0x1000008a  b           . + 4 + (0x8A << 2)
label_487700:
    if (ctx->pc == 0x487700u) {
        ctx->pc = 0x487700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876FCu;
        // 0x487700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487704u;
        goto label_487704;
    }
    ctx->pc = 0x4876FCu;
    {
        const bool branch_taken_0x4876fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4876FCu;
        // 0x487700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4876fc) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x487704u;
label_487704:
    // 0x487704: 0x0  nop
    ctx->pc = 0x487704u;
    // NOP
label_487708:
    // 0x487708: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x487708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_48770c:
    // 0x48770c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_487710:
    if (ctx->pc == 0x487710u) {
        ctx->pc = 0x487710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48770Cu;
        // 0x487710: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487714u;
        goto label_487714;
    }
    ctx->pc = 0x48770Cu;
    {
        const bool branch_taken_0x48770c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x487710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48770Cu;
        // 0x487710: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48770c) {
            ctx->pc = 0x487724u;
            goto label_487724;
        }
    }
    ctx->pc = 0x487714u;
label_487714:
    // 0x487714: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x487714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_487718:
    // 0x487718: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x487718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_48771c:
    // 0x48771c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
label_487720:
    if (ctx->pc == 0x487720u) {
        ctx->pc = 0x487720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48771Cu;
        // 0x487720: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487724u;
        goto label_487724;
    }
    ctx->pc = 0x48771Cu;
    {
        const bool branch_taken_0x48771c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x487720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48771Cu;
        // 0x487720: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48771c) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x487724u;
label_487724:
    // 0x487724: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x487724u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_487728:
    // 0x487728: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x487728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_48772c:
    // 0x48772c: 0x52420014  beql        $s2, $v0, . + 4 + (0x14 << 2)
label_487730:
    if (ctx->pc == 0x487730u) {
        ctx->pc = 0x487730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48772Cu;
        // 0x487730: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487734u;
        goto label_487734;
    }
    ctx->pc = 0x48772Cu;
    {
        const bool branch_taken_0x48772c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x48772c) {
            ctx->pc = 0x487730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48772Cu;
            // 0x487730: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487780u;
            goto label_487780;
        }
    }
    ctx->pc = 0x487734u;
label_487734:
    // 0x487734: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x487734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_487738:
    // 0x487738: 0xc121622  jal         func_485888
label_48773c:
    if (ctx->pc == 0x48773Cu) {
        ctx->pc = 0x48773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487738u;
        // 0x48773c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487740u;
        goto label_487740;
    }
    ctx->pc = 0x487738u;
    SET_GPR_U32(ctx, 31, 0x487740u);
    ctx->pc = 0x48773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487738u;
    // 0x48773c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x487738u, 0x487740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487740u;
label_487740:
    // 0x487740: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x487740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487744:
    // 0x487744: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_487748:
    if (ctx->pc == 0x487748u) {
        ctx->pc = 0x487748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487744u;
        // 0x487748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48774Cu;
        goto label_48774c;
    }
    ctx->pc = 0x487744u;
    {
        const bool branch_taken_0x487744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x487748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487744u;
        // 0x487748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487744) {
            ctx->pc = 0x4877B4u;
            goto label_4877b4;
        }
    }
    ctx->pc = 0x48774Cu;
label_48774c:
    // 0x48774c: 0xc121666  jal         func_485998
label_487750:
    if (ctx->pc == 0x487750u) {
        ctx->pc = 0x487750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48774Cu;
        // 0x487750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487754u;
        goto label_487754;
    }
    ctx->pc = 0x48774Cu;
    SET_GPR_U32(ctx, 31, 0x487754u);
    ctx->pc = 0x487750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48774Cu;
    // 0x487750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x48774Cu, 0x487754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487754u;
label_487754:
    // 0x487754: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_487758:
    if (ctx->pc == 0x487758u) {
        ctx->pc = 0x487758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487754u;
        // 0x487758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48775Cu;
        goto label_48775c;
    }
    ctx->pc = 0x487754u;
    {
        const bool branch_taken_0x487754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487754u;
        // 0x487758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487754) {
            ctx->pc = 0x48776Cu;
            goto label_48776c;
        }
    }
    ctx->pc = 0x48775Cu;
label_48775c:
    // 0x48775c: 0xc12164a  jal         func_485928
label_487760:
    if (ctx->pc == 0x487760u) {
        ctx->pc = 0x487760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48775Cu;
        // 0x487760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487764u;
        goto label_487764;
    }
    ctx->pc = 0x48775Cu;
    SET_GPR_U32(ctx, 31, 0x487764u);
    ctx->pc = 0x487760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48775Cu;
    // 0x487760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x48775Cu, 0x487764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487764u;
label_487764:
    // 0x487764: 0x10000013  b           . + 4 + (0x13 << 2)
label_487768:
    if (ctx->pc == 0x487768u) {
        ctx->pc = 0x487768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487764u;
        // 0x487768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48776Cu;
        goto label_48776c;
    }
    ctx->pc = 0x487764u;
    {
        const bool branch_taken_0x487764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487764u;
        // 0x487768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487764) {
            ctx->pc = 0x4877B4u;
            goto label_4877b4;
        }
    }
    ctx->pc = 0x48776Cu;
label_48776c:
    // 0x48776c: 0xc1216be  jal         func_485AF8
label_487770:
    if (ctx->pc == 0x487770u) {
        ctx->pc = 0x487770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48776Cu;
        // 0x487770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487774u;
        goto label_487774;
    }
    ctx->pc = 0x48776Cu;
    SET_GPR_U32(ctx, 31, 0x487774u);
    ctx->pc = 0x487770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48776Cu;
    // 0x487770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AF8u, 0x48776Cu, 0x487774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487774u;
label_487774:
    // 0x487774: 0xc12164a  jal         func_485928
label_487778:
    if (ctx->pc == 0x487778u) {
        ctx->pc = 0x487778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487774u;
        // 0x487778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48777Cu;
        goto label_48777c;
    }
    ctx->pc = 0x487774u;
    SET_GPR_U32(ctx, 31, 0x48777Cu);
    ctx->pc = 0x487778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487774u;
    // 0x487778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x487774u, 0x48777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48777Cu;
label_48777c:
    // 0x48777c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x48777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_487780:
    // 0x487780: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x487780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_487784:
    // 0x487784: 0xc121622  jal         func_485888
label_487788:
    if (ctx->pc == 0x487788u) {
        ctx->pc = 0x487788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487784u;
        // 0x487788: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48778Cu;
        goto label_48778c;
    }
    ctx->pc = 0x487784u;
    SET_GPR_U32(ctx, 31, 0x48778Cu);
    ctx->pc = 0x487788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487784u;
    // 0x487788: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x487784u, 0x48778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48778Cu;
label_48778c:
    // 0x48778c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48778cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487790:
    // 0x487790: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_487794:
    if (ctx->pc == 0x487794u) {
        ctx->pc = 0x487794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487790u;
        // 0x487794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487798u;
        goto label_487798;
    }
    ctx->pc = 0x487790u;
    {
        const bool branch_taken_0x487790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x487794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487790u;
        // 0x487794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487790) {
            ctx->pc = 0x4877B4u;
            goto label_4877b4;
        }
    }
    ctx->pc = 0x487798u;
label_487798:
    // 0x487798: 0xc121666  jal         func_485998
label_48779c:
    if (ctx->pc == 0x48779Cu) {
        ctx->pc = 0x48779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487798u;
        // 0x48779c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877A0u;
        goto label_4877a0;
    }
    ctx->pc = 0x487798u;
    SET_GPR_U32(ctx, 31, 0x4877A0u);
    ctx->pc = 0x48779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487798u;
    // 0x48779c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x487798u, 0x4877A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877A0u;
label_4877a0:
    // 0x4877a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4877a4:
    if (ctx->pc == 0x4877A4u) {
        ctx->pc = 0x4877A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877A0u;
        // 0x4877a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877A8u;
        goto label_4877a8;
    }
    ctx->pc = 0x4877A0u;
    {
        const bool branch_taken_0x4877a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4877A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877A0u;
        // 0x4877a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4877a0) {
            ctx->pc = 0x4877C4u;
            goto label_4877c4;
        }
    }
    ctx->pc = 0x4877A8u;
label_4877a8:
    // 0x4877a8: 0xc12164a  jal         func_485928
label_4877ac:
    if (ctx->pc == 0x4877ACu) {
        ctx->pc = 0x4877ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877A8u;
        // 0x4877ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877B0u;
        goto label_4877b0;
    }
    ctx->pc = 0x4877A8u;
    SET_GPR_U32(ctx, 31, 0x4877B0u);
    ctx->pc = 0x4877ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4877A8u;
    // 0x4877ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4877A8u, 0x4877B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877B0u;
label_4877b0:
    // 0x4877b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4877b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4877b4:
    // 0x4877b4: 0xc12164a  jal         func_485928
label_4877b8:
    if (ctx->pc == 0x4877B8u) {
        ctx->pc = 0x4877BCu;
        goto label_4877bc;
    }
    ctx->pc = 0x4877B4u;
    SET_GPR_U32(ctx, 31, 0x4877BCu);
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4877B4u, 0x4877BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877BCu;
label_4877bc:
    // 0x4877bc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_4877c0:
    if (ctx->pc == 0x4877C0u) {
        ctx->pc = 0x4877C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877BCu;
        // 0x4877c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877C4u;
        goto label_4877c4;
    }
    ctx->pc = 0x4877BCu;
    {
        const bool branch_taken_0x4877bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4877C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877BCu;
        // 0x4877c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4877bc) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x4877C4u;
label_4877c4:
    // 0x4877c4: 0xc121acc  jal         func_486B30
label_4877c8:
    if (ctx->pc == 0x4877C8u) {
        ctx->pc = 0x4877C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877C4u;
        // 0x4877c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877CCu;
        goto label_4877cc;
    }
    ctx->pc = 0x4877C4u;
    SET_GPR_U32(ctx, 31, 0x4877CCu);
    ctx->pc = 0x4877C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4877C4u;
    // 0x4877c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486B30u, 0x4877C4u, 0x4877CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877CCu;
label_4877cc:
    // 0x4877cc: 0xc12164a  jal         func_485928
label_4877d0:
    if (ctx->pc == 0x4877D0u) {
        ctx->pc = 0x4877D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877CCu;
        // 0x4877d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877D4u;
        goto label_4877d4;
    }
    ctx->pc = 0x4877CCu;
    SET_GPR_U32(ctx, 31, 0x4877D4u);
    ctx->pc = 0x4877D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4877CCu;
    // 0x4877d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x4877CCu, 0x4877D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877D4u;
label_4877d4:
    // 0x4877d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4877d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4877d8:
    // 0x4877d8: 0x16420029  bne         $s2, $v0, . + 4 + (0x29 << 2)
label_4877dc:
    if (ctx->pc == 0x4877DCu) {
        ctx->pc = 0x4877DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877D8u;
        // 0x4877dc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877E0u;
        goto label_4877e0;
    }
    ctx->pc = 0x4877D8u;
    {
        const bool branch_taken_0x4877d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4877DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877D8u;
        // 0x4877dc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4877d8) {
            ctx->pc = 0x487880u;
            goto label_487880;
        }
    }
    ctx->pc = 0x4877E0u;
label_4877e0:
    // 0x4877e0: 0xc122c80  jal         func_48B200
label_4877e4:
    if (ctx->pc == 0x4877E4u) {
        ctx->pc = 0x4877E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877E0u;
        // 0x4877e4: 0x27a40610  addiu       $a0, $sp, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877E8u;
        goto label_4877e8;
    }
    ctx->pc = 0x4877E0u;
    SET_GPR_U32(ctx, 31, 0x4877E8u);
    ctx->pc = 0x4877E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4877E0u;
    // 0x4877e4: 0x27a40610  addiu       $a0, $sp, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B200u, 0x4877E0u, 0x4877E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4877E8u;
label_4877e8:
    // 0x4877e8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_4877ec:
    if (ctx->pc == 0x4877ECu) {
        ctx->pc = 0x4877ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877E8u;
        // 0x4877ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4877F0u;
        goto label_4877f0;
    }
    ctx->pc = 0x4877E8u;
    {
        const bool branch_taken_0x4877e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4877ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877E8u;
        // 0x4877ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4877e8) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x4877F0u;
label_4877f0:
    // 0x4877f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4877f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4877f4:
    // 0x4877f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4877f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4877f8:
    // 0x4877f8: 0x27a40610  addiu       $a0, $sp, 0x610
    ctx->pc = 0x4877f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_4877fc:
    // 0x4877fc: 0xc122612  jal         func_489848
label_487800:
    if (ctx->pc == 0x487800u) {
        ctx->pc = 0x487800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4877FCu;
        // 0x487800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487804u;
        goto label_487804;
    }
    ctx->pc = 0x4877FCu;
    SET_GPR_U32(ctx, 31, 0x487804u);
    ctx->pc = 0x487800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4877FCu;
    // 0x487800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489848u, 0x4877FCu, 0x487804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487804u;
label_487804:
    // 0x487804: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x487804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_487808:
    // 0x487808: 0x27a60610  addiu       $a2, $sp, 0x610
    ctx->pc = 0x487808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_48780c:
    // 0x48780c: 0xc1229ba  jal         func_48A6E8
label_487810:
    if (ctx->pc == 0x487810u) {
        ctx->pc = 0x487810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48780Cu;
        // 0x487810: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487814u;
        goto label_487814;
    }
    ctx->pc = 0x48780Cu;
    SET_GPR_U32(ctx, 31, 0x487814u);
    ctx->pc = 0x487810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48780Cu;
    // 0x487810: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A6E8u, 0x48780Cu, 0x487814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487814u;
label_487814:
    // 0x487814: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x487814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_487818:
    // 0x487818: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x487818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48781c:
    // 0x48781c: 0xc121622  jal         func_485888
label_487820:
    if (ctx->pc == 0x487820u) {
        ctx->pc = 0x487820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48781Cu;
        // 0x487820: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487824u;
        goto label_487824;
    }
    ctx->pc = 0x48781Cu;
    SET_GPR_U32(ctx, 31, 0x487824u);
    ctx->pc = 0x487820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48781Cu;
    // 0x487820: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x48781Cu, 0x487824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487824u;
label_487824:
    // 0x487824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x487824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487828:
    // 0x487828: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
label_48782c:
    if (ctx->pc == 0x48782Cu) {
        ctx->pc = 0x48782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487828u;
        // 0x48782c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487830u;
        goto label_487830;
    }
    ctx->pc = 0x487828u;
    {
        const bool branch_taken_0x487828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487828u;
        // 0x48782c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487828) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x487830u;
label_487830:
    // 0x487830: 0xc121666  jal         func_485998
label_487834:
    if (ctx->pc == 0x487834u) {
        ctx->pc = 0x487834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487830u;
        // 0x487834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487838u;
        goto label_487838;
    }
    ctx->pc = 0x487830u;
    SET_GPR_U32(ctx, 31, 0x487838u);
    ctx->pc = 0x487834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487830u;
    // 0x487834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x487830u, 0x487838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487838u;
label_487838:
    // 0x487838: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x487838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_48783c:
    // 0x48783c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x48783cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487840:
    // 0x487840: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x487840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_487844:
    // 0x487844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x487844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487848:
    // 0x487848: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x487848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48784c:
    // 0x48784c: 0xc122ae8  jal         func_48ABA0
label_487850:
    if (ctx->pc == 0x487850u) {
        ctx->pc = 0x487850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48784Cu;
        // 0x487850: 0x27a80610  addiu       $t0, $sp, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487854u;
        goto label_487854;
    }
    ctx->pc = 0x48784Cu;
    SET_GPR_U32(ctx, 31, 0x487854u);
    ctx->pc = 0x487850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48784Cu;
    // 0x487850: 0x27a80610  addiu       $t0, $sp, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ABA0u, 0x48784Cu, 0x487854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487854u;
label_487854:
    // 0x487854: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x487854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_487858:
    // 0x487858: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x487858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_48785c:
    // 0x48785c: 0xc10c190  jal         func_430640
label_487860:
    if (ctx->pc == 0x487860u) {
        ctx->pc = 0x487860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48785Cu;
        // 0x487860: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487864u;
        goto label_487864;
    }
    ctx->pc = 0x48785Cu;
    SET_GPR_U32(ctx, 31, 0x487864u);
    ctx->pc = 0x487860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48785Cu;
    // 0x487860: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x48785Cu, 0x487864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487864u;
label_487864:
    // 0x487864: 0xc12164a  jal         func_485928
label_487868:
    if (ctx->pc == 0x487868u) {
        ctx->pc = 0x487868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487864u;
        // 0x487868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48786Cu;
        goto label_48786c;
    }
    ctx->pc = 0x487864u;
    SET_GPR_U32(ctx, 31, 0x48786Cu);
    ctx->pc = 0x487868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487864u;
    // 0x487868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x487864u, 0x48786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48786Cu;
label_48786c:
    // 0x48786c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48786cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487870:
    // 0x487870: 0xc122cc2  jal         func_48B308
label_487874:
    if (ctx->pc == 0x487874u) {
        ctx->pc = 0x487874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487870u;
        // 0x487874: 0x27a40610  addiu       $a0, $sp, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487878u;
        goto label_487878;
    }
    ctx->pc = 0x487870u;
    SET_GPR_U32(ctx, 31, 0x487878u);
    ctx->pc = 0x487874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487870u;
    // 0x487874: 0x27a40610  addiu       $a0, $sp, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B308u, 0x487870u, 0x487878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487878u;
label_487878:
    // 0x487878: 0x1000002b  b           . + 4 + (0x2B << 2)
label_48787c:
    if (ctx->pc == 0x48787Cu) {
        ctx->pc = 0x48787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487878u;
        // 0x48787c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487880u;
        goto label_487880;
    }
    ctx->pc = 0x487878u;
    {
        const bool branch_taken_0x487878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487878u;
        // 0x48787c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487878) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x487880u;
label_487880:
    // 0x487880: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x487880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_487884:
    // 0x487884: 0x16420028  bne         $s2, $v0, . + 4 + (0x28 << 2)
label_487888:
    if (ctx->pc == 0x487888u) {
        ctx->pc = 0x487888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487884u;
        // 0x487888: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48788Cu;
        goto label_48788c;
    }
    ctx->pc = 0x487884u;
    {
        const bool branch_taken_0x487884 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x487888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487884u;
        // 0x487888: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487884) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x48788Cu;
label_48788c:
    // 0x48788c: 0xc122c80  jal         func_48B200
label_487890:
    if (ctx->pc == 0x487890u) {
        ctx->pc = 0x487890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48788Cu;
        // 0x487890: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487894u;
        goto label_487894;
    }
    ctx->pc = 0x48788Cu;
    SET_GPR_U32(ctx, 31, 0x487894u);
    ctx->pc = 0x487890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48788Cu;
    // 0x487890: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B200u, 0x48788Cu, 0x487894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487894u;
label_487894:
    // 0x487894: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_487898:
    if (ctx->pc == 0x487898u) {
        ctx->pc = 0x487898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487894u;
        // 0x487898: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48789Cu;
        goto label_48789c;
    }
    ctx->pc = 0x487894u;
    {
        const bool branch_taken_0x487894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487894u;
        // 0x487898: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487894) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x48789Cu;
label_48789c:
    // 0x48789c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x48789cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4878a0:
    // 0x4878a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4878a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4878a4:
    // 0x4878a4: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x4878a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_4878a8:
    // 0x4878a8: 0xc122612  jal         func_489848
label_4878ac:
    if (ctx->pc == 0x4878ACu) {
        ctx->pc = 0x4878ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4878A8u;
        // 0x4878ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4878B0u;
        goto label_4878b0;
    }
    ctx->pc = 0x4878A8u;
    SET_GPR_U32(ctx, 31, 0x4878B0u);
    ctx->pc = 0x4878ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4878A8u;
    // 0x4878ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489848u, 0x4878A8u, 0x4878B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4878B0u;
label_4878b0:
    // 0x4878b0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x4878b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_4878b4:
    // 0x4878b4: 0x27a60600  addiu       $a2, $sp, 0x600
    ctx->pc = 0x4878b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_4878b8:
    // 0x4878b8: 0xc1229ba  jal         func_48A6E8
label_4878bc:
    if (ctx->pc == 0x4878BCu) {
        ctx->pc = 0x4878BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4878B8u;
        // 0x4878bc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4878C0u;
        goto label_4878c0;
    }
    ctx->pc = 0x4878B8u;
    SET_GPR_U32(ctx, 31, 0x4878C0u);
    ctx->pc = 0x4878BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4878B8u;
    // 0x4878bc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A6E8u, 0x4878B8u, 0x4878C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4878C0u;
label_4878c0:
    // 0x4878c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4878c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4878c4:
    // 0x4878c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4878c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4878c8:
    // 0x4878c8: 0xc121622  jal         func_485888
label_4878cc:
    if (ctx->pc == 0x4878CCu) {
        ctx->pc = 0x4878CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4878C8u;
        // 0x4878cc: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4878D0u;
        goto label_4878d0;
    }
    ctx->pc = 0x4878C8u;
    SET_GPR_U32(ctx, 31, 0x4878D0u);
    ctx->pc = 0x4878CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4878C8u;
    // 0x4878cc: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x4878C8u, 0x4878D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4878D0u;
label_4878d0:
    // 0x4878d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4878d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4878d4:
    // 0x4878d4: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_4878d8:
    if (ctx->pc == 0x4878D8u) {
        ctx->pc = 0x4878D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4878D4u;
        // 0x4878d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4878DCu;
        goto label_4878dc;
    }
    ctx->pc = 0x4878D4u;
    {
        const bool branch_taken_0x4878d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4878D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4878D4u;
        // 0x4878d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4878d4) {
            ctx->pc = 0x487928u;
            goto label_487928;
        }
    }
    ctx->pc = 0x4878DCu;
label_4878dc:
    // 0x4878dc: 0xc121666  jal         func_485998
label_4878e0:
    if (ctx->pc == 0x4878E0u) {
        ctx->pc = 0x4878E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4878DCu;
        // 0x4878e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4878E4u;
        goto label_4878e4;
    }
    ctx->pc = 0x4878DCu;
    SET_GPR_U32(ctx, 31, 0x4878E4u);
    ctx->pc = 0x4878E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4878DCu;
    // 0x4878e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x4878DCu, 0x4878E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4878E4u;
label_4878e4:
    // 0x4878e4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4878e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4878e8:
    // 0x4878e8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4878e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4878ec:
    // 0x4878ec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4878ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4878f0:
    // 0x4878f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4878f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4878f4:
    // 0x4878f4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4878f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4878f8:
    // 0x4878f8: 0xc122ae8  jal         func_48ABA0
label_4878fc:
    if (ctx->pc == 0x4878FCu) {
        ctx->pc = 0x4878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4878F8u;
        // 0x4878fc: 0x27a80600  addiu       $t0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487900u;
        goto label_487900;
    }
    ctx->pc = 0x4878F8u;
    SET_GPR_U32(ctx, 31, 0x487900u);
    ctx->pc = 0x4878FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4878F8u;
    // 0x4878fc: 0x27a80600  addiu       $t0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ABA0u, 0x4878F8u, 0x487900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487900u;
label_487900:
    // 0x487900: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x487900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_487904:
    // 0x487904: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x487904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_487908:
    // 0x487908: 0xc10c190  jal         func_430640
label_48790c:
    if (ctx->pc == 0x48790Cu) {
        ctx->pc = 0x48790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487908u;
        // 0x48790c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487910u;
        goto label_487910;
    }
    ctx->pc = 0x487908u;
    SET_GPR_U32(ctx, 31, 0x487910u);
    ctx->pc = 0x48790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487908u;
    // 0x48790c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x487908u, 0x487910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487910u;
label_487910:
    // 0x487910: 0xc12164a  jal         func_485928
label_487914:
    if (ctx->pc == 0x487914u) {
        ctx->pc = 0x487914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487910u;
        // 0x487914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487918u;
        goto label_487918;
    }
    ctx->pc = 0x487910u;
    SET_GPR_U32(ctx, 31, 0x487918u);
    ctx->pc = 0x487914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487910u;
    // 0x487914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x487910u, 0x487918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487918u;
label_487918:
    // 0x487918: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x487918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48791c:
    // 0x48791c: 0xc122cc2  jal         func_48B308
label_487920:
    if (ctx->pc == 0x487920u) {
        ctx->pc = 0x487920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48791Cu;
        // 0x487920: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487924u;
        goto label_487924;
    }
    ctx->pc = 0x48791Cu;
    SET_GPR_U32(ctx, 31, 0x487924u);
    ctx->pc = 0x487920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48791Cu;
    // 0x487920: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B308u, 0x48791Cu, 0x487924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487924u;
label_487924:
    // 0x487924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x487924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_487928:
    // 0x487928: 0x7bb046a0  lq          $s0, 0x46A0($sp)
    ctx->pc = 0x487928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 18080)));
label_48792c:
    // 0x48792c: 0x7bb14690  lq          $s1, 0x4690($sp)
    ctx->pc = 0x48792cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 18064)));
label_487930:
    // 0x487930: 0x7bb24680  lq          $s2, 0x4680($sp)
    ctx->pc = 0x487930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 18048)));
label_487934:
    // 0x487934: 0x7bb34670  lq          $s3, 0x4670($sp)
    ctx->pc = 0x487934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 18032)));
label_487938:
    // 0x487938: 0x7bb44660  lq          $s4, 0x4660($sp)
    ctx->pc = 0x487938u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 18016)));
label_48793c:
    // 0x48793c: 0x7bb54650  lq          $s5, 0x4650($sp)
    ctx->pc = 0x48793cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 18000)));
label_487940:
    // 0x487940: 0x7bb64640  lq          $s6, 0x4640($sp)
    ctx->pc = 0x487940u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 17984)));
label_487944:
    // 0x487944: 0x7bb74630  lq          $s7, 0x4630($sp)
    ctx->pc = 0x487944u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 17968)));
label_487948:
    // 0x487948: 0xdfbf4620  ld          $ra, 0x4620($sp)
    ctx->pc = 0x487948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 17952)));
label_48794c:
    // 0x48794c: 0x3e00008  jr          $ra
label_487950:
    if (ctx->pc == 0x487950u) {
        ctx->pc = 0x487950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48794Cu;
        // 0x487950: 0x27bd46b0  addiu       $sp, $sp, 0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487954u;
        goto label_487954;
    }
    ctx->pc = 0x48794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48794Cu;
        // 0x487950: 0x27bd46b0  addiu       $sp, $sp, 0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487954u;
label_487954:
    // 0x487954: 0x0  nop
    ctx->pc = 0x487954u;
    // NOP
    ctx->pc = 0x487958u;
}
