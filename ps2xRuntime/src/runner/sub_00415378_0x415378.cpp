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

// Function: sub_00415378
// Address: 0x415378 - 0x415690
void sub_00415378_0x415378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415378_0x415378");
#endif

    switch (ctx->pc) {
        case 0x415378u: goto label_415378;
        case 0x41537cu: goto label_41537c;
        case 0x415380u: goto label_415380;
        case 0x415384u: goto label_415384;
        case 0x415388u: goto label_415388;
        case 0x41538cu: goto label_41538c;
        case 0x415390u: goto label_415390;
        case 0x415394u: goto label_415394;
        case 0x415398u: goto label_415398;
        case 0x41539cu: goto label_41539c;
        case 0x4153a0u: goto label_4153a0;
        case 0x4153a4u: goto label_4153a4;
        case 0x4153a8u: goto label_4153a8;
        case 0x4153acu: goto label_4153ac;
        case 0x4153b0u: goto label_4153b0;
        case 0x4153b4u: goto label_4153b4;
        case 0x4153b8u: goto label_4153b8;
        case 0x4153bcu: goto label_4153bc;
        case 0x4153c0u: goto label_4153c0;
        case 0x4153c4u: goto label_4153c4;
        case 0x4153c8u: goto label_4153c8;
        case 0x4153ccu: goto label_4153cc;
        case 0x4153d0u: goto label_4153d0;
        case 0x4153d4u: goto label_4153d4;
        case 0x4153d8u: goto label_4153d8;
        case 0x4153dcu: goto label_4153dc;
        case 0x4153e0u: goto label_4153e0;
        case 0x4153e4u: goto label_4153e4;
        case 0x4153e8u: goto label_4153e8;
        case 0x4153ecu: goto label_4153ec;
        case 0x4153f0u: goto label_4153f0;
        case 0x4153f4u: goto label_4153f4;
        case 0x4153f8u: goto label_4153f8;
        case 0x4153fcu: goto label_4153fc;
        case 0x415400u: goto label_415400;
        case 0x415404u: goto label_415404;
        case 0x415408u: goto label_415408;
        case 0x41540cu: goto label_41540c;
        case 0x415410u: goto label_415410;
        case 0x415414u: goto label_415414;
        case 0x415418u: goto label_415418;
        case 0x41541cu: goto label_41541c;
        case 0x415420u: goto label_415420;
        case 0x415424u: goto label_415424;
        case 0x415428u: goto label_415428;
        case 0x41542cu: goto label_41542c;
        case 0x415430u: goto label_415430;
        case 0x415434u: goto label_415434;
        case 0x415438u: goto label_415438;
        case 0x41543cu: goto label_41543c;
        case 0x415440u: goto label_415440;
        case 0x415444u: goto label_415444;
        case 0x415448u: goto label_415448;
        case 0x41544cu: goto label_41544c;
        case 0x415450u: goto label_415450;
        case 0x415454u: goto label_415454;
        case 0x415458u: goto label_415458;
        case 0x41545cu: goto label_41545c;
        case 0x415460u: goto label_415460;
        case 0x415464u: goto label_415464;
        case 0x415468u: goto label_415468;
        case 0x41546cu: goto label_41546c;
        case 0x415470u: goto label_415470;
        case 0x415474u: goto label_415474;
        case 0x415478u: goto label_415478;
        case 0x41547cu: goto label_41547c;
        case 0x415480u: goto label_415480;
        case 0x415484u: goto label_415484;
        case 0x415488u: goto label_415488;
        case 0x41548cu: goto label_41548c;
        case 0x415490u: goto label_415490;
        case 0x415494u: goto label_415494;
        case 0x415498u: goto label_415498;
        case 0x41549cu: goto label_41549c;
        case 0x4154a0u: goto label_4154a0;
        case 0x4154a4u: goto label_4154a4;
        case 0x4154a8u: goto label_4154a8;
        case 0x4154acu: goto label_4154ac;
        case 0x4154b0u: goto label_4154b0;
        case 0x4154b4u: goto label_4154b4;
        case 0x4154b8u: goto label_4154b8;
        case 0x4154bcu: goto label_4154bc;
        case 0x4154c0u: goto label_4154c0;
        case 0x4154c4u: goto label_4154c4;
        case 0x4154c8u: goto label_4154c8;
        case 0x4154ccu: goto label_4154cc;
        case 0x4154d0u: goto label_4154d0;
        case 0x4154d4u: goto label_4154d4;
        case 0x4154d8u: goto label_4154d8;
        case 0x4154dcu: goto label_4154dc;
        case 0x4154e0u: goto label_4154e0;
        case 0x4154e4u: goto label_4154e4;
        case 0x4154e8u: goto label_4154e8;
        case 0x4154ecu: goto label_4154ec;
        case 0x4154f0u: goto label_4154f0;
        case 0x4154f4u: goto label_4154f4;
        case 0x4154f8u: goto label_4154f8;
        case 0x4154fcu: goto label_4154fc;
        case 0x415500u: goto label_415500;
        case 0x415504u: goto label_415504;
        case 0x415508u: goto label_415508;
        case 0x41550cu: goto label_41550c;
        case 0x415510u: goto label_415510;
        case 0x415514u: goto label_415514;
        case 0x415518u: goto label_415518;
        case 0x41551cu: goto label_41551c;
        case 0x415520u: goto label_415520;
        case 0x415524u: goto label_415524;
        case 0x415528u: goto label_415528;
        case 0x41552cu: goto label_41552c;
        case 0x415530u: goto label_415530;
        case 0x415534u: goto label_415534;
        case 0x415538u: goto label_415538;
        case 0x41553cu: goto label_41553c;
        case 0x415540u: goto label_415540;
        case 0x415544u: goto label_415544;
        case 0x415548u: goto label_415548;
        case 0x41554cu: goto label_41554c;
        case 0x415550u: goto label_415550;
        case 0x415554u: goto label_415554;
        case 0x415558u: goto label_415558;
        case 0x41555cu: goto label_41555c;
        case 0x415560u: goto label_415560;
        case 0x415564u: goto label_415564;
        case 0x415568u: goto label_415568;
        case 0x41556cu: goto label_41556c;
        case 0x415570u: goto label_415570;
        case 0x415574u: goto label_415574;
        case 0x415578u: goto label_415578;
        case 0x41557cu: goto label_41557c;
        case 0x415580u: goto label_415580;
        case 0x415584u: goto label_415584;
        case 0x415588u: goto label_415588;
        case 0x41558cu: goto label_41558c;
        case 0x415590u: goto label_415590;
        case 0x415594u: goto label_415594;
        case 0x415598u: goto label_415598;
        case 0x41559cu: goto label_41559c;
        case 0x4155a0u: goto label_4155a0;
        case 0x4155a4u: goto label_4155a4;
        case 0x4155a8u: goto label_4155a8;
        case 0x4155acu: goto label_4155ac;
        case 0x4155b0u: goto label_4155b0;
        case 0x4155b4u: goto label_4155b4;
        case 0x4155b8u: goto label_4155b8;
        case 0x4155bcu: goto label_4155bc;
        case 0x4155c0u: goto label_4155c0;
        case 0x4155c4u: goto label_4155c4;
        case 0x4155c8u: goto label_4155c8;
        case 0x4155ccu: goto label_4155cc;
        case 0x4155d0u: goto label_4155d0;
        case 0x4155d4u: goto label_4155d4;
        case 0x4155d8u: goto label_4155d8;
        case 0x4155dcu: goto label_4155dc;
        case 0x4155e0u: goto label_4155e0;
        case 0x4155e4u: goto label_4155e4;
        case 0x4155e8u: goto label_4155e8;
        case 0x4155ecu: goto label_4155ec;
        case 0x4155f0u: goto label_4155f0;
        case 0x4155f4u: goto label_4155f4;
        case 0x4155f8u: goto label_4155f8;
        case 0x4155fcu: goto label_4155fc;
        case 0x415600u: goto label_415600;
        case 0x415604u: goto label_415604;
        case 0x415608u: goto label_415608;
        case 0x41560cu: goto label_41560c;
        case 0x415610u: goto label_415610;
        case 0x415614u: goto label_415614;
        case 0x415618u: goto label_415618;
        case 0x41561cu: goto label_41561c;
        case 0x415620u: goto label_415620;
        case 0x415624u: goto label_415624;
        case 0x415628u: goto label_415628;
        case 0x41562cu: goto label_41562c;
        case 0x415630u: goto label_415630;
        case 0x415634u: goto label_415634;
        case 0x415638u: goto label_415638;
        case 0x41563cu: goto label_41563c;
        case 0x415640u: goto label_415640;
        case 0x415644u: goto label_415644;
        case 0x415648u: goto label_415648;
        case 0x41564cu: goto label_41564c;
        case 0x415650u: goto label_415650;
        case 0x415654u: goto label_415654;
        case 0x415658u: goto label_415658;
        case 0x41565cu: goto label_41565c;
        case 0x415660u: goto label_415660;
        case 0x415664u: goto label_415664;
        case 0x415668u: goto label_415668;
        case 0x41566cu: goto label_41566c;
        case 0x415670u: goto label_415670;
        case 0x415674u: goto label_415674;
        case 0x415678u: goto label_415678;
        case 0x41567cu: goto label_41567c;
        case 0x415680u: goto label_415680;
        case 0x415684u: goto label_415684;
        case 0x415688u: goto label_415688;
        case 0x41568cu: goto label_41568c;
        default: break;
    }

    ctx->pc = 0x415378u;

