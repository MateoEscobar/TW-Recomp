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

// Function: sub_00271470
// Address: 0x271470 - 0x271808
void sub_00271470_0x271470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271470_0x271470");
#endif

    switch (ctx->pc) {
        case 0x271470u: goto label_271470;
        case 0x271474u: goto label_271474;
        case 0x271478u: goto label_271478;
        case 0x27147cu: goto label_27147c;
        case 0x271480u: goto label_271480;
        case 0x271484u: goto label_271484;
        case 0x271488u: goto label_271488;
        case 0x27148cu: goto label_27148c;
        case 0x271490u: goto label_271490;
        case 0x271494u: goto label_271494;
        case 0x271498u: goto label_271498;
        case 0x27149cu: goto label_27149c;
        case 0x2714a0u: goto label_2714a0;
        case 0x2714a4u: goto label_2714a4;
        case 0x2714a8u: goto label_2714a8;
        case 0x2714acu: goto label_2714ac;
        case 0x2714b0u: goto label_2714b0;
        case 0x2714b4u: goto label_2714b4;
        case 0x2714b8u: goto label_2714b8;
        case 0x2714bcu: goto label_2714bc;
        case 0x2714c0u: goto label_2714c0;
        case 0x2714c4u: goto label_2714c4;
        case 0x2714c8u: goto label_2714c8;
        case 0x2714ccu: goto label_2714cc;
        case 0x2714d0u: goto label_2714d0;
        case 0x2714d4u: goto label_2714d4;
        case 0x2714d8u: goto label_2714d8;
        case 0x2714dcu: goto label_2714dc;
        case 0x2714e0u: goto label_2714e0;
        case 0x2714e4u: goto label_2714e4;
        case 0x2714e8u: goto label_2714e8;
        case 0x2714ecu: goto label_2714ec;
        case 0x2714f0u: goto label_2714f0;
        case 0x2714f4u: goto label_2714f4;
        case 0x2714f8u: goto label_2714f8;
        case 0x2714fcu: goto label_2714fc;
        case 0x271500u: goto label_271500;
        case 0x271504u: goto label_271504;
        case 0x271508u: goto label_271508;
        case 0x27150cu: goto label_27150c;
        case 0x271510u: goto label_271510;
        case 0x271514u: goto label_271514;
        case 0x271518u: goto label_271518;
        case 0x27151cu: goto label_27151c;
        case 0x271520u: goto label_271520;
        case 0x271524u: goto label_271524;
        case 0x271528u: goto label_271528;
        case 0x27152cu: goto label_27152c;
        case 0x271530u: goto label_271530;
        case 0x271534u: goto label_271534;
        case 0x271538u: goto label_271538;
        case 0x27153cu: goto label_27153c;
        case 0x271540u: goto label_271540;
        case 0x271544u: goto label_271544;
        case 0x271548u: goto label_271548;
        case 0x27154cu: goto label_27154c;
        case 0x271550u: goto label_271550;
        case 0x271554u: goto label_271554;
        case 0x271558u: goto label_271558;
        case 0x27155cu: goto label_27155c;
        case 0x271560u: goto label_271560;
        case 0x271564u: goto label_271564;
        case 0x271568u: goto label_271568;
        case 0x27156cu: goto label_27156c;
        case 0x271570u: goto label_271570;
        case 0x271574u: goto label_271574;
        case 0x271578u: goto label_271578;
        case 0x27157cu: goto label_27157c;
        case 0x271580u: goto label_271580;
        case 0x271584u: goto label_271584;
        case 0x271588u: goto label_271588;
        case 0x27158cu: goto label_27158c;
        case 0x271590u: goto label_271590;
        case 0x271594u: goto label_271594;
        case 0x271598u: goto label_271598;
        case 0x27159cu: goto label_27159c;
        case 0x2715a0u: goto label_2715a0;
        case 0x2715a4u: goto label_2715a4;
        case 0x2715a8u: goto label_2715a8;
        case 0x2715acu: goto label_2715ac;
        case 0x2715b0u: goto label_2715b0;
        case 0x2715b4u: goto label_2715b4;
        case 0x2715b8u: goto label_2715b8;
        case 0x2715bcu: goto label_2715bc;
        case 0x2715c0u: goto label_2715c0;
        case 0x2715c4u: goto label_2715c4;
        case 0x2715c8u: goto label_2715c8;
        case 0x2715ccu: goto label_2715cc;
        case 0x2715d0u: goto label_2715d0;
        case 0x2715d4u: goto label_2715d4;
        case 0x2715d8u: goto label_2715d8;
        case 0x2715dcu: goto label_2715dc;
        case 0x2715e0u: goto label_2715e0;
        case 0x2715e4u: goto label_2715e4;
        case 0x2715e8u: goto label_2715e8;
        case 0x2715ecu: goto label_2715ec;
        case 0x2715f0u: goto label_2715f0;
        case 0x2715f4u: goto label_2715f4;
        case 0x2715f8u: goto label_2715f8;
        case 0x2715fcu: goto label_2715fc;
        case 0x271600u: goto label_271600;
        case 0x271604u: goto label_271604;
        case 0x271608u: goto label_271608;
        case 0x27160cu: goto label_27160c;
        case 0x271610u: goto label_271610;
        case 0x271614u: goto label_271614;
        case 0x271618u: goto label_271618;
        case 0x27161cu: goto label_27161c;
        case 0x271620u: goto label_271620;
        case 0x271624u: goto label_271624;
        case 0x271628u: goto label_271628;
        case 0x27162cu: goto label_27162c;
        case 0x271630u: goto label_271630;
        case 0x271634u: goto label_271634;
        case 0x271638u: goto label_271638;
        case 0x27163cu: goto label_27163c;
        case 0x271640u: goto label_271640;
        case 0x271644u: goto label_271644;
        case 0x271648u: goto label_271648;
        case 0x27164cu: goto label_27164c;
        case 0x271650u: goto label_271650;
        case 0x271654u: goto label_271654;
        case 0x271658u: goto label_271658;
        case 0x27165cu: goto label_27165c;
        case 0x271660u: goto label_271660;
        case 0x271664u: goto label_271664;
        case 0x271668u: goto label_271668;
        case 0x27166cu: goto label_27166c;
        case 0x271670u: goto label_271670;
        case 0x271674u: goto label_271674;
        case 0x271678u: goto label_271678;
        case 0x27167cu: goto label_27167c;
        case 0x271680u: goto label_271680;
        case 0x271684u: goto label_271684;
        case 0x271688u: goto label_271688;
        case 0x27168cu: goto label_27168c;
        case 0x271690u: goto label_271690;
        case 0x271694u: goto label_271694;
        case 0x271698u: goto label_271698;
        case 0x27169cu: goto label_27169c;
        case 0x2716a0u: goto label_2716a0;
        case 0x2716a4u: goto label_2716a4;
        case 0x2716a8u: goto label_2716a8;
        case 0x2716acu: goto label_2716ac;
        case 0x2716b0u: goto label_2716b0;
        case 0x2716b4u: goto label_2716b4;
        case 0x2716b8u: goto label_2716b8;
        case 0x2716bcu: goto label_2716bc;
        case 0x2716c0u: goto label_2716c0;
        case 0x2716c4u: goto label_2716c4;
        case 0x2716c8u: goto label_2716c8;
        case 0x2716ccu: goto label_2716cc;
        case 0x2716d0u: goto label_2716d0;
        case 0x2716d4u: goto label_2716d4;
        case 0x2716d8u: goto label_2716d8;
        case 0x2716dcu: goto label_2716dc;
        case 0x2716e0u: goto label_2716e0;
        case 0x2716e4u: goto label_2716e4;
        case 0x2716e8u: goto label_2716e8;
        case 0x2716ecu: goto label_2716ec;
        case 0x2716f0u: goto label_2716f0;
        case 0x2716f4u: goto label_2716f4;
        case 0x2716f8u: goto label_2716f8;
        case 0x2716fcu: goto label_2716fc;
        case 0x271700u: goto label_271700;
        case 0x271704u: goto label_271704;
        case 0x271708u: goto label_271708;
        case 0x27170cu: goto label_27170c;
        case 0x271710u: goto label_271710;
        case 0x271714u: goto label_271714;
        case 0x271718u: goto label_271718;
        case 0x27171cu: goto label_27171c;
        case 0x271720u: goto label_271720;
        case 0x271724u: goto label_271724;
        case 0x271728u: goto label_271728;
        case 0x27172cu: goto label_27172c;
        case 0x271730u: goto label_271730;
        case 0x271734u: goto label_271734;
        case 0x271738u: goto label_271738;
        case 0x27173cu: goto label_27173c;
        case 0x271740u: goto label_271740;
        case 0x271744u: goto label_271744;
        case 0x271748u: goto label_271748;
        case 0x27174cu: goto label_27174c;
        case 0x271750u: goto label_271750;
        case 0x271754u: goto label_271754;
        case 0x271758u: goto label_271758;
        case 0x27175cu: goto label_27175c;
        case 0x271760u: goto label_271760;
        case 0x271764u: goto label_271764;
        case 0x271768u: goto label_271768;
        case 0x27176cu: goto label_27176c;
        case 0x271770u: goto label_271770;
        case 0x271774u: goto label_271774;
        case 0x271778u: goto label_271778;
        case 0x27177cu: goto label_27177c;
        case 0x271780u: goto label_271780;
        case 0x271784u: goto label_271784;
        case 0x271788u: goto label_271788;
        case 0x27178cu: goto label_27178c;
        case 0x271790u: goto label_271790;
        case 0x271794u: goto label_271794;
        case 0x271798u: goto label_271798;
        case 0x27179cu: goto label_27179c;
        case 0x2717a0u: goto label_2717a0;
        case 0x2717a4u: goto label_2717a4;
        case 0x2717a8u: goto label_2717a8;
        case 0x2717acu: goto label_2717ac;
        case 0x2717b0u: goto label_2717b0;
        case 0x2717b4u: goto label_2717b4;
        case 0x2717b8u: goto label_2717b8;
        case 0x2717bcu: goto label_2717bc;
        case 0x2717c0u: goto label_2717c0;
        case 0x2717c4u: goto label_2717c4;
        case 0x2717c8u: goto label_2717c8;
        case 0x2717ccu: goto label_2717cc;
        case 0x2717d0u: goto label_2717d0;
        case 0x2717d4u: goto label_2717d4;
        case 0x2717d8u: goto label_2717d8;
        case 0x2717dcu: goto label_2717dc;
        case 0x2717e0u: goto label_2717e0;
        case 0x2717e4u: goto label_2717e4;
        case 0x2717e8u: goto label_2717e8;
        case 0x2717ecu: goto label_2717ec;
        case 0x2717f0u: goto label_2717f0;
        case 0x2717f4u: goto label_2717f4;
        case 0x2717f8u: goto label_2717f8;
        case 0x2717fcu: goto label_2717fc;
        case 0x271800u: goto label_271800;
        case 0x271804u: goto label_271804;
        default: break;
    }

    ctx->pc = 0x271470u;

