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

// Function: sub_003EC500
// Address: 0x3ec500 - 0x3ec8e8
void sub_003EC500_0x3ec500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC500_0x3ec500");
#endif

    switch (ctx->pc) {
        case 0x3ec500u: goto label_3ec500;
        case 0x3ec504u: goto label_3ec504;
        case 0x3ec508u: goto label_3ec508;
        case 0x3ec50cu: goto label_3ec50c;
        case 0x3ec510u: goto label_3ec510;
        case 0x3ec514u: goto label_3ec514;
        case 0x3ec518u: goto label_3ec518;
        case 0x3ec51cu: goto label_3ec51c;
        case 0x3ec520u: goto label_3ec520;
        case 0x3ec524u: goto label_3ec524;
        case 0x3ec528u: goto label_3ec528;
        case 0x3ec52cu: goto label_3ec52c;
        case 0x3ec530u: goto label_3ec530;
        case 0x3ec534u: goto label_3ec534;
        case 0x3ec538u: goto label_3ec538;
        case 0x3ec53cu: goto label_3ec53c;
        case 0x3ec540u: goto label_3ec540;
        case 0x3ec544u: goto label_3ec544;
        case 0x3ec548u: goto label_3ec548;
        case 0x3ec54cu: goto label_3ec54c;
        case 0x3ec550u: goto label_3ec550;
        case 0x3ec554u: goto label_3ec554;
        case 0x3ec558u: goto label_3ec558;
        case 0x3ec55cu: goto label_3ec55c;
        case 0x3ec560u: goto label_3ec560;
        case 0x3ec564u: goto label_3ec564;
        case 0x3ec568u: goto label_3ec568;
        case 0x3ec56cu: goto label_3ec56c;
        case 0x3ec570u: goto label_3ec570;
        case 0x3ec574u: goto label_3ec574;
        case 0x3ec578u: goto label_3ec578;
        case 0x3ec57cu: goto label_3ec57c;
        case 0x3ec580u: goto label_3ec580;
        case 0x3ec584u: goto label_3ec584;
        case 0x3ec588u: goto label_3ec588;
        case 0x3ec58cu: goto label_3ec58c;
        case 0x3ec590u: goto label_3ec590;
        case 0x3ec594u: goto label_3ec594;
        case 0x3ec598u: goto label_3ec598;
        case 0x3ec59cu: goto label_3ec59c;
        case 0x3ec5a0u: goto label_3ec5a0;
        case 0x3ec5a4u: goto label_3ec5a4;
        case 0x3ec5a8u: goto label_3ec5a8;
        case 0x3ec5acu: goto label_3ec5ac;
        case 0x3ec5b0u: goto label_3ec5b0;
        case 0x3ec5b4u: goto label_3ec5b4;
        case 0x3ec5b8u: goto label_3ec5b8;
        case 0x3ec5bcu: goto label_3ec5bc;
        case 0x3ec5c0u: goto label_3ec5c0;
        case 0x3ec5c4u: goto label_3ec5c4;
        case 0x3ec5c8u: goto label_3ec5c8;
        case 0x3ec5ccu: goto label_3ec5cc;
        case 0x3ec5d0u: goto label_3ec5d0;
        case 0x3ec5d4u: goto label_3ec5d4;
        case 0x3ec5d8u: goto label_3ec5d8;
        case 0x3ec5dcu: goto label_3ec5dc;
        case 0x3ec5e0u: goto label_3ec5e0;
        case 0x3ec5e4u: goto label_3ec5e4;
        case 0x3ec5e8u: goto label_3ec5e8;
        case 0x3ec5ecu: goto label_3ec5ec;
        case 0x3ec5f0u: goto label_3ec5f0;
        case 0x3ec5f4u: goto label_3ec5f4;
        case 0x3ec5f8u: goto label_3ec5f8;
        case 0x3ec5fcu: goto label_3ec5fc;
        case 0x3ec600u: goto label_3ec600;
        case 0x3ec604u: goto label_3ec604;
        case 0x3ec608u: goto label_3ec608;
        case 0x3ec60cu: goto label_3ec60c;
        case 0x3ec610u: goto label_3ec610;
        case 0x3ec614u: goto label_3ec614;
        case 0x3ec618u: goto label_3ec618;
        case 0x3ec61cu: goto label_3ec61c;
        case 0x3ec620u: goto label_3ec620;
        case 0x3ec624u: goto label_3ec624;
        case 0x3ec628u: goto label_3ec628;
        case 0x3ec62cu: goto label_3ec62c;
        case 0x3ec630u: goto label_3ec630;
        case 0x3ec634u: goto label_3ec634;
        case 0x3ec638u: goto label_3ec638;
        case 0x3ec63cu: goto label_3ec63c;
        case 0x3ec640u: goto label_3ec640;
        case 0x3ec644u: goto label_3ec644;
        case 0x3ec648u: goto label_3ec648;
        case 0x3ec64cu: goto label_3ec64c;
        case 0x3ec650u: goto label_3ec650;
        case 0x3ec654u: goto label_3ec654;
        case 0x3ec658u: goto label_3ec658;
        case 0x3ec65cu: goto label_3ec65c;
        case 0x3ec660u: goto label_3ec660;
        case 0x3ec664u: goto label_3ec664;
        case 0x3ec668u: goto label_3ec668;
        case 0x3ec66cu: goto label_3ec66c;
        case 0x3ec670u: goto label_3ec670;
        case 0x3ec674u: goto label_3ec674;
        case 0x3ec678u: goto label_3ec678;
        case 0x3ec67cu: goto label_3ec67c;
        case 0x3ec680u: goto label_3ec680;
        case 0x3ec684u: goto label_3ec684;
        case 0x3ec688u: goto label_3ec688;
        case 0x3ec68cu: goto label_3ec68c;
        case 0x3ec690u: goto label_3ec690;
        case 0x3ec694u: goto label_3ec694;
        case 0x3ec698u: goto label_3ec698;
        case 0x3ec69cu: goto label_3ec69c;
        case 0x3ec6a0u: goto label_3ec6a0;
        case 0x3ec6a4u: goto label_3ec6a4;
        case 0x3ec6a8u: goto label_3ec6a8;
        case 0x3ec6acu: goto label_3ec6ac;
        case 0x3ec6b0u: goto label_3ec6b0;
        case 0x3ec6b4u: goto label_3ec6b4;
        case 0x3ec6b8u: goto label_3ec6b8;
        case 0x3ec6bcu: goto label_3ec6bc;
        case 0x3ec6c0u: goto label_3ec6c0;
        case 0x3ec6c4u: goto label_3ec6c4;
        case 0x3ec6c8u: goto label_3ec6c8;
        case 0x3ec6ccu: goto label_3ec6cc;
        case 0x3ec6d0u: goto label_3ec6d0;
        case 0x3ec6d4u: goto label_3ec6d4;
        case 0x3ec6d8u: goto label_3ec6d8;
        case 0x3ec6dcu: goto label_3ec6dc;
        case 0x3ec6e0u: goto label_3ec6e0;
        case 0x3ec6e4u: goto label_3ec6e4;
        case 0x3ec6e8u: goto label_3ec6e8;
        case 0x3ec6ecu: goto label_3ec6ec;
        case 0x3ec6f0u: goto label_3ec6f0;
        case 0x3ec6f4u: goto label_3ec6f4;
        case 0x3ec6f8u: goto label_3ec6f8;
        case 0x3ec6fcu: goto label_3ec6fc;
        case 0x3ec700u: goto label_3ec700;
        case 0x3ec704u: goto label_3ec704;
        case 0x3ec708u: goto label_3ec708;
        case 0x3ec70cu: goto label_3ec70c;
        case 0x3ec710u: goto label_3ec710;
        case 0x3ec714u: goto label_3ec714;
        case 0x3ec718u: goto label_3ec718;
        case 0x3ec71cu: goto label_3ec71c;
        case 0x3ec720u: goto label_3ec720;
        case 0x3ec724u: goto label_3ec724;
        case 0x3ec728u: goto label_3ec728;
        case 0x3ec72cu: goto label_3ec72c;
        case 0x3ec730u: goto label_3ec730;
        case 0x3ec734u: goto label_3ec734;
        case 0x3ec738u: goto label_3ec738;
        case 0x3ec73cu: goto label_3ec73c;
        case 0x3ec740u: goto label_3ec740;
        case 0x3ec744u: goto label_3ec744;
        case 0x3ec748u: goto label_3ec748;
        case 0x3ec74cu: goto label_3ec74c;
        case 0x3ec750u: goto label_3ec750;
        case 0x3ec754u: goto label_3ec754;
        case 0x3ec758u: goto label_3ec758;
        case 0x3ec75cu: goto label_3ec75c;
        case 0x3ec760u: goto label_3ec760;
        case 0x3ec764u: goto label_3ec764;
        case 0x3ec768u: goto label_3ec768;
        case 0x3ec76cu: goto label_3ec76c;
        case 0x3ec770u: goto label_3ec770;
        case 0x3ec774u: goto label_3ec774;
        case 0x3ec778u: goto label_3ec778;
        case 0x3ec77cu: goto label_3ec77c;
        case 0x3ec780u: goto label_3ec780;
        case 0x3ec784u: goto label_3ec784;
        case 0x3ec788u: goto label_3ec788;
        case 0x3ec78cu: goto label_3ec78c;
        case 0x3ec790u: goto label_3ec790;
        case 0x3ec794u: goto label_3ec794;
        case 0x3ec798u: goto label_3ec798;
        case 0x3ec79cu: goto label_3ec79c;
        case 0x3ec7a0u: goto label_3ec7a0;
        case 0x3ec7a4u: goto label_3ec7a4;
        case 0x3ec7a8u: goto label_3ec7a8;
        case 0x3ec7acu: goto label_3ec7ac;
        case 0x3ec7b0u: goto label_3ec7b0;
        case 0x3ec7b4u: goto label_3ec7b4;
        case 0x3ec7b8u: goto label_3ec7b8;
        case 0x3ec7bcu: goto label_3ec7bc;
        case 0x3ec7c0u: goto label_3ec7c0;
        case 0x3ec7c4u: goto label_3ec7c4;
        case 0x3ec7c8u: goto label_3ec7c8;
        case 0x3ec7ccu: goto label_3ec7cc;
        case 0x3ec7d0u: goto label_3ec7d0;
        case 0x3ec7d4u: goto label_3ec7d4;
        case 0x3ec7d8u: goto label_3ec7d8;
        case 0x3ec7dcu: goto label_3ec7dc;
        case 0x3ec7e0u: goto label_3ec7e0;
        case 0x3ec7e4u: goto label_3ec7e4;
        case 0x3ec7e8u: goto label_3ec7e8;
        case 0x3ec7ecu: goto label_3ec7ec;
        case 0x3ec7f0u: goto label_3ec7f0;
        case 0x3ec7f4u: goto label_3ec7f4;
        case 0x3ec7f8u: goto label_3ec7f8;
        case 0x3ec7fcu: goto label_3ec7fc;
        case 0x3ec800u: goto label_3ec800;
        case 0x3ec804u: goto label_3ec804;
        case 0x3ec808u: goto label_3ec808;
        case 0x3ec80cu: goto label_3ec80c;
        case 0x3ec810u: goto label_3ec810;
        case 0x3ec814u: goto label_3ec814;
        case 0x3ec818u: goto label_3ec818;
        case 0x3ec81cu: goto label_3ec81c;
        case 0x3ec820u: goto label_3ec820;
        case 0x3ec824u: goto label_3ec824;
        case 0x3ec828u: goto label_3ec828;
        case 0x3ec82cu: goto label_3ec82c;
        case 0x3ec830u: goto label_3ec830;
        case 0x3ec834u: goto label_3ec834;
        case 0x3ec838u: goto label_3ec838;
        case 0x3ec83cu: goto label_3ec83c;
        case 0x3ec840u: goto label_3ec840;
        case 0x3ec844u: goto label_3ec844;
        case 0x3ec848u: goto label_3ec848;
        case 0x3ec84cu: goto label_3ec84c;
        case 0x3ec850u: goto label_3ec850;
        case 0x3ec854u: goto label_3ec854;
        case 0x3ec858u: goto label_3ec858;
        case 0x3ec85cu: goto label_3ec85c;
        case 0x3ec860u: goto label_3ec860;
        case 0x3ec864u: goto label_3ec864;
        case 0x3ec868u: goto label_3ec868;
        case 0x3ec86cu: goto label_3ec86c;
        case 0x3ec870u: goto label_3ec870;
        case 0x3ec874u: goto label_3ec874;
        case 0x3ec878u: goto label_3ec878;
        case 0x3ec87cu: goto label_3ec87c;
        case 0x3ec880u: goto label_3ec880;
        case 0x3ec884u: goto label_3ec884;
        case 0x3ec888u: goto label_3ec888;
        case 0x3ec88cu: goto label_3ec88c;
        case 0x3ec890u: goto label_3ec890;
        case 0x3ec894u: goto label_3ec894;
        case 0x3ec898u: goto label_3ec898;
        case 0x3ec89cu: goto label_3ec89c;
        case 0x3ec8a0u: goto label_3ec8a0;
        case 0x3ec8a4u: goto label_3ec8a4;
        case 0x3ec8a8u: goto label_3ec8a8;
        case 0x3ec8acu: goto label_3ec8ac;
        case 0x3ec8b0u: goto label_3ec8b0;
        case 0x3ec8b4u: goto label_3ec8b4;
        case 0x3ec8b8u: goto label_3ec8b8;
        case 0x3ec8bcu: goto label_3ec8bc;
        case 0x3ec8c0u: goto label_3ec8c0;
        case 0x3ec8c4u: goto label_3ec8c4;
        case 0x3ec8c8u: goto label_3ec8c8;
        case 0x3ec8ccu: goto label_3ec8cc;
        case 0x3ec8d0u: goto label_3ec8d0;
        case 0x3ec8d4u: goto label_3ec8d4;
        case 0x3ec8d8u: goto label_3ec8d8;
        case 0x3ec8dcu: goto label_3ec8dc;
        case 0x3ec8e0u: goto label_3ec8e0;
        case 0x3ec8e4u: goto label_3ec8e4;
        default: break;
    }

    ctx->pc = 0x3ec500u;