label_415378:
    // 0x415378: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x415378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_41537c:
    // 0x41537c: 0x7fb102a0  sq          $s1, 0x2A0($sp)
    ctx->pc = 0x41537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 17));
label_415380:
    // 0x415380: 0x7fb002b0  sq          $s0, 0x2B0($sp)
    ctx->pc = 0x415380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 16));
label_415384:
    // 0x415384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415388:
    // 0x415388: 0x7fb20290  sq          $s2, 0x290($sp)
    ctx->pc = 0x415388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 18));
label_41538c:
    // 0x41538c: 0x7fb30280  sq          $s3, 0x280($sp)
    ctx->pc = 0x41538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 19));
label_415390:
    // 0x415390: 0x7fb40270  sq          $s4, 0x270($sp)
    ctx->pc = 0x415390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 20));
label_415394:
    // 0x415394: 0x7fb50260  sq          $s5, 0x260($sp)
    ctx->pc = 0x415394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 21));
label_415398:
    // 0x415398: 0x7fb60250  sq          $s6, 0x250($sp)
    ctx->pc = 0x415398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 22));
label_41539c:
    // 0x41539c: 0x7fb70240  sq          $s7, 0x240($sp)
    ctx->pc = 0x41539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 23));
label_4153a0:
    // 0x4153a0: 0x7fbe0230  sq          $fp, 0x230($sp)
    ctx->pc = 0x4153a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 30));
