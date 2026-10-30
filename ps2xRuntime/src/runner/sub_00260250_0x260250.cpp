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

// Function: sub_00260250
// Address: 0x260250 - 0x2605f0
void sub_00260250_0x260250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260250_0x260250");
#endif

    switch (ctx->pc) {
        case 0x260250u: goto label_260250;
        case 0x260254u: goto label_260254;
        case 0x260258u: goto label_260258;
        case 0x26025cu: goto label_26025c;
        case 0x260260u: goto label_260260;
        case 0x260264u: goto label_260264;
        case 0x260268u: goto label_260268;
        case 0x26026cu: goto label_26026c;
        case 0x260270u: goto label_260270;
        case 0x260274u: goto label_260274;
        case 0x260278u: goto label_260278;
        case 0x26027cu: goto label_26027c;
        case 0x260280u: goto label_260280;
        case 0x260284u: goto label_260284;
        case 0x260288u: goto label_260288;
        case 0x26028cu: goto label_26028c;
        case 0x260290u: goto label_260290;
        case 0x260294u: goto label_260294;
        case 0x260298u: goto label_260298;
        case 0x26029cu: goto label_26029c;
        case 0x2602a0u: goto label_2602a0;
        case 0x2602a4u: goto label_2602a4;
        case 0x2602a8u: goto label_2602a8;
        case 0x2602acu: goto label_2602ac;
        case 0x2602b0u: goto label_2602b0;
        case 0x2602b4u: goto label_2602b4;
        case 0x2602b8u: goto label_2602b8;
        case 0x2602bcu: goto label_2602bc;
        case 0x2602c0u: goto label_2602c0;
        case 0x2602c4u: goto label_2602c4;
        case 0x2602c8u: goto label_2602c8;
        case 0x2602ccu: goto label_2602cc;
        case 0x2602d0u: goto label_2602d0;
        case 0x2602d4u: goto label_2602d4;
        case 0x2602d8u: goto label_2602d8;
        case 0x2602dcu: goto label_2602dc;
        case 0x2602e0u: goto label_2602e0;
        case 0x2602e4u: goto label_2602e4;
        case 0x2602e8u: goto label_2602e8;
        case 0x2602ecu: goto label_2602ec;
        case 0x2602f0u: goto label_2602f0;
        case 0x2602f4u: goto label_2602f4;
        case 0x2602f8u: goto label_2602f8;
        case 0x2602fcu: goto label_2602fc;
        case 0x260300u: goto label_260300;
        case 0x260304u: goto label_260304;
        case 0x260308u: goto label_260308;
        case 0x26030cu: goto label_26030c;
        case 0x260310u: goto label_260310;
        case 0x260314u: goto label_260314;
        case 0x260318u: goto label_260318;
        case 0x26031cu: goto label_26031c;
        case 0x260320u: goto label_260320;
        case 0x260324u: goto label_260324;
        case 0x260328u: goto label_260328;
        case 0x26032cu: goto label_26032c;
        case 0x260330u: goto label_260330;
        case 0x260334u: goto label_260334;
        case 0x260338u: goto label_260338;
        case 0x26033cu: goto label_26033c;
        case 0x260340u: goto label_260340;
        case 0x260344u: goto label_260344;
        case 0x260348u: goto label_260348;
        case 0x26034cu: goto label_26034c;
        case 0x260350u: goto label_260350;
        case 0x260354u: goto label_260354;
        case 0x260358u: goto label_260358;
        case 0x26035cu: goto label_26035c;
        case 0x260360u: goto label_260360;
        case 0x260364u: goto label_260364;
        case 0x260368u: goto label_260368;
        case 0x26036cu: goto label_26036c;
        case 0x260370u: goto label_260370;
        case 0x260374u: goto label_260374;
        case 0x260378u: goto label_260378;
        case 0x26037cu: goto label_26037c;
        case 0x260380u: goto label_260380;
        case 0x260384u: goto label_260384;
        case 0x260388u: goto label_260388;
        case 0x26038cu: goto label_26038c;
        case 0x260390u: goto label_260390;
        case 0x260394u: goto label_260394;
        case 0x260398u: goto label_260398;
        case 0x26039cu: goto label_26039c;
        case 0x2603a0u: goto label_2603a0;
        case 0x2603a4u: goto label_2603a4;
        case 0x2603a8u: goto label_2603a8;
        case 0x2603acu: goto label_2603ac;
        case 0x2603b0u: goto label_2603b0;
        case 0x2603b4u: goto label_2603b4;
        case 0x2603b8u: goto label_2603b8;
        case 0x2603bcu: goto label_2603bc;
        case 0x2603c0u: goto label_2603c0;
        case 0x2603c4u: goto label_2603c4;
        case 0x2603c8u: goto label_2603c8;
        case 0x2603ccu: goto label_2603cc;
        case 0x2603d0u: goto label_2603d0;
        case 0x2603d4u: goto label_2603d4;
        case 0x2603d8u: goto label_2603d8;
        case 0x2603dcu: goto label_2603dc;
        case 0x2603e0u: goto label_2603e0;
        case 0x2603e4u: goto label_2603e4;
        case 0x2603e8u: goto label_2603e8;
        case 0x2603ecu: goto label_2603ec;
        case 0x2603f0u: goto label_2603f0;
        case 0x2603f4u: goto label_2603f4;
        case 0x2603f8u: goto label_2603f8;
        case 0x2603fcu: goto label_2603fc;
        case 0x260400u: goto label_260400;
        case 0x260404u: goto label_260404;
        case 0x260408u: goto label_260408;
        case 0x26040cu: goto label_26040c;
        case 0x260410u: goto label_260410;
        case 0x260414u: goto label_260414;
        case 0x260418u: goto label_260418;
        case 0x26041cu: goto label_26041c;
        case 0x260420u: goto label_260420;
        case 0x260424u: goto label_260424;
        case 0x260428u: goto label_260428;
        case 0x26042cu: goto label_26042c;
        case 0x260430u: goto label_260430;
        case 0x260434u: goto label_260434;
        case 0x260438u: goto label_260438;
        case 0x26043cu: goto label_26043c;
        case 0x260440u: goto label_260440;
        case 0x260444u: goto label_260444;
        case 0x260448u: goto label_260448;
        case 0x26044cu: goto label_26044c;
        case 0x260450u: goto label_260450;
        case 0x260454u: goto label_260454;
        case 0x260458u: goto label_260458;
        case 0x26045cu: goto label_26045c;
        case 0x260460u: goto label_260460;
        case 0x260464u: goto label_260464;
        case 0x260468u: goto label_260468;
        case 0x26046cu: goto label_26046c;
        case 0x260470u: goto label_260470;
        case 0x260474u: goto label_260474;
        case 0x260478u: goto label_260478;
        case 0x26047cu: goto label_26047c;
        case 0x260480u: goto label_260480;
        case 0x260484u: goto label_260484;
        case 0x260488u: goto label_260488;
        case 0x26048cu: goto label_26048c;
        case 0x260490u: goto label_260490;
        case 0x260494u: goto label_260494;
        case 0x260498u: goto label_260498;
        case 0x26049cu: goto label_26049c;
        case 0x2604a0u: goto label_2604a0;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604a8u: goto label_2604a8;
        case 0x2604acu: goto label_2604ac;
        case 0x2604b0u: goto label_2604b0;
        case 0x2604b4u: goto label_2604b4;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604bcu: goto label_2604bc;
        case 0x2604c0u: goto label_2604c0;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604ccu: goto label_2604cc;
        case 0x2604d0u: goto label_2604d0;
        case 0x2604d4u: goto label_2604d4;
        case 0x2604d8u: goto label_2604d8;
        case 0x2604dcu: goto label_2604dc;
        case 0x2604e0u: goto label_2604e0;
        case 0x2604e4u: goto label_2604e4;
        case 0x2604e8u: goto label_2604e8;
        case 0x2604ecu: goto label_2604ec;
        case 0x2604f0u: goto label_2604f0;
        case 0x2604f4u: goto label_2604f4;
        case 0x2604f8u: goto label_2604f8;
        case 0x2604fcu: goto label_2604fc;
        case 0x260500u: goto label_260500;
        case 0x260504u: goto label_260504;
        case 0x260508u: goto label_260508;
        case 0x26050cu: goto label_26050c;
        case 0x260510u: goto label_260510;
        case 0x260514u: goto label_260514;
        case 0x260518u: goto label_260518;
        case 0x26051cu: goto label_26051c;
        case 0x260520u: goto label_260520;
        case 0x260524u: goto label_260524;
        case 0x260528u: goto label_260528;
        case 0x26052cu: goto label_26052c;
        case 0x260530u: goto label_260530;
        case 0x260534u: goto label_260534;
        case 0x260538u: goto label_260538;
        case 0x26053cu: goto label_26053c;
        case 0x260540u: goto label_260540;
        case 0x260544u: goto label_260544;
        case 0x260548u: goto label_260548;
        case 0x26054cu: goto label_26054c;
        case 0x260550u: goto label_260550;
        case 0x260554u: goto label_260554;
        case 0x260558u: goto label_260558;
        case 0x26055cu: goto label_26055c;
        case 0x260560u: goto label_260560;
        case 0x260564u: goto label_260564;
        case 0x260568u: goto label_260568;
        case 0x26056cu: goto label_26056c;
        case 0x260570u: goto label_260570;
        case 0x260574u: goto label_260574;
        case 0x260578u: goto label_260578;
        case 0x26057cu: goto label_26057c;
        case 0x260580u: goto label_260580;
        case 0x260584u: goto label_260584;
        case 0x260588u: goto label_260588;
        case 0x26058cu: goto label_26058c;
        case 0x260590u: goto label_260590;
        case 0x260594u: goto label_260594;
        case 0x260598u: goto label_260598;
        case 0x26059cu: goto label_26059c;
        case 0x2605a0u: goto label_2605a0;
        case 0x2605a4u: goto label_2605a4;
        case 0x2605a8u: goto label_2605a8;
        case 0x2605acu: goto label_2605ac;
        case 0x2605b0u: goto label_2605b0;
        case 0x2605b4u: goto label_2605b4;
        case 0x2605b8u: goto label_2605b8;
        case 0x2605bcu: goto label_2605bc;
        case 0x2605c0u: goto label_2605c0;
        case 0x2605c4u: goto label_2605c4;
        case 0x2605c8u: goto label_2605c8;
        case 0x2605ccu: goto label_2605cc;
        case 0x2605d0u: goto label_2605d0;
        case 0x2605d4u: goto label_2605d4;
        case 0x2605d8u: goto label_2605d8;
        case 0x2605dcu: goto label_2605dc;
        case 0x2605e0u: goto label_2605e0;
        case 0x2605e4u: goto label_2605e4;
        case 0x2605e8u: goto label_2605e8;
        case 0x2605ecu: goto label_2605ec;
        default: break;
    }

    ctx->pc = 0x260250u;

