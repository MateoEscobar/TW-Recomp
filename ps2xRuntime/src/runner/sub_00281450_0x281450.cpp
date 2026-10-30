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

// Function: sub_00281450
// Address: 0x281450 - 0x281838
void sub_00281450_0x281450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281450_0x281450");
#endif

    switch (ctx->pc) {
        case 0x281450u: goto label_281450;
        case 0x281454u: goto label_281454;
        case 0x281458u: goto label_281458;
        case 0x28145cu: goto label_28145c;
        case 0x281460u: goto label_281460;
        case 0x281464u: goto label_281464;
        case 0x281468u: goto label_281468;
        case 0x28146cu: goto label_28146c;
        case 0x281470u: goto label_281470;
        case 0x281474u: goto label_281474;
        case 0x281478u: goto label_281478;
        case 0x28147cu: goto label_28147c;
        case 0x281480u: goto label_281480;
        case 0x281484u: goto label_281484;
        case 0x281488u: goto label_281488;
        case 0x28148cu: goto label_28148c;
        case 0x281490u: goto label_281490;
        case 0x281494u: goto label_281494;
        case 0x281498u: goto label_281498;
        case 0x28149cu: goto label_28149c;
        case 0x2814a0u: goto label_2814a0;
        case 0x2814a4u: goto label_2814a4;
        case 0x2814a8u: goto label_2814a8;
        case 0x2814acu: goto label_2814ac;
        case 0x2814b0u: goto label_2814b0;
        case 0x2814b4u: goto label_2814b4;
        case 0x2814b8u: goto label_2814b8;
        case 0x2814bcu: goto label_2814bc;
        case 0x2814c0u: goto label_2814c0;
        case 0x2814c4u: goto label_2814c4;
        case 0x2814c8u: goto label_2814c8;
        case 0x2814ccu: goto label_2814cc;
        case 0x2814d0u: goto label_2814d0;
        case 0x2814d4u: goto label_2814d4;
        case 0x2814d8u: goto label_2814d8;
        case 0x2814dcu: goto label_2814dc;
        case 0x2814e0u: goto label_2814e0;
        case 0x2814e4u: goto label_2814e4;
        case 0x2814e8u: goto label_2814e8;
        case 0x2814ecu: goto label_2814ec;
        case 0x2814f0u: goto label_2814f0;
        case 0x2814f4u: goto label_2814f4;
        case 0x2814f8u: goto label_2814f8;
        case 0x2814fcu: goto label_2814fc;
        case 0x281500u: goto label_281500;
        case 0x281504u: goto label_281504;
        case 0x281508u: goto label_281508;
        case 0x28150cu: goto label_28150c;
        case 0x281510u: goto label_281510;
        case 0x281514u: goto label_281514;
        case 0x281518u: goto label_281518;
        case 0x28151cu: goto label_28151c;
        case 0x281520u: goto label_281520;
        case 0x281524u: goto label_281524;
        case 0x281528u: goto label_281528;
        case 0x28152cu: goto label_28152c;
        case 0x281530u: goto label_281530;
        case 0x281534u: goto label_281534;
        case 0x281538u: goto label_281538;
        case 0x28153cu: goto label_28153c;
        case 0x281540u: goto label_281540;
        case 0x281544u: goto label_281544;
        case 0x281548u: goto label_281548;
        case 0x28154cu: goto label_28154c;
        case 0x281550u: goto label_281550;
        case 0x281554u: goto label_281554;
        case 0x281558u: goto label_281558;
        case 0x28155cu: goto label_28155c;
        case 0x281560u: goto label_281560;
        case 0x281564u: goto label_281564;
        case 0x281568u: goto label_281568;
        case 0x28156cu: goto label_28156c;
        case 0x281570u: goto label_281570;
        case 0x281574u: goto label_281574;
        case 0x281578u: goto label_281578;
        case 0x28157cu: goto label_28157c;
        case 0x281580u: goto label_281580;
        case 0x281584u: goto label_281584;
        case 0x281588u: goto label_281588;
        case 0x28158cu: goto label_28158c;
        case 0x281590u: goto label_281590;
        case 0x281594u: goto label_281594;
        case 0x281598u: goto label_281598;
        case 0x28159cu: goto label_28159c;
        case 0x2815a0u: goto label_2815a0;
        case 0x2815a4u: goto label_2815a4;
        case 0x2815a8u: goto label_2815a8;
        case 0x2815acu: goto label_2815ac;
        case 0x2815b0u: goto label_2815b0;
        case 0x2815b4u: goto label_2815b4;
        case 0x2815b8u: goto label_2815b8;
        case 0x2815bcu: goto label_2815bc;
        case 0x2815c0u: goto label_2815c0;
        case 0x2815c4u: goto label_2815c4;
        case 0x2815c8u: goto label_2815c8;
        case 0x2815ccu: goto label_2815cc;
        case 0x2815d0u: goto label_2815d0;
        case 0x2815d4u: goto label_2815d4;
        case 0x2815d8u: goto label_2815d8;
        case 0x2815dcu: goto label_2815dc;
        case 0x2815e0u: goto label_2815e0;
        case 0x2815e4u: goto label_2815e4;
        case 0x2815e8u: goto label_2815e8;
        case 0x2815ecu: goto label_2815ec;
        case 0x2815f0u: goto label_2815f0;
        case 0x2815f4u: goto label_2815f4;
        case 0x2815f8u: goto label_2815f8;
        case 0x2815fcu: goto label_2815fc;
        case 0x281600u: goto label_281600;
        case 0x281604u: goto label_281604;
        case 0x281608u: goto label_281608;
        case 0x28160cu: goto label_28160c;
        case 0x281610u: goto label_281610;
        case 0x281614u: goto label_281614;
        case 0x281618u: goto label_281618;
        case 0x28161cu: goto label_28161c;
        case 0x281620u: goto label_281620;
        case 0x281624u: goto label_281624;
        case 0x281628u: goto label_281628;
        case 0x28162cu: goto label_28162c;
        case 0x281630u: goto label_281630;
        case 0x281634u: goto label_281634;
        case 0x281638u: goto label_281638;
        case 0x28163cu: goto label_28163c;
        case 0x281640u: goto label_281640;
        case 0x281644u: goto label_281644;
        case 0x281648u: goto label_281648;
        case 0x28164cu: goto label_28164c;
        case 0x281650u: goto label_281650;
        case 0x281654u: goto label_281654;
        case 0x281658u: goto label_281658;
        case 0x28165cu: goto label_28165c;
        case 0x281660u: goto label_281660;
        case 0x281664u: goto label_281664;
        case 0x281668u: goto label_281668;
        case 0x28166cu: goto label_28166c;
        case 0x281670u: goto label_281670;
        case 0x281674u: goto label_281674;
        case 0x281678u: goto label_281678;
        case 0x28167cu: goto label_28167c;
        case 0x281680u: goto label_281680;
        case 0x281684u: goto label_281684;
        case 0x281688u: goto label_281688;
        case 0x28168cu: goto label_28168c;
        case 0x281690u: goto label_281690;
        case 0x281694u: goto label_281694;
        case 0x281698u: goto label_281698;
        case 0x28169cu: goto label_28169c;
        case 0x2816a0u: goto label_2816a0;
        case 0x2816a4u: goto label_2816a4;
        case 0x2816a8u: goto label_2816a8;
        case 0x2816acu: goto label_2816ac;
        case 0x2816b0u: goto label_2816b0;
        case 0x2816b4u: goto label_2816b4;
        case 0x2816b8u: goto label_2816b8;
        case 0x2816bcu: goto label_2816bc;
        case 0x2816c0u: goto label_2816c0;
        case 0x2816c4u: goto label_2816c4;
        case 0x2816c8u: goto label_2816c8;
        case 0x2816ccu: goto label_2816cc;
        case 0x2816d0u: goto label_2816d0;
        case 0x2816d4u: goto label_2816d4;
        case 0x2816d8u: goto label_2816d8;
        case 0x2816dcu: goto label_2816dc;
        case 0x2816e0u: goto label_2816e0;
        case 0x2816e4u: goto label_2816e4;
        case 0x2816e8u: goto label_2816e8;
        case 0x2816ecu: goto label_2816ec;
        case 0x2816f0u: goto label_2816f0;
        case 0x2816f4u: goto label_2816f4;
        case 0x2816f8u: goto label_2816f8;
        case 0x2816fcu: goto label_2816fc;
        case 0x281700u: goto label_281700;
        case 0x281704u: goto label_281704;
        case 0x281708u: goto label_281708;
        case 0x28170cu: goto label_28170c;
        case 0x281710u: goto label_281710;
        case 0x281714u: goto label_281714;
        case 0x281718u: goto label_281718;
        case 0x28171cu: goto label_28171c;
        case 0x281720u: goto label_281720;
        case 0x281724u: goto label_281724;
        case 0x281728u: goto label_281728;
        case 0x28172cu: goto label_28172c;
        case 0x281730u: goto label_281730;
        case 0x281734u: goto label_281734;
        case 0x281738u: goto label_281738;
        case 0x28173cu: goto label_28173c;
        case 0x281740u: goto label_281740;
        case 0x281744u: goto label_281744;
        case 0x281748u: goto label_281748;
        case 0x28174cu: goto label_28174c;
        case 0x281750u: goto label_281750;
        case 0x281754u: goto label_281754;
        case 0x281758u: goto label_281758;
        case 0x28175cu: goto label_28175c;
        case 0x281760u: goto label_281760;
        case 0x281764u: goto label_281764;
        case 0x281768u: goto label_281768;
        case 0x28176cu: goto label_28176c;
        case 0x281770u: goto label_281770;
        case 0x281774u: goto label_281774;
        case 0x281778u: goto label_281778;
        case 0x28177cu: goto label_28177c;
        case 0x281780u: goto label_281780;
        case 0x281784u: goto label_281784;
        case 0x281788u: goto label_281788;
        case 0x28178cu: goto label_28178c;
        case 0x281790u: goto label_281790;
        case 0x281794u: goto label_281794;
        case 0x281798u: goto label_281798;
        case 0x28179cu: goto label_28179c;
        case 0x2817a0u: goto label_2817a0;
        case 0x2817a4u: goto label_2817a4;
        case 0x2817a8u: goto label_2817a8;
        case 0x2817acu: goto label_2817ac;
        case 0x2817b0u: goto label_2817b0;
        case 0x2817b4u: goto label_2817b4;
        case 0x2817b8u: goto label_2817b8;
        case 0x2817bcu: goto label_2817bc;
        case 0x2817c0u: goto label_2817c0;
        case 0x2817c4u: goto label_2817c4;
        case 0x2817c8u: goto label_2817c8;
        case 0x2817ccu: goto label_2817cc;
        case 0x2817d0u: goto label_2817d0;
        case 0x2817d4u: goto label_2817d4;
        case 0x2817d8u: goto label_2817d8;
        case 0x2817dcu: goto label_2817dc;
        case 0x2817e0u: goto label_2817e0;
        case 0x2817e4u: goto label_2817e4;
        case 0x2817e8u: goto label_2817e8;
        case 0x2817ecu: goto label_2817ec;
        case 0x2817f0u: goto label_2817f0;
        case 0x2817f4u: goto label_2817f4;
        case 0x2817f8u: goto label_2817f8;
        case 0x2817fcu: goto label_2817fc;
        case 0x281800u: goto label_281800;
        case 0x281804u: goto label_281804;
        case 0x281808u: goto label_281808;
        case 0x28180cu: goto label_28180c;
        case 0x281810u: goto label_281810;
        case 0x281814u: goto label_281814;
        case 0x281818u: goto label_281818;
        case 0x28181cu: goto label_28181c;
        case 0x281820u: goto label_281820;
        case 0x281824u: goto label_281824;
        case 0x281828u: goto label_281828;
        case 0x28182cu: goto label_28182c;
        case 0x281830u: goto label_281830;
        case 0x281834u: goto label_281834;
        default: break;
    }

    ctx->pc = 0x281450u;