label_4153a4:
    // 0x4153a4: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x4153a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
label_4153a8:
    // 0x4153a8: 0x92220068  lbu         $v0, 0x68($s1)
    ctx->pc = 0x4153a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_4153ac:
    // 0x4153ac: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_4153b0:
    if (ctx->pc == 0x4153B0u) {
        ctx->pc = 0x4153B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153ACu;
        // 0x4153b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4153B4u;
        goto label_4153b4;
    }
    ctx->pc = 0x4153ACu;
    {
        const bool branch_taken_0x4153ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4153B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153ACu;
        // 0x4153b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4153ac) {
            ctx->pc = 0x41565Cu;
            goto label_41565c;
        }
    }
    ctx->pc = 0x4153B4u;
label_4153b4:
    // 0x4153b4: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x4153b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_4153b8:
    // 0x4153b8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x4153b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_4153bc:
    // 0x4153bc: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x4153bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4153c0:
    // 0x4153c0: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x4153c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4153c4:
    // 0x4153c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4153c8:
    if (ctx->pc == 0x4153C8u) {
        ctx->pc = 0x4153C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153C4u;
        // 0x4153c8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4153CCu;
        goto label_4153cc;
    }
    ctx->pc = 0x4153C4u;
    {
        const bool branch_taken_0x4153c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4153C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153C4u;
        // 0x4153c8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4153c4) {
            ctx->pc = 0x415400u;
            goto label_415400;
        }
    }
    ctx->pc = 0x4153CCu;
label_4153cc:
    // 0x4153cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4153ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4153d0:
    // 0x4153d0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x4153d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_4153d4:
    // 0x4153d4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x4153d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4153d8:
    // 0x4153d8: 0x40f809  jalr        $v0
label_4153dc:
    if (ctx->pc == 0x4153DCu) {
        ctx->pc = 0x4153DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153D8u;
        // 0x4153dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4153E0u;
        goto label_4153e0;
    }
    ctx->pc = 0x4153D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4153E0u);
        ctx->pc = 0x4153DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153D8u;
        // 0x4153dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4153D8u, 0x4153E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4153E0u;
label_4153e0:
    // 0x4153e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4153e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4153e4:
    // 0x4153e4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x4153e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_4153e8:
    // 0x4153e8: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x4153e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_4153ec:
    // 0x4153ec: 0xa0f809  jalr        $a1
label_4153f0:
    if (ctx->pc == 0x4153F0u) {
        ctx->pc = 0x4153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153ECu;
        // 0x4153f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4153F4u;
        goto label_4153f4;
    }
    ctx->pc = 0x4153ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4153F4u);
        ctx->pc = 0x4153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153ECu;
        // 0x4153f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4153ECu, 0x4153F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4153F4u;
label_4153f4:
    // 0x4153f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4153f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4153f8:
    // 0x4153f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_4153fc:
    if (ctx->pc == 0x4153FCu) {
        ctx->pc = 0x4153FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153F8u;
        // 0x4153fc: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415400u;
        goto label_415400;
    }
    ctx->pc = 0x4153F8u;
    {
        const bool branch_taken_0x4153f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4153FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153F8u;
        // 0x4153fc: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4153f8) {
            ctx->pc = 0x415404u;
            goto label_415404;
        }
    }
    ctx->pc = 0x415400u;
label_415400:
    // 0x415400: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x415400u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415404:
    // 0x415404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x415404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415408:
    // 0x415408: 0xc104a44  jal         func_412910
label_41540c:
    if (ctx->pc == 0x41540Cu) {
        ctx->pc = 0x41540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415408u;
        // 0x41540c: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415410u;
        goto label_415410;
    }
    ctx->pc = 0x415408u;
    SET_GPR_U32(ctx, 31, 0x415410u);
    ctx->pc = 0x41540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415408u;
    // 0x41540c: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x415408u, 0x415410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415410u;
label_415410:
    // 0x415410: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x415410u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415414:
    // 0x415414: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x415414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_415418:
    // 0x415418: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x415418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41541c:
    // 0x41541c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41541cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_415420:
    // 0x415420: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x415420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_415424:
    // 0x415424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x415424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415428:
    // 0x415428: 0xc089d2a  jal         func_2274A8