label_260250:
    // 0x260250: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x260250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_260254:
    // 0x260254: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x260254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_260258:
    // 0x260258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26025c:
    // 0x26025c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_260260:
    // 0x260260: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x260260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_260264:
    // 0x260264: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x260264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_260268:
    // 0x260268: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x260268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26026c:
    // 0x26026c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26026cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_260270:
    // 0x260270: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x260270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_260274:
    // 0x260274: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x260274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_260278:
    // 0x260278: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x260278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_26027c:
    // 0x26027c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260280:
    // 0x260280: 0xc0e409a  jal         func_390268
label_260284:
    if (ctx->pc == 0x260284u) {
        ctx->pc = 0x260284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260280u;
        // 0x260284: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260288u;
        goto label_260288;
    }
    ctx->pc = 0x260280u;
    SET_GPR_U32(ctx, 31, 0x260288u);
    ctx->pc = 0x260284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260280u;
    // 0x260284: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x260280u, 0x260288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260288u;
label_260288:
    // 0x260288: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x260288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26028c:
    // 0x26028c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26028cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260290:
    // 0x260290: 0xc08b152  jal         func_22C548
label_260294:
    if (ctx->pc == 0x260294u) {
        ctx->pc = 0x260294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260290u;
        // 0x260294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260298u;
        goto label_260298;
    }
    ctx->pc = 0x260290u;
    SET_GPR_U32(ctx, 31, 0x260298u);
    ctx->pc = 0x260294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260290u;
    // 0x260294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C548u, 0x260290u, 0x260298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260298u;