label_271470:
    // 0x271470: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x271470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_271474:
    // 0x271474: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x271474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_271478:
    // 0x271478: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x271478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27147c:
    // 0x27147c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x27147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_271480:
    // 0x271480: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x271480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_271484:
    // 0x271484: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x271484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_271488:
    // 0x271488: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x271488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27148c:
    // 0x27148c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x27148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_271490:
    // 0x271490: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x271490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_271494:
    // 0x271494: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x271494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_271498:
    // 0x271498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27149c:
    // 0x27149c: 0xc0e409a  jal         func_390268
label_2714a0:
    if (ctx->pc == 0x2714A0u) {
        ctx->pc = 0x2714A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27149Cu;
        // 0x2714a0: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714A4u;
        goto label_2714a4;
    }
    ctx->pc = 0x27149Cu;
    SET_GPR_U32(ctx, 31, 0x2714A4u);
    ctx->pc = 0x2714A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27149Cu;
    // 0x2714a0: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27149Cu, 0x2714A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714A4u;
label_2714a4:
    // 0x2714a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2714a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2714a8:
    // 0x2714a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2714a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2714ac:
    // 0x2714ac: 0xc089998  jal         func_226660
label_2714b0:
    if (ctx->pc == 0x2714B0u) {
        ctx->pc = 0x2714B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714ACu;
        // 0x2714b0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714B4u;
        goto label_2714b4;
    }
    ctx->pc = 0x2714ACu;
    SET_GPR_U32(ctx, 31, 0x2714B4u);
    ctx->pc = 0x2714B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714ACu;
    // 0x2714b0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2714ACu, 0x2714B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714B4u;