label_41542c:
    if (ctx->pc == 0x41542Cu) {
        ctx->pc = 0x41542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415428u;
        // 0x41542c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415430u;
        goto label_415430;
    }
    ctx->pc = 0x415428u;
    SET_GPR_U32(ctx, 31, 0x415430u);
    ctx->pc = 0x41542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415428u;
    // 0x41542c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x415428u, 0x415430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415430u;
label_415430:
    // 0x415430: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x415430u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415434:
    // 0x415434: 0x12c00049  beqz        $s6, . + 4 + (0x49 << 2)
label_415438:
    if (ctx->pc == 0x415438u) {
        ctx->pc = 0x415438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415434u;
        // 0x415438: 0x27b301e0  addiu       $s3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41543Cu;
        goto label_41543c;
    }
    ctx->pc = 0x415434u;
    {
        const bool branch_taken_0x415434 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x415438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415434u;
        // 0x415438: 0x27b301e0  addiu       $s3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415434) {
            ctx->pc = 0x41555Cu;
            goto label_41555c;
        }
    }
    ctx->pc = 0x41543Cu;
label_41543c:
    // 0x41543c: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x41543cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_415440:
    // 0x415440: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x415440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_415444:
    // 0x415444: 0x0  nop
    ctx->pc = 0x415444u;
    // NOP
label_415448:
    // 0x415448: 0x92220068  lbu         $v0, 0x68($s1)
    ctx->pc = 0x415448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_41544c:
    // 0x41544c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_415450:
    if (ctx->pc == 0x415450u) {
        ctx->pc = 0x415450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41544Cu;
        // 0x415450: 0x7bb002b0  lq          $s0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415454u;
        goto label_415454;
    }
    ctx->pc = 0x41544Cu;
    {
        const bool branch_taken_0x41544c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41544Cu;
        // 0x415450: 0x7bb002b0  lq          $s0, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41544c) {
            ctx->pc = 0x415660u;
            goto label_415660;
        }
    }
    ctx->pc = 0x415454u;
label_415454:
    // 0x415454: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x415454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_415458:
    // 0x415458: 0x5200003d  beql        $s0, $zero, . + 4 + (0x3D << 2)
label_41545c:
    if (ctx->pc == 0x41545Cu) {
        ctx->pc = 0x41545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415458u;
        // 0x41545c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415460u;
        goto label_415460;
    }
    ctx->pc = 0x415458u;
    {
        const bool branch_taken_0x415458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x415458) {
            ctx->pc = 0x41545Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415458u;
            // 0x41545c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415550u;
            goto label_415550;
        }
    }
    ctx->pc = 0x415460u;
label_415460:
    // 0x415460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x415460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415464:
    // 0x415464: 0xc089fac  jal         func_227EB0
label_415468:
    if (ctx->pc == 0x415468u) {
        ctx->pc = 0x415468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415464u;
        // 0x415468: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41546Cu;
        goto label_41546c;
    }
    ctx->pc = 0x415464u;
    SET_GPR_U32(ctx, 31, 0x41546Cu);
    ctx->pc = 0x415468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415464u;
    // 0x415468: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x415464u, 0x41546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41546Cu;
label_41546c:
    // 0x41546c: 0x50520038  beql        $v0, $s2, . + 4 + (0x38 << 2)
label_415470:
    if (ctx->pc == 0x415470u) {
        ctx->pc = 0x415470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41546Cu;
        // 0x415470: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415474u;
        goto label_415474;
    }
    ctx->pc = 0x41546Cu;
    {
        const bool branch_taken_0x41546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x41546c) {
            ctx->pc = 0x415470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41546Cu;
            // 0x415470: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415550u;
            goto label_415550;
        }
    }
    ctx->pc = 0x415474u;
label_415474:
    // 0x415474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x415474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415478:
    // 0x415478: 0xc104a70  jal         func_4129C0
label_41547c:
    if (ctx->pc == 0x41547Cu) {
        ctx->pc = 0x41547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415478u;
        // 0x41547c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415480u;
        goto label_415480;
    }
    ctx->pc = 0x415478u;
    SET_GPR_U32(ctx, 31, 0x415480u);
    ctx->pc = 0x41547Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415478u;
    // 0x41547c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C0u, 0x415478u, 0x415480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415480u;
label_415480:
    // 0x415480: 0x1452001d  bne         $v0, $s2, . + 4 + (0x1D << 2)
label_415484:
    if (ctx->pc == 0x415484u) {
        ctx->pc = 0x415484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415480u;
        // 0x415484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415488u;
        goto label_415488;
    }
    ctx->pc = 0x415480u;
    {
        const bool branch_taken_0x415480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x415484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415480u;
        // 0x415484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415480) {
            ctx->pc = 0x4154F8u;
            goto label_4154f8;
        }
    }
    ctx->pc = 0x415488u;
label_415488:
    // 0x415488: 0xc1054c8  jal         func_415320
label_41548c:
    if (ctx->pc == 0x41548Cu) {
        ctx->pc = 0x41548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415488u;
        // 0x41548c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415490u;
        goto label_415490;
    }
    ctx->pc = 0x415488u;
    SET_GPR_U32(ctx, 31, 0x415490u);
    ctx->pc = 0x41548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415488u;
    // 0x41548c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415320u, 0x415488u, 0x415490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415490u;
