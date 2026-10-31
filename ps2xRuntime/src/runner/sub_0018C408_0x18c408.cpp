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

// Function: sub_0018C408
// Address: 0x18c408 - 0x18c8c8
void sub_0018C408_0x18c408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C408_0x18c408");
#endif

    switch (ctx->pc) {
        case 0x18c408u: goto label_18c408;
        case 0x18c40cu: goto label_18c40c;
        case 0x18c410u: goto label_18c410;
        case 0x18c414u: goto label_18c414;
        case 0x18c418u: goto label_18c418;
        case 0x18c41cu: goto label_18c41c;
        case 0x18c420u: goto label_18c420;
        case 0x18c424u: goto label_18c424;
        case 0x18c428u: goto label_18c428;
        case 0x18c42cu: goto label_18c42c;
        case 0x18c430u: goto label_18c430;
        case 0x18c434u: goto label_18c434;
        case 0x18c438u: goto label_18c438;
        case 0x18c43cu: goto label_18c43c;
        case 0x18c440u: goto label_18c440;
        case 0x18c444u: goto label_18c444;
        case 0x18c448u: goto label_18c448;
        case 0x18c44cu: goto label_18c44c;
        case 0x18c450u: goto label_18c450;
        case 0x18c454u: goto label_18c454;
        case 0x18c458u: goto label_18c458;
        case 0x18c45cu: goto label_18c45c;
        case 0x18c460u: goto label_18c460;
        case 0x18c464u: goto label_18c464;
        case 0x18c468u: goto label_18c468;
        case 0x18c46cu: goto label_18c46c;
        case 0x18c470u: goto label_18c470;
        case 0x18c474u: goto label_18c474;
        case 0x18c478u: goto label_18c478;
        case 0x18c47cu: goto label_18c47c;
        case 0x18c480u: goto label_18c480;
        case 0x18c484u: goto label_18c484;
        case 0x18c488u: goto label_18c488;
        case 0x18c48cu: goto label_18c48c;
        case 0x18c490u: goto label_18c490;
        case 0x18c494u: goto label_18c494;
        case 0x18c498u: goto label_18c498;
        case 0x18c49cu: goto label_18c49c;
        case 0x18c4a0u: goto label_18c4a0;
        case 0x18c4a4u: goto label_18c4a4;
        case 0x18c4a8u: goto label_18c4a8;
        case 0x18c4acu: goto label_18c4ac;
        case 0x18c4b0u: goto label_18c4b0;
        case 0x18c4b4u: goto label_18c4b4;
        case 0x18c4b8u: goto label_18c4b8;
        case 0x18c4bcu: goto label_18c4bc;
        case 0x18c4c0u: goto label_18c4c0;
        case 0x18c4c4u: goto label_18c4c4;
        case 0x18c4c8u: goto label_18c4c8;
        case 0x18c4ccu: goto label_18c4cc;
        case 0x18c4d0u: goto label_18c4d0;
        case 0x18c4d4u: goto label_18c4d4;
        case 0x18c4d8u: goto label_18c4d8;
        case 0x18c4dcu: goto label_18c4dc;
        case 0x18c4e0u: goto label_18c4e0;
        case 0x18c4e4u: goto label_18c4e4;
        case 0x18c4e8u: goto label_18c4e8;
        case 0x18c4ecu: goto label_18c4ec;
        case 0x18c4f0u: goto label_18c4f0;
        case 0x18c4f4u: goto label_18c4f4;
        case 0x18c4f8u: goto label_18c4f8;
        case 0x18c4fcu: goto label_18c4fc;
        case 0x18c500u: goto label_18c500;
        case 0x18c504u: goto label_18c504;
        case 0x18c508u: goto label_18c508;
        case 0x18c50cu: goto label_18c50c;
        case 0x18c510u: goto label_18c510;
        case 0x18c514u: goto label_18c514;
        case 0x18c518u: goto label_18c518;
        case 0x18c51cu: goto label_18c51c;
        case 0x18c520u: goto label_18c520;
        case 0x18c524u: goto label_18c524;
        case 0x18c528u: goto label_18c528;
        case 0x18c52cu: goto label_18c52c;
        case 0x18c530u: goto label_18c530;
        case 0x18c534u: goto label_18c534;
        case 0x18c538u: goto label_18c538;
        case 0x18c53cu: goto label_18c53c;
        case 0x18c540u: goto label_18c540;
        case 0x18c544u: goto label_18c544;
        case 0x18c548u: goto label_18c548;
        case 0x18c54cu: goto label_18c54c;
        case 0x18c550u: goto label_18c550;
        case 0x18c554u: goto label_18c554;
        case 0x18c558u: goto label_18c558;
        case 0x18c55cu: goto label_18c55c;
        case 0x18c560u: goto label_18c560;
        case 0x18c564u: goto label_18c564;
        case 0x18c568u: goto label_18c568;
        case 0x18c56cu: goto label_18c56c;
        case 0x18c570u: goto label_18c570;
        case 0x18c574u: goto label_18c574;
        case 0x18c578u: goto label_18c578;
        case 0x18c57cu: goto label_18c57c;
        case 0x18c580u: goto label_18c580;
        case 0x18c584u: goto label_18c584;
        case 0x18c588u: goto label_18c588;
        case 0x18c58cu: goto label_18c58c;
        case 0x18c590u: goto label_18c590;
        case 0x18c594u: goto label_18c594;
        case 0x18c598u: goto label_18c598;
        case 0x18c59cu: goto label_18c59c;
        case 0x18c5a0u: goto label_18c5a0;
        case 0x18c5a4u: goto label_18c5a4;
        case 0x18c5a8u: goto label_18c5a8;
        case 0x18c5acu: goto label_18c5ac;
        case 0x18c5b0u: goto label_18c5b0;
        case 0x18c5b4u: goto label_18c5b4;
        case 0x18c5b8u: goto label_18c5b8;
        case 0x18c5bcu: goto label_18c5bc;
        case 0x18c5c0u: goto label_18c5c0;
        case 0x18c5c4u: goto label_18c5c4;
        case 0x18c5c8u: goto label_18c5c8;
        case 0x18c5ccu: goto label_18c5cc;
        case 0x18c5d0u: goto label_18c5d0;
        case 0x18c5d4u: goto label_18c5d4;
        case 0x18c5d8u: goto label_18c5d8;
        case 0x18c5dcu: goto label_18c5dc;
        case 0x18c5e0u: goto label_18c5e0;
        case 0x18c5e4u: goto label_18c5e4;
        case 0x18c5e8u: goto label_18c5e8;
        case 0x18c5ecu: goto label_18c5ec;
        case 0x18c5f0u: goto label_18c5f0;
        case 0x18c5f4u: goto label_18c5f4;
        case 0x18c5f8u: goto label_18c5f8;
        case 0x18c5fcu: goto label_18c5fc;
        case 0x18c600u: goto label_18c600;
        case 0x18c604u: goto label_18c604;
        case 0x18c608u: goto label_18c608;
        case 0x18c60cu: goto label_18c60c;
        case 0x18c610u: goto label_18c610;
        case 0x18c614u: goto label_18c614;
        case 0x18c618u: goto label_18c618;
        case 0x18c61cu: goto label_18c61c;
        case 0x18c620u: goto label_18c620;
        case 0x18c624u: goto label_18c624;
        case 0x18c628u: goto label_18c628;
        case 0x18c62cu: goto label_18c62c;
        case 0x18c630u: goto label_18c630;
        case 0x18c634u: goto label_18c634;
        case 0x18c638u: goto label_18c638;
        case 0x18c63cu: goto label_18c63c;
        case 0x18c640u: goto label_18c640;
        case 0x18c644u: goto label_18c644;
        case 0x18c648u: goto label_18c648;
        case 0x18c64cu: goto label_18c64c;
        case 0x18c650u: goto label_18c650;
        case 0x18c654u: goto label_18c654;
        case 0x18c658u: goto label_18c658;
        case 0x18c65cu: goto label_18c65c;
        case 0x18c660u: goto label_18c660;
        case 0x18c664u: goto label_18c664;
        case 0x18c668u: goto label_18c668;
        case 0x18c66cu: goto label_18c66c;
        case 0x18c670u: goto label_18c670;
        case 0x18c674u: goto label_18c674;
        case 0x18c678u: goto label_18c678;
        case 0x18c67cu: goto label_18c67c;
        case 0x18c680u: goto label_18c680;
        case 0x18c684u: goto label_18c684;
        case 0x18c688u: goto label_18c688;
        case 0x18c68cu: goto label_18c68c;
        case 0x18c690u: goto label_18c690;
        case 0x18c694u: goto label_18c694;
        case 0x18c698u: goto label_18c698;
        case 0x18c69cu: goto label_18c69c;
        case 0x18c6a0u: goto label_18c6a0;
        case 0x18c6a4u: goto label_18c6a4;
        case 0x18c6a8u: goto label_18c6a8;
        case 0x18c6acu: goto label_18c6ac;
        case 0x18c6b0u: goto label_18c6b0;
        case 0x18c6b4u: goto label_18c6b4;
        case 0x18c6b8u: goto label_18c6b8;
        case 0x18c6bcu: goto label_18c6bc;
        case 0x18c6c0u: goto label_18c6c0;
        case 0x18c6c4u: goto label_18c6c4;
        case 0x18c6c8u: goto label_18c6c8;
        case 0x18c6ccu: goto label_18c6cc;
        case 0x18c6d0u: goto label_18c6d0;
        case 0x18c6d4u: goto label_18c6d4;
        case 0x18c6d8u: goto label_18c6d8;
        case 0x18c6dcu: goto label_18c6dc;
        case 0x18c6e0u: goto label_18c6e0;
        case 0x18c6e4u: goto label_18c6e4;
        case 0x18c6e8u: goto label_18c6e8;
        case 0x18c6ecu: goto label_18c6ec;
        case 0x18c6f0u: goto label_18c6f0;
        case 0x18c6f4u: goto label_18c6f4;
        case 0x18c6f8u: goto label_18c6f8;
        case 0x18c6fcu: goto label_18c6fc;
        case 0x18c700u: goto label_18c700;
        case 0x18c704u: goto label_18c704;
        case 0x18c708u: goto label_18c708;
        case 0x18c70cu: goto label_18c70c;
        case 0x18c710u: goto label_18c710;
        case 0x18c714u: goto label_18c714;
        case 0x18c718u: goto label_18c718;
        case 0x18c71cu: goto label_18c71c;
        case 0x18c720u: goto label_18c720;
        case 0x18c724u: goto label_18c724;
        case 0x18c728u: goto label_18c728;
        case 0x18c72cu: goto label_18c72c;
        case 0x18c730u: goto label_18c730;
        case 0x18c734u: goto label_18c734;
        case 0x18c738u: goto label_18c738;
        case 0x18c73cu: goto label_18c73c;
        case 0x18c740u: goto label_18c740;
        case 0x18c744u: goto label_18c744;
        case 0x18c748u: goto label_18c748;
        case 0x18c74cu: goto label_18c74c;
        case 0x18c750u: goto label_18c750;
        case 0x18c754u: goto label_18c754;
        case 0x18c758u: goto label_18c758;
        case 0x18c75cu: goto label_18c75c;
        case 0x18c760u: goto label_18c760;
        case 0x18c764u: goto label_18c764;
        case 0x18c768u: goto label_18c768;
        case 0x18c76cu: goto label_18c76c;
        case 0x18c770u: goto label_18c770;
        case 0x18c774u: goto label_18c774;
        case 0x18c778u: goto label_18c778;
        case 0x18c77cu: goto label_18c77c;
        case 0x18c780u: goto label_18c780;
        case 0x18c784u: goto label_18c784;
        case 0x18c788u: goto label_18c788;
        case 0x18c78cu: goto label_18c78c;
        case 0x18c790u: goto label_18c790;
        case 0x18c794u: goto label_18c794;
        case 0x18c798u: goto label_18c798;
        case 0x18c79cu: goto label_18c79c;
        case 0x18c7a0u: goto label_18c7a0;
        case 0x18c7a4u: goto label_18c7a4;
        case 0x18c7a8u: goto label_18c7a8;
        case 0x18c7acu: goto label_18c7ac;
        case 0x18c7b0u: goto label_18c7b0;
        case 0x18c7b4u: goto label_18c7b4;
        case 0x18c7b8u: goto label_18c7b8;
        case 0x18c7bcu: goto label_18c7bc;
        case 0x18c7c0u: goto label_18c7c0;
        case 0x18c7c4u: goto label_18c7c4;
        case 0x18c7c8u: goto label_18c7c8;
        case 0x18c7ccu: goto label_18c7cc;
        case 0x18c7d0u: goto label_18c7d0;
        case 0x18c7d4u: goto label_18c7d4;
        case 0x18c7d8u: goto label_18c7d8;
        case 0x18c7dcu: goto label_18c7dc;
        case 0x18c7e0u: goto label_18c7e0;
        case 0x18c7e4u: goto label_18c7e4;
        case 0x18c7e8u: goto label_18c7e8;
        case 0x18c7ecu: goto label_18c7ec;
        case 0x18c7f0u: goto label_18c7f0;
        case 0x18c7f4u: goto label_18c7f4;
        case 0x18c7f8u: goto label_18c7f8;
        case 0x18c7fcu: goto label_18c7fc;
        case 0x18c800u: goto label_18c800;
        case 0x18c804u: goto label_18c804;
        case 0x18c808u: goto label_18c808;
        case 0x18c80cu: goto label_18c80c;
        case 0x18c810u: goto label_18c810;
        case 0x18c814u: goto label_18c814;
        case 0x18c818u: goto label_18c818;
        case 0x18c81cu: goto label_18c81c;
        case 0x18c820u: goto label_18c820;
        case 0x18c824u: goto label_18c824;
        case 0x18c828u: goto label_18c828;
        case 0x18c82cu: goto label_18c82c;
        case 0x18c830u: goto label_18c830;
        case 0x18c834u: goto label_18c834;
        case 0x18c838u: goto label_18c838;
        case 0x18c83cu: goto label_18c83c;
        case 0x18c840u: goto label_18c840;
        case 0x18c844u: goto label_18c844;
        case 0x18c848u: goto label_18c848;
        case 0x18c84cu: goto label_18c84c;
        case 0x18c850u: goto label_18c850;
        case 0x18c854u: goto label_18c854;
        case 0x18c858u: goto label_18c858;
        case 0x18c85cu: goto label_18c85c;
        case 0x18c860u: goto label_18c860;
        case 0x18c864u: goto label_18c864;
        case 0x18c868u: goto label_18c868;
        case 0x18c86cu: goto label_18c86c;
        case 0x18c870u: goto label_18c870;
        case 0x18c874u: goto label_18c874;
        case 0x18c878u: goto label_18c878;
        case 0x18c87cu: goto label_18c87c;
        case 0x18c880u: goto label_18c880;
        case 0x18c884u: goto label_18c884;
        case 0x18c888u: goto label_18c888;
        case 0x18c88cu: goto label_18c88c;
        case 0x18c890u: goto label_18c890;
        case 0x18c894u: goto label_18c894;
        case 0x18c898u: goto label_18c898;
        case 0x18c89cu: goto label_18c89c;
        case 0x18c8a0u: goto label_18c8a0;
        case 0x18c8a4u: goto label_18c8a4;
        case 0x18c8a8u: goto label_18c8a8;
        case 0x18c8acu: goto label_18c8ac;
        case 0x18c8b0u: goto label_18c8b0;
        case 0x18c8b4u: goto label_18c8b4;
        case 0x18c8b8u: goto label_18c8b8;
        case 0x18c8bcu: goto label_18c8bc;
        case 0x18c8c0u: goto label_18c8c0;
        case 0x18c8c4u: goto label_18c8c4;
        default: break;
    }

    ctx->pc = 0x18c408u;