label_260298:
    // 0x260298: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x260298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26029c:
    // 0x26029c: 0x8e1500d8  lw          $s5, 0xD8($s0)
    ctx->pc = 0x26029cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2602a0:
    // 0x2602a0: 0x2454dc40  addiu       $s4, $v0, -0x23C0
    ctx->pc = 0x2602a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
label_2602a4:
    // 0x2602a4: 0xc041532  jal         func_1054C8
label_2602a8:
    if (ctx->pc == 0x2602A8u) {
        ctx->pc = 0x2602A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602A4u;
        // 0x2602a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602ACu;
        goto label_2602ac;
    }
    ctx->pc = 0x2602A4u;
    SET_GPR_U32(ctx, 31, 0x2602ACu);
    ctx->pc = 0x2602A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602A4u;
    // 0x2602a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2602A4u, 0x2602ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602ACu;
label_2602ac:
    // 0x2602ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2602acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2602b0:
    // 0x2602b0: 0xc041532  jal         func_1054C8
label_2602b4:
    if (ctx->pc == 0x2602B4u) {
        ctx->pc = 0x2602B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602B0u;
        // 0x2602b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602B8u;
        goto label_2602b8;
    }
    ctx->pc = 0x2602B0u;
    SET_GPR_U32(ctx, 31, 0x2602B8u);
    ctx->pc = 0x2602B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602B0u;
    // 0x2602b4: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2602B0u, 0x2602B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602B8u;
label_2602b8:
    // 0x2602b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2602b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2602bc:
    // 0x2602bc: 0xc041532  jal         func_1054C8
label_2602c0:
    if (ctx->pc == 0x2602C0u) {
        ctx->pc = 0x2602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602BCu;
        // 0x2602c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602C4u;
        goto label_2602c4;
    }
    ctx->pc = 0x2602BCu;
    SET_GPR_U32(ctx, 31, 0x2602C4u);
    ctx->pc = 0x2602C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602BCu;
    // 0x2602c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2602BCu, 0x2602C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602C4u;
label_2602c4:
    // 0x2602c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2602c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2602c8:
    // 0x2602c8: 0xc041532  jal         func_1054C8
label_2602cc:
    if (ctx->pc == 0x2602CCu) {
        ctx->pc = 0x2602CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602C8u;
        // 0x2602cc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602D0u;
        goto label_2602d0;
    }
    ctx->pc = 0x2602C8u;
    SET_GPR_U32(ctx, 31, 0x2602D0u);
    ctx->pc = 0x2602CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602C8u;
    // 0x2602cc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2602C8u, 0x2602D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602D0u;
label_2602d0:
    // 0x2602d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2602d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2602d4:
    // 0x2602d4: 0xc041532  jal         func_1054C8
label_2602d8:
    if (ctx->pc == 0x2602D8u) {
        ctx->pc = 0x2602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602D4u;
        // 0x2602d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602DCu;
        goto label_2602dc;
    }
    ctx->pc = 0x2602D4u;
    SET_GPR_U32(ctx, 31, 0x2602DCu);
    ctx->pc = 0x2602D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602D4u;
    // 0x2602d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2602D4u, 0x2602DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602DCu;