label_2714b4:
    // 0x2714b4: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
label_2714b8:
    if (ctx->pc == 0x2714B8u) {
        ctx->pc = 0x2714B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714B4u;
        // 0x2714b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714BCu;
        goto label_2714bc;
    }
    ctx->pc = 0x2714B4u;
    {
        const bool branch_taken_0x2714b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2714B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714B4u;
        // 0x2714b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714b4) {
            ctx->pc = 0x2717E0u;
            goto label_2717e0;
        }
    }
    ctx->pc = 0x2714BCu;
label_2714bc:
    // 0x2714bc: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
label_2714c0:
    if (ctx->pc == 0x2714C0u) {
        ctx->pc = 0x2714C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714BCu;
        // 0x2714c0: 0x3c170056  lui         $s7, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714C4u;
        goto label_2714c4;
    }
    ctx->pc = 0x2714BCu;
    {
        const bool branch_taken_0x2714bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714BCu;
        // 0x2714c0: 0x3c170056  lui         $s7, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714bc) {
            ctx->pc = 0x27162Cu;
            goto label_27162c;
        }
    }
    ctx->pc = 0x2714C4u;
label_2714c4:
    // 0x2714c4: 0xc089fac  jal         func_227EB0
label_2714c8:
    if (ctx->pc == 0x2714C8u) {
        ctx->pc = 0x2714C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714C4u;
        // 0x2714c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714CCu;
        goto label_2714cc;
    }
    ctx->pc = 0x2714C4u;
    SET_GPR_U32(ctx, 31, 0x2714CCu);
    ctx->pc = 0x2714C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714C4u;
    // 0x2714c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2714C4u, 0x2714CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714CCu;
label_2714cc:
    // 0x2714cc: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_2714d0:
    if (ctx->pc == 0x2714D0u) {
        ctx->pc = 0x2714D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714CCu;
        // 0x2714d0: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714D4u;
        goto label_2714d4;
    }
    ctx->pc = 0x2714CCu;
    {
        const bool branch_taken_0x2714cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2714D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714CCu;
        // 0x2714d0: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714cc) {
            ctx->pc = 0x271630u;
            goto label_271630;
        }
    }
    ctx->pc = 0x2714D4u;
label_2714d4:
    // 0x2714d4: 0xc089f76  jal         func_227DD8
label_2714d8:
    if (ctx->pc == 0x2714D8u) {
        ctx->pc = 0x2714D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714D4u;
        // 0x2714d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714DCu;
        goto label_2714dc;
    }
    ctx->pc = 0x2714D4u;
    SET_GPR_U32(ctx, 31, 0x2714DCu);
    ctx->pc = 0x2714D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714D4u;
    // 0x2714d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2714D4u, 0x2714DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714DCu;
label_2714dc:
    // 0x2714dc: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_2714e0:
    if (ctx->pc == 0x2714E0u) {
        ctx->pc = 0x2714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714DCu;
        // 0x2714e0: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714E4u;
        goto label_2714e4;
    }
    ctx->pc = 0x2714DCu;
    {
        const bool branch_taken_0x2714dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714DCu;
        // 0x2714e0: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714dc) {
            ctx->pc = 0x271630u;
            goto label_271630;
        }
    }
    ctx->pc = 0x2714E4u;
label_2714e4:
    // 0x2714e4: 0xc089f86  jal         func_227E18
label_2714e8:
    if (ctx->pc == 0x2714E8u) {
        ctx->pc = 0x2714E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714E4u;
        // 0x2714e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714ECu;
        goto label_2714ec;
    }
    ctx->pc = 0x2714E4u;
    SET_GPR_U32(ctx, 31, 0x2714ECu);
    ctx->pc = 0x2714E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714E4u;
    // 0x2714e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x2714E4u, 0x2714ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714ECu;