label_281450:
    // 0x281450: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x281450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_281454:
    // 0x281454: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x281454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_281458:
    // 0x281458: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x281458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_28145c:
    // 0x28145c: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x28145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_281460:
    // 0x281460: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x281460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_281464:
    // 0x281464: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x281464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_281468:
    // 0x281468: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x281468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_28146c:
    // 0x28146c: 0xc0899ae  jal         func_2266B8
label_281470:
    if (ctx->pc == 0x281470u) {
        ctx->pc = 0x281470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28146Cu;
        // 0x281470: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281474u;
        goto label_281474;
    }
    ctx->pc = 0x28146Cu;
    SET_GPR_U32(ctx, 31, 0x281474u);
    ctx->pc = 0x281470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28146Cu;
    // 0x281470: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x28146Cu, 0x281474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281474u;
label_281474:
    // 0x281474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281478:
    // 0x281478: 0x2a0201b5  slti        $v0, $s0, 0x1B5
    ctx->pc = 0x281478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)437) ? 1 : 0);
label_28147c:
    // 0x28147c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_281480:
    // 0x281480: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_281484:
    if (ctx->pc == 0x281484u) {
        ctx->pc = 0x281484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281480u;
        // 0x281484: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281488u;
        goto label_281488;
    }
    ctx->pc = 0x281480u;
    {
        const bool branch_taken_0x281480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281480u;
        // 0x281484: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281480) {
            ctx->pc = 0x28148Cu;
            goto label_28148c;
        }
    }
    ctx->pc = 0x281488u;