label_2602dc:
    // 0x2602dc: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
label_2602e0:
    if (ctx->pc == 0x2602E0u) {
        ctx->pc = 0x2602E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602DCu;
        // 0x2602e0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2602E4u;
        goto label_2602e4;
    }
    ctx->pc = 0x2602DCu;
    {
        const bool branch_taken_0x2602dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602DCu;
        // 0x2602e0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602dc) {
            ctx->pc = 0x260308u;
            goto label_260308;
        }
    }
    ctx->pc = 0x2602E4u;
label_2602e4:
    // 0x2602e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2602e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2602e8:
    // 0x2602e8: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x2602e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2602ec:
    // 0x2602ec: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2602ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2602f0:
    // 0x2602f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2602f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2602f4:
    // 0x2602f4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2602f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2602f8:
    // 0x2602f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2602f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2602fc:
    // 0x2602fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2602fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260300:
    // 0x260300: 0xc041b20  jal         func_106C80
label_260304:
    if (ctx->pc == 0x260304u) {
        ctx->pc = 0x260304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260300u;
        // 0x260304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260308u;
        goto label_260308;
    }
    ctx->pc = 0x260300u;
    SET_GPR_U32(ctx, 31, 0x260308u);
    ctx->pc = 0x260304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260300u;
    // 0x260304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x260300u, 0x260308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260308u;
label_260308:
    // 0x260308: 0xc05d484  jal         func_175210
label_26030c:
    if (ctx->pc == 0x26030Cu) {
        ctx->pc = 0x26030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260308u;
        // 0x26030c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260310u;
        goto label_260310;
    }
    ctx->pc = 0x260308u;
    SET_GPR_U32(ctx, 31, 0x260310u);
    ctx->pc = 0x26030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260308u;
    // 0x26030c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x260308u, 0x260310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260310u;
label_260310:
    // 0x260310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260314:
    // 0x260314: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x260314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_260318:
    // 0x260318: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x260318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26031c:
    // 0x26031c: 0xa0f809  jalr        $a1
label_260320:
    if (ctx->pc == 0x260320u) {
        ctx->pc = 0x260320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26031Cu;
        // 0x260320: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260324u;
        goto label_260324;
    }
    ctx->pc = 0x26031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x260324u);
        ctx->pc = 0x260320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26031Cu;
        // 0x260320: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26031Cu, 0x260324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260324u;
label_260324:
    // 0x260324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260328:
    // 0x260328: 0xc087016  jal         func_21C058
label_26032c:
    if (ctx->pc == 0x26032Cu) {
        ctx->pc = 0x26032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260328u;
        // 0x26032c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260330u;
        goto label_260330;
    }
    ctx->pc = 0x260328u;
    SET_GPR_U32(ctx, 31, 0x260330u);
    ctx->pc = 0x26032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260328u;
    // 0x26032c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x260328u, 0x260330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260330u;
label_260330:
    // 0x260330: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_260334:
    if (ctx->pc == 0x260334u) {
        ctx->pc = 0x260334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260330u;
        // 0x260334: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260338u;
        goto label_260338;
    }
    ctx->pc = 0x260330u;
    {
        const bool branch_taken_0x260330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x260334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260330u;
        // 0x260334: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260330) {
            ctx->pc = 0x260358u;
            goto label_260358;
        }
    }
    ctx->pc = 0x260338u;
label_260338:
    // 0x260338: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x260338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26033c:
    // 0x26033c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26033cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_260340:
    // 0x260340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260344:
    // 0x260344: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x260344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_260348:
    // 0x260348: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26034c:
    // 0x26034c: 0xc04159e  jal         func_105678
label_260350:
    if (ctx->pc == 0x260350u) {
        ctx->pc = 0x260350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26034Cu;
        // 0x260350: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260354u;
        goto label_260354;
    }
    ctx->pc = 0x26034Cu;
    SET_GPR_U32(ctx, 31, 0x260354u);
    ctx->pc = 0x260350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26034Cu;
    // 0x260350: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26034Cu, 0x260354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260354u;
label_260354:
    // 0x260354: 0x0  nop
    ctx->pc = 0x260354u;
    // NOP
label_260358:
    // 0x260358: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x260358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26035c:
    // 0x26035c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_260360:
    // 0x260360: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_260364:
    if (ctx->pc == 0x260364u) {
        ctx->pc = 0x260364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260360u;
        // 0x260364: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260368u;
        goto label_260368;
    }
    ctx->pc = 0x260360u;
    {
        const bool branch_taken_0x260360 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x260364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260360u;
        // 0x260364: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260360) {
            ctx->pc = 0x2603ACu;
            goto label_2603ac;
        }
    }
    ctx->pc = 0x260368u;
label_260368:
    // 0x260368: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x260368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26036c:
    // 0x26036c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26036cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_260370:
    // 0x260370: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x260370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_260374:
    // 0x260374: 0x40f809  jalr        $v0
label_260378:
    if (ctx->pc == 0x260378u) {
        ctx->pc = 0x260378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260374u;
        // 0x260378: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26037Cu;
        goto label_26037c;
    }
    ctx->pc = 0x260374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26037Cu);
        ctx->pc = 0x260378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260374u;
        // 0x260378: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260374u, 0x26037Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26037Cu;