label_18c408:
    // 0x18c408: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18c408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_18c40c:
    // 0x18c40c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18c410:
    // 0x18c410: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x18c410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_18c414:
    // 0x18c414: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x18c414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_18c418:
    // 0x18c418: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x18c418u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_18c41c:
    // 0x18c41c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18c41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c420:
    // 0x18c420: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x18c420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_18c424:
    // 0x18c424: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x18c424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_18c428:
    // 0x18c428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c42c:
    // 0x18c42c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x18c42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_18c430:
    // 0x18c430: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18c430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_18c434:
    // 0x18c434: 0xc136ad6  jal         func_4DAB58
label_18c438:
    if (ctx->pc == 0x18C438u) {
        ctx->pc = 0x18C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C434u;
        // 0x18c438: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C43Cu;
        goto label_18c43c;
    }
    ctx->pc = 0x18C434u;
    SET_GPR_U32(ctx, 31, 0x18C43Cu);
    ctx->pc = 0x18C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C434u;
    // 0x18c438: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x18C434u, 0x18C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C43Cu;
label_18c43c:
    // 0x18c43c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18c43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c440:
    // 0x18c440: 0xc136ad4  jal         func_4DAB50
label_18c444:
    if (ctx->pc == 0x18C444u) {
        ctx->pc = 0x18C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C440u;
        // 0x18c444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C448u;
        goto label_18c448;
    }
    ctx->pc = 0x18C440u;
    SET_GPR_U32(ctx, 31, 0x18C448u);
    ctx->pc = 0x18C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C440u;
    // 0x18c444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x18C440u, 0x18C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C448u;