label_281488:
    // 0x281488: 0x2a0301ce  slti        $v1, $s0, 0x1CE
    ctx->pc = 0x281488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)462) ? 1 : 0);
label_28148c:
    // 0x28148c: 0x106000e1  beqz        $v1, . + 4 + (0xE1 << 2)
label_281490:
    if (ctx->pc == 0x281490u) {
        ctx->pc = 0x281490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28148Cu;
        // 0x281490: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281494u;
        goto label_281494;
    }
    ctx->pc = 0x28148Cu;
    {
        const bool branch_taken_0x28148c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28148Cu;
        // 0x281490: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28148c) {
            ctx->pc = 0x281814u;
            goto label_281814;
        }
    }
    ctx->pc = 0x281494u;
label_281494:
    // 0x281494: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x281494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
label_281498:
    // 0x281498: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x281498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_28149c:
    // 0x28149c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28149cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2814a0:
    // 0x2814a0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2814a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_2814a4:
    // 0x2814a4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x2814a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2814a8:
    // 0x2814a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2814a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2814ac:
    // 0x2814ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2814acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2814b0:
    // 0x2814b0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2814b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2814b4:
    // 0x2814b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2814b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2814b8:
    // 0x2814b8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2814b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2814bc:
    // 0x2814bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2814bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2814c0:
    // 0x2814c0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2814c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2814c4:
    // 0x2814c4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2814c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2814c8:
    // 0x2814c8: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x2814c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2814cc:
    // 0x2814cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2814ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2814d0:
    // 0x2814d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2814d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2814d4:
    // 0x2814d4: 0xc0cd940  jal         func_336500