label_2714ec:
    // 0x2714ec: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_2714f0:
    if (ctx->pc == 0x2714F0u) {
        ctx->pc = 0x2714F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714ECu;
        // 0x2714f0: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2714F4u;
        goto label_2714f4;
    }
    ctx->pc = 0x2714ECu;
    {
        const bool branch_taken_0x2714ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2714F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714ECu;
        // 0x2714f0: 0x26f0e250  addiu       $s0, $s7, -0x1DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714ec) {
            ctx->pc = 0x271630u;
            goto label_271630;
        }
    }
    ctx->pc = 0x2714F4u;
label_2714f4:
    // 0x2714f4: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x2714f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2714f8:
    // 0x2714f8: 0xc041532  jal         func_1054C8
label_2714fc:
    if (ctx->pc == 0x2714FCu) {
        ctx->pc = 0x2714FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714F8u;
        // 0x2714fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271500u;
        goto label_271500;
    }
    ctx->pc = 0x2714F8u;
    SET_GPR_U32(ctx, 31, 0x271500u);
    ctx->pc = 0x2714FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714F8u;
    // 0x2714fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2714F8u, 0x271500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271500u;
label_271500:
    // 0x271500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271504:
    // 0x271504: 0xc041532  jal         func_1054C8
label_271508:
    if (ctx->pc == 0x271508u) {
        ctx->pc = 0x271508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271504u;
        // 0x271508: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27150Cu;
        goto label_27150c;
    }
    ctx->pc = 0x271504u;
    SET_GPR_U32(ctx, 31, 0x27150Cu);
    ctx->pc = 0x271508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271504u;
    // 0x271508: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271504u, 0x27150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27150Cu;
label_27150c:
    // 0x27150c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271510:
    // 0x271510: 0xc041532  jal         func_1054C8
label_271514:
    if (ctx->pc == 0x271514u) {
        ctx->pc = 0x271514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271510u;
        // 0x271514: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271518u;
        goto label_271518;
    }
    ctx->pc = 0x271510u;
    SET_GPR_U32(ctx, 31, 0x271518u);
    ctx->pc = 0x271514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271510u;
    // 0x271514: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271510u, 0x271518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271518u;
label_271518:
    // 0x271518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27151c:
    // 0x27151c: 0xc095018  jal         func_254060
label_271520:
    if (ctx->pc == 0x271520u) {
        ctx->pc = 0x271520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27151Cu;
        // 0x271520: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271524u;
        goto label_271524;
    }
    ctx->pc = 0x27151Cu;
    SET_GPR_U32(ctx, 31, 0x271524u);
    ctx->pc = 0x271520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27151Cu;
    // 0x271520: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x27151Cu, 0x271524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271524u;
label_271524:
    // 0x271524: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x271524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271528:
    // 0x271528: 0xc094fca  jal         func_253F28
label_27152c:
    if (ctx->pc == 0x27152Cu) {
        ctx->pc = 0x27152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271528u;
        // 0x27152c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271530u;
        goto label_271530;
    }
    ctx->pc = 0x271528u;
    SET_GPR_U32(ctx, 31, 0x271530u);
    ctx->pc = 0x27152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271528u;
    // 0x27152c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x271528u, 0x271530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271530u;
label_271530:
    // 0x271530: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_271534:
    if (ctx->pc == 0x271534u) {
        ctx->pc = 0x271534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271530u;
        // 0x271534: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271538u;
        goto label_271538;
    }
    ctx->pc = 0x271530u;
    {
        const bool branch_taken_0x271530 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271530u;
        // 0x271534: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271530) {
            ctx->pc = 0x271558u;
            goto label_271558;
        }
    }
    ctx->pc = 0x271538u;
label_271538:
    // 0x271538: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x271538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27153c:
    // 0x27153c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x27153cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_271540:
    // 0x271540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271544:
    // 0x271544: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x271544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_271548:
    // 0x271548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27154c:
    // 0x27154c: 0xc04159e  jal         func_105678
label_271550:
    if (ctx->pc == 0x271550u) {
        ctx->pc = 0x271550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27154Cu;
        // 0x271550: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271554u;
        goto label_271554;
    }
    ctx->pc = 0x27154Cu;
    SET_GPR_U32(ctx, 31, 0x271554u);
    ctx->pc = 0x271550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27154Cu;
    // 0x271550: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x27154Cu, 0x271554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271554u;
label_271554:
    // 0x271554: 0x0  nop
    ctx->pc = 0x271554u;
    // NOP
label_271558:
    // 0x271558: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x271558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_27155c:
    // 0x27155c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x27155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_271560:
    // 0x271560: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
label_271564:
    if (ctx->pc == 0x271564u) {
        ctx->pc = 0x271564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271560u;
        // 0x271564: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271568u;
        goto label_271568;
    }
    ctx->pc = 0x271560u;
    {
        const bool branch_taken_0x271560 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x271564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271560u;
        // 0x271564: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271560) {
            ctx->pc = 0x2715ACu;
            goto label_2715ac;
        }
    }
    ctx->pc = 0x271568u;
label_271568:
    // 0x271568: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x271568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27156c:
    // 0x27156c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x27156cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271570:
    // 0x271570: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271574:
    // 0x271574: 0x40f809  jalr        $v0
label_271578:
    if (ctx->pc == 0x271578u) {
        ctx->pc = 0x271578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271574u;
        // 0x271578: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27157Cu;
        goto label_27157c;
    }
    ctx->pc = 0x271574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27157Cu);
        ctx->pc = 0x271578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271574u;
        // 0x271578: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271574u, 0x27157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27157Cu;