label_3ec500:
    // 0x3ec500: 0x27bdfa50  addiu       $sp, $sp, -0x5B0
    ctx->pc = 0x3ec500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965840));
label_3ec504:
    // 0x3ec504: 0x7fb00570  sq          $s0, 0x570($sp)
    ctx->pc = 0x3ec504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 16));
label_3ec508:
    // 0x3ec508: 0x7fb10560  sq          $s1, 0x560($sp)
    ctx->pc = 0x3ec508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 17));
label_3ec50c:
    // 0x3ec50c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ec50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ec510:
    // 0x3ec510: 0x7fb20550  sq          $s2, 0x550($sp)
    ctx->pc = 0x3ec510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 18));
label_3ec514:
    // 0x3ec514: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ec514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ec518:
    // 0x3ec518: 0x7fb30540  sq          $s3, 0x540($sp)
    ctx->pc = 0x3ec518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 19));
label_3ec51c:
    // 0x3ec51c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ec51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec520:
    // 0x3ec520: 0x7fb40530  sq          $s4, 0x530($sp)
    ctx->pc = 0x3ec520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 20));
label_3ec524:
    // 0x3ec524: 0x7fb50520  sq          $s5, 0x520($sp)
    ctx->pc = 0x3ec524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 21));
label_3ec528:
    // 0x3ec528: 0x7fb60510  sq          $s6, 0x510($sp)
    ctx->pc = 0x3ec528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 22));