label_2814d8:
    if (ctx->pc == 0x2814D8u) {
        ctx->pc = 0x2814D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814D4u;
        // 0x2814d8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2814DCu;
        goto label_2814dc;
    }
    ctx->pc = 0x2814D4u;
    SET_GPR_U32(ctx, 31, 0x2814DCu);
    ctx->pc = 0x2814D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2814D4u;
    // 0x2814d8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x2814D4u, 0x2814DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814DCu;
label_2814dc:
    // 0x2814dc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2814dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2814e0:
    // 0x2814e0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2814e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2814e4:
    // 0x2814e4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2814e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2814e8:
    // 0x2814e8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2814e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2814ec:
    // 0x2814ec: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x2814ecu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2814f0:
    // 0x2814f0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2814f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2814f4:
    // 0x2814f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2814f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2814f8:
    // 0x2814f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2814f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2814fc:
    // 0x2814fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2814fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281500:
    // 0x281500: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x281500u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_281504:
    // 0x281504: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x281504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_281508:
    // 0x281508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28150c:
    // 0x28150c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x28150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_281510:
    // 0x281510: 0x8ce447c4  lw          $a0, 0x47C4($a3)
    ctx->pc = 0x281510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18372)));
label_281514:
    // 0x281514: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281518:
    // 0x281518: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x281518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_28151c:
    // 0x28151c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28151cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281520:
    // 0x281520: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x281520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_281524:
    // 0x281524: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x281524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
label_281528:
    // 0x281528: 0xc1036e2  jal         func_40DB88
label_28152c:
    if (ctx->pc == 0x28152Cu) {
        ctx->pc = 0x28152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281528u;
        // 0x28152c: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281530u;
        goto label_281530;
    }
    ctx->pc = 0x281528u;
    SET_GPR_U32(ctx, 31, 0x281530u);
    ctx->pc = 0x28152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281528u;
    // 0x28152c: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x281528u, 0x281530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281530u;
label_281530:
    // 0x281530: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x281530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_281534:
    // 0x281534: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_281538:
    if (ctx->pc == 0x281538u) {
        ctx->pc = 0x281538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281534u;
        // 0x281538: 0x7a2202c0  lq          $v0, 0x2C0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28153Cu;
        goto label_28153c;
    }
    ctx->pc = 0x281534u;
    {
        const bool branch_taken_0x281534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281534) {
            ctx->pc = 0x281538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281534u;
            // 0x281538: 0x7a2202c0  lq          $v0, 0x2C0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28158Cu;
            goto label_28158c;
        }
    }
    ctx->pc = 0x28153Cu;
label_28153c:
    // 0x28153c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x28153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_281540:
    // 0x281540: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x281540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_281544:
    // 0x281544: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_281548:
    if (ctx->pc == 0x281548u) {
        ctx->pc = 0x281548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281544u;
        // 0x281548: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28154Cu;
        goto label_28154c;
    }
    ctx->pc = 0x281544u;
    {
        const bool branch_taken_0x281544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x281548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281544u;
        // 0x281548: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281544) {
            ctx->pc = 0x28157Cu;
            goto label_28157c;
        }
    }
    ctx->pc = 0x28154Cu;
label_28154c:
    // 0x28154c: 0xc0874fa  jal         func_21D3E8
label_281550:
    if (ctx->pc == 0x281550u) {
        ctx->pc = 0x281550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28154Cu;
        // 0x281550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281554u;
        goto label_281554;
    }
    ctx->pc = 0x28154Cu;
    SET_GPR_U32(ctx, 31, 0x281554u);
    ctx->pc = 0x281550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28154Cu;
    // 0x281550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x28154Cu, 0x281554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281554u;
label_281554:
    // 0x281554: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x281554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_281558:
    // 0x281558: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_28155c:
    if (ctx->pc == 0x28155Cu) {
        ctx->pc = 0x28155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281558u;
        // 0x28155c: 0x97a2009c  lhu         $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281560u;
        goto label_281560;
    }
    ctx->pc = 0x281558u;
    {
        const bool branch_taken_0x281558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281558u;
        // 0x28155c: 0x97a2009c  lhu         $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281558) {
            ctx->pc = 0x28156Cu;
            goto label_28156c;
        }
    }
    ctx->pc = 0x281560u;
label_281560:
    // 0x281560: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x281560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_281564:
    // 0x281564: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_281568:
    if (ctx->pc == 0x281568u) {
        ctx->pc = 0x281568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281564u;
        // 0x281568: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28156Cu;
        goto label_28156c;
    }
    ctx->pc = 0x281564u;
    {
        const bool branch_taken_0x281564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281564) {
            ctx->pc = 0x281568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281564u;
            // 0x281568: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281580u;
            goto label_281580;
        }
    }
    ctx->pc = 0x28156Cu;
label_28156c:
    // 0x28156c: 0x97a2009c  lhu         $v0, 0x9C($sp)
    ctx->pc = 0x28156cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
label_281570:
    // 0x281570: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x281570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_281574:
    // 0x281574: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_281578:
    if (ctx->pc == 0x281578u) {
        ctx->pc = 0x28157Cu;
        goto label_28157c;
    }
    ctx->pc = 0x281574u;
    {
        const bool branch_taken_0x281574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281574) {
            ctx->pc = 0x281580u;
            goto label_281580;
        }
    }
    ctx->pc = 0x28157Cu;