label_27157c:
    // 0x27157c: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x27157cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_271580:
    // 0x271580: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x271580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_271584:
    // 0x271584: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x271584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_271588:
    // 0x271588: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27158c:
    // 0x27158c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27158cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271590:
    // 0x271590: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x271590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271594:
    // 0x271594: 0x254a0fc0  addiu       $t2, $t2, 0xFC0
    ctx->pc = 0x271594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4032));
label_271598:
    // 0x271598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27159c:
    // 0x27159c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27159cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2715a0:
    // 0x2715a0: 0x240600f6  addiu       $a2, $zero, 0xF6
    ctx->pc = 0x2715a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
label_2715a4:
    // 0x2715a4: 0xc041664  jal         func_105990
label_2715a8:
    if (ctx->pc == 0x2715A8u) {
        ctx->pc = 0x2715A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715A4u;
        // 0x2715a8: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2715ACu;
        goto label_2715ac;
    }
    ctx->pc = 0x2715A4u;
    SET_GPR_U32(ctx, 31, 0x2715ACu);
    ctx->pc = 0x2715A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715A4u;
    // 0x2715a8: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2715A4u, 0x2715ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715ACu;
label_2715ac:
    // 0x2715ac: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2715b0:
    if (ctx->pc == 0x2715B0u) {
        ctx->pc = 0x2715B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715ACu;
        // 0x2715b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2715B4u;
        goto label_2715b4;
    }
    ctx->pc = 0x2715ACu;
    {
        const bool branch_taken_0x2715ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715ACu;
        // 0x2715b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715ac) {
            ctx->pc = 0x2715D4u;
            goto label_2715d4;
        }
    }
    ctx->pc = 0x2715B4u;
label_2715b4:
    // 0x2715b4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2715b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2715b8:
    // 0x2715b8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2715b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2715bc:
    // 0x2715bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2715bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2715c0:
    // 0x2715c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2715c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2715c4:
    // 0x2715c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2715c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2715c8:
    // 0x2715c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2715c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2715cc:
    // 0x2715cc: 0xc041b20  jal         func_106C80
label_2715d0:
    if (ctx->pc == 0x2715D0u) {
        ctx->pc = 0x2715D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715CCu;
        // 0x2715d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2715D4u;
        goto label_2715d4;
    }
    ctx->pc = 0x2715CCu;
    SET_GPR_U32(ctx, 31, 0x2715D4u);
    ctx->pc = 0x2715D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715CCu;
    // 0x2715d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2715CCu, 0x2715D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715D4u;
label_2715d4:
    // 0x2715d4: 0xc05d484  jal         func_175210
label_2715d8:
    if (ctx->pc == 0x2715D8u) {
        ctx->pc = 0x2715D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715D4u;
        // 0x2715d8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2715DCu;
        goto label_2715dc;
    }
    ctx->pc = 0x2715D4u;
    SET_GPR_U32(ctx, 31, 0x2715DCu);
    ctx->pc = 0x2715D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715D4u;
    // 0x2715d8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2715D4u, 0x2715DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715DCu;
label_2715dc:
    // 0x2715dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2715dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2715e0:
    // 0x2715e0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2715e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2715e4:
    // 0x2715e4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2715e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2715e8:
    // 0x2715e8: 0xa0f809  jalr        $a1
label_2715ec:
    if (ctx->pc == 0x2715ECu) {
        ctx->pc = 0x2715ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715E8u;
        // 0x2715ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2715F0u;
        goto label_2715f0;
    }
    ctx->pc = 0x2715E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2715F0u);
        ctx->pc = 0x2715ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715E8u;
        // 0x2715ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2715E8u, 0x2715F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2715F0u;
label_2715f0:
    // 0x2715f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2715f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2715f4:
    // 0x2715f4: 0xc087016  jal         func_21C058
label_2715f8:
    if (ctx->pc == 0x2715F8u) {
        ctx->pc = 0x2715F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715F4u;
        // 0x2715f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2715FCu;
        goto label_2715fc;
    }
    ctx->pc = 0x2715F4u;
    SET_GPR_U32(ctx, 31, 0x2715FCu);
    ctx->pc = 0x2715F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715F4u;
    // 0x2715f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2715F4u, 0x2715FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2715FCu;
label_2715fc:
    // 0x2715fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2715fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271600:
    // 0x271600: 0xc094fb4  jal         func_253ED0
label_271604:
    if (ctx->pc == 0x271604u) {
        ctx->pc = 0x271604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271600u;
        // 0x271604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271608u;
        goto label_271608;
    }
    ctx->pc = 0x271600u;
    SET_GPR_U32(ctx, 31, 0x271608u);
    ctx->pc = 0x271604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271600u;
    // 0x271604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x271600u, 0x271608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271608u;
label_271608:
    // 0x271608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27160c:
    // 0x27160c: 0xc089990  jal         func_226640
label_271610:
    if (ctx->pc == 0x271610u) {
        ctx->pc = 0x271610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27160Cu;
        // 0x271610: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271614u;
        goto label_271614;
    }
    ctx->pc = 0x27160Cu;
    SET_GPR_U32(ctx, 31, 0x271614u);
    ctx->pc = 0x271610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27160Cu;
    // 0x271610: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x27160Cu, 0x271614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271614u;
label_271614:
    // 0x271614: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x271614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_271618:
    // 0x271618: 0xc05d53a  jal         func_1754E8
label_27161c:
    if (ctx->pc == 0x27161Cu) {
        ctx->pc = 0x27161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271618u;
        // 0x27161c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271620u;
        goto label_271620;
    }
    ctx->pc = 0x271618u;
    SET_GPR_U32(ctx, 31, 0x271620u);
    ctx->pc = 0x27161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271618u;
    // 0x27161c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x271618u, 0x271620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271620u;