label_3ec52c:
    // 0x3ec52c: 0x7fb70500  sq          $s7, 0x500($sp)
    ctx->pc = 0x3ec52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 23));
label_3ec530:
    // 0x3ec530: 0x7fbe04f0  sq          $fp, 0x4F0($sp)
    ctx->pc = 0x3ec530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 30));
label_3ec534:
    // 0x3ec534: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x3ec534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
label_3ec538:
    // 0x3ec538: 0xe7b905a8  swc1        $f25, 0x5A8($sp)
    ctx->pc = 0x3ec538u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1448), bits); }
label_3ec53c:
    // 0x3ec53c: 0xe7b805a0  swc1        $f24, 0x5A0($sp)
    ctx->pc = 0x3ec53cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_3ec540:
    // 0x3ec540: 0xe7b70598  swc1        $f23, 0x598($sp)
    ctx->pc = 0x3ec540u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1432), bits); }
label_3ec544:
    // 0x3ec544: 0xe7b60590  swc1        $f22, 0x590($sp)
    ctx->pc = 0x3ec544u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_3ec548:
    // 0x3ec548: 0xe7b50588  swc1        $f21, 0x588($sp)
    ctx->pc = 0x3ec548u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_3ec54c:
    // 0x3ec54c: 0xe7b40580  swc1        $f20, 0x580($sp)
    ctx->pc = 0x3ec54cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_3ec550:
    // 0x3ec550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ec550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ec554:
    // 0x3ec554: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ec554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ec558:
    // 0x3ec558: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ec558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ec55c:
    // 0x3ec55c: 0x40f809  jalr        $v0
label_3ec560:
    if (ctx->pc == 0x3EC560u) {
        ctx->pc = 0x3EC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC55Cu;
        // 0x3ec560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC564u;
        goto label_3ec564;
    }
    ctx->pc = 0x3EC55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EC564u);
        ctx->pc = 0x3EC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC55Cu;
        // 0x3ec560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC55Cu, 0x3EC564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EC564u;