label_28157c:
    // 0x28157c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28157cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281580:
    // 0x281580: 0x52400056  beql        $s2, $zero, . + 4 + (0x56 << 2)
label_281584:
    if (ctx->pc == 0x281584u) {
        ctx->pc = 0x281584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281580u;
        // 0x281584: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281588u;
        goto label_281588;
    }
    ctx->pc = 0x281580u;
    {
        const bool branch_taken_0x281580 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x281580) {
            ctx->pc = 0x281584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281580u;
            // 0x281584: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2816DCu;
            goto label_2816dc;
        }
    }
    ctx->pc = 0x281588u;
label_281588:
    // 0x281588: 0x7a2202c0  lq          $v0, 0x2C0($s1)
    ctx->pc = 0x281588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 704)));
label_28158c:
    // 0x28158c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x28158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_281590:
    // 0x281590: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281594:
    // 0x281594: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x281594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_281598:
    // 0x281598: 0xc040668  jal         func_1019A0
label_28159c:
    if (ctx->pc == 0x28159Cu) {
        ctx->pc = 0x28159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281598u;
        // 0x28159c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2815A0u;
        goto label_2815a0;
    }
    ctx->pc = 0x281598u;
    SET_GPR_U32(ctx, 31, 0x2815A0u);
    ctx->pc = 0x28159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281598u;
    // 0x28159c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A0u, 0x281598u, 0x2815A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815A0u;
label_2815a0:
    // 0x2815a0: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x2815a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2815a4:
    // 0x2815a4: 0x26834b00  addiu       $v1, $s4, 0x4B00
    ctx->pc = 0x2815a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 19200));
label_2815a8:
    // 0x2815a8: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2815a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2815ac:
    // 0x2815ac: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2815acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2815b0:
    // 0x2815b0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2815b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2815b4:
    // 0x2815b4: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2815b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_2815b8:
    // 0x2815b8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2815b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2815bc:
    // 0x2815bc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2815bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2815c0:
    // 0x2815c0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2815c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2815c4:
    // 0x2815c4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2815c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2815c8:
    // 0x2815c8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2815c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2815cc:
    // 0x2815cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2815ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2815d0:
    // 0x2815d0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2815d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2815d4:
    // 0x2815d4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2815d4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2815d8:
    // 0x2815d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2815d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2815dc:
    // 0x2815dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2815dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2815e0:
    // 0x2815e0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2815e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2815e4:
    // 0x2815e4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2815e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2815e8:
    // 0x2815e8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2815e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2815ec:
    // 0x2815ec: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2815ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2815f0:
    // 0x2815f0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2815f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2815f4:
    // 0x2815f4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2815f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2815f8:
    // 0x2815f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2815f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_2815fc:
    // 0x2815fc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2815fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_281600:
    // 0x281600: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x281600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_281604:
    // 0x281604: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x281604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_281608:
    // 0x281608: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x281608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_28160c:
    // 0x28160c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x28160cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_281610:
    // 0x281610: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x281610u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_281614:
    // 0x281614: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x281614u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_281618:
    // 0x281618: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x281618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28161c:
    // 0x28161c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x28161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_281620:
    // 0x281620: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x281620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_281624:
    // 0x281624: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x281624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_281628:
    // 0x281628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28162c:
    // 0x28162c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28162cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_281630:
    // 0x281630: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x281630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_281634:
    // 0x281634: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x281634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_281638:
    // 0x281638: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x281638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_28163c:
    // 0x28163c: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x28163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_281640:
    // 0x281640: 0xc0cd940  jal         func_336500
label_281644:
    if (ctx->pc == 0x281644u) {
        ctx->pc = 0x281644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281640u;
        // 0x281644: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281648u;
        goto label_281648;
    }
    ctx->pc = 0x281640u;
    SET_GPR_U32(ctx, 31, 0x281648u);
    ctx->pc = 0x281644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281640u;
    // 0x281644: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x281640u, 0x281648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281648u;
label_281648:
    // 0x281648: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x281648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28164c:
    // 0x28164c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281650:
    // 0x281650: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x281650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_281654:
    // 0x281654: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x281654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_281658:
    // 0x281658: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x281658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_28165c:
    // 0x28165c: 0x40f809  jalr        $v0
label_281660:
    if (ctx->pc == 0x281660u) {
        ctx->pc = 0x281660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28165Cu;
        // 0x281660: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281664u;
        goto label_281664;
    }
    ctx->pc = 0x28165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x281664u);
        ctx->pc = 0x281660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28165Cu;
        // 0x281660: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28165Cu, 0x281664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281664u;
label_281664:
    // 0x281664: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x281664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_281668:
    // 0x281668: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x281668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_28166c:
    // 0x28166c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x28166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_281670:
    // 0x281670: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x281670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_281674:
    // 0x281674: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x281674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281678:
    // 0x281678: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x281678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_28167c:
    // 0x28167c: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x28167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_281680:
    // 0x281680: 0x40f809  jalr        $v0