label_271620:
    // 0x271620: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271624:
    // 0x271624: 0xc05d4f6  jal         func_1753D8
label_271628:
    if (ctx->pc == 0x271628u) {
        ctx->pc = 0x271628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271624u;
        // 0x271628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27162Cu;
        goto label_27162c;
    }
    ctx->pc = 0x271624u;
    SET_GPR_U32(ctx, 31, 0x27162Cu);
    ctx->pc = 0x271628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271624u;
    // 0x271628: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x271624u, 0x27162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27162Cu;
label_27162c:
    // 0x27162c: 0x26f0e250  addiu       $s0, $s7, -0x1DB0
    ctx->pc = 0x27162cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959696));
label_271630:
    // 0x271630: 0x8e5500d8  lw          $s5, 0xD8($s2)
    ctx->pc = 0x271630u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_271634:
    // 0x271634: 0xc041532  jal         func_1054C8
label_271638:
    if (ctx->pc == 0x271638u) {
        ctx->pc = 0x271638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271634u;
        // 0x271638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27163Cu;
        goto label_27163c;
    }
    ctx->pc = 0x271634u;
    SET_GPR_U32(ctx, 31, 0x27163Cu);
    ctx->pc = 0x271638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271634u;
    // 0x271638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271634u, 0x27163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27163Cu;
label_27163c:
    // 0x27163c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271640:
    // 0x271640: 0xc041532  jal         func_1054C8
label_271644:
    if (ctx->pc == 0x271644u) {
        ctx->pc = 0x271644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271640u;
        // 0x271644: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271648u;
        goto label_271648;
    }
    ctx->pc = 0x271640u;
    SET_GPR_U32(ctx, 31, 0x271648u);
    ctx->pc = 0x271644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271640u;
    // 0x271644: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x271640u, 0x271648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271648u;
label_271648:
    // 0x271648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27164c:
    // 0x27164c: 0xc041532  jal         func_1054C8
label_271650:
    if (ctx->pc == 0x271650u) {
        ctx->pc = 0x271650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27164Cu;
        // 0x271650: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271654u;
        goto label_271654;
    }
    ctx->pc = 0x27164Cu;
    SET_GPR_U32(ctx, 31, 0x271654u);
    ctx->pc = 0x271650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27164Cu;
    // 0x271650: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27164Cu, 0x271654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271654u;
label_271654:
    // 0x271654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271658:
    // 0x271658: 0xc095018  jal         func_254060
label_27165c:
    if (ctx->pc == 0x27165Cu) {
        ctx->pc = 0x27165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271658u;
        // 0x27165c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271660u;
        goto label_271660;
    }
    ctx->pc = 0x271658u;
    SET_GPR_U32(ctx, 31, 0x271660u);
    ctx->pc = 0x27165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271658u;
    // 0x27165c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x271658u, 0x271660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271660u;
label_271660:
    // 0x271660: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x271660u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271664:
    // 0x271664: 0xc094fca  jal         func_253F28
label_271668:
    if (ctx->pc == 0x271668u) {
        ctx->pc = 0x271668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271664u;
        // 0x271668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27166Cu;
        goto label_27166c;
    }
    ctx->pc = 0x271664u;
    SET_GPR_U32(ctx, 31, 0x27166Cu);
    ctx->pc = 0x271668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271664u;
    // 0x271668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x271664u, 0x27166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27166Cu;
label_27166c:
    // 0x27166c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_271670:
    if (ctx->pc == 0x271670u) {
        ctx->pc = 0x271670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27166Cu;
        // 0x271670: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271674u;
        goto label_271674;
    }
    ctx->pc = 0x27166Cu;
    {
        const bool branch_taken_0x27166c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x271670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27166Cu;
        // 0x271670: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27166c) {
            ctx->pc = 0x271690u;
            goto label_271690;
        }
    }
    ctx->pc = 0x271674u;
label_271674:
    // 0x271674: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x271674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_271678:
    // 0x271678: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27167c:
    // 0x27167c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271680:
    // 0x271680: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x271680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_271684:
    // 0x271684: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x271684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271688:
    // 0x271688: 0xc04159e  jal         func_105678
label_27168c:
    if (ctx->pc == 0x27168Cu) {
        ctx->pc = 0x27168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271688u;
        // 0x27168c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271690u;
        goto label_271690;
    }
    ctx->pc = 0x271688u;
    SET_GPR_U32(ctx, 31, 0x271690u);
    ctx->pc = 0x27168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271688u;
    // 0x27168c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x271688u, 0x271690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271690u;
label_271690:
    // 0x271690: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x271690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_271694:
    // 0x271694: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x271694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_271698:
    // 0x271698: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_27169c:
    if (ctx->pc == 0x27169Cu) {
        ctx->pc = 0x27169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271698u;
        // 0x27169c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2716A0u;
        goto label_2716a0;
    }
    ctx->pc = 0x271698u;
    {
        const bool branch_taken_0x271698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271698u;
        // 0x27169c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271698) {
            ctx->pc = 0x271710u;
            goto label_271710;
        }
    }
    ctx->pc = 0x2716A0u;
label_2716a0:
    // 0x2716a0: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
label_2716a4:
    if (ctx->pc == 0x2716A4u) {
        ctx->pc = 0x2716A8u;
        goto label_2716a8;
    }
    ctx->pc = 0x2716A0u;
    {
        const bool branch_taken_0x2716a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716a0) {
            ctx->pc = 0x27175Cu;
            goto label_27175c;
        }
    }
    ctx->pc = 0x2716A8u;