label_3ec564:
    // 0x3ec564: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ec564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ec568:
    // 0x3ec568: 0xc0ea12a  jal         func_3A84A8
label_3ec56c:
    if (ctx->pc == 0x3EC56Cu) {
        ctx->pc = 0x3EC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC568u;
        // 0x3ec56c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC570u;
        goto label_3ec570;
    }
    ctx->pc = 0x3EC568u;
    SET_GPR_U32(ctx, 31, 0x3EC570u);
    ctx->pc = 0x3EC56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC568u;
    // 0x3ec56c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EC568u, 0x3EC570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC570u;
label_3ec570:
    // 0x3ec570: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ec570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ec574:
    // 0x3ec574: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ec574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ec578:
    // 0x3ec578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ec578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec57c:
    // 0x3ec57c: 0xc0ea12a  jal         func_3A84A8
label_3ec580:
    if (ctx->pc == 0x3EC580u) {
        ctx->pc = 0x3EC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC57Cu;
        // 0x3ec580: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC584u;
        goto label_3ec584;
    }
    ctx->pc = 0x3EC57Cu;
    SET_GPR_U32(ctx, 31, 0x3EC584u);
    ctx->pc = 0x3EC580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC57Cu;
    // 0x3ec580: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EC57Cu, 0x3EC584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC584u;
label_3ec584:
    // 0x3ec584: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ec584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ec588:
    // 0x3ec588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec58c:
    // 0x3ec58c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3ec58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3ec590:
    // 0x3ec590: 0xc0e858c  jal         func_3A1630
label_3ec594:
    if (ctx->pc == 0x3EC594u) {
        ctx->pc = 0x3EC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC590u;
        // 0x3ec594: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC598u;
        goto label_3ec598;
    }
    ctx->pc = 0x3EC590u;
    SET_GPR_U32(ctx, 31, 0x3EC598u);
    ctx->pc = 0x3EC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC590u;
    // 0x3ec594: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EC590u, 0x3EC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC598u;
label_3ec598:
    // 0x3ec598: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3ec598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ec59c:
    // 0x3ec59c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ec59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ec5a0:
    // 0x3ec5a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ec5a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec5a4:
    // 0x3ec5a4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ec5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3ec5a8:
    // 0x3ec5a8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3ec5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3ec5ac:
    // 0x3ec5ac: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3ec5acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3ec5b0:
    // 0x3ec5b0: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3ec5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3ec5b4:
    // 0x3ec5b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ec5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ec5b8:
    // 0x3ec5b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ec5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ec5bc:
    // 0x3ec5bc: 0xc0e9182  jal         func_3A4608
label_3ec5c0:
    if (ctx->pc == 0x3EC5C0u) {
        ctx->pc = 0x3EC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5BCu;
        // 0x3ec5c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC5C4u;
        goto label_3ec5c4;
    }
    ctx->pc = 0x3EC5BCu;
    SET_GPR_U32(ctx, 31, 0x3EC5C4u);
    ctx->pc = 0x3EC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC5BCu;
    // 0x3ec5c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3EC5BCu, 0x3EC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC5C4u;
label_3ec5c4:
    // 0x3ec5c4: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3ec5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3ec5c8:
    // 0x3ec5c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ec5c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ec5cc:
    // 0x3ec5cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ec5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ec5d0:
    // 0x3ec5d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ec5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec5d4:
    // 0x3ec5d4: 0xc0e919a  jal         func_3A4668
label_3ec5d8:
    if (ctx->pc == 0x3EC5D8u) {
        ctx->pc = 0x3EC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5D4u;
        // 0x3ec5d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC5DCu;
        goto label_3ec5dc;
    }
    ctx->pc = 0x3EC5D4u;
    SET_GPR_U32(ctx, 31, 0x3EC5DCu);
    ctx->pc = 0x3EC5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC5D4u;
    // 0x3ec5d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3EC5D4u, 0x3EC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC5DCu;
label_3ec5dc:
    // 0x3ec5dc: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x3ec5dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3ec5e0:
    // 0x3ec5e0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_3ec5e4:
    if (ctx->pc == 0x3EC5E4u) {
        ctx->pc = 0x3EC5E8u;
        goto label_3ec5e8;
    }
    ctx->pc = 0x3EC5E0u;
    {
        const bool branch_taken_0x3ec5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec5e0) {
            ctx->pc = 0x3EC5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec5b0;
        }
    }
    ctx->pc = 0x3EC5E8u;
label_3ec5e8:
    // 0x3ec5e8: 0xc0e9694  jal         func_3A5A50
label_3ec5ec:
    if (ctx->pc == 0x3EC5ECu) {
        ctx->pc = 0x3EC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5E8u;
        // 0x3ec5ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC5F0u;
        goto label_3ec5f0;
    }
    ctx->pc = 0x3EC5E8u;
    SET_GPR_U32(ctx, 31, 0x3EC5F0u);
    ctx->pc = 0x3EC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC5E8u;
    // 0x3ec5ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3EC5E8u, 0x3EC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC5F0u;
label_3ec5f0:
    // 0x3ec5f0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_3ec5f4:
    if (ctx->pc == 0x3EC5F4u) {
        ctx->pc = 0x3EC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5F0u;
        // 0x3ec5f4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC5F8u;
        goto label_3ec5f8;
    }
    ctx->pc = 0x3EC5F0u;
    {
        const bool branch_taken_0x3ec5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5F0u;
        // 0x3ec5f4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec5f0) {
            ctx->pc = 0x3EC700u;
            goto label_3ec700;
        }
    }
    ctx->pc = 0x3EC5F8u;