label_18c448:
    // 0x18c448: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x18c448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_18c44c:
    // 0x18c44c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x18c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_18c450:
    // 0x18c450: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18c450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_18c454:
    // 0x18c454: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x18c454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18c458:
    // 0x18c458: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18c45c:
    // 0x18c45c: 0x50440112  beql        $v0, $a0, . + 4 + (0x112 << 2)
label_18c460:
    if (ctx->pc == 0x18C460u) {
        ctx->pc = 0x18C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C45Cu;
        // 0x18c460: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C464u;
        goto label_18c464;
    }
    ctx->pc = 0x18C45Cu;
    {
        const bool branch_taken_0x18c45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x18c45c) {
            ctx->pc = 0x18C460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C45Cu;
            // 0x18c460: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8A8u;
            goto label_18c8a8;
        }
    }
    ctx->pc = 0x18C464u;
label_18c464:
    // 0x18c464: 0x92420214  lbu         $v0, 0x214($s2)
    ctx->pc = 0x18c464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
label_18c468:
    // 0x18c468: 0x5440010f  bnel        $v0, $zero, . + 4 + (0x10F << 2)
label_18c46c:
    if (ctx->pc == 0x18C46Cu) {
        ctx->pc = 0x18C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C468u;
        // 0x18c46c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C470u;
        goto label_18c470;
    }
    ctx->pc = 0x18C468u;
    {
        const bool branch_taken_0x18c468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c468) {
            ctx->pc = 0x18C46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C468u;
            // 0x18c46c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8A8u;
            goto label_18c8a8;
        }
    }
    ctx->pc = 0x18C470u;
label_18c470:
    // 0x18c470: 0xc64101b0  lwc1        $f1, 0x1B0($s2)
    ctx->pc = 0x18c470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c474:
    // 0x18c474: 0xc64001ac  lwc1        $f0, 0x1AC($s2)
    ctx->pc = 0x18c474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c478:
    // 0x18c478: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18c478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18c47c:
    // 0x18c47c: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x18c47cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18c480:
    // 0x18c480: 0x8a4201a7  lwl         $v0, 0x1A7($s2)
    ctx->pc = 0x18c480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 423); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_18c484:
    // 0x18c484: 0x9a4201a4  lwr         $v0, 0x1A4($s2)
    ctx->pc = 0x18c484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 420); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_18c488:
    // 0x18c488: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x18c488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c48c:
    // 0x18c48c: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x18c48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c490:
    // 0x18c490: 0x8a4601ab  lwl         $a2, 0x1AB($s2)
    ctx->pc = 0x18c490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 427); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_18c494:
    // 0x18c494: 0x9a4601a8  lwr         $a2, 0x1A8($s2)
    ctx->pc = 0x18c494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 424); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_18c498:
    // 0x18c498: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x18c498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c49c:
    // 0x18c49c: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x18c49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c4a0:
    // 0x18c4a0: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x18c4a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c4a4:
    // 0x18c4a4: 0x0  nop
    ctx->pc = 0x18c4a4u;
    // NOP
label_18c4a8:
    // 0x18c4a8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_18c4ac:
    if (ctx->pc == 0x18C4ACu) {
        ctx->pc = 0x18C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4A8u;
        // 0x18c4ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4B0u;
        goto label_18c4b0;
    }
    ctx->pc = 0x18C4A8u;
    {
        const bool branch_taken_0x18c4a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4A8u;
        // 0x18c4ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4a8) {
            ctx->pc = 0x18C520u;
            goto label_18c520;
        }
    }
    ctx->pc = 0x18C4B0u;
label_18c4b0:
    // 0x18c4b0: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18c4b4:
    // 0x18c4b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18c4b8:
    // 0x18c4b8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18c4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18c4bc:
    // 0x18c4bc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18c4c0:
    // 0x18c4c0: 0x40f809  jalr        $v0