label_415490:
    // 0x415490: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_415494:
    if (ctx->pc == 0x415494u) {
        ctx->pc = 0x415498u;
        goto label_415498;
    }
    ctx->pc = 0x415490u;
    {
        const bool branch_taken_0x415490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415490) {
            ctx->pc = 0x4154C4u;
            goto label_4154c4;
        }
    }
    ctx->pc = 0x415498u;
label_415498:
    // 0x415498: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x415498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41549c:
    // 0x41549c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41549cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4154a0:
    // 0x4154a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4154a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4154a4:
    // 0x4154a4: 0x40f809  jalr        $v0
label_4154a8:
    if (ctx->pc == 0x4154A8u) {
        ctx->pc = 0x4154A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154A4u;
        // 0x4154a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4154ACu;
        goto label_4154ac;
    }
    ctx->pc = 0x4154A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4154ACu);
        ctx->pc = 0x4154A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154A4u;
        // 0x4154a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4154A4u, 0x4154ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4154ACu;
label_4154ac:
    // 0x4154ac: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x4154acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_4154b0:
    // 0x4154b0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x4154b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_4154b4:
    // 0x4154b4: 0xc13d732  jal         func_4F5CC8
label_4154b8:
    if (ctx->pc == 0x4154B8u) {
        ctx->pc = 0x4154B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154B4u;
        // 0x4154b8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4154BCu;
        goto label_4154bc;
    }
    ctx->pc = 0x4154B4u;
    SET_GPR_U32(ctx, 31, 0x4154BCu);
    ctx->pc = 0x4154B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4154B4u;
    // 0x4154b8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5CC8u, 0x4154B4u, 0x4154BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4154BCu;
label_4154bc:
    // 0x4154bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_4154c0:
    if (ctx->pc == 0x4154C0u) {
        ctx->pc = 0x4154C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154BCu;
        // 0x4154c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4154C4u;
        goto label_4154c4;
    }
    ctx->pc = 0x4154BCu;
    {
        const bool branch_taken_0x4154bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4154C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154BCu;
        // 0x4154c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4154bc) {
            ctx->pc = 0x4154D0u;
            goto label_4154d0;
        }
    }
    ctx->pc = 0x4154C4u;
label_4154c4:
    // 0x4154c4: 0x56f20022  bnel        $s7, $s2, . + 4 + (0x22 << 2)
label_4154c8:
    if (ctx->pc == 0x4154C8u) {
        ctx->pc = 0x4154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154C4u;
        // 0x4154c8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4154CCu;
        goto label_4154cc;
    }
    ctx->pc = 0x4154C4u;
    {
        const bool branch_taken_0x4154c4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 18));
        if (branch_taken_0x4154c4) {
            ctx->pc = 0x4154C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4154C4u;
            // 0x4154c8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415550u;
            goto label_415550;
        }
    }
    ctx->pc = 0x4154CCu;
label_4154cc:
    // 0x4154cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4154ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4154d0:
    // 0x4154d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4154d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4154d4:
    // 0x4154d4: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x4154d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_4154d8:
    // 0x4154d8: 0xafb00204  sw          $s0, 0x204($sp)
    ctx->pc = 0x4154d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 16));
label_4154dc:
    // 0x4154dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4154dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4154e0:
    // 0x4154e0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4154e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4154e4:
    // 0x4154e4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4154e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4154e8:
    // 0x4154e8: 0x40f809  jalr        $v0
label_4154ec:
    if (ctx->pc == 0x4154ECu) {
        ctx->pc = 0x4154ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154E8u;
        // 0x4154ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4154F0u;
        goto label_4154f0;
    }
    ctx->pc = 0x4154E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4154F0u);
        ctx->pc = 0x4154ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154E8u;
        // 0x4154ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4154E8u, 0x4154F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4154F0u;
label_4154f0:
    // 0x4154f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_4154f4:
    if (ctx->pc == 0x4154F4u) {
        ctx->pc = 0x4154F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154F0u;
        // 0x4154f4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4154F8u;
        goto label_4154f8;
    }
    ctx->pc = 0x4154F0u;
    {
        const bool branch_taken_0x4154f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4154F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154F0u;
        // 0x4154f4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4154f0) {
            ctx->pc = 0x415550u;
            goto label_415550;
        }
    }
    ctx->pc = 0x4154F8u;
label_4154f8:
    // 0x4154f8: 0xc1054c8  jal         func_415320
label_4154fc:
    if (ctx->pc == 0x4154FCu) {
        ctx->pc = 0x4154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154F8u;
        // 0x4154fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415500u;
        goto label_415500;
    }
    ctx->pc = 0x4154F8u;
    SET_GPR_U32(ctx, 31, 0x415500u);
    ctx->pc = 0x4154FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4154F8u;
    // 0x4154fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415320u, 0x4154F8u, 0x415500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415500u;
label_415500:
    // 0x415500: 0x54520013  bnel        $v0, $s2, . + 4 + (0x13 << 2)