label_2716a8:
    // 0x2716a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2716a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2716ac:
    // 0x2716ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2716acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2716b0:
    // 0x2716b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2716b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2716b4:
    // 0x2716b4: 0x40f809  jalr        $v0
label_2716b8:
    if (ctx->pc == 0x2716B8u) {
        ctx->pc = 0x2716B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716B4u;
        // 0x2716b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2716BCu;
        goto label_2716bc;
    }
    ctx->pc = 0x2716B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2716BCu);
        ctx->pc = 0x2716B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716B4u;
        // 0x2716b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2716B4u, 0x2716BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2716BCu;
label_2716bc:
    // 0x2716bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2716bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2716c0:
    // 0x2716c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2716c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2716c4:
    // 0x2716c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2716c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2716c8:
    // 0x2716c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2716c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2716cc:
    // 0x2716cc: 0x40f809  jalr        $v0
label_2716d0:
    if (ctx->pc == 0x2716D0u) {
        ctx->pc = 0x2716D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716CCu;
        // 0x2716d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2716D4u;
        goto label_2716d4;
    }
    ctx->pc = 0x2716CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2716D4u);
        ctx->pc = 0x2716D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716CCu;
        // 0x2716d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2716CCu, 0x2716D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2716D4u;
label_2716d4:
    // 0x2716d4: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x2716d4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_2716d8:
    // 0x2716d8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2716d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2716dc:
    // 0x2716dc: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2716dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2716e0:
    // 0x2716e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2716e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2716e4:
    // 0x2716e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2716e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2716e8:
    // 0x2716e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2716e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2716ec:
    // 0x2716ec: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2716ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2716f0:
    // 0x2716f0: 0x256b0f88  addiu       $t3, $t3, 0xF88
    ctx->pc = 0x2716f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3976));
label_2716f4:
    // 0x2716f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2716f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2716f8:
    // 0x2716f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2716f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2716fc:
    // 0x2716fc: 0x240700f7  addiu       $a3, $zero, 0xF7
    ctx->pc = 0x2716fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
label_271700:
    // 0x271700: 0xc04229e  jal         func_108A78
label_271704:
    if (ctx->pc == 0x271704u) {
        ctx->pc = 0x271704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271700u;
        // 0x271704: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271708u;
        goto label_271708;
    }
    ctx->pc = 0x271700u;
    SET_GPR_U32(ctx, 31, 0x271708u);
    ctx->pc = 0x271704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271700u;
    // 0x271704: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x271700u, 0x271708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271708u;
label_271708:
    // 0x271708: 0x10000014  b           . + 4 + (0x14 << 2)
label_27170c:
    if (ctx->pc == 0x27170Cu) {
        ctx->pc = 0x271710u;
        goto label_271710;
    }
    ctx->pc = 0x271708u;
    {
        const bool branch_taken_0x271708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271708) {
            ctx->pc = 0x27175Cu;
            goto label_27175c;
        }
    }
    ctx->pc = 0x271710u;
label_271710:
    // 0x271710: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
label_271714:
    if (ctx->pc == 0x271714u) {
        ctx->pc = 0x271718u;
        goto label_271718;
    }
    ctx->pc = 0x271710u;
    {
        const bool branch_taken_0x271710 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x271710) {
            ctx->pc = 0x27175Cu;
            goto label_27175c;
        }
    }
    ctx->pc = 0x271718u;
label_271718:
    // 0x271718: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x271718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27171c:
    // 0x27171c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x27171cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_271720:
    // 0x271720: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x271720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_271724:
    // 0x271724: 0x40f809  jalr        $v0
label_271728:
    if (ctx->pc == 0x271728u) {
        ctx->pc = 0x271728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271724u;
        // 0x271728: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27172Cu;
        goto label_27172c;
    }
    ctx->pc = 0x271724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27172Cu);
        ctx->pc = 0x271728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271724u;
        // 0x271728: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271724u, 0x27172Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27172Cu;
label_27172c:
    // 0x27172c: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x27172cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_271730:
    // 0x271730: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x271730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_271734:
    // 0x271734: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x271734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_271738:
    // 0x271738: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27173c:
    // 0x27173c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x27173cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271740:
    // 0x271740: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x271740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271744:
    // 0x271744: 0x254a0f88  addiu       $t2, $t2, 0xF88
    ctx->pc = 0x271744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3976));
label_271748:
    // 0x271748: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x271748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27174c:
    // 0x27174c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271750:
    // 0x271750: 0x240600f7  addiu       $a2, $zero, 0xF7
    ctx->pc = 0x271750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
label_271754:
    // 0x271754: 0xc041664  jal         func_105990
label_271758:
    if (ctx->pc == 0x271758u) {
        ctx->pc = 0x271758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271754u;
        // 0x271758: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27175Cu;
        goto label_27175c;
    }
    ctx->pc = 0x271754u;
    SET_GPR_U32(ctx, 31, 0x27175Cu);
    ctx->pc = 0x271758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271754u;
    // 0x271758: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x271754u, 0x27175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27175Cu;
label_27175c:
    // 0x27175c: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_271760:
    if (ctx->pc == 0x271760u) {
        ctx->pc = 0x271760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27175Cu;
        // 0x271760: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271764u;
        goto label_271764;
    }
    ctx->pc = 0x27175Cu;
    {
        const bool branch_taken_0x27175c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x271760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27175Cu;
        // 0x271760: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27175c) {
            ctx->pc = 0x271784u;
            goto label_271784;
        }
    }
    ctx->pc = 0x271764u;