label_281684:
    if (ctx->pc == 0x281684u) {
        ctx->pc = 0x281684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281680u;
        // 0x281684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281688u;
        goto label_281688;
    }
    ctx->pc = 0x281680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x281688u);
        ctx->pc = 0x281684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281680u;
        // 0x281684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281680u, 0x281688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281688u;
label_281688:
    // 0x281688: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x281688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_28168c:
    // 0x28168c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28168cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281690:
    // 0x281690: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x281690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_281694:
    // 0x281694: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x281694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_281698:
    // 0x281698: 0xc0f809  jalr        $a2
label_28169c:
    if (ctx->pc == 0x28169Cu) {
        ctx->pc = 0x28169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281698u;
        // 0x28169c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816A0u;
        goto label_2816a0;
    }
    ctx->pc = 0x281698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2816A0u);
        ctx->pc = 0x28169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281698u;
        // 0x28169c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281698u, 0x2816A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2816A0u;
label_2816a0:
    // 0x2816a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2816a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2816a4:
    // 0x2816a4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2816a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2816a8:
    // 0x2816a8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2816a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2816ac:
    // 0x2816ac: 0x40f809  jalr        $v0
label_2816b0:
    if (ctx->pc == 0x2816B0u) {
        ctx->pc = 0x2816B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816ACu;
        // 0x2816b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816B4u;
        goto label_2816b4;
    }
    ctx->pc = 0x2816ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2816B4u);
        ctx->pc = 0x2816B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816ACu;
        // 0x2816b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2816ACu, 0x2816B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2816B4u;
label_2816b4:
    // 0x2816b4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2816b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2816b8:
    // 0x2816b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2816b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2816bc:
    // 0x2816bc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2816bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2816c0:
    // 0x2816c0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2816c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2816c4:
    // 0x2816c4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x2816c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_2816c8:
    // 0x2816c8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2816c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2816cc:
    // 0x2816cc: 0xc089990  jal         func_226640
label_2816d0:
    if (ctx->pc == 0x2816D0u) {
        ctx->pc = 0x2816D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816CCu;
        // 0x2816d0: 0x7e2202c0  sq          $v0, 0x2C0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 704), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816D4u;
        goto label_2816d4;
    }
    ctx->pc = 0x2816CCu;
    SET_GPR_U32(ctx, 31, 0x2816D4u);
    ctx->pc = 0x2816D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816CCu;
    // 0x2816d0: 0x7e2202c0  sq          $v0, 0x2C0($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 704), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2816CCu, 0x2816D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816D4u;
label_2816d4:
    // 0x2816d4: 0x10000050  b           . + 4 + (0x50 << 2)
label_2816d8:
    if (ctx->pc == 0x2816D8u) {
        ctx->pc = 0x2816D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D4u;
        // 0x2816d8: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816DCu;
        goto label_2816dc;
    }
    ctx->pc = 0x2816D4u;
    {
        const bool branch_taken_0x2816d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D4u;
        // 0x2816d8: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816d4) {
            ctx->pc = 0x281818u;
            goto label_281818;
        }
    }
    ctx->pc = 0x2816DCu;
label_2816dc:
    // 0x2816dc: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x2816dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2816e0:
    // 0x2816e0: 0x2610e9c0  addiu       $s0, $s0, -0x1640
    ctx->pc = 0x2816e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961600));
label_2816e4:
    // 0x2816e4: 0xc041532  jal         func_1054C8
label_2816e8:
    if (ctx->pc == 0x2816E8u) {
        ctx->pc = 0x2816E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E4u;
        // 0x2816e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816ECu;
        goto label_2816ec;
    }
    ctx->pc = 0x2816E4u;
    SET_GPR_U32(ctx, 31, 0x2816ECu);
    ctx->pc = 0x2816E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816E4u;
    // 0x2816e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2816E4u, 0x2816ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816ECu;
label_2816ec:
    // 0x2816ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2816ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2816f0:
    // 0x2816f0: 0xc041532  jal         func_1054C8
label_2816f4:
    if (ctx->pc == 0x2816F4u) {
        ctx->pc = 0x2816F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816F0u;
        // 0x2816f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816F8u;
        goto label_2816f8;
    }
    ctx->pc = 0x2816F0u;
    SET_GPR_U32(ctx, 31, 0x2816F8u);
    ctx->pc = 0x2816F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816F0u;
    // 0x2816f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2816F0u, 0x2816F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816F8u;
label_2816f8:
    // 0x2816f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2816f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2816fc:
    // 0x2816fc: 0xc05d462  jal         func_175188
label_281700:
    if (ctx->pc == 0x281700u) {
        ctx->pc = 0x281700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816FCu;
        // 0x281700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281704u;
        goto label_281704;
    }
    ctx->pc = 0x2816FCu;
    SET_GPR_U32(ctx, 31, 0x281704u);
    ctx->pc = 0x281700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2816FCu;
    // 0x281700: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x2816FCu, 0x281704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281704u;
label_281704:
    // 0x281704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281708:
    // 0x281708: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x281708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_28170c:
    // 0x28170c: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x28170cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_281710:
    // 0x281710: 0xa0f809  jalr        $a1