label_18c4c4:
    if (ctx->pc == 0x18C4C4u) {
        ctx->pc = 0x18C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4C0u;
        // 0x18c4c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4C8u;
        goto label_18c4c8;
    }
    ctx->pc = 0x18C4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C4C8u);
        ctx->pc = 0x18C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4C0u;
        // 0x18c4c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4C0u, 0x18C4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C4C8u;
label_18c4c8:
    // 0x18c4c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18c4cc:
    if (ctx->pc == 0x18C4CCu) {
        ctx->pc = 0x18C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4C8u;
        // 0x18c4cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4D0u;
        goto label_18c4d0;
    }
    ctx->pc = 0x18C4C8u;
    {
        const bool branch_taken_0x18c4c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4C8u;
        // 0x18c4cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4c8) {
            ctx->pc = 0x18C4E4u;
            goto label_18c4e4;
        }
    }
    ctx->pc = 0x18C4D0u;
label_18c4d0:
    // 0x18c4d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18c4d4:
    // 0x18c4d4: 0x0  nop
    ctx->pc = 0x18c4d4u;
    // NOP
label_18c4d8:
    // 0x18c4d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c4d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18c4dc:
    // 0x18c4dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c4e0:
    if (ctx->pc == 0x18C4E0u) {
        ctx->pc = 0x18C4E4u;
        goto label_18c4e4;
    }
    ctx->pc = 0x18C4DCu;
    {
        const bool branch_taken_0x18c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c4dc) {
            ctx->pc = 0x18C4FCu;
            goto label_18c4fc;
        }
    }
    ctx->pc = 0x18C4E4u;
label_18c4e4:
    // 0x18c4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18c4e8:
    // 0x18c4e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18c4ec:
    // 0x18c4ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18c4f0:
    // 0x18c4f0: 0x0  nop
    ctx->pc = 0x18c4f0u;
    // NOP
label_18c4f4:
    // 0x18c4f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18c4f8:
    // 0x18c4f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18c4f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18c4fc:
    // 0x18c4fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18c4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18c500:
    // 0x18c500: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18c500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18c504:
    // 0x18c504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18c504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c508:
    // 0x18c508: 0xc64101b0  lwc1        $f1, 0x1B0($s2)
    ctx->pc = 0x18c508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c50c:
    // 0x18c50c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18c50cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18c510:
    // 0x18c510: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18c510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18c514:
    // 0x18c514: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x18c514u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_18c518:
    // 0x18c518: 0x10000002  b           . + 4 + (0x2 << 2)
label_18c51c:
    if (ctx->pc == 0x18C51Cu) {
        ctx->pc = 0x18C520u;
        goto label_18c520;
    }
    ctx->pc = 0x18C518u;
    {
        const bool branch_taken_0x18c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c518) {
            ctx->pc = 0x18C524u;
            goto label_18c524;
        }
    }
    ctx->pc = 0x18C520u;
label_18c520:
    // 0x18c520: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x18c520u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_18c524:
    // 0x18c524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18c524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c528:
    // 0x18c528: 0x0  nop
    ctx->pc = 0x18c528u;
    // NOP
label_18c52c:
    // 0x18c52c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18c52cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c530:
    // 0x18c530: 0x0  nop
    ctx->pc = 0x18c530u;
    // NOP
label_18c534:
    // 0x18c534: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_18c538:
    if (ctx->pc == 0x18C538u) {
        ctx->pc = 0x18C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C534u;
        // 0x18c538: 0x8e4301a8  lw          $v1, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C53Cu;
        goto label_18c53c;
    }
    ctx->pc = 0x18C534u;
    {
        const bool branch_taken_0x18c534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C534u;
        // 0x18c538: 0x8e4301a8  lw          $v1, 0x1A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c534) {
            ctx->pc = 0x18C57Cu;
            goto label_18c57c;
        }
    }
    ctx->pc = 0x18C53Cu;
label_18c53c:
    // 0x18c53c: 0x8e4201a4  lw          $v0, 0x1A4($s2)
    ctx->pc = 0x18c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_18c540:
    // 0x18c540: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_18c544:
    if (ctx->pc == 0x18C544u) {
        ctx->pc = 0x18C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C540u;
        // 0x18c544: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C548u;
        goto label_18c548;
    }
    ctx->pc = 0x18C540u;
    {
        const bool branch_taken_0x18c540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C540u;
        // 0x18c544: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c540) {
            ctx->pc = 0x18C57Cu;
            goto label_18c57c;
        }
    }
    ctx->pc = 0x18C548u;
label_18c548:
    // 0x18c548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18c548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18c54c:
    // 0x18c54c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18c54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c550:
    // 0x18c550: 0x0  nop
    ctx->pc = 0x18c550u;
    // NOP
label_18c554:
    // 0x18c554: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x18c554u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_18c558:
    // 0x18c558: 0xc05e896  jal         func_17A258
label_18c55c:
    if (ctx->pc == 0x18C55Cu) {
        ctx->pc = 0x18C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C558u;
        // 0x18c55c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C560u;
        goto label_18c560;
    }
    ctx->pc = 0x18C558u;
    SET_GPR_U32(ctx, 31, 0x18C560u);
    ctx->pc = 0x18C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C558u;
    // 0x18c55c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A258u, 0x18C558u, 0x18C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C560u;
label_18c560:
    // 0x18c560: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x18c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_18c564:
    // 0x18c564: 0x8bab0053  lwl         $t3, 0x53($sp)
    ctx->pc = 0x18c564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_18c568:
    // 0x18c568: 0x9bab0050  lwr         $t3, 0x50($sp)
    ctx->pc = 0x18c568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_18c56c:
    // 0x18c56c: 0xabab0003  swl         $t3, 0x3($sp)
    ctx->pc = 0x18c56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c570:
    // 0x18c570: 0xbbab0000  swr         $t3, 0x0($sp)
    ctx->pc = 0x18c570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c574:
    // 0x18c574: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c578:
    if (ctx->pc == 0x18C578u) {
        ctx->pc = 0x18C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C574u;
        // 0x18c578: 0x924301b4  lbu         $v1, 0x1B4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C57Cu;
        goto label_18c57c;
    }
    ctx->pc = 0x18C574u;
    {
        const bool branch_taken_0x18c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C574u;
        // 0x18c578: 0x924301b4  lbu         $v1, 0x1B4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c574) {
            ctx->pc = 0x18C594u;
            goto label_18c594;
        }
    }
    ctx->pc = 0x18C57Cu;
label_18c57c:
    // 0x18c57c: 0xae4301a4  sw          $v1, 0x1A4($s2)
    ctx->pc = 0x18c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 3));
label_18c580:
    // 0x18c580: 0x8a4401a7  lwl         $a0, 0x1A7($s2)
    ctx->pc = 0x18c580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 423); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_18c584:
    // 0x18c584: 0x9a4401a4  lwr         $a0, 0x1A4($s2)
    ctx->pc = 0x18c584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 420); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_18c588:
    // 0x18c588: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x18c588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c58c:
    // 0x18c58c: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x18c58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c590:
    // 0x18c590: 0x924301b4  lbu         $v1, 0x1B4($s2)
    ctx->pc = 0x18c590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 436)));