label_271764:
    // 0x271764: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x271764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_271768:
    // 0x271768: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x271768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27176c:
    // 0x27176c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271770:
    // 0x271770: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x271770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_271774:
    // 0x271774: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_271778:
    // 0x271778: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x271778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27177c:
    // 0x27177c: 0xc041b20  jal         func_106C80
label_271780:
    if (ctx->pc == 0x271780u) {
        ctx->pc = 0x271780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27177Cu;
        // 0x271780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271784u;
        goto label_271784;
    }
    ctx->pc = 0x27177Cu;
    SET_GPR_U32(ctx, 31, 0x271784u);
    ctx->pc = 0x271780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27177Cu;
    // 0x271780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x27177Cu, 0x271784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271784u;
label_271784:
    // 0x271784: 0xc05d484  jal         func_175210
label_271788:
    if (ctx->pc == 0x271788u) {
        ctx->pc = 0x271788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271784u;
        // 0x271788: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27178Cu;
        goto label_27178c;
    }
    ctx->pc = 0x271784u;
    SET_GPR_U32(ctx, 31, 0x27178Cu);
    ctx->pc = 0x271788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271784u;
    // 0x271788: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x271784u, 0x27178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27178Cu;
label_27178c:
    // 0x27178c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_271790:
    // 0x271790: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x271790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_271794:
    // 0x271794: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x271794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_271798:
    // 0x271798: 0xa0f809  jalr        $a1
label_27179c:
    if (ctx->pc == 0x27179Cu) {
        ctx->pc = 0x27179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271798u;
        // 0x27179c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2717A0u;
        goto label_2717a0;
    }
    ctx->pc = 0x271798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2717A0u);
        ctx->pc = 0x27179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271798u;
        // 0x27179c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271798u, 0x2717A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2717A0u;
label_2717a0:
    // 0x2717a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2717a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2717a4:
    // 0x2717a4: 0xc087016  jal         func_21C058
label_2717a8:
    if (ctx->pc == 0x2717A8u) {
        ctx->pc = 0x2717A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717A4u;
        // 0x2717a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2717ACu;
        goto label_2717ac;
    }
    ctx->pc = 0x2717A4u;
    SET_GPR_U32(ctx, 31, 0x2717ACu);
    ctx->pc = 0x2717A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717A4u;
    // 0x2717a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2717A4u, 0x2717ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717ACu;
label_2717ac:
    // 0x2717ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2717acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2717b0:
    // 0x2717b0: 0xc094fb4  jal         func_253ED0
label_2717b4:
    if (ctx->pc == 0x2717B4u) {
        ctx->pc = 0x2717B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717B0u;
        // 0x2717b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2717B8u;
        goto label_2717b8;
    }
    ctx->pc = 0x2717B0u;
    SET_GPR_U32(ctx, 31, 0x2717B8u);
    ctx->pc = 0x2717B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717B0u;
    // 0x2717b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x2717B0u, 0x2717B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717B8u;
label_2717b8:
    // 0x2717b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2717b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2717bc:
    // 0x2717bc: 0xc089990  jal         func_226640
label_2717c0:
    if (ctx->pc == 0x2717C0u) {
        ctx->pc = 0x2717C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717BCu;
        // 0x2717c0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2717C4u;
        goto label_2717c4;
    }
    ctx->pc = 0x2717BCu;
    SET_GPR_U32(ctx, 31, 0x2717C4u);
    ctx->pc = 0x2717C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717BCu;
    // 0x2717c0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2717BCu, 0x2717C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717C4u;
label_2717c4:
    // 0x2717c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2717c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2717c8:
    // 0x2717c8: 0xc05d53a  jal         func_1754E8
label_2717cc:
    if (ctx->pc == 0x2717CCu) {
        ctx->pc = 0x2717CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717C8u;
        // 0x2717cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2717D0u;
        goto label_2717d0;
    }
    ctx->pc = 0x2717C8u;
    SET_GPR_U32(ctx, 31, 0x2717D0u);
    ctx->pc = 0x2717CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717C8u;
    // 0x2717cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2717C8u, 0x2717D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717D0u;
label_2717d0:
    // 0x2717d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2717d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2717d4:
    // 0x2717d4: 0xc05d4f6  jal         func_1753D8
label_2717d8:
    if (ctx->pc == 0x2717D8u) {
        ctx->pc = 0x2717D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717D4u;
        // 0x2717d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2717DCu;
        goto label_2717dc;
    }
    ctx->pc = 0x2717D4u;
    SET_GPR_U32(ctx, 31, 0x2717DCu);
    ctx->pc = 0x2717D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717D4u;
    // 0x2717d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2717D4u, 0x2717DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717DCu;
label_2717dc:
    // 0x2717dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2717dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2717e0:
    // 0x2717e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2717e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2717e4:
    // 0x2717e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2717e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2717e8:
    // 0x2717e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2717e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2717ec:
    // 0x2717ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2717ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2717f0:
    // 0x2717f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2717f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2717f4:
    // 0x2717f4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2717f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2717f8:
    // 0x2717f8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2717f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2717fc:
    // 0x2717fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2717fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_271800:
    // 0x271800: 0x3e00008  jr          $ra
label_271804:
    if (ctx->pc == 0x271804u) {
        ctx->pc = 0x271804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271800u;
        // 0x271804: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271808u;
        goto label_fallthrough_0x271800;
    }
    ctx->pc = 0x271800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271800u;
        // 0x271804: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x271800:
    ctx->pc = 0x271808u;
}