label_3ec5f8:
    // 0x3ec5f8: 0x27b00470  addiu       $s0, $sp, 0x470
    ctx->pc = 0x3ec5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3ec5fc:
    // 0x3ec5fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3ec5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3ec600:
    // 0x3ec600: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ec600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ec604:
    // 0x3ec604: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3ec604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
label_3ec608:
    // 0x3ec608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ec608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ec60c:
    // 0x3ec60c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ec60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ec610:
    // 0x3ec610: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3ec610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ec614:
    // 0x3ec614: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3ec614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3ec618:
    // 0x3ec618: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3ec618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ec61c:
    // 0x3ec61c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ec61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ec620:
    // 0x3ec620: 0x27b40450  addiu       $s4, $sp, 0x450
    ctx->pc = 0x3ec620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3ec624:
    // 0x3ec624: 0xafa00474  sw          $zero, 0x474($sp)
    ctx->pc = 0x3ec624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 0));
label_3ec628:
    // 0x3ec628: 0x27b50480  addiu       $s5, $sp, 0x480
    ctx->pc = 0x3ec628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3ec62c:
    // 0x3ec62c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3ec62cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3ec630:
    // 0x3ec630: 0x27b60490  addiu       $s6, $sp, 0x490
    ctx->pc = 0x3ec630u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3ec634:
    // 0x3ec634: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3ec634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3ec638:
    // 0x3ec638: 0x3463d8ff  ori         $v1, $v1, 0xD8FF
    ctx->pc = 0x3ec638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55551);
label_3ec63c:
    // 0x3ec63c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3ec63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3ec640:
    // 0x3ec640: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ec640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ec644:
    // 0x3ec644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ec644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ec648:
    // 0x3ec648: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3ec648u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec64c:
    // 0x3ec64c: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3ec64cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3ec650:
    // 0x3ec650: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3ec650u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3ec654:
    // 0x3ec654: 0xafa30470  sw          $v1, 0x470($sp)
    ctx->pc = 0x3ec654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
label_3ec658:
    // 0x3ec658: 0x26315c10  addiu       $s1, $s1, 0x5C10
    ctx->pc = 0x3ec658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23568));
label_3ec65c:
    // 0x3ec65c: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x3ec65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3ec660:
    // 0x3ec660: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3ec660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ec664:
    // 0x3ec664: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3ec664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3ec668:
    // 0x3ec668: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ec668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec66c:
    // 0x3ec66c: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3ec66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3ec670:
    // 0x3ec670: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3ec670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ec674:
    // 0x3ec674: 0xafb70490  sw          $s7, 0x490($sp)
    ctx->pc = 0x3ec674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 23));
label_3ec678:
    // 0x3ec678: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3ec678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ec67c:
    // 0x3ec67c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ec67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ec680:
    // 0x3ec680: 0xc0ea004  jal         func_3A8010
label_3ec684:
    if (ctx->pc == 0x3EC684u) {
        ctx->pc = 0x3EC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC680u;
        // 0x3ec684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC688u;
        goto label_3ec688;
    }
    ctx->pc = 0x3EC680u;
    SET_GPR_U32(ctx, 31, 0x3EC688u);
    ctx->pc = 0x3EC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC680u;
    // 0x3ec684: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3EC680u, 0x3EC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC688u;
label_3ec688:
    // 0x3ec688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ec688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ec68c:
    // 0x3ec68c: 0xc0f15bc  jal         func_3C56F0
label_3ec690:
    if (ctx->pc == 0x3EC690u) {
        ctx->pc = 0x3EC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC68Cu;
        // 0x3ec690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC694u;
        goto label_3ec694;
    }
    ctx->pc = 0x3EC68Cu;
    SET_GPR_U32(ctx, 31, 0x3EC694u);
    ctx->pc = 0x3EC690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC68Cu;
    // 0x3ec690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EC68Cu, 0x3EC694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC694u;
label_3ec694:
    // 0x3ec694: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ec694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ec698:
    // 0x3ec698: 0x3c0affe2  lui         $t2, 0xFFE2
    ctx->pc = 0x3ec698u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65506 << 16));
label_3ec69c:
    // 0x3ec69c: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3ec69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3ec6a0:
    // 0x3ec6a0: 0x354aa790  ori         $t2, $t2, 0xA790
    ctx->pc = 0x3ec6a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)42896);
label_3ec6a4:
    // 0x3ec6a4: 0xafa00474  sw          $zero, 0x474($sp)
    ctx->pc = 0x3ec6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 0));
label_3ec6a8:
    // 0x3ec6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ec6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6ac:
    // 0x3ec6ac: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3ec6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3ec6b0:
    // 0x3ec6b0: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x3ec6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3ec6b4:
    // 0x3ec6b4: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3ec6b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3ec6b8:
    // 0x3ec6b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3ec6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6bc:
    // 0x3ec6bc: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3ec6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3ec6c0:
    // 0x3ec6c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ec6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6c4:
    // 0x3ec6c4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3ec6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3ec6c8:
    // 0x3ec6c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ec6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3ec6cc:
    // 0x3ec6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ec6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ec6d0:
    // 0x3ec6d0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3ec6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6d4:
    // 0x3ec6d4: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3ec6d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3ec6d8:
    // 0x3ec6d8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3ec6d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6dc:
    // 0x3ec6dc: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x3ec6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3ec6e0:
    // 0x3ec6e0: 0xafaa0470  sw          $t2, 0x470($sp)
    ctx->pc = 0x3ec6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 10));
label_3ec6e4:
    // 0x3ec6e4: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3ec6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3ec6e8:
    // 0x3ec6e8: 0xafb70490  sw          $s7, 0x490($sp)
    ctx->pc = 0x3ec6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 23));
label_3ec6ec:
    // 0x3ec6ec: 0xc0ea004  jal         func_3A8010