label_18c594:
    // 0x18c594: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x18c594u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_18c598:
    // 0x18c598: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x18c598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_18c59c:
    // 0x18c59c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_18c5a0:
    if (ctx->pc == 0x18C5A0u) {
        ctx->pc = 0x18C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C59Cu;
        // 0x18c5a0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5A4u;
        goto label_18c5a4;
    }
    ctx->pc = 0x18C59Cu;
    {
        const bool branch_taken_0x18c59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c59c) {
            ctx->pc = 0x18C5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C59Cu;
            // 0x18c5a0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5A4u;
            goto label_18c5a4;
        }
    }
    ctx->pc = 0x18C5A4u;
label_18c5a4:
    // 0x18c5a4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_18c5a8:
    if (ctx->pc == 0x18C5A8u) {
        ctx->pc = 0x18C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5A4u;
        // 0x18c5a8: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5ACu;
        goto label_18c5ac;
    }
    ctx->pc = 0x18C5A4u;
    {
        const bool branch_taken_0x18c5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5A4u;
        // 0x18c5a8: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5a4) {
            ctx->pc = 0x18C5BCu;
            goto label_18c5bc;
        }
    }
    ctx->pc = 0x18C5ACu;
label_18c5ac:
    // 0x18c5ac: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x18c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_18c5b0:
    // 0x18c5b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18c5b4:
    // 0x18c5b4: 0x146200bc  bne         $v1, $v0, . + 4 + (0xBC << 2)
label_18c5b8:
    if (ctx->pc == 0x18C5B8u) {
        ctx->pc = 0x18C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5B4u;
        // 0x18c5b8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5BCu;
        goto label_18c5bc;
    }
    ctx->pc = 0x18C5B4u;
    {
        const bool branch_taken_0x18c5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5B4u;
        // 0x18c5b8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5b4) {
            ctx->pc = 0x18C8A8u;
            goto label_18c8a8;
        }
    }
    ctx->pc = 0x18C5BCu;
label_18c5bc:
    // 0x18c5bc: 0x8e450174  lw          $a1, 0x174($s2)
    ctx->pc = 0x18c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_18c5c0:
    // 0x18c5c0: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
label_18c5c4:
    if (ctx->pc == 0x18C5C4u) {
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C0u;
        // 0x18c5c4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C5C8u;
        goto label_18c5c8;
    }
    ctx->pc = 0x18C5C0u;
    {
        const bool branch_taken_0x18c5c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5C0u;
        // 0x18c5c4: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5c0) {
            ctx->pc = 0x18C670u;
            goto label_18c670;
        }
    }
    ctx->pc = 0x18C5C8u;
label_18c5c8:
    // 0x18c5c8: 0x6a49017f  ldl         $t1, 0x17F($s2)
    ctx->pc = 0x18c5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_18c5cc:
    // 0x18c5cc: 0x6e490178  ldr         $t1, 0x178($s2)
    ctx->pc = 0x18c5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_18c5d0:
    // 0x18c5d0: 0x6a4a0187  ldl         $t2, 0x187($s2)
    ctx->pc = 0x18c5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_18c5d4:
    // 0x18c5d4: 0x6e4a0180  ldr         $t2, 0x180($s2)
    ctx->pc = 0x18c5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_18c5d8:
    // 0x18c5d8: 0xb3a90027  sdl         $t1, 0x27($sp)
    ctx->pc = 0x18c5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c5dc:
    // 0x18c5dc: 0xb7a90020  sdr         $t1, 0x20($sp)
    ctx->pc = 0x18c5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c5e0:
    // 0x18c5e0: 0xb3aa002f  sdl         $t2, 0x2F($sp)
    ctx->pc = 0x18c5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c5e4:
    // 0x18c5e4: 0xb7aa0028  sdr         $t2, 0x28($sp)
    ctx->pc = 0x18c5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c5e8:
    // 0x18c5e8: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x18c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_18c5ec:
    // 0x18c5ec: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x18c5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_18c5f0:
    // 0x18c5f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18c5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18c5f4:
    // 0x18c5f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18c5f8:
    // 0x18c5f8: 0x40f809  jalr        $v0
label_18c5fc:
    if (ctx->pc == 0x18C5FCu) {
        ctx->pc = 0x18C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5F8u;
        // 0x18c5fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C600u;
        goto label_18c600;
    }
    ctx->pc = 0x18C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C600u);
        ctx->pc = 0x18C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5F8u;
        // 0x18c5fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C5F8u, 0x18C600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C600u;
label_18c600:
    // 0x18c600: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x18c600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_18c604:
    // 0x18c604: 0x2c63006f  sltiu       $v1, $v1, 0x6F
    ctx->pc = 0x18c604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
label_18c608:
    // 0x18c608: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_18c60c:
    if (ctx->pc == 0x18C60Cu) {
        ctx->pc = 0x18C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C608u;
        // 0x18c60c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C610u;
        goto label_18c610;
    }
    ctx->pc = 0x18C608u;
    {
        const bool branch_taken_0x18c608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C608u;
        // 0x18c60c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c608) {
            ctx->pc = 0x18C644u;
            goto label_18c644;
        }
    }
    ctx->pc = 0x18C610u;
label_18c610:
    // 0x18c610: 0x93a20057  lbu         $v0, 0x57($sp)
    ctx->pc = 0x18c610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 87)));
label_18c614:
    // 0x18c614: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_18c618:
    if (ctx->pc == 0x18C618u) {
        ctx->pc = 0x18C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C614u;
        // 0x18c618: 0x3c0500ff  lui         $a1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C61Cu;
        goto label_18c61c;
    }
    ctx->pc = 0x18C614u;
    {
        const bool branch_taken_0x18c614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C614u;
        // 0x18c618: 0x3c0500ff  lui         $a1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c614) {
            ctx->pc = 0x18C66Cu;
            goto label_18c66c;
        }
    }
    ctx->pc = 0x18C61Cu;
label_18c61c:
    // 0x18c61c: 0x8e460174  lw          $a2, 0x174($s2)
    ctx->pc = 0x18c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_18c620:
    // 0x18c620: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x18c620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_18c624:
    // 0x18c624: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x18c624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_18c628:
    // 0x18c628: 0x2052824  and         $a1, $s0, $a1
    ctx->pc = 0x18c628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
label_18c62c:
    // 0x18c62c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x18c62cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_18c630:
    // 0x18c630: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_18c634:
    // 0x18c634: 0x60f809  jalr        $v1
label_18c638:
    if (ctx->pc == 0x18C638u) {
        ctx->pc = 0x18C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C634u;
        // 0x18c638: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C63Cu;
        goto label_18c63c;
    }
    ctx->pc = 0x18C634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C63Cu);
        ctx->pc = 0x18C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C634u;
        // 0x18c638: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C634u, 0x18C63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C63Cu;
label_18c63c:
    // 0x18c63c: 0x1000000c  b           . + 4 + (0xC << 2)
label_18c640:
    if (ctx->pc == 0x18C640u) {
        ctx->pc = 0x18C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C63Cu;
        // 0x18c640: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C644u;
        goto label_18c644;
    }
    ctx->pc = 0x18C63Cu;
    {
        const bool branch_taken_0x18c63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C63Cu;
        // 0x18c640: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c63c) {
            ctx->pc = 0x18C670u;
            goto label_18c670;
        }
    }
    ctx->pc = 0x18C644u;