label_26037c:
    // 0x26037c: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x26037cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_260380:
    // 0x260380: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x260380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_260384:
    // 0x260384: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x260384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_260388:
    // 0x260388: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26038c:
    // 0x26038c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26038cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260390:
    // 0x260390: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x260390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260394:
    // 0x260394: 0x254a00f0  addiu       $t2, $t2, 0xF0
    ctx->pc = 0x260394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 240));
label_260398:
    // 0x260398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26039c:
    // 0x26039c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26039cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2603a0:
    // 0x2603a0: 0x2406010a  addiu       $a2, $zero, 0x10A
    ctx->pc = 0x2603a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
label_2603a4:
    // 0x2603a4: 0xc041664  jal         func_105990
label_2603a8:
    if (ctx->pc == 0x2603A8u) {
        ctx->pc = 0x2603A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603A4u;
        // 0x2603a8: 0x3c080400  lui         $t0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603ACu;
        goto label_2603ac;
    }
    ctx->pc = 0x2603A4u;
    SET_GPR_U32(ctx, 31, 0x2603ACu);
    ctx->pc = 0x2603A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603A4u;
    // 0x2603a8: 0x3c080400  lui         $t0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2603A4u, 0x2603ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603ACu;
label_2603ac:
    // 0x2603ac: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_2603b0:
    if (ctx->pc == 0x2603B0u) {
        ctx->pc = 0x2603B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603ACu;
        // 0x2603b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603B4u;
        goto label_2603b4;
    }
    ctx->pc = 0x2603ACu;
    {
        const bool branch_taken_0x2603ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603ACu;
        // 0x2603b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603ac) {
            ctx->pc = 0x2603D8u;
            goto label_2603d8;
        }
    }
    ctx->pc = 0x2603B4u;
label_2603b4:
    // 0x2603b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2603b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2603b8:
    // 0x2603b8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2603b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2603bc:
    // 0x2603bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2603bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2603c0:
    // 0x2603c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2603c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2603c4:
    // 0x2603c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2603c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2603c8:
    // 0x2603c8: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x2603c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_2603cc:
    // 0x2603cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2603ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2603d0:
    // 0x2603d0: 0xc041664  jal         func_105990
label_2603d4:
    if (ctx->pc == 0x2603D4u) {
        ctx->pc = 0x2603D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603D0u;
        // 0x2603d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603D8u;
        goto label_2603d8;
    }
    ctx->pc = 0x2603D0u;
    SET_GPR_U32(ctx, 31, 0x2603D8u);
    ctx->pc = 0x2603D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603D0u;
    // 0x2603d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2603D0u, 0x2603D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603D8u;
label_2603d8:
    // 0x2603d8: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_2603dc:
    if (ctx->pc == 0x2603DCu) {
        ctx->pc = 0x2603DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603D8u;
        // 0x2603dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2603E0u;
        goto label_2603e0;
    }
    ctx->pc = 0x2603D8u;
    {
        const bool branch_taken_0x2603d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603D8u;
        // 0x2603dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603d8) {
            ctx->pc = 0x260404u;
            goto label_260404;
        }
    }
    ctx->pc = 0x2603E0u;
label_2603e0:
    // 0x2603e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2603e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2603e4:
    // 0x2603e4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2603e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2603e8:
    // 0x2603e8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2603e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2603ec:
    // 0x2603ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2603ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2603f0:
    // 0x2603f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2603f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2603f4:
    // 0x2603f4: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x2603f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_2603f8:
    // 0x2603f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2603f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2603fc:
    // 0x2603fc: 0xc041664  jal         func_105990
label_260400:
    if (ctx->pc == 0x260400u) {
        ctx->pc = 0x260400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603FCu;
        // 0x260400: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260404u;
        goto label_260404;
    }
    ctx->pc = 0x2603FCu;
    SET_GPR_U32(ctx, 31, 0x260404u);
    ctx->pc = 0x260400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603FCu;
    // 0x260400: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2603FCu, 0x260404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260404u;
label_260404:
    // 0x260404: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x260404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_260408:
    // 0x260408: 0xc05d53a  jal         func_1754E8
label_26040c:
    if (ctx->pc == 0x26040Cu) {
        ctx->pc = 0x26040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260408u;
        // 0x26040c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260410u;
        goto label_260410;
    }
    ctx->pc = 0x260408u;
    SET_GPR_U32(ctx, 31, 0x260410u);
    ctx->pc = 0x26040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260408u;
    // 0x26040c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x260408u, 0x260410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260410u;
label_260410:
    // 0x260410: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x260410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260414:
    // 0x260414: 0xc05d4f6  jal         func_1753D8
label_260418:
    if (ctx->pc == 0x260418u) {
        ctx->pc = 0x260418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260414u;
        // 0x260418: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26041Cu;
        goto label_26041c;
    }
    ctx->pc = 0x260414u;
    SET_GPR_U32(ctx, 31, 0x26041Cu);
    ctx->pc = 0x260418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260414u;
    // 0x260418: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x260414u, 0x26041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26041Cu;
label_26041c:
    // 0x26041c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x26041cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_260420:
    // 0x260420: 0xc089990  jal         func_226640