label_3ec6f0:
    if (ctx->pc == 0x3EC6F0u) {
        ctx->pc = 0x3EC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6ECu;
        // 0x3ec6f0: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC6F4u;
        goto label_3ec6f4;
    }
    ctx->pc = 0x3EC6ECu;
    SET_GPR_U32(ctx, 31, 0x3EC6F4u);
    ctx->pc = 0x3EC6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC6ECu;
    // 0x3ec6f0: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3EC6ECu, 0x3EC6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC6F4u;
label_3ec6f4:
    // 0x3ec6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ec6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6f8:
    // 0x3ec6f8: 0xc0f15bc  jal         func_3C56F0
label_3ec6fc:
    if (ctx->pc == 0x3EC6FCu) {
        ctx->pc = 0x3EC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6F8u;
        // 0x3ec6fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC700u;
        goto label_3ec700;
    }
    ctx->pc = 0x3EC6F8u;
    SET_GPR_U32(ctx, 31, 0x3EC700u);
    ctx->pc = 0x3EC6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC6F8u;
    // 0x3ec6fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EC6F8u, 0x3EC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC700u;
label_3ec700:
    // 0x3ec700: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ec700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ec704:
    // 0x3ec704: 0x3c14ffe2  lui         $s4, 0xFFE2
    ctx->pc = 0x3ec704u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65506 << 16));
label_3ec708:
    // 0x3ec708: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3ec708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3ec70c:
    // 0x3ec70c: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x3ec70cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_3ec710:
    // 0x3ec710: 0x27a20440  addiu       $v0, $sp, 0x440
    ctx->pc = 0x3ec710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3ec714:
    // 0x3ec714: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x3ec714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
label_3ec718:
    // 0x3ec718: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ec718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ec71c:
    // 0x3ec71c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3ec71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3ec720:
    // 0x3ec720: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3ec720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_3ec724:
    // 0x3ec724: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3ec724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec728:
    // 0x3ec728: 0x27a20450  addiu       $v0, $sp, 0x450
    ctx->pc = 0x3ec728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3ec72c:
    // 0x3ec72c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3ec72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3ec730:
    // 0x3ec730: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ec730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ec734:
    // 0x3ec734: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3ec734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3ec738:
    // 0x3ec738: 0xafa204d4  sw          $v0, 0x4D4($sp)
    ctx->pc = 0x3ec738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1236), GPR_U32(ctx, 2));
label_3ec73c:
    // 0x3ec73c: 0x27b20470  addiu       $s2, $sp, 0x470
    ctx->pc = 0x3ec73cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3ec740:
    // 0x3ec740: 0x27a20480  addiu       $v0, $sp, 0x480
    ctx->pc = 0x3ec740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3ec744:
    // 0x3ec744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ec744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ec748:
    // 0x3ec748: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3ec748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ec74c:
    // 0x3ec74c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ec74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ec750:
    // 0x3ec750: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ec750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ec754:
    // 0x3ec754: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3ec754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3ec758:
    // 0x3ec758: 0x27be0490  addiu       $fp, $sp, 0x490
    ctx->pc = 0x3ec758u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3ec75c:
    // 0x3ec75c: 0xafa204d8  sw          $v0, 0x4D8($sp)
    ctx->pc = 0x3ec75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1240), GPR_U32(ctx, 2));
label_3ec760:
    // 0x3ec760: 0x27b704a0  addiu       $s7, $sp, 0x4A0
    ctx->pc = 0x3ec760u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_3ec764:
    // 0x3ec764: 0x3694a7ff  ori         $s4, $s4, 0xA7FF
    ctx->pc = 0x3ec764u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)43007);
label_3ec768:
    // 0x3ec768: 0x27b604c0  addiu       $s6, $sp, 0x4C0
    ctx->pc = 0x3ec768u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_3ec76c:
    // 0x3ec76c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3ec76cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ec770:
    // 0x3ec770: 0x36730018  ori         $s3, $s3, 0x18
    ctx->pc = 0x3ec770u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)24);
label_3ec774:
    // 0x3ec774: 0x0  nop
    ctx->pc = 0x3ec774u;
    // NOP
label_3ec778:
    // 0x3ec778: 0xc0e9694  jal         func_3A5A50
label_3ec77c:
    if (ctx->pc == 0x3EC77Cu) {
        ctx->pc = 0x3EC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC778u;
        // 0x3ec77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC780u;
        goto label_3ec780;
    }
    ctx->pc = 0x3EC778u;
    SET_GPR_U32(ctx, 31, 0x3EC780u);
    ctx->pc = 0x3EC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC778u;
    // 0x3ec77c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3EC778u, 0x3EC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC780u;
label_3ec780:
    // 0x3ec780: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_3ec784:
    if (ctx->pc == 0x3EC784u) {
        ctx->pc = 0x3EC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC780u;
        // 0x3ec784: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC788u;
        goto label_3ec788;
    }
    ctx->pc = 0x3EC780u;
    {
        const bool branch_taken_0x3ec780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC780u;
        // 0x3ec784: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec780) {
            ctx->pc = 0x3EC890u;
            goto label_3ec890;
        }
    }
    ctx->pc = 0x3EC788u;
label_3ec788:
    // 0x3ec788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec78c:
    // 0x3ec78c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3ec78cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3ec790:
    // 0x3ec790: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3ec790u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_3ec794:
    // 0x3ec794: 0xc0cd518  jal         func_335460
label_3ec798:
    if (ctx->pc == 0x3EC798u) {
        ctx->pc = 0x3EC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC794u;
        // 0x3ec798: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC79Cu;
        goto label_3ec79c;
    }
    ctx->pc = 0x3EC794u;
    SET_GPR_U32(ctx, 31, 0x3EC79Cu);
    ctx->pc = 0x3EC798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC794u;
    // 0x3ec798: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EC794u, 0x3EC79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC79Cu;
label_3ec79c:
    // 0x3ec79c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ec79cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ec7a0:
    // 0x3ec7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec7a4:
    // 0x3ec7a4: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3ec7a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3ec7a8:
    // 0x3ec7a8: 0xc0cd518  jal         func_335460