label_415504:
    if (ctx->pc == 0x415504u) {
        ctx->pc = 0x415504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415500u;
        // 0x415504: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415508u;
        goto label_415508;
    }
    ctx->pc = 0x415500u;
    {
        const bool branch_taken_0x415500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x415500) {
            ctx->pc = 0x415504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415500u;
            // 0x415504: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415550u;
            goto label_415550;
        }
    }
    ctx->pc = 0x415508u;
label_415508:
    // 0x415508: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x415508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41550c:
    // 0x41550c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41550cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_415510:
    // 0x415510: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x415510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_415514:
    // 0x415514: 0x40f809  jalr        $v0
label_415518:
    if (ctx->pc == 0x415518u) {
        ctx->pc = 0x415518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415514u;
        // 0x415518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41551Cu;
        goto label_41551c;
    }
    ctx->pc = 0x415514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41551Cu);
        ctx->pc = 0x415518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415514u;
        // 0x415518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415514u, 0x41551Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41551Cu;
label_41551c:
    // 0x41551c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x41551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_415520:
    // 0x415520: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x415520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_415524:
    // 0x415524: 0xc13d74a  jal         func_4F5D28
label_415528:
    if (ctx->pc == 0x415528u) {
        ctx->pc = 0x415528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415524u;
        // 0x415528: 0x27a50214  addiu       $a1, $sp, 0x214 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41552Cu;
        goto label_41552c;
    }
    ctx->pc = 0x415524u;
    SET_GPR_U32(ctx, 31, 0x41552Cu);
    ctx->pc = 0x415528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415524u;
    // 0x415528: 0x27a50214  addiu       $a1, $sp, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D28u, 0x415524u, 0x41552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41552Cu;
label_41552c:
    // 0x41552c: 0xae7e0020  sw          $fp, 0x20($s3)
    ctx->pc = 0x41552cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 30));
label_415530:
    // 0x415530: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x415530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_415534:
    // 0x415534: 0xafb00204  sw          $s0, 0x204($sp)
    ctx->pc = 0x415534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 16));
label_415538:
    // 0x415538: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x415538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41553c:
    // 0x41553c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x41553cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_415540:
    // 0x415540: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x415540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_415544:
    // 0x415544: 0x40f809  jalr        $v0
label_415548:
    if (ctx->pc == 0x415548u) {
        ctx->pc = 0x415548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415544u;
        // 0x415548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41554Cu;
        goto label_41554c;
    }
    ctx->pc = 0x415544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41554Cu);
        ctx->pc = 0x415548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415544u;
        // 0x415548: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415544u, 0x41554Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41554Cu;
label_41554c:
    // 0x41554c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x41554cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_415550:
    // 0x415550: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x415550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_415554:
    // 0x415554: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_415558:
    if (ctx->pc == 0x415558u) {
        ctx->pc = 0x415558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415554u;
        // 0x415558: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41555Cu;
        goto label_41555c;
    }
    ctx->pc = 0x415554u;
    {
        const bool branch_taken_0x415554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415554u;
        // 0x415558: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415554) {
            ctx->pc = 0x415448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415448;
        }
    }
    ctx->pc = 0x41555Cu;
label_41555c:
    // 0x41555c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x41555cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415560:
    // 0x415560: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x415560u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_415564:
    // 0x415564: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x415564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_415568:
    // 0x415568: 0x27b301e0  addiu       $s3, $sp, 0x1E0
    ctx->pc = 0x415568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_41556c:
    // 0x41556c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x41556cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_415570:
    // 0x415570: 0x92220068  lbu         $v0, 0x68($s1)
    ctx->pc = 0x415570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_415574:
    // 0x415574: 0x0  nop
    ctx->pc = 0x415574u;
    // NOP
label_415578:
    // 0x415578: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_41557c:
    if (ctx->pc == 0x41557Cu) {
        ctx->pc = 0x41557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415578u;
        // 0x41557c: 0x26320070  addiu       $s2, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415580u;
        goto label_415580;
    }
    ctx->pc = 0x415578u;
    {
        const bool branch_taken_0x415578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415578u;
        // 0x41557c: 0x26320070  addiu       $s2, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415578) {
            ctx->pc = 0x41565Cu;
            goto label_41565c;
        }
    }
    ctx->pc = 0x415580u;
label_415580:
    // 0x415580: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x415580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_415584:
    // 0x415584: 0xc13d75c  jal         func_4F5D70
label_415588:
    if (ctx->pc == 0x415588u) {
        ctx->pc = 0x415588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415584u;
        // 0x415588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41558Cu;
        goto label_41558c;
    }
    ctx->pc = 0x415584u;
    SET_GPR_U32(ctx, 31, 0x41558Cu);
    ctx->pc = 0x415588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415584u;
    // 0x415588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D70u, 0x415584u, 0x41558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41558Cu;
label_41558c:
    // 0x41558c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_415590:
    // 0x415590: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x415590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_415594:
    // 0x415594: 0x8ee2bd30  lw          $v0, -0x42D0($s7)
    ctx->pc = 0x415594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_415598:
    // 0x415598: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