label_18c644:
    // 0x18c644: 0x93a20057  lbu         $v0, 0x57($sp)
    ctx->pc = 0x18c644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 87)));
label_18c648:
    // 0x18c648: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_18c64c:
    if (ctx->pc == 0x18C64Cu) {
        ctx->pc = 0x18C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C648u;
        // 0x18c64c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C650u;
        goto label_18c650;
    }
    ctx->pc = 0x18C648u;
    {
        const bool branch_taken_0x18c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C648u;
        // 0x18c64c: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c648) {
            ctx->pc = 0x18C670u;
            goto label_18c670;
        }
    }
    ctx->pc = 0x18C650u;
label_18c650:
    // 0x18c650: 0x8e460174  lw          $a2, 0x174($s2)
    ctx->pc = 0x18c650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_18c654:
    // 0x18c654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c658:
    // 0x18c658: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x18c658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_18c65c:
    // 0x18c65c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x18c65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_18c660:
    // 0x18c660: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_18c664:
    // 0x18c664: 0x60f809  jalr        $v1
label_18c668:
    if (ctx->pc == 0x18C668u) {
        ctx->pc = 0x18C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C664u;
        // 0x18c668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C66Cu;
        goto label_18c66c;
    }
    ctx->pc = 0x18C664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C66Cu);
        ctx->pc = 0x18C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C664u;
        // 0x18c668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C664u, 0x18C66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C66Cu;
label_18c66c:
    // 0x18c66c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18c66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18c670:
    // 0x18c670: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x18c670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18c674:
    // 0x18c674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c678:
    // 0x18c678: 0xc10c1fa  jal         func_4307E8
label_18c67c:
    if (ctx->pc == 0x18C67Cu) {
        ctx->pc = 0x18C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C678u;
        // 0x18c67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C680u;
        goto label_18c680;
    }
    ctx->pc = 0x18C678u;
    SET_GPR_U32(ctx, 31, 0x18C680u);
    ctx->pc = 0x18C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C678u;
    // 0x18c67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x18C678u, 0x18C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C680u;
label_18c680:
    // 0x18c680: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x18c680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_18c684:
    // 0x18c684: 0x8e06cdb4  lw          $a2, -0x324C($s0)
    ctx->pc = 0x18c684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_18c688:
    // 0x18c688: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x18c688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c68c:
    // 0x18c68c: 0x96450212  lhu         $a1, 0x212($s2)
    ctx->pc = 0x18c68cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 530)));
label_18c690:
    // 0x18c690: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x18c690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18c694:
    // 0x18c694: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_18c698:
    // 0x18c698: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x18c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18c69c:
    // 0x18c69c: 0x40f809  jalr        $v0
label_18c6a0:
    if (ctx->pc == 0x18C6A0u) {
        ctx->pc = 0x18C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C69Cu;
        // 0x18c6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6A4u;
        goto label_18c6a4;
    }
    ctx->pc = 0x18C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C6A4u);
        ctx->pc = 0x18C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C69Cu;
        // 0x18c6a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C69Cu, 0x18C6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C6A4u;
label_18c6a4:
    // 0x18c6a4: 0x8e07cdb4  lw          $a3, -0x324C($s0)
    ctx->pc = 0x18c6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_18c6a8:
    // 0x18c6a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18c6a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c6ac:
    // 0x18c6ac: 0x96450212  lhu         $a1, 0x212($s2)
    ctx->pc = 0x18c6acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 530)));
label_18c6b0:
    // 0x18c6b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c6b4:
    // 0x18c6b4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x18c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18c6b8:
    // 0x18c6b8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18c6b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_18c6bc:
    // 0x18c6bc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x18c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_18c6c0:
    // 0x18c6c0: 0x60f809  jalr        $v1
label_18c6c4:
    if (ctx->pc == 0x18C6C4u) {
        ctx->pc = 0x18C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6C0u;
        // 0x18c6c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6C8u;
        goto label_18c6c8;
    }
    ctx->pc = 0x18C6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C6C8u);
        ctx->pc = 0x18C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6C0u;
        // 0x18c6c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C6C0u, 0x18C6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C6C8u;
label_18c6c8:
    // 0x18c6c8: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x18c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_18c6cc:
    // 0x18c6cc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x18c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18c6d0:
    // 0x18c6d0: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x18c6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_18c6d4:
    // 0x18c6d4: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x18c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_18c6d8:
    // 0x18c6d8: 0x40f809  jalr        $v0
label_18c6dc:
    if (ctx->pc == 0x18C6DCu) {
        ctx->pc = 0x18C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6D8u;
        // 0x18c6dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6E0u;
        goto label_18c6e0;
    }
    ctx->pc = 0x18C6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C6E0u);
        ctx->pc = 0x18C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6D8u;
        // 0x18c6dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C6D8u, 0x18C6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C6E0u;
label_18c6e0:
    // 0x18c6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18c6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c6e4:
    // 0x18c6e4: 0x1200006f  beqz        $s0, . + 4 + (0x6F << 2)
label_18c6e8:
    if (ctx->pc == 0x18C6E8u) {
        ctx->pc = 0x18C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6E4u;
        // 0x18c6e8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6ECu;
        goto label_18c6ec;
    }
    ctx->pc = 0x18C6E4u;
    {
        const bool branch_taken_0x18c6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6E4u;
        // 0x18c6e8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6e4) {
            ctx->pc = 0x18C8A4u;
            goto label_18c8a4;
        }
    }
    ctx->pc = 0x18C6ECu;
label_18c6ec:
    // 0x18c6ec: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x18c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_18c6f0:
    // 0x18c6f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18c6f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c6f4:
    // 0x18c6f4: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x18c6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_18c6f8:
    // 0x18c6f8: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x18c6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_18c6fc:
    // 0x18c6fc: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x18c6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18c700:
    // 0x18c700: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x18c700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18c704:
    // 0x18c704: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x18c704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c708:
    // 0x18c708: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x18c708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c70c:
    // 0x18c70c: 0xb3a4003f  sdl         $a0, 0x3F($sp)
    ctx->pc = 0x18c70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c710:
    // 0x18c710: 0xb7a40038  sdr         $a0, 0x38($sp)
    ctx->pc = 0x18c710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18c714:
    // 0x18c714: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x18c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_18c718:
    // 0x18c718: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18c718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_18c71c:
    // 0x18c71c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18c71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18c720:
    // 0x18c720: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18c724:
    if (ctx->pc == 0x18C724u) {
        ctx->pc = 0x18C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C720u;
        // 0x18c724: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C728u;
        goto label_18c728;
    }
    ctx->pc = 0x18C720u;
    {
        const bool branch_taken_0x18c720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C720u;
        // 0x18c724: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c720) {
            ctx->pc = 0x18C740u;
            goto label_18c740;
        }
    }
    ctx->pc = 0x18C728u;
label_18c728:
    // 0x18c728: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18c72c:
    if (ctx->pc == 0x18C72Cu) {
        ctx->pc = 0x18C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C728u;
        // 0x18c72c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C730u;
        goto label_18c730;
    }
    ctx->pc = 0x18C728u;
    {
        const bool branch_taken_0x18c728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C728u;
        // 0x18c72c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c728) {
            ctx->pc = 0x18C740u;
            goto label_18c740;
        }
    }
    ctx->pc = 0x18C730u;