label_3ec7ac:
    if (ctx->pc == 0x3EC7ACu) {
        ctx->pc = 0x3EC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7A8u;
        // 0x3ec7ac: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC7B0u;
        goto label_3ec7b0;
    }
    ctx->pc = 0x3EC7A8u;
    SET_GPR_U32(ctx, 31, 0x3EC7B0u);
    ctx->pc = 0x3EC7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7A8u;
    // 0x3ec7ac: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EC7A8u, 0x3EC7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7B0u;
label_3ec7b0:
    // 0x3ec7b0: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x3ec7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_3ec7b4:
    // 0x3ec7b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ec7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ec7b8:
    // 0x3ec7b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ec7b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ec7bc:
    // 0x3ec7bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ec7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3ec7c0:
    // 0x3ec7c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ec7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ec7c4:
    // 0x3ec7c4: 0xc0cd518  jal         func_335460
label_3ec7c8:
    if (ctx->pc == 0x3EC7C8u) {
        ctx->pc = 0x3EC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7C4u;
        // 0x3ec7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC7CCu;
        goto label_3ec7cc;
    }
    ctx->pc = 0x3EC7C4u;
    SET_GPR_U32(ctx, 31, 0x3EC7CCu);
    ctx->pc = 0x3EC7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7C4u;
    // 0x3ec7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EC7C4u, 0x3EC7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7CCu;
label_3ec7cc:
    // 0x3ec7cc: 0xe7b50470  swc1        $f21, 0x470($sp)
    ctx->pc = 0x3ec7ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3ec7d0:
    // 0x3ec7d0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ec7d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ec7d4:
    // 0x3ec7d4: 0xe7b40474  swc1        $f20, 0x474($sp)
    ctx->pc = 0x3ec7d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1140), bits); }
label_3ec7d8:
    // 0x3ec7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec7dc:
    // 0x3ec7dc: 0xe7a00478  swc1        $f0, 0x478($sp)
    ctx->pc = 0x3ec7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
label_3ec7e0:
    // 0x3ec7e0: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x3ec7e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3ec7e4:
    // 0x3ec7e4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3ec7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3ec7e8:
    // 0x3ec7e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ec7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ec7ec:
    // 0x3ec7ec: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3ec7ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3ec7f0:
    // 0x3ec7f0: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3ec7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3ec7f4:
    // 0x3ec7f4: 0xc0cd518  jal         func_335460
label_3ec7f8:
    if (ctx->pc == 0x3EC7F8u) {
        ctx->pc = 0x3EC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7F4u;
        // 0x3ec7f8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC7FCu;
        goto label_3ec7fc;
    }
    ctx->pc = 0x3EC7F4u;
    SET_GPR_U32(ctx, 31, 0x3EC7FCu);
    ctx->pc = 0x3EC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC7F4u;
    // 0x3ec7f8: 0x7fa20460  sq          $v0, 0x460($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EC7F4u, 0x3EC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC7FCu;
label_3ec7fc:
    // 0x3ec7fc: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x3ec7fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_3ec800:
    // 0x3ec800: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3ec800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ec804:
    // 0x3ec804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec808:
    // 0x3ec808: 0xc0cd4ee  jal         func_3353B8
label_3ec80c:
    if (ctx->pc == 0x3EC80Cu) {
        ctx->pc = 0x3EC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC808u;
        // 0x3ec80c: 0xe7a00470  swc1        $f0, 0x470($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC810u;
        goto label_3ec810;
    }
    ctx->pc = 0x3EC808u;
    SET_GPR_U32(ctx, 31, 0x3EC810u);
    ctx->pc = 0x3EC80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC808u;
    // 0x3ec80c: 0xe7a00470  swc1        $f0, 0x470($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EC808u, 0x3EC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC810u;
label_3ec810:
    // 0x3ec810: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x3ec810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_3ec814:
    // 0x3ec814: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ec814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ec818:
    // 0x3ec818: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ec818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ec81c:
    // 0x3ec81c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ec81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ec820:
    // 0x3ec820: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3ec820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3ec824:
    // 0x3ec824: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ec824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ec828:
    // 0x3ec828: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ec828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ec82c:
    // 0x3ec82c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec830:
    // 0x3ec830: 0xc0cd518  jal         func_335460
label_3ec834:
    if (ctx->pc == 0x3EC834u) {
        ctx->pc = 0x3EC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC830u;
        // 0x3ec834: 0xafa20480  sw          $v0, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC838u;
        goto label_3ec838;
    }
    ctx->pc = 0x3EC830u;
    SET_GPR_U32(ctx, 31, 0x3EC838u);
    ctx->pc = 0x3EC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC830u;
    // 0x3ec834: 0xafa20480  sw          $v0, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EC830u, 0x3EC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC838u;
label_3ec838:
    // 0x3ec838: 0xe7a00490  swc1        $f0, 0x490($sp)
    ctx->pc = 0x3ec838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
label_3ec83c:
    // 0x3ec83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec840:
    // 0x3ec840: 0xafb404a0  sw          $s4, 0x4A0($sp)
    ctx->pc = 0x3ec840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 20));
label_3ec844:
    // 0x3ec844: 0xc0cd4ee  jal         func_3353B8
label_3ec848:
    if (ctx->pc == 0x3EC848u) {
        ctx->pc = 0x3EC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC844u;
        // 0x3ec848: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC84Cu;
        goto label_3ec84c;
    }
    ctx->pc = 0x3EC844u;
    SET_GPR_U32(ctx, 31, 0x3EC84Cu);
    ctx->pc = 0x3EC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC844u;
    // 0x3ec848: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EC844u, 0x3EC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC84Cu;
label_3ec84c:
    // 0x3ec84c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ec84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ec850:
    // 0x3ec850: 0x8fa504d0  lw          $a1, 0x4D0($sp)
    ctx->pc = 0x3ec850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