label_41559c:
    if (ctx->pc == 0x41559Cu) {
        ctx->pc = 0x41559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415598u;
        // 0x41559c: 0xafa30218  sw          $v1, 0x218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4155A0u;
        goto label_4155a0;
    }
    ctx->pc = 0x415598u;
    {
        const bool branch_taken_0x415598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415598u;
        // 0x41559c: 0xafa30218  sw          $v1, 0x218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415598) {
            ctx->pc = 0x41564Cu;
            goto label_41564c;
        }
    }
    ctx->pc = 0x4155A0u;
label_4155a0:
    // 0x4155a0: 0xc0e409a  jal         func_390268
label_4155a4:
    if (ctx->pc == 0x4155A4u) {
        ctx->pc = 0x4155A8u;
        goto label_4155a8;
    }
    ctx->pc = 0x4155A0u;
    SET_GPR_U32(ctx, 31, 0x4155A8u);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x4155A0u, 0x4155A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4155A8u;
label_4155a8:
    // 0x4155a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4155a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4155ac:
    // 0x4155ac: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
label_4155b0:
    if (ctx->pc == 0x4155B0u) {
        ctx->pc = 0x4155B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155ACu;
        // 0x4155b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4155B4u;
        goto label_4155b4;
    }
    ctx->pc = 0x4155ACu;
    {
        const bool branch_taken_0x4155ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4155ac) {
            ctx->pc = 0x4155B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4155ACu;
            // 0x4155b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415650u;
            goto label_415650;
        }
    }
    ctx->pc = 0x4155B4u;
label_4155b4:
    // 0x4155b4: 0xc089fac  jal         func_227EB0
label_4155b8:
    if (ctx->pc == 0x4155B8u) {
        ctx->pc = 0x4155B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155B4u;
        // 0x4155b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4155BCu;
        goto label_4155bc;
    }
    ctx->pc = 0x4155B4u;
    SET_GPR_U32(ctx, 31, 0x4155BCu);
    ctx->pc = 0x4155B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4155B4u;
    // 0x4155b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x4155B4u, 0x4155BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4155BCu;
label_4155bc:
    // 0x4155bc: 0x5456000e  bnel        $v0, $s6, . + 4 + (0xE << 2)
label_4155c0:
    if (ctx->pc == 0x4155C0u) {
        ctx->pc = 0x4155C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155BCu;
        // 0x4155c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4155C4u;
        goto label_4155c4;
    }
    ctx->pc = 0x4155BCu;
    {
        const bool branch_taken_0x4155bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4155bc) {
            ctx->pc = 0x4155C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4155BCu;
            // 0x4155c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4155F8u;
            goto label_4155f8;
        }
    }
    ctx->pc = 0x4155C4u;
label_4155c4:
    // 0x4155c4: 0xae750020  sw          $s5, 0x20($s3)
    ctx->pc = 0x4155c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 21));
label_4155c8:
    // 0x4155c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4155c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4155cc:
    // 0x4155cc: 0xafb00204  sw          $s0, 0x204($sp)
    ctx->pc = 0x4155ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 16));
label_4155d0:
    // 0x4155d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4155d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4155d4:
    // 0x4155d4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4155d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4155d8:
    // 0x4155d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4155d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4155dc:
    // 0x4155dc: 0x40f809  jalr        $v0
label_4155e0:
    if (ctx->pc == 0x4155E0u) {
        ctx->pc = 0x4155E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155DCu;
        // 0x4155e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4155E4u;
        goto label_4155e4;
    }
    ctx->pc = 0x4155DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4155E4u);
        ctx->pc = 0x4155E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155DCu;
        // 0x4155e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4155DCu, 0x4155E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4155E4u;
label_4155e4:
    // 0x4155e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4155e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4155e8:
    // 0x4155e8: 0xc13d86c  jal         func_4F61B0
label_4155ec:
    if (ctx->pc == 0x4155ECu) {
        ctx->pc = 0x4155ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155E8u;
        // 0x4155ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4155F0u;
        goto label_4155f0;
    }
    ctx->pc = 0x4155E8u;
    SET_GPR_U32(ctx, 31, 0x4155F0u);
    ctx->pc = 0x4155ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4155E8u;
    // 0x4155ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F61B0u, 0x4155E8u, 0x4155F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4155F0u;
label_4155f0:
    // 0x4155f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_4155f4:
    if (ctx->pc == 0x4155F4u) {
        ctx->pc = 0x4155F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155F0u;
        // 0x4155f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4155F8u;
        goto label_4155f8;
    }
    ctx->pc = 0x4155F0u;
    {
        const bool branch_taken_0x4155f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4155F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155F0u;
        // 0x4155f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4155f0) {
            ctx->pc = 0x415650u;
            goto label_415650;
        }
    }
    ctx->pc = 0x4155F8u;
label_4155f8:
    // 0x4155f8: 0xc104a70  jal         func_4129C0
label_4155fc:
    if (ctx->pc == 0x4155FCu) {
        ctx->pc = 0x4155FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4155F8u;
        // 0x4155fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415600u;
        goto label_415600;
    }
    ctx->pc = 0x4155F8u;
    SET_GPR_U32(ctx, 31, 0x415600u);
    ctx->pc = 0x4155FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4155F8u;
    // 0x4155fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C0u, 0x4155F8u, 0x415600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415600u;