label_260424:
    if (ctx->pc == 0x260424u) {
        ctx->pc = 0x260424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260420u;
        // 0x260424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260428u;
        goto label_260428;
    }
    ctx->pc = 0x260420u;
    SET_GPR_U32(ctx, 31, 0x260428u);
    ctx->pc = 0x260424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260420u;
    // 0x260424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x260420u, 0x260428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260428u;
label_260428:
    // 0x260428: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26042c:
    // 0x26042c: 0xc041532  jal         func_1054C8
label_260430:
    if (ctx->pc == 0x260430u) {
        ctx->pc = 0x260430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26042Cu;
        // 0x260430: 0x8e5300d8  lw          $s3, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260434u;
        goto label_260434;
    }
    ctx->pc = 0x26042Cu;
    SET_GPR_U32(ctx, 31, 0x260434u);
    ctx->pc = 0x260430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26042Cu;
    // 0x260430: 0x8e5300d8  lw          $s3, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26042Cu, 0x260434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260434u;
label_260434:
    // 0x260434: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260438:
    // 0x260438: 0xc041532  jal         func_1054C8
label_26043c:
    if (ctx->pc == 0x26043Cu) {
        ctx->pc = 0x26043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260438u;
        // 0x26043c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260440u;
        goto label_260440;
    }
    ctx->pc = 0x260438u;
    SET_GPR_U32(ctx, 31, 0x260440u);
    ctx->pc = 0x26043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260438u;
    // 0x26043c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260438u, 0x260440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260440u;
label_260440:
    // 0x260440: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260444:
    // 0x260444: 0xc041532  jal         func_1054C8
label_260448:
    if (ctx->pc == 0x260448u) {
        ctx->pc = 0x260448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260444u;
        // 0x260448: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26044Cu;
        goto label_26044c;
    }
    ctx->pc = 0x260444u;
    SET_GPR_U32(ctx, 31, 0x26044Cu);
    ctx->pc = 0x260448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260444u;
    // 0x260448: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260444u, 0x26044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26044Cu;
label_26044c:
    // 0x26044c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26044cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260450:
    // 0x260450: 0xc041532  jal         func_1054C8
label_260454:
    if (ctx->pc == 0x260454u) {
        ctx->pc = 0x260454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260450u;
        // 0x260454: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260458u;
        goto label_260458;
    }
    ctx->pc = 0x260450u;
    SET_GPR_U32(ctx, 31, 0x260458u);
    ctx->pc = 0x260454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260450u;
    // 0x260454: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260450u, 0x260458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260458u;
label_260458:
    // 0x260458: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26045c:
    // 0x26045c: 0xc041532  jal         func_1054C8
label_260460:
    if (ctx->pc == 0x260460u) {
        ctx->pc = 0x260460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26045Cu;
        // 0x260460: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260464u;
        goto label_260464;
    }
    ctx->pc = 0x26045Cu;
    SET_GPR_U32(ctx, 31, 0x260464u);
    ctx->pc = 0x260460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26045Cu;
    // 0x260460: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26045Cu, 0x260464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260464u;
label_260464:
    // 0x260464: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_260468:
    if (ctx->pc == 0x260468u) {
        ctx->pc = 0x260468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260464u;
        // 0x260468: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26046Cu;
        goto label_26046c;
    }
    ctx->pc = 0x260464u;
    {
        const bool branch_taken_0x260464 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x260468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260464u;
        // 0x260468: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260464) {
            ctx->pc = 0x260490u;
            goto label_260490;
        }
    }
    ctx->pc = 0x26046Cu;
label_26046c:
    // 0x26046c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_260470:
    // 0x260470: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x260470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_260474:
    // 0x260474: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x260474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_260478:
    // 0x260478: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x260478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26047c:
    // 0x26047c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26047cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_260480:
    // 0x260480: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x260480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_260484:
    // 0x260484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260488:
    // 0x260488: 0xc041b20  jal         func_106C80
label_26048c:
    if (ctx->pc == 0x26048Cu) {
        ctx->pc = 0x26048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260488u;
        // 0x26048c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260490u;
        goto label_260490;
    }
    ctx->pc = 0x260488u;
    SET_GPR_U32(ctx, 31, 0x260490u);
    ctx->pc = 0x26048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260488u;
    // 0x26048c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x260488u, 0x260490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260490u;
label_260490:
    // 0x260490: 0xc05d484  jal         func_175210
label_260494:
    if (ctx->pc == 0x260494u) {
        ctx->pc = 0x260494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260490u;
        // 0x260494: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260498u;
        goto label_260498;
    }
    ctx->pc = 0x260490u;
    SET_GPR_U32(ctx, 31, 0x260498u);
    ctx->pc = 0x260494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260490u;
    // 0x260494: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x260490u, 0x260498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260498u;
label_260498:
    // 0x260498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26049c:
    // 0x26049c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26049cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2604a0:
    // 0x2604a0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2604a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2604a4:
    // 0x2604a4: 0xa0f809  jalr        $a1
label_2604a8:
    if (ctx->pc == 0x2604A8u) {
        ctx->pc = 0x2604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604A4u;
        // 0x2604a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604ACu;
        goto label_2604ac;
    }
    ctx->pc = 0x2604A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2604ACu);
        ctx->pc = 0x2604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604A4u;
        // 0x2604a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2604A4u, 0x2604ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2604ACu;