label_3ec854:
    // 0x3ec854: 0x8fa604d4  lw          $a2, 0x4D4($sp)
    ctx->pc = 0x3ec854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1236)));
label_3ec858:
    // 0x3ec858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ec858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec85c:
    // 0x3ec85c: 0x8fa804d8  lw          $t0, 0x4D8($sp)
    ctx->pc = 0x3ec85cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
label_3ec860:
    // 0x3ec860: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x3ec860u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ec864:
    // 0x3ec864: 0x27ab04b0  addiu       $t3, $sp, 0x4B0
    ctx->pc = 0x3ec864u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3ec868:
    // 0x3ec868: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3ec868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
label_3ec86c:
    // 0x3ec86c: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x3ec86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
label_3ec870:
    // 0x3ec870: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3ec870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec874:
    // 0x3ec874: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x3ec874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_3ec878:
    // 0x3ec878: 0xc0ea0d0  jal         func_3A8340
label_3ec87c:
    if (ctx->pc == 0x3EC87Cu) {
        ctx->pc = 0x3EC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC878u;
        // 0x3ec87c: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC880u;
        goto label_3ec880;
    }
    ctx->pc = 0x3EC878u;
    SET_GPR_U32(ctx, 31, 0x3EC880u);
    ctx->pc = 0x3EC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC878u;
    // 0x3ec87c: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x3EC878u, 0x3EC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC880u;
label_3ec880:
    // 0x3ec880: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3ec880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3ec884:
    // 0x3ec884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ec884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec888:
    // 0x3ec888: 0xc0f15bc  jal         func_3C56F0
label_3ec88c:
    if (ctx->pc == 0x3EC88Cu) {
        ctx->pc = 0x3EC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC888u;
        // 0x3ec88c: 0x24445c20  addiu       $a0, $v0, 0x5C20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC890u;
        goto label_3ec890;
    }
    ctx->pc = 0x3EC888u;
    SET_GPR_U32(ctx, 31, 0x3EC890u);
    ctx->pc = 0x3EC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC888u;
    // 0x3ec88c: 0x24445c20  addiu       $a0, $v0, 0x5C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EC888u, 0x3EC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC890u;
label_3ec890:
    // 0x3ec890: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3ec890u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3ec894:
    // 0x3ec894: 0x2ea20014  sltiu       $v0, $s5, 0x14
    ctx->pc = 0x3ec894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_3ec898:
    // 0x3ec898: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_3ec89c:
    if (ctx->pc == 0x3EC89Cu) {
        ctx->pc = 0x3EC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC898u;
        // 0x3ec89c: 0xdfbf04e0  ld          $ra, 0x4E0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC8A0u;
        goto label_3ec8a0;
    }
    ctx->pc = 0x3EC898u;
    {
        const bool branch_taken_0x3ec898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC898u;
        // 0x3ec89c: 0xdfbf04e0  ld          $ra, 0x4E0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec898) {
            ctx->pc = 0x3EC778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec778;
        }
    }
    ctx->pc = 0x3EC8A0u;
label_3ec8a0:
    // 0x3ec8a0: 0x7bb00570  lq          $s0, 0x570($sp)
    ctx->pc = 0x3ec8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3ec8a4:
    // 0x3ec8a4: 0x7bb10560  lq          $s1, 0x560($sp)
    ctx->pc = 0x3ec8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3ec8a8:
    // 0x3ec8a8: 0x7bb20550  lq          $s2, 0x550($sp)
    ctx->pc = 0x3ec8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3ec8ac:
    // 0x3ec8ac: 0x7bb30540  lq          $s3, 0x540($sp)
    ctx->pc = 0x3ec8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3ec8b0:
    // 0x3ec8b0: 0x7bb40530  lq          $s4, 0x530($sp)
    ctx->pc = 0x3ec8b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3ec8b4:
    // 0x3ec8b4: 0x7bb50520  lq          $s5, 0x520($sp)
    ctx->pc = 0x3ec8b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3ec8b8:
    // 0x3ec8b8: 0x7bb60510  lq          $s6, 0x510($sp)
    ctx->pc = 0x3ec8b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3ec8bc:
    // 0x3ec8bc: 0x7bb70500  lq          $s7, 0x500($sp)
    ctx->pc = 0x3ec8bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3ec8c0:
    // 0x3ec8c0: 0x7bbe04f0  lq          $fp, 0x4F0($sp)
    ctx->pc = 0x3ec8c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3ec8c4:
    // 0x3ec8c4: 0xc7b905a8  lwc1        $f25, 0x5A8($sp)
    ctx->pc = 0x3ec8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3ec8c8:
    // 0x3ec8c8: 0xc7b805a0  lwc1        $f24, 0x5A0($sp)
    ctx->pc = 0x3ec8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3ec8cc:
    // 0x3ec8cc: 0xc7b70598  lwc1        $f23, 0x598($sp)
    ctx->pc = 0x3ec8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ec8d0:
    // 0x3ec8d0: 0xc7b60590  lwc1        $f22, 0x590($sp)
    ctx->pc = 0x3ec8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ec8d4:
    // 0x3ec8d4: 0xc7b50588  lwc1        $f21, 0x588($sp)
    ctx->pc = 0x3ec8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ec8d8:
    // 0x3ec8d8: 0xc7b40580  lwc1        $f20, 0x580($sp)
    ctx->pc = 0x3ec8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ec8dc:
    // 0x3ec8dc: 0x3e00008  jr          $ra
label_3ec8e0:
    if (ctx->pc == 0x3EC8E0u) {
        ctx->pc = 0x3EC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8DCu;
        // 0x3ec8e0: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC8E4u;
        goto label_3ec8e4;
    }
    ctx->pc = 0x3EC8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8DCu;
        // 0x3ec8e0: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC8E4u;
label_3ec8e4:
    // 0x3ec8e4: 0x0  nop
    ctx->pc = 0x3ec8e4u;
    // NOP
    ctx->pc = 0x3ec8e8u;
}