label_415600:
    // 0x415600: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_415604:
    if (ctx->pc == 0x415604u) {
        ctx->pc = 0x415604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415600u;
        // 0x415604: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415608u;
        goto label_415608;
    }
    ctx->pc = 0x415600u;
    {
        const bool branch_taken_0x415600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415600) {
            ctx->pc = 0x415604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415600u;
            // 0x415604: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415650u;
            goto label_415650;
        }
    }
    ctx->pc = 0x415608u;
label_415608:
    // 0x415608: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x415608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41560c:
    // 0x41560c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41560cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_415610:
    // 0x415610: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x415610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_415614:
    // 0x415614: 0x40f809  jalr        $v0
label_415618:
    if (ctx->pc == 0x415618u) {
        ctx->pc = 0x415618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415614u;
        // 0x415618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41561Cu;
        goto label_41561c;
    }
    ctx->pc = 0x415614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41561Cu);
        ctx->pc = 0x415618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415614u;
        // 0x415618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415614u, 0x41561Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41561Cu;
label_41561c:
    // 0x41561c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_415620:
    // 0x415620: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x415620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
label_415624:
    // 0x415624: 0xc13d74a  jal         func_4F5D28
label_415628:
    if (ctx->pc == 0x415628u) {
        ctx->pc = 0x415628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415624u;
        // 0x415628: 0x27a5021c  addiu       $a1, $sp, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41562Cu;
        goto label_41562c;
    }
    ctx->pc = 0x415624u;
    SET_GPR_U32(ctx, 31, 0x41562Cu);
    ctx->pc = 0x415628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415624u;
    // 0x415628: 0x27a5021c  addiu       $a1, $sp, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5D28u, 0x415624u, 0x41562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41562Cu;
label_41562c:
    // 0x41562c: 0xae750020  sw          $s5, 0x20($s3)
    ctx->pc = 0x41562cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 21));
label_415630:
    // 0x415630: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x415630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_415634:
    // 0x415634: 0xafb00204  sw          $s0, 0x204($sp)
    ctx->pc = 0x415634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 16));
label_415638:
    // 0x415638: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x415638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41563c:
    // 0x41563c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x41563cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_415640:
    // 0x415640: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x415640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_415644:
    // 0x415644: 0x40f809  jalr        $v0
label_415648:
    if (ctx->pc == 0x415648u) {
        ctx->pc = 0x415648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415644u;
        // 0x415648: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41564Cu;
        goto label_41564c;
    }
    ctx->pc = 0x415644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41564Cu);
        ctx->pc = 0x415648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415644u;
        // 0x415648: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415644u, 0x41564Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41564Cu;
label_41564c:
    // 0x41564c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x41564cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_415650:
    // 0x415650: 0x2e82003c  sltiu       $v0, $s4, 0x3C
    ctx->pc = 0x415650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_415654:
    // 0x415654: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
label_415658:
    if (ctx->pc == 0x415658u) {
        ctx->pc = 0x415658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415654u;
        // 0x415658: 0x92220068  lbu         $v0, 0x68($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41565Cu;
        goto label_41565c;
    }
    ctx->pc = 0x415654u;
    {
        const bool branch_taken_0x415654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x415654) {
            ctx->pc = 0x415658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415654u;
            // 0x415658: 0x92220068  lbu         $v0, 0x68($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415578;
        }
    }
    ctx->pc = 0x41565Cu;
label_41565c:
    // 0x41565c: 0x7bb002b0  lq          $s0, 0x2B0($sp)
    ctx->pc = 0x41565cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_415660:
    // 0x415660: 0x7bb102a0  lq          $s1, 0x2A0($sp)
    ctx->pc = 0x415660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_415664:
    // 0x415664: 0x7bb20290  lq          $s2, 0x290($sp)
    ctx->pc = 0x415664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_415668:
    // 0x415668: 0x7bb30280  lq          $s3, 0x280($sp)
    ctx->pc = 0x415668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_41566c:
    // 0x41566c: 0x7bb40270  lq          $s4, 0x270($sp)
    ctx->pc = 0x41566cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_415670:
    // 0x415670: 0x7bb50260  lq          $s5, 0x260($sp)
    ctx->pc = 0x415670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_415674:
    // 0x415674: 0x7bb60250  lq          $s6, 0x250($sp)
    ctx->pc = 0x415674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_415678:
    // 0x415678: 0x7bb70240  lq          $s7, 0x240($sp)
    ctx->pc = 0x415678u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_41567c:
    // 0x41567c: 0x7bbe0230  lq          $fp, 0x230($sp)
    ctx->pc = 0x41567cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_415680:
    // 0x415680: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x415680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
label_415684:
    // 0x415684: 0x3e00008  jr          $ra
label_415688:
    if (ctx->pc == 0x415688u) {
        ctx->pc = 0x415688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415684u;
        // 0x415688: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41568Cu;
        goto label_41568c;
    }
    ctx->pc = 0x415684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415684u;
        // 0x415688: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41568Cu;
label_41568c:
    // 0x41568c: 0x0  nop
    ctx->pc = 0x41568cu;
    // NOP
    ctx->pc = 0x415690u;
}