label_281714:
    if (ctx->pc == 0x281714u) {
        ctx->pc = 0x281714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281710u;
        // 0x281714: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281718u;
        goto label_281718;
    }
    ctx->pc = 0x281710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x281718u);
        ctx->pc = 0x281714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281710u;
        // 0x281714: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281710u, 0x281718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281718u;
label_281718:
    // 0x281718: 0xc05d462  jal         func_175188
label_28171c:
    if (ctx->pc == 0x28171Cu) {
        ctx->pc = 0x28171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281718u;
        // 0x28171c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281720u;
        goto label_281720;
    }
    ctx->pc = 0x281718u;
    SET_GPR_U32(ctx, 31, 0x281720u);
    ctx->pc = 0x28171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281718u;
    // 0x28171c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x281718u, 0x281720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281720u;
label_281720:
    // 0x281720: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281724:
    // 0x281724: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x281724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_281728:
    // 0x281728: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x281728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_28172c:
    // 0x28172c: 0x8c6600cc  lw          $a2, 0xCC($v1)
    ctx->pc = 0x28172cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_281730:
    // 0x281730: 0xc0f809  jalr        $a2
label_281734:
    if (ctx->pc == 0x281734u) {
        ctx->pc = 0x281734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281730u;
        // 0x281734: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281738u;
        goto label_281738;
    }
    ctx->pc = 0x281730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x281738u);
        ctx->pc = 0x281734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281730u;
        // 0x281734: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281730u, 0x281738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281738u;
label_281738:
    // 0x281738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28173c:
    // 0x28173c: 0xc08997c  jal         func_2265F0
label_281740:
    if (ctx->pc == 0x281740u) {
        ctx->pc = 0x281740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28173Cu;
        // 0x281740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281744u;
        goto label_281744;
    }
    ctx->pc = 0x28173Cu;
    SET_GPR_U32(ctx, 31, 0x281744u);
    ctx->pc = 0x281740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28173Cu;
    // 0x281740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x28173Cu, 0x281744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281744u;
label_281744:
    // 0x281744: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_281748:
    if (ctx->pc == 0x281748u) {
        ctx->pc = 0x28174Cu;
        goto label_28174c;
    }
    ctx->pc = 0x281744u;
    {
        const bool branch_taken_0x281744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281744) {
            ctx->pc = 0x281780u;
            goto label_281780;
        }
    }
    ctx->pc = 0x28174Cu;
label_28174c:
    // 0x28174c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_281750:
    if (ctx->pc == 0x281750u) {
        ctx->pc = 0x281750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28174Cu;
        // 0x281750: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281754u;
        goto label_281754;
    }
    ctx->pc = 0x28174Cu;
    {
        const bool branch_taken_0x28174c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28174Cu;
        // 0x281750: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28174c) {
            ctx->pc = 0x281770u;
            goto label_281770;
        }
    }
    ctx->pc = 0x281754u;
label_281754:
    // 0x281754: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x281754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_281758:
    // 0x281758: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x281758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_28175c:
    // 0x28175c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281760:
    // 0x281760: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x281760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_281764:
    // 0x281764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281768:
    // 0x281768: 0xc04159e  jal         func_105678
label_28176c:
    if (ctx->pc == 0x28176Cu) {
        ctx->pc = 0x28176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281768u;
        // 0x28176c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281770u;
        goto label_281770;
    }
    ctx->pc = 0x281768u;
    SET_GPR_U32(ctx, 31, 0x281770u);
    ctx->pc = 0x28176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281768u;
    // 0x28176c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x281768u, 0x281770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281770u;
label_281770:
    // 0x281770: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x281770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_281774:
    // 0x281774: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x281774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_281778:
    // 0x281778: 0x1000000c  b           . + 4 + (0xC << 2)
label_28177c:
    if (ctx->pc == 0x28177Cu) {
        ctx->pc = 0x28177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281778u;
        // 0x28177c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281780u;
        goto label_281780;
    }
    ctx->pc = 0x281778u;
    {
        const bool branch_taken_0x281778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281778u;
        // 0x28177c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281778) {
            ctx->pc = 0x2817ACu;
            goto label_2817ac;
        }
    }
    ctx->pc = 0x281780u;
label_281780:
    // 0x281780: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_281784:
    if (ctx->pc == 0x281784u) {
        ctx->pc = 0x281784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281780u;
        // 0x281784: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281788u;
        goto label_281788;
    }
    ctx->pc = 0x281780u;
    {
        const bool branch_taken_0x281780 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x281784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281780u;
        // 0x281784: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281780) {
            ctx->pc = 0x2817A4u;
            goto label_2817a4;
        }
    }
    ctx->pc = 0x281788u;
label_281788:
    // 0x281788: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x281788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_28178c:
    // 0x28178c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x28178cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_281790:
    // 0x281790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281794:
    // 0x281794: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x281794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_281798:
    // 0x281798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28179c:
    // 0x28179c: 0xc04159e  jal         func_105678
label_2817a0:
    if (ctx->pc == 0x2817A0u) {
        ctx->pc = 0x2817A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28179Cu;
        // 0x2817a0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817A4u;
        goto label_2817a4;
    }
    ctx->pc = 0x28179Cu;
    SET_GPR_U32(ctx, 31, 0x2817A4u);
    ctx->pc = 0x2817A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28179Cu;
    // 0x2817a0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x28179Cu, 0x2817A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817A4u;