label_18c730:
    // 0x18c730: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18c734:
    if (ctx->pc == 0x18C734u) {
        ctx->pc = 0x18C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C730u;
        // 0x18c734: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C738u;
        goto label_18c738;
    }
    ctx->pc = 0x18C730u;
    {
        const bool branch_taken_0x18c730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C730u;
        // 0x18c734: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c730) {
            ctx->pc = 0x18C740u;
            goto label_18c740;
        }
    }
    ctx->pc = 0x18C738u;
label_18c738:
    // 0x18c738: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18c73c:
    if (ctx->pc == 0x18C73Cu) {
        ctx->pc = 0x18C740u;
        goto label_18c740;
    }
    ctx->pc = 0x18C738u;
    {
        const bool branch_taken_0x18c738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c738) {
            ctx->pc = 0x18C744u;
            goto label_18c744;
        }
    }
    ctx->pc = 0x18C740u;
label_18c740:
    // 0x18c740: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18c740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c744:
    // 0x18c744: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_18c748:
    if (ctx->pc == 0x18C748u) {
        ctx->pc = 0x18C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C744u;
        // 0x18c748: 0x8e8acdb4  lw          $t2, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C74Cu;
        goto label_18c74c;
    }
    ctx->pc = 0x18C744u;
    {
        const bool branch_taken_0x18c744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C744u;
        // 0x18c748: 0x8e8acdb4  lw          $t2, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c744) {
            ctx->pc = 0x18C78Cu;
            goto label_18c78c;
        }
    }
    ctx->pc = 0x18C74Cu;
label_18c74c:
    // 0x18c74c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c750:
    // 0x18c750: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18c750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c754:
    // 0x18c754: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18c754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c758:
    // 0x18c758: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x18c758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_18c75c:
    // 0x18c75c: 0x26490198  addiu       $t1, $s2, 0x198
    ctx->pc = 0x18c75cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
label_18c760:
    // 0x18c760: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x18c760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_18c764:
    // 0x18c764: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x18c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_18c768:
    // 0x18c768: 0x40f809  jalr        $v0
label_18c76c:
    if (ctx->pc == 0x18C76Cu) {
        ctx->pc = 0x18C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C768u;
        // 0x18c76c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C770u;
        goto label_18c770;
    }
    ctx->pc = 0x18C768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C770u);
        ctx->pc = 0x18C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C768u;
        // 0x18c76c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C768u, 0x18C770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C770u;
label_18c770:
    // 0x18c770: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x18c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_18c774:
    // 0x18c774: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18c774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18c778:
    // 0x18c778: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_18c77c:
    if (ctx->pc == 0x18C77Cu) {
        ctx->pc = 0x18C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C778u;
        // 0x18c77c: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C780u;
        goto label_18c780;
    }
    ctx->pc = 0x18C778u;
    {
        const bool branch_taken_0x18c778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C778u;
        // 0x18c77c: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c778) {
            ctx->pc = 0x18C7B8u;
            goto label_18c7b8;
        }
    }
    ctx->pc = 0x18C780u;
label_18c780:
    // 0x18c780: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x18c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18c784:
    // 0x18c784: 0x1000000a  b           . + 4 + (0xA << 2)
label_18c788:
    if (ctx->pc == 0x18C788u) {
        ctx->pc = 0x18C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C784u;
        // 0x18c788: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C78Cu;
        goto label_18c78c;
    }
    ctx->pc = 0x18C784u;
    {
        const bool branch_taken_0x18c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C784u;
        // 0x18c788: 0xae420198  sw          $v0, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c784) {
            ctx->pc = 0x18C7B0u;
            goto label_18c7b0;
        }
    }
    ctx->pc = 0x18C78Cu;
label_18c78c:
    // 0x18c78c: 0x8e89cdb4  lw          $t1, -0x324C($s4)
    ctx->pc = 0x18c78cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
label_18c790:
    // 0x18c790: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c794:
    // 0x18c794: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18c794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18c798:
    // 0x18c798: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18c798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c79c:
    // 0x18c79c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x18c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_18c7a0:
    // 0x18c7a0: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x18c7a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_18c7a4:
    // 0x18c7a4: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x18c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_18c7a8:
    // 0x18c7a8: 0x60f809  jalr        $v1
label_18c7ac:
    if (ctx->pc == 0x18C7ACu) {
        ctx->pc = 0x18C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7A8u;
        // 0x18c7ac: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7B0u;
        goto label_18c7b0;
    }
    ctx->pc = 0x18C7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C7B0u);
        ctx->pc = 0x18C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7A8u;
        // 0x18c7ac: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C7A8u, 0x18C7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C7B0u;
label_18c7b0:
    // 0x18c7b0: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x18c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_18c7b4:
    // 0x18c7b4: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x18c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_18c7b8:
    // 0x18c7b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18c7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18c7bc:
    // 0x18c7bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_18c7c0:
    if (ctx->pc == 0x18C7C0u) {
        ctx->pc = 0x18C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7BCu;
        // 0x18c7c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7C4u;
        goto label_18c7c4;
    }
    ctx->pc = 0x18C7BCu;
    {
        const bool branch_taken_0x18c7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7BCu;
        // 0x18c7c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7bc) {
            ctx->pc = 0x18C7DCu;
            goto label_18c7dc;
        }
    }
    ctx->pc = 0x18C7C4u;
label_18c7c4:
    // 0x18c7c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18c7c8:
    if (ctx->pc == 0x18C7C8u) {
        ctx->pc = 0x18C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7C4u;
        // 0x18c7c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7CCu;
        goto label_18c7cc;
    }
    ctx->pc = 0x18C7C4u;
    {
        const bool branch_taken_0x18c7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7C4u;
        // 0x18c7c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7c4) {
            ctx->pc = 0x18C7DCu;
            goto label_18c7dc;
        }
    }
    ctx->pc = 0x18C7CCu;
label_18c7cc:
    // 0x18c7cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18c7d0:
    if (ctx->pc == 0x18C7D0u) {
        ctx->pc = 0x18C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7CCu;
        // 0x18c7d0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7D4u;
        goto label_18c7d4;
    }
    ctx->pc = 0x18C7CCu;
    {
        const bool branch_taken_0x18c7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7CCu;
        // 0x18c7d0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7cc) {
            ctx->pc = 0x18C7DCu;
            goto label_18c7dc;
        }
    }
    ctx->pc = 0x18C7D4u;
label_18c7d4:
    // 0x18c7d4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18c7d8:
    if (ctx->pc == 0x18C7D8u) {
        ctx->pc = 0x18C7DCu;
        goto label_18c7dc;
    }
    ctx->pc = 0x18C7D4u;
    {
        const bool branch_taken_0x18c7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c7d4) {
            ctx->pc = 0x18C7E0u;
            goto label_18c7e0;
        }
    }
    ctx->pc = 0x18C7DCu;
label_18c7dc:
    // 0x18c7dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18c7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c7e0:
    // 0x18c7e0: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