label_2604ac:
    // 0x2604ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2604acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2604b0:
    // 0x2604b0: 0xc087016  jal         func_21C058
label_2604b4:
    if (ctx->pc == 0x2604B4u) {
        ctx->pc = 0x2604B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604B0u;
        // 0x2604b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604B8u;
        goto label_2604b8;
    }
    ctx->pc = 0x2604B0u;
    SET_GPR_U32(ctx, 31, 0x2604B8u);
    ctx->pc = 0x2604B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2604B0u;
    // 0x2604b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2604B0u, 0x2604B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604B8u;
label_2604b8:
    // 0x2604b8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2604bc:
    if (ctx->pc == 0x2604BCu) {
        ctx->pc = 0x2604BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604B8u;
        // 0x2604bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604C0u;
        goto label_2604c0;
    }
    ctx->pc = 0x2604B8u;
    {
        const bool branch_taken_0x2604b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2604BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604B8u;
        // 0x2604bc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604b8) {
            ctx->pc = 0x2604D8u;
            goto label_2604d8;
        }
    }
    ctx->pc = 0x2604C0u;
label_2604c0:
    // 0x2604c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2604c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2604c4:
    // 0x2604c4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2604c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2604c8:
    // 0x2604c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2604c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2604cc:
    // 0x2604cc: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2604ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2604d0:
    // 0x2604d0: 0xc04159e  jal         func_105678
label_2604d4:
    if (ctx->pc == 0x2604D4u) {
        ctx->pc = 0x2604D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604D0u;
        // 0x2604d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604D8u;
        goto label_2604d8;
    }
    ctx->pc = 0x2604D0u;
    SET_GPR_U32(ctx, 31, 0x2604D8u);
    ctx->pc = 0x2604D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2604D0u;
    // 0x2604d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2604D0u, 0x2604D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604D8u;
label_2604d8:
    // 0x2604d8: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_2604dc:
    if (ctx->pc == 0x2604DCu) {
        ctx->pc = 0x2604E0u;
        goto label_2604e0;
    }
    ctx->pc = 0x2604D8u;
    {
        const bool branch_taken_0x2604d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2604d8) {
            ctx->pc = 0x260518u;
            goto label_260518;
        }
    }
    ctx->pc = 0x2604E0u;
label_2604e0:
    // 0x2604e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2604e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2604e4:
    // 0x2604e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2604e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2604e8:
    // 0x2604e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2604e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2604ec:
    // 0x2604ec: 0x40f809  jalr        $v0
label_2604f0:
    if (ctx->pc == 0x2604F0u) {
        ctx->pc = 0x2604F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604ECu;
        // 0x2604f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2604F4u;
        goto label_2604f4;
    }
    ctx->pc = 0x2604ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2604F4u);
        ctx->pc = 0x2604F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604ECu;
        // 0x2604f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2604ECu, 0x2604F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2604F4u;
label_2604f4:
    // 0x2604f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2604f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2604f8:
    // 0x2604f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2604f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2604fc:
    // 0x2604fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2604fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260500:
    // 0x260500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x260500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260504:
    // 0x260504: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x260504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260508:
    // 0x260508: 0x2406010b  addiu       $a2, $zero, 0x10B
    ctx->pc = 0x260508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
label_26050c:
    // 0x26050c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x26050cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_260510:
    // 0x260510: 0xc041664  jal         func_105990
label_260514:
    if (ctx->pc == 0x260514u) {
        ctx->pc = 0x260514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260510u;
        // 0x260514: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260518u;
        goto label_260518;
    }
    ctx->pc = 0x260510u;
    SET_GPR_U32(ctx, 31, 0x260518u);
    ctx->pc = 0x260514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260510u;
    // 0x260514: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x260510u, 0x260518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260518u;
label_260518:
    // 0x260518: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_26051c:
    if (ctx->pc == 0x26051Cu) {
        ctx->pc = 0x260520u;
        goto label_260520;
    }
    ctx->pc = 0x260518u;
    {
        const bool branch_taken_0x260518 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x260518) {
            ctx->pc = 0x26055Cu;
            goto label_26055c;
        }
    }
    ctx->pc = 0x260520u;
label_260520:
    // 0x260520: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x260520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_260524:
    // 0x260524: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x260524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_260528:
    // 0x260528: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x260528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26052c:
    // 0x26052c: 0x40f809  jalr        $v0
label_260530:
    if (ctx->pc == 0x260530u) {
        ctx->pc = 0x260530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26052Cu;
        // 0x260530: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260534u;
        goto label_260534;
    }
    ctx->pc = 0x26052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260534u);
        ctx->pc = 0x260530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26052Cu;
        // 0x260530: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26052Cu, 0x260534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260534u;
label_260534:
    // 0x260534: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x260534u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_260538:
    // 0x260538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26053c:
    // 0x26053c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x26053cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260540:
    // 0x260540: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x260540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260544:
    // 0x260544: 0x254a0178  addiu       $t2, $t2, 0x178
    ctx->pc = 0x260544u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 376));