label_2817a4:
    // 0x2817a4: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2817a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2817a8:
    // 0x2817a8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2817a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2817ac:
    // 0x2817ac: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2817b0:
    if (ctx->pc == 0x2817B0u) {
        ctx->pc = 0x2817B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817ACu;
        // 0x2817b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817B4u;
        goto label_2817b4;
    }
    ctx->pc = 0x2817ACu;
    {
        const bool branch_taken_0x2817ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2817B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817ACu;
        // 0x2817b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817ac) {
            ctx->pc = 0x2817D4u;
            goto label_2817d4;
        }
    }
    ctx->pc = 0x2817B4u;
label_2817b4:
    // 0x2817b4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2817b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2817b8:
    // 0x2817b8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2817b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2817bc:
    // 0x2817bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2817bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2817c0:
    // 0x2817c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2817c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2817c4:
    // 0x2817c4: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2817c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2817c8:
    // 0x2817c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2817c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2817cc:
    // 0x2817cc: 0xc041b20  jal         func_106C80
label_2817d0:
    if (ctx->pc == 0x2817D0u) {
        ctx->pc = 0x2817D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817CCu;
        // 0x2817d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817D4u;
        goto label_2817d4;
    }
    ctx->pc = 0x2817CCu;
    SET_GPR_U32(ctx, 31, 0x2817D4u);
    ctx->pc = 0x2817D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817CCu;
    // 0x2817d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2817CCu, 0x2817D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817D4u;
label_2817d4:
    // 0x2817d4: 0xc05d484  jal         func_175210
label_2817d8:
    if (ctx->pc == 0x2817D8u) {
        ctx->pc = 0x2817D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817D4u;
        // 0x2817d8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817DCu;
        goto label_2817dc;
    }
    ctx->pc = 0x2817D4u;
    SET_GPR_U32(ctx, 31, 0x2817DCu);
    ctx->pc = 0x2817D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817D4u;
    // 0x2817d8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2817D4u, 0x2817DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817DCu;
label_2817dc:
    // 0x2817dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2817dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2817e0:
    // 0x2817e0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2817e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2817e4:
    // 0x2817e4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2817e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2817e8:
    // 0x2817e8: 0xa0f809  jalr        $a1
label_2817ec:
    if (ctx->pc == 0x2817ECu) {
        ctx->pc = 0x2817ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817E8u;
        // 0x2817ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817F0u;
        goto label_2817f0;
    }
    ctx->pc = 0x2817E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2817F0u);
        ctx->pc = 0x2817ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817E8u;
        // 0x2817ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2817E8u, 0x2817F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2817F0u;
label_2817f0:
    // 0x2817f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2817f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2817f4:
    // 0x2817f4: 0xc087016  jal         func_21C058
label_2817f8:
    if (ctx->pc == 0x2817F8u) {
        ctx->pc = 0x2817F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817F4u;
        // 0x2817f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2817FCu;
        goto label_2817fc;
    }
    ctx->pc = 0x2817F4u;
    SET_GPR_U32(ctx, 31, 0x2817FCu);
    ctx->pc = 0x2817F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817F4u;
    // 0x2817f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2817F4u, 0x2817FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817FCu;
label_2817fc:
    // 0x2817fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2817fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_281800:
    // 0x281800: 0xc05d53a  jal         func_1754E8
label_281804:
    if (ctx->pc == 0x281804u) {
        ctx->pc = 0x281804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281800u;
        // 0x281804: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281808u;
        goto label_281808;
    }
    ctx->pc = 0x281800u;
    SET_GPR_U32(ctx, 31, 0x281808u);
    ctx->pc = 0x281804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281800u;
    // 0x281804: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x281800u, 0x281808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281808u;
label_281808:
    // 0x281808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x281808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28180c:
    // 0x28180c: 0xc05d4f6  jal         func_1753D8
label_281810:
    if (ctx->pc == 0x281810u) {
        ctx->pc = 0x281810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28180Cu;
        // 0x281810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281814u;
        goto label_281814;
    }
    ctx->pc = 0x28180Cu;
    SET_GPR_U32(ctx, 31, 0x281814u);
    ctx->pc = 0x281810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28180Cu;
    // 0x281810: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x28180Cu, 0x281814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281814u;
label_281814:
    // 0x281814: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x281814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_281818:
    // 0x281818: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x281818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_28181c:
    // 0x28181c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x28181cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_281820:
    // 0x281820: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x281820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_281824:
    // 0x281824: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x281824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_281828:
    // 0x281828: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x281828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_28182c:
    // 0x28182c: 0x3e00008  jr          $ra
label_281830:
    if (ctx->pc == 0x281830u) {
        ctx->pc = 0x281830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28182Cu;
        // 0x281830: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281834u;
        goto label_281834;
    }
    ctx->pc = 0x28182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28182Cu;
        // 0x281830: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281834u;
label_281834:
    // 0x281834: 0x0  nop
    ctx->pc = 0x281834u;
    // NOP
    ctx->pc = 0x281838u;
}