label_18c7e4:
    if (ctx->pc == 0x18C7E4u) {
        ctx->pc = 0x18C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7E0u;
        // 0x18c7e4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7E8u;
        goto label_18c7e8;
    }
    ctx->pc = 0x18C7E0u;
    {
        const bool branch_taken_0x18c7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c7e0) {
            ctx->pc = 0x18C7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C7E0u;
            // 0x18c7e4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8A8u;
            goto label_18c8a8;
        }
    }
    ctx->pc = 0x18C7E8u;
label_18c7e8:
    // 0x18c7e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x18c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18c7ec:
    // 0x18c7ec: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x18c7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_18c7f0:
    // 0x18c7f0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x18c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_18c7f4:
    // 0x18c7f4: 0x40f809  jalr        $v0
label_18c7f8:
    if (ctx->pc == 0x18C7F8u) {
        ctx->pc = 0x18C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7F4u;
        // 0x18c7f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7FCu;
        goto label_18c7fc;
    }
    ctx->pc = 0x18C7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C7FCu);
        ctx->pc = 0x18C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7F4u;
        // 0x18c7f8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C7F4u, 0x18C7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C7FCu;
label_18c7fc:
    // 0x18c7fc: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_18c800:
    if (ctx->pc == 0x18C800u) {
        ctx->pc = 0x18C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7FCu;
        // 0x18c800: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C804u;
        goto label_18c804;
    }
    ctx->pc = 0x18C7FCu;
    {
        const bool branch_taken_0x18c7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c7fc) {
            ctx->pc = 0x18C800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C7FCu;
            // 0x18c800: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C8A8u;
            goto label_18c8a8;
        }
    }
    ctx->pc = 0x18C804u;
label_18c804:
    // 0x18c804: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_18c808:
    if (ctx->pc == 0x18C808u) {
        ctx->pc = 0x18C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C804u;
        // 0x18c808: 0x8e82cdb4  lw          $v0, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C80Cu;
        goto label_18c80c;
    }
    ctx->pc = 0x18C804u;
    {
        const bool branch_taken_0x18c804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C804u;
        // 0x18c808: 0x8e82cdb4  lw          $v0, -0x324C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c804) {
            ctx->pc = 0x18C854u;
            goto label_18c854;
        }
    }
    ctx->pc = 0x18C80Cu;
label_18c80c:
    // 0x18c80c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x18c80cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18c810:
    // 0x18c810: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x18c810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
label_18c814:
    // 0x18c814: 0x8e480198  lw          $t0, 0x198($s2)
    ctx->pc = 0x18c814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_18c818:
    // 0x18c818: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18c818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c81c:
    // 0x18c81c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18c820:
    // 0x18c820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c824:
    // 0x18c824: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x18c824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_18c828:
    // 0x18c828: 0x8ba70003  lwl         $a3, 0x3($sp)
    ctx->pc = 0x18c828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_18c82c:
    // 0x18c82c: 0x9ba70000  lwr         $a3, 0x0($sp)
    ctx->pc = 0x18c82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_18c830:
    // 0x18c830: 0xaba70043  swl         $a3, 0x43($sp)
    ctx->pc = 0x18c830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c834:
    // 0x18c834: 0xbba70040  swr         $a3, 0x40($sp)
    ctx->pc = 0x18c834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c838:
    // 0x18c838: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18c838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18c83c:
    // 0x18c83c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x18c83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18c840:
    // 0x18c840: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x18c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_18c844:
    // 0x18c844: 0x40f809  jalr        $v0
label_18c848:
    if (ctx->pc == 0x18C848u) {
        ctx->pc = 0x18C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C844u;
        // 0x18c848: 0xe93824  and         $a3, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C84Cu;
        goto label_18c84c;
    }
    ctx->pc = 0x18C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C84Cu);
        ctx->pc = 0x18C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C844u;
        // 0x18c848: 0xe93824  and         $a3, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C844u, 0x18C84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C84Cu;
label_18c84c:
    // 0x18c84c: 0x10000011  b           . + 4 + (0x11 << 2)
label_18c850:
    if (ctx->pc == 0x18C850u) {
        ctx->pc = 0x18C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C84Cu;
        // 0x18c850: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C854u;
        goto label_18c854;
    }
    ctx->pc = 0x18C84Cu;
    {
        const bool branch_taken_0x18c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C84Cu;
        // 0x18c850: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c84c) {
            ctx->pc = 0x18C894u;
            goto label_18c894;
        }
    }
    ctx->pc = 0x18C854u;
label_18c854:
    // 0x18c854: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x18c854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18c858:
    // 0x18c858: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x18c858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_18c85c:
    // 0x18c85c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18c85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c860:
    // 0x18c860: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18c860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c864:
    // 0x18c864: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18c868:
    // 0x18c868: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x18c868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
label_18c86c:
    // 0x18c86c: 0x8ba70003  lwl         $a3, 0x3($sp)
    ctx->pc = 0x18c86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_18c870:
    // 0x18c870: 0x9ba70000  lwr         $a3, 0x0($sp)
    ctx->pc = 0x18c870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_18c874:
    // 0x18c874: 0xaba70043  swl         $a3, 0x43($sp)
    ctx->pc = 0x18c874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c878:
    // 0x18c878: 0xbba70040  swr         $a3, 0x40($sp)
    ctx->pc = 0x18c878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18c87c:
    // 0x18c87c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18c880:
    // 0x18c880: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18c884:
    // 0x18c884: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_18c888:
    // 0x18c888: 0x40f809  jalr        $v0
label_18c88c:
    if (ctx->pc == 0x18C88Cu) {
        ctx->pc = 0x18C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C888u;
        // 0x18c88c: 0xe83824  and         $a3, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C890u;
        goto label_18c890;
    }
    ctx->pc = 0x18C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C890u);
        ctx->pc = 0x18C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C888u;
        // 0x18c88c: 0xe83824  and         $a3, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C888u, 0x18C890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C890u;
label_18c890:
    // 0x18c890: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x18c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18c894:
    // 0x18c894: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x18c894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_18c898:
    // 0x18c898: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x18c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18c89c:
    // 0x18c89c: 0x40f809  jalr        $v0
label_18c8a0:
    if (ctx->pc == 0x18C8A0u) {
        ctx->pc = 0x18C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C89Cu;
        // 0x18c8a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8A4u;
        goto label_18c8a4;
    }
    ctx->pc = 0x18C89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C8A4u);
        ctx->pc = 0x18C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C89Cu;
        // 0x18c8a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C89Cu, 0x18C8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C8A4u;
label_18c8a4:
    // 0x18c8a4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x18c8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18c8a8:
    // 0x18c8a8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x18c8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18c8ac:
    // 0x18c8ac: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x18c8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18c8b0:
    // 0x18c8b0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x18c8b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18c8b4:
    // 0x18c8b4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x18c8b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18c8b8:
    // 0x18c8b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_18c8bc:
    // 0x18c8bc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x18c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c8c0:
    // 0x18c8c0: 0x3e00008  jr          $ra
label_18c8c4:
    if (ctx->pc == 0x18C8C4u) {
        ctx->pc = 0x18C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8C0u;
        // 0x18c8c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8C8u;
        goto label_fallthrough_0x18c8c0;
    }
    ctx->pc = 0x18C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8C0u;
        // 0x18c8c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18c8c0:
    ctx->pc = 0x18C8C8u;
}