label_260548:
    // 0x260548: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x260548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26054c:
    // 0x26054c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26054cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260550:
    // 0x260550: 0x24060105  addiu       $a2, $zero, 0x105
    ctx->pc = 0x260550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_260554:
    // 0x260554: 0xc041664  jal         func_105990
label_260558:
    if (ctx->pc == 0x260558u) {
        ctx->pc = 0x260558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260554u;
        // 0x260558: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26055Cu;
        goto label_26055c;
    }
    ctx->pc = 0x260554u;
    SET_GPR_U32(ctx, 31, 0x26055Cu);
    ctx->pc = 0x260558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260554u;
    // 0x260558: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x260554u, 0x26055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26055Cu;
label_26055c:
    // 0x26055c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_260560:
    if (ctx->pc == 0x260560u) {
        ctx->pc = 0x260560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26055Cu;
        // 0x260560: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260564u;
        goto label_260564;
    }
    ctx->pc = 0x26055Cu;
    {
        const bool branch_taken_0x26055c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x260560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26055Cu;
        // 0x260560: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26055c) {
            ctx->pc = 0x260588u;
            goto label_260588;
        }
    }
    ctx->pc = 0x260564u;
label_260564:
    // 0x260564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260568:
    // 0x260568: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x260568u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26056c:
    // 0x26056c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x26056cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_260570:
    // 0x260570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260574:
    // 0x260574: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x260574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260578:
    // 0x260578: 0x240600fd  addiu       $a2, $zero, 0xFD
    ctx->pc = 0x260578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_26057c:
    // 0x26057c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26057cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260580:
    // 0x260580: 0xc041664  jal         func_105990
label_260584:
    if (ctx->pc == 0x260584u) {
        ctx->pc = 0x260584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260580u;
        // 0x260584: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260588u;
        goto label_260588;
    }
    ctx->pc = 0x260580u;
    SET_GPR_U32(ctx, 31, 0x260588u);
    ctx->pc = 0x260584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260580u;
    // 0x260584: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x260580u, 0x260588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260588u;
label_260588:
    // 0x260588: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26058c:
    // 0x26058c: 0xc05d53a  jal         func_1754E8
label_260590:
    if (ctx->pc == 0x260590u) {
        ctx->pc = 0x260590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26058Cu;
        // 0x260590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260594u;
        goto label_260594;
    }
    ctx->pc = 0x26058Cu;
    SET_GPR_U32(ctx, 31, 0x260594u);
    ctx->pc = 0x260590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26058Cu;
    // 0x260590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26058Cu, 0x260594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260594u;
label_260594:
    // 0x260594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260598:
    // 0x260598: 0xc05d4f6  jal         func_1753D8
label_26059c:
    if (ctx->pc == 0x26059Cu) {
        ctx->pc = 0x26059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260598u;
        // 0x26059c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605A0u;
        goto label_2605a0;
    }
    ctx->pc = 0x260598u;
    SET_GPR_U32(ctx, 31, 0x2605A0u);
    ctx->pc = 0x26059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260598u;
    // 0x26059c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x260598u, 0x2605A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605A0u;
label_2605a0:
    // 0x2605a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2605a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2605a4:
    // 0x2605a4: 0xc089990  jal         func_226640
label_2605a8:
    if (ctx->pc == 0x2605A8u) {
        ctx->pc = 0x2605A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605A4u;
        // 0x2605a8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605ACu;
        goto label_2605ac;
    }
    ctx->pc = 0x2605A4u;
    SET_GPR_U32(ctx, 31, 0x2605ACu);
    ctx->pc = 0x2605A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605A4u;
    // 0x2605a8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2605A4u, 0x2605ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605ACu;
label_2605ac:
    // 0x2605ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2605acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2605b0:
    // 0x2605b0: 0xc089a44  jal         func_226910
label_2605b4:
    if (ctx->pc == 0x2605B4u) {
        ctx->pc = 0x2605B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605B0u;
        // 0x2605b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605B8u;
        goto label_2605b8;
    }
    ctx->pc = 0x2605B0u;
    SET_GPR_U32(ctx, 31, 0x2605B8u);
    ctx->pc = 0x2605B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605B0u;
    // 0x2605b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x2605B0u, 0x2605B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605B8u;
label_2605b8:
    // 0x2605b8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x2605b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2605bc:
    // 0x2605bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2605bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2605c0:
    // 0x2605c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2605c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2605c4:
    // 0x2605c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2605c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2605c8:
    // 0x2605c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2605c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2605cc:
    // 0x2605cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2605ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2605d0:
    // 0x2605d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2605d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2605d4:
    // 0x2605d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2605d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2605d8:
    // 0x2605d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2605d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2605dc:
    // 0x2605dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2605dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2605e0:
    // 0x2605e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2605e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2605e4:
    // 0x2605e4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2605e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2605e8:
    // 0x2605e8: 0x3e00008  jr          $ra
label_2605ec:
    if (ctx->pc == 0x2605ECu) {
        ctx->pc = 0x2605ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605E8u;
        // 0x2605ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2605F0u;
        goto label_fallthrough_0x2605e8;
    }
    ctx->pc = 0x2605E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2605ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605E8u;
        // 0x2605ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2605E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2605e8:
    ctx->pc = 0x2605F0u;
}
