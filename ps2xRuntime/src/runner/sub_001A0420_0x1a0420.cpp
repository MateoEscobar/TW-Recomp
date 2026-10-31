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

// Function: sub_001A0420
// Address: 0x1a0420 - 0x1a07f0
void sub_001A0420_0x1a0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0420_0x1a0420");
#endif

    switch (ctx->pc) {
        case 0x1a0420u: goto label_1a0420;
        case 0x1a0424u: goto label_1a0424;
        case 0x1a0428u: goto label_1a0428;
        case 0x1a042cu: goto label_1a042c;
        case 0x1a0430u: goto label_1a0430;
        case 0x1a0434u: goto label_1a0434;
        case 0x1a0438u: goto label_1a0438;
        case 0x1a043cu: goto label_1a043c;
        case 0x1a0440u: goto label_1a0440;
        case 0x1a0444u: goto label_1a0444;
        case 0x1a0448u: goto label_1a0448;
        case 0x1a044cu: goto label_1a044c;
        case 0x1a0450u: goto label_1a0450;
        case 0x1a0454u: goto label_1a0454;
        case 0x1a0458u: goto label_1a0458;
        case 0x1a045cu: goto label_1a045c;
        case 0x1a0460u: goto label_1a0460;
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a046cu: goto label_1a046c;
        case 0x1a0470u: goto label_1a0470;
        case 0x1a0474u: goto label_1a0474;
        case 0x1a0478u: goto label_1a0478;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0480u: goto label_1a0480;
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0488u: goto label_1a0488;
        case 0x1a048cu: goto label_1a048c;
        case 0x1a0490u: goto label_1a0490;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a0498u: goto label_1a0498;
        case 0x1a049cu: goto label_1a049c;
        case 0x1a04a0u: goto label_1a04a0;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04a8u: goto label_1a04a8;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04b4u: goto label_1a04b4;
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04bcu: goto label_1a04bc;
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04c8u: goto label_1a04c8;
        case 0x1a04ccu: goto label_1a04cc;
        case 0x1a04d0u: goto label_1a04d0;
        case 0x1a04d4u: goto label_1a04d4;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a04dcu: goto label_1a04dc;
        case 0x1a04e0u: goto label_1a04e0;
        case 0x1a04e4u: goto label_1a04e4;
        case 0x1a04e8u: goto label_1a04e8;
        case 0x1a04ecu: goto label_1a04ec;
        case 0x1a04f0u: goto label_1a04f0;
        case 0x1a04f4u: goto label_1a04f4;
        case 0x1a04f8u: goto label_1a04f8;
        case 0x1a04fcu: goto label_1a04fc;
        case 0x1a0500u: goto label_1a0500;
        case 0x1a0504u: goto label_1a0504;
        case 0x1a0508u: goto label_1a0508;
        case 0x1a050cu: goto label_1a050c;
        case 0x1a0510u: goto label_1a0510;
        case 0x1a0514u: goto label_1a0514;
        case 0x1a0518u: goto label_1a0518;
        case 0x1a051cu: goto label_1a051c;
        case 0x1a0520u: goto label_1a0520;
        case 0x1a0524u: goto label_1a0524;
        case 0x1a0528u: goto label_1a0528;
        case 0x1a052cu: goto label_1a052c;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0534u: goto label_1a0534;
        case 0x1a0538u: goto label_1a0538;
        case 0x1a053cu: goto label_1a053c;
        case 0x1a0540u: goto label_1a0540;
        case 0x1a0544u: goto label_1a0544;
        case 0x1a0548u: goto label_1a0548;
        case 0x1a054cu: goto label_1a054c;
        case 0x1a0550u: goto label_1a0550;
        case 0x1a0554u: goto label_1a0554;
        case 0x1a0558u: goto label_1a0558;
        case 0x1a055cu: goto label_1a055c;
        case 0x1a0560u: goto label_1a0560;
        case 0x1a0564u: goto label_1a0564;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a056cu: goto label_1a056c;
        case 0x1a0570u: goto label_1a0570;
        case 0x1a0574u: goto label_1a0574;
        case 0x1a0578u: goto label_1a0578;
        case 0x1a057cu: goto label_1a057c;
        case 0x1a0580u: goto label_1a0580;
        case 0x1a0584u: goto label_1a0584;
        case 0x1a0588u: goto label_1a0588;
        case 0x1a058cu: goto label_1a058c;
        case 0x1a0590u: goto label_1a0590;
        case 0x1a0594u: goto label_1a0594;
        case 0x1a0598u: goto label_1a0598;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a0u: goto label_1a05a0;
        case 0x1a05a4u: goto label_1a05a4;
        case 0x1a05a8u: goto label_1a05a8;
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b0u: goto label_1a05b0;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05b8u: goto label_1a05b8;
        case 0x1a05bcu: goto label_1a05bc;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05c8u: goto label_1a05c8;
        case 0x1a05ccu: goto label_1a05cc;
        case 0x1a05d0u: goto label_1a05d0;
        case 0x1a05d4u: goto label_1a05d4;
        case 0x1a05d8u: goto label_1a05d8;
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a05e0u: goto label_1a05e0;
        case 0x1a05e4u: goto label_1a05e4;
        case 0x1a05e8u: goto label_1a05e8;
        case 0x1a05ecu: goto label_1a05ec;
        case 0x1a05f0u: goto label_1a05f0;
        case 0x1a05f4u: goto label_1a05f4;
        case 0x1a05f8u: goto label_1a05f8;
        case 0x1a05fcu: goto label_1a05fc;
        case 0x1a0600u: goto label_1a0600;
        case 0x1a0604u: goto label_1a0604;
        case 0x1a0608u: goto label_1a0608;
        case 0x1a060cu: goto label_1a060c;
        case 0x1a0610u: goto label_1a0610;
        case 0x1a0614u: goto label_1a0614;
        case 0x1a0618u: goto label_1a0618;
        case 0x1a061cu: goto label_1a061c;
        case 0x1a0620u: goto label_1a0620;
        case 0x1a0624u: goto label_1a0624;
        case 0x1a0628u: goto label_1a0628;
        case 0x1a062cu: goto label_1a062c;
        case 0x1a0630u: goto label_1a0630;
        case 0x1a0634u: goto label_1a0634;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a063cu: goto label_1a063c;
        case 0x1a0640u: goto label_1a0640;
        case 0x1a0644u: goto label_1a0644;
        case 0x1a0648u: goto label_1a0648;
        case 0x1a064cu: goto label_1a064c;
        case 0x1a0650u: goto label_1a0650;
        case 0x1a0654u: goto label_1a0654;
        case 0x1a0658u: goto label_1a0658;
        case 0x1a065cu: goto label_1a065c;
        case 0x1a0660u: goto label_1a0660;
        case 0x1a0664u: goto label_1a0664;
        case 0x1a0668u: goto label_1a0668;
        case 0x1a066cu: goto label_1a066c;
        case 0x1a0670u: goto label_1a0670;
        case 0x1a0674u: goto label_1a0674;
        case 0x1a0678u: goto label_1a0678;
        case 0x1a067cu: goto label_1a067c;
        case 0x1a0680u: goto label_1a0680;
        case 0x1a0684u: goto label_1a0684;
        case 0x1a0688u: goto label_1a0688;
        case 0x1a068cu: goto label_1a068c;
        case 0x1a0690u: goto label_1a0690;
        case 0x1a0694u: goto label_1a0694;
        case 0x1a0698u: goto label_1a0698;
        case 0x1a069cu: goto label_1a069c;
        case 0x1a06a0u: goto label_1a06a0;
        case 0x1a06a4u: goto label_1a06a4;
        case 0x1a06a8u: goto label_1a06a8;
        case 0x1a06acu: goto label_1a06ac;
        case 0x1a06b0u: goto label_1a06b0;
        case 0x1a06b4u: goto label_1a06b4;
        case 0x1a06b8u: goto label_1a06b8;
        case 0x1a06bcu: goto label_1a06bc;
        case 0x1a06c0u: goto label_1a06c0;
        case 0x1a06c4u: goto label_1a06c4;
        case 0x1a06c8u: goto label_1a06c8;
        case 0x1a06ccu: goto label_1a06cc;
        case 0x1a06d0u: goto label_1a06d0;
        case 0x1a06d4u: goto label_1a06d4;
        case 0x1a06d8u: goto label_1a06d8;
        case 0x1a06dcu: goto label_1a06dc;
        case 0x1a06e0u: goto label_1a06e0;
        case 0x1a06e4u: goto label_1a06e4;
        case 0x1a06e8u: goto label_1a06e8;
        case 0x1a06ecu: goto label_1a06ec;
        case 0x1a06f0u: goto label_1a06f0;
        case 0x1a06f4u: goto label_1a06f4;
        case 0x1a06f8u: goto label_1a06f8;
        case 0x1a06fcu: goto label_1a06fc;
        case 0x1a0700u: goto label_1a0700;
        case 0x1a0704u: goto label_1a0704;
        case 0x1a0708u: goto label_1a0708;
        case 0x1a070cu: goto label_1a070c;
        case 0x1a0710u: goto label_1a0710;
        case 0x1a0714u: goto label_1a0714;
        case 0x1a0718u: goto label_1a0718;
        case 0x1a071cu: goto label_1a071c;
        case 0x1a0720u: goto label_1a0720;
        case 0x1a0724u: goto label_1a0724;
        case 0x1a0728u: goto label_1a0728;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0730u: goto label_1a0730;
        case 0x1a0734u: goto label_1a0734;
        case 0x1a0738u: goto label_1a0738;
        case 0x1a073cu: goto label_1a073c;
        case 0x1a0740u: goto label_1a0740;
        case 0x1a0744u: goto label_1a0744;
        case 0x1a0748u: goto label_1a0748;
        case 0x1a074cu: goto label_1a074c;
        case 0x1a0750u: goto label_1a0750;
        case 0x1a0754u: goto label_1a0754;
        case 0x1a0758u: goto label_1a0758;
        case 0x1a075cu: goto label_1a075c;
        case 0x1a0760u: goto label_1a0760;
        case 0x1a0764u: goto label_1a0764;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a076cu: goto label_1a076c;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0774u: goto label_1a0774;
        case 0x1a0778u: goto label_1a0778;
        case 0x1a077cu: goto label_1a077c;
        case 0x1a0780u: goto label_1a0780;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0788u: goto label_1a0788;
        case 0x1a078cu: goto label_1a078c;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a0794u: goto label_1a0794;
        case 0x1a0798u: goto label_1a0798;
        case 0x1a079cu: goto label_1a079c;
        case 0x1a07a0u: goto label_1a07a0;
        case 0x1a07a4u: goto label_1a07a4;
        case 0x1a07a8u: goto label_1a07a8;
        case 0x1a07acu: goto label_1a07ac;
        case 0x1a07b0u: goto label_1a07b0;
        case 0x1a07b4u: goto label_1a07b4;
        case 0x1a07b8u: goto label_1a07b8;
        case 0x1a07bcu: goto label_1a07bc;
        case 0x1a07c0u: goto label_1a07c0;
        case 0x1a07c4u: goto label_1a07c4;
        case 0x1a07c8u: goto label_1a07c8;
        case 0x1a07ccu: goto label_1a07cc;
        case 0x1a07d0u: goto label_1a07d0;
        case 0x1a07d4u: goto label_1a07d4;
        case 0x1a07d8u: goto label_1a07d8;
        case 0x1a07dcu: goto label_1a07dc;
        case 0x1a07e0u: goto label_1a07e0;
        case 0x1a07e4u: goto label_1a07e4;
        case 0x1a07e8u: goto label_1a07e8;
        case 0x1a07ecu: goto label_1a07ec;
        default: break;
    }

    ctx->pc = 0x1a0420u;

label_1a0420:
    // 0x1a0420: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1a0424:
    // 0x1a0424: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1a0424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1a0428:
    // 0x1a0428: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a0428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a042c:
    // 0x1a042c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1a042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1a0430:
    // 0x1a0430: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1a0430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1a0434:
    // 0x1a0434: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a0434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a0438:
    // 0x1a0438: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1a0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1a043c:
    // 0x1a043c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1a043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1a0440:
    // 0x1a0440: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1a0440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1a0444:
    // 0x1a0444: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1a0444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1a0448:
    // 0x1a0448: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a0448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a044c:
    // 0x1a044c: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1a044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1a0450:
    // 0x1a0450: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a0450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a0454:
    // 0x1a0454: 0xc0e409a  jal         func_390268
label_1a0458:
    if (ctx->pc == 0x1A0458u) {
        ctx->pc = 0x1A0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0454u;
        // 0x1a0458: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A045Cu;
        goto label_1a045c;
    }
    ctx->pc = 0x1A0454u;
    SET_GPR_U32(ctx, 31, 0x1A045Cu);
    ctx->pc = 0x1A0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0454u;
    // 0x1a0458: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A0454u, 0x1A045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A045Cu;
label_1a045c:
    // 0x1a045c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a045cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0460:
    // 0x1a0460: 0x128000d6  beqz        $s4, . + 4 + (0xD6 << 2)
label_1a0464:
    if (ctx->pc == 0x1A0464u) {
        ctx->pc = 0x1A0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0460u;
        // 0x1a0464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0468u;
        goto label_1a0468;
    }
    ctx->pc = 0x1A0460u;
    {
        const bool branch_taken_0x1a0460 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0460u;
        // 0x1a0464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0460) {
            ctx->pc = 0x1A07BCu;
            goto label_1a07bc;
        }
    }
    ctx->pc = 0x1A0468u;
label_1a0468:
    // 0x1a0468: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a0468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a046c:
    // 0x1a046c: 0xc087502  jal         func_21D408
label_1a0470:
    if (ctx->pc == 0x1A0470u) {
        ctx->pc = 0x1A0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A046Cu;
        // 0x1a0470: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0474u;
        goto label_1a0474;
    }
    ctx->pc = 0x1A046Cu;
    SET_GPR_U32(ctx, 31, 0x1A0474u);
    ctx->pc = 0x1A0470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A046Cu;
    // 0x1a0470: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A046Cu, 0x1A0474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0474u;
label_1a0474:
    // 0x1a0474: 0x90430152  lbu         $v1, 0x152($v0)
    ctx->pc = 0x1a0474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 338)));
label_1a0478:
    // 0x1a0478: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1a047c:
    if (ctx->pc == 0x1A047Cu) {
        ctx->pc = 0x1A0480u;
        goto label_1a0480;
    }
    ctx->pc = 0x1A0478u;
    {
        const bool branch_taken_0x1a0478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0478) {
            ctx->pc = 0x1A04B4u;
            goto label_1a04b4;
        }
    }
    ctx->pc = 0x1A0480u;
label_1a0480:
    // 0x1a0480: 0xc087502  jal         func_21D408
label_1a0484:
    if (ctx->pc == 0x1A0484u) {
        ctx->pc = 0x1A0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0480u;
        // 0x1a0484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0488u;
        goto label_1a0488;
    }
    ctx->pc = 0x1A0480u;
    SET_GPR_U32(ctx, 31, 0x1A0488u);
    ctx->pc = 0x1A0484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0480u;
    // 0x1a0484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A0480u, 0x1A0488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0488u;
label_1a0488:
    // 0x1a0488: 0xc136b80  jal         func_4DAE00
label_1a048c:
    if (ctx->pc == 0x1A048Cu) {
        ctx->pc = 0x1A048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0488u;
        // 0x1a048c: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0490u;
        goto label_1a0490;
    }
    ctx->pc = 0x1A0488u;
    SET_GPR_U32(ctx, 31, 0x1A0490u);
    ctx->pc = 0x1A048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0488u;
    // 0x1a048c: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x1A0488u, 0x1A0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0490u;
label_1a0490:
    // 0x1a0490: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a0494:
    if (ctx->pc == 0x1A0494u) {
        ctx->pc = 0x1A0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0490u;
        // 0x1a0494: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0498u;
        goto label_1a0498;
    }
    ctx->pc = 0x1A0490u;
    {
        const bool branch_taken_0x1a0490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0490u;
        // 0x1a0494: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0490) {
            ctx->pc = 0x1A04B4u;
            goto label_1a04b4;
        }
    }
    ctx->pc = 0x1A0498u;
label_1a0498:
    // 0x1a0498: 0xc6800334  lwc1        $f0, 0x334($s4)
    ctx->pc = 0x1a0498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a049c:
    // 0x1a049c: 0xc441ad88  lwc1        $f1, -0x5278($v0)
    ctx->pc = 0x1a049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a04a0:
    // 0x1a04a0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a04a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a04a4:
    // 0x1a04a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a04a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a04a8:
    // 0x1a04a8: 0x0  nop
    ctx->pc = 0x1a04a8u;
    // NOP
label_1a04ac:
    // 0x1a04ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a04b0:
    if (ctx->pc == 0x1A04B0u) {
        ctx->pc = 0x1A04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04ACu;
        // 0x1a04b0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04B4u;
        goto label_1a04b4;
    }
    ctx->pc = 0x1A04ACu;
    {
        const bool branch_taken_0x1a04ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a04ac) {
            ctx->pc = 0x1A04B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A04ACu;
            // 0x1a04b0: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A04B4u;
            goto label_1a04b4;
        }
    }
    ctx->pc = 0x1A04B4u;
label_1a04b4:
    // 0x1a04b4: 0xc089f76  jal         func_227DD8
label_1a04b8:
    if (ctx->pc == 0x1A04B8u) {
        ctx->pc = 0x1A04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B4u;
        // 0x1a04b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04BCu;
        goto label_1a04bc;
    }
    ctx->pc = 0x1A04B4u;
    SET_GPR_U32(ctx, 31, 0x1A04BCu);
    ctx->pc = 0x1A04B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04B4u;
    // 0x1a04b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1A04B4u, 0x1A04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04BCu;
label_1a04bc:
    // 0x1a04bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a04c0:
    if (ctx->pc == 0x1A04C0u) {
        ctx->pc = 0x1A04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04BCu;
        // 0x1a04c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04C4u;
        goto label_1a04c4;
    }
    ctx->pc = 0x1A04BCu;
    {
        const bool branch_taken_0x1a04bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04BCu;
        // 0x1a04c0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04bc) {
            ctx->pc = 0x1A04DCu;
            goto label_1a04dc;
        }
    }
    ctx->pc = 0x1A04C4u;
label_1a04c4:
    // 0x1a04c4: 0xc088edc  jal         func_223B70
label_1a04c8:
    if (ctx->pc == 0x1A04C8u) {
        ctx->pc = 0x1A04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04C4u;
        // 0x1a04c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04CCu;
        goto label_1a04cc;
    }
    ctx->pc = 0x1A04C4u;
    SET_GPR_U32(ctx, 31, 0x1A04CCu);
    ctx->pc = 0x1A04C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04C4u;
    // 0x1a04c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x1A04C4u, 0x1A04CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04CCu;
label_1a04cc:
    // 0x1a04cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a04d0:
    if (ctx->pc == 0x1A04D0u) {
        ctx->pc = 0x1A04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04CCu;
        // 0x1a04d0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04D4u;
        goto label_1a04d4;
    }
    ctx->pc = 0x1A04CCu;
    {
        const bool branch_taken_0x1a04cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04CCu;
        // 0x1a04d0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04cc) {
            ctx->pc = 0x1A04DCu;
            goto label_1a04dc;
        }
    }
    ctx->pc = 0x1A04D4u;
label_1a04d4:
    // 0x1a04d4: 0x13c000b9  beqz        $fp, . + 4 + (0xB9 << 2)
label_1a04d8:
    if (ctx->pc == 0x1A04D8u) {
        ctx->pc = 0x1A04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04D4u;
        // 0x1a04d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04DCu;
        goto label_1a04dc;
    }
    ctx->pc = 0x1A04D4u;
    {
        const bool branch_taken_0x1a04d4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04D4u;
        // 0x1a04d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04d4) {
            ctx->pc = 0x1A07BCu;
            goto label_1a07bc;
        }
    }
    ctx->pc = 0x1A04DCu;
label_1a04dc:
    // 0x1a04dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a04dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a04e0:
    // 0x1a04e0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1a04e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_1a04e4:
    // 0x1a04e4: 0xc0e409a  jal         func_390268
label_1a04e8:
    if (ctx->pc == 0x1A04E8u) {
        ctx->pc = 0x1A04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04E4u;
        // 0x1a04e8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04ECu;
        goto label_1a04ec;
    }
    ctx->pc = 0x1A04E4u;
    SET_GPR_U32(ctx, 31, 0x1A04ECu);
    ctx->pc = 0x1A04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04E4u;
    // 0x1a04e8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A04E4u, 0x1A04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04ECu;
label_1a04ec:
    // 0x1a04ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a04f0:
    if (ctx->pc == 0x1A04F0u) {
        ctx->pc = 0x1A04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04ECu;
        // 0x1a04f0: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04F4u;
        goto label_1a04f4;
    }
    ctx->pc = 0x1A04ECu;
    {
        const bool branch_taken_0x1a04ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04ECu;
        // 0x1a04f0: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04ec) {
            ctx->pc = 0x1A0508u;
            goto label_1a0508;
        }
    }
    ctx->pc = 0x1A04F4u;
label_1a04f4:
    // 0x1a04f4: 0xc0e409a  jal         func_390268
label_1a04f8:
    if (ctx->pc == 0x1A04F8u) {
        ctx->pc = 0x1A04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04F4u;
        // 0x1a04f8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04FCu;
        goto label_1a04fc;
    }
    ctx->pc = 0x1A04F4u;
    SET_GPR_U32(ctx, 31, 0x1A04FCu);
    ctx->pc = 0x1A04F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04F4u;
    // 0x1a04f8: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A04F4u, 0x1A04FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A04FCu;
label_1a04fc:
    // 0x1a04fc: 0xc087502  jal         func_21D408
label_1a0500:
    if (ctx->pc == 0x1A0500u) {
        ctx->pc = 0x1A0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04FCu;
        // 0x1a0500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0504u;
        goto label_1a0504;
    }
    ctx->pc = 0x1A04FCu;
    SET_GPR_U32(ctx, 31, 0x1A0504u);
    ctx->pc = 0x1A0500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A04FCu;
    // 0x1a0500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A04FCu, 0x1A0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0504u;
label_1a0504:
    // 0x1a0504: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x1a0504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1a0508:
    // 0x1a0508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a0508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a050c:
    // 0x1a050c: 0xc087502  jal         func_21D408
label_1a0510:
    if (ctx->pc == 0x1A0510u) {
        ctx->pc = 0x1A0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A050Cu;
        // 0x1a0510: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0514u;
        goto label_1a0514;
    }
    ctx->pc = 0x1A050Cu;
    SET_GPR_U32(ctx, 31, 0x1A0514u);
    ctx->pc = 0x1A0510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A050Cu;
    // 0x1a0510: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A050Cu, 0x1A0514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0514u;
label_1a0514:
    // 0x1a0514: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1a0514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1a0518:
    // 0x1a0518: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
label_1a051c:
    if (ctx->pc == 0x1A051Cu) {
        ctx->pc = 0x1A0520u;
        goto label_1a0520;
    }
    ctx->pc = 0x1A0518u;
    {
        const bool branch_taken_0x1a0518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a0518) {
            ctx->pc = 0x1A0548u;
            goto label_1a0548;
        }
    }
    ctx->pc = 0x1A0520u;
label_1a0520:
    // 0x1a0520: 0xc087502  jal         func_21D408
label_1a0524:
    if (ctx->pc == 0x1A0524u) {
        ctx->pc = 0x1A0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0520u;
        // 0x1a0524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0528u;
        goto label_1a0528;
    }
    ctx->pc = 0x1A0520u;
    SET_GPR_U32(ctx, 31, 0x1A0528u);
    ctx->pc = 0x1A0524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0520u;
    // 0x1a0524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A0520u, 0x1A0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0528u;
label_1a0528:
    // 0x1a0528: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a052c:
    // 0x1a052c: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x1a052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_1a0530:
    // 0x1a0530: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a0534:
    if (ctx->pc == 0x1A0534u) {
        ctx->pc = 0x1A0538u;
        goto label_1a0538;
    }
    ctx->pc = 0x1A0530u;
    {
        const bool branch_taken_0x1a0530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0530) {
            ctx->pc = 0x1A0548u;
            goto label_1a0548;
        }
    }
    ctx->pc = 0x1A0538u;
label_1a0538:
    // 0x1a0538: 0xc087502  jal         func_21D408
label_1a053c:
    if (ctx->pc == 0x1A053Cu) {
        ctx->pc = 0x1A053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0538u;
        // 0x1a053c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0540u;
        goto label_1a0540;
    }
    ctx->pc = 0x1A0538u;
    SET_GPR_U32(ctx, 31, 0x1A0540u);
    ctx->pc = 0x1A053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0538u;
    // 0x1a053c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1A0538u, 0x1A0540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0540u;
label_1a0540:
    // 0x1a0540: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a0540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a0544:
    // 0x1a0544: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x1a0544u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a0548:
    // 0x1a0548: 0x1600009c  bnez        $s0, . + 4 + (0x9C << 2)
label_1a054c:
    if (ctx->pc == 0x1A054Cu) {
        ctx->pc = 0x1A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0548u;
        // 0x1a054c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0550u;
        goto label_1a0550;
    }
    ctx->pc = 0x1A0548u;
    {
        const bool branch_taken_0x1a0548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0548u;
        // 0x1a054c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0548) {
            ctx->pc = 0x1A07BCu;
            goto label_1a07bc;
        }
    }
    ctx->pc = 0x1A0550u;
label_1a0550:
    // 0x1a0550: 0x8e8300cc  lw          $v1, 0xCC($s4)
    ctx->pc = 0x1a0550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_1a0554:
    // 0x1a0554: 0x2862010e  slti        $v0, $v1, 0x10E
    ctx->pc = 0x1a0554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)270) ? 1 : 0);
label_1a0558:
    // 0x1a0558: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a0558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a055c:
    // 0x1a055c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a0560:
    if (ctx->pc == 0x1A0560u) {
        ctx->pc = 0x1A0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A055Cu;
        // 0x1a0560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0564u;
        goto label_1a0564;
    }
    ctx->pc = 0x1A055Cu;
    {
        const bool branch_taken_0x1a055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A055Cu;
        // 0x1a0560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a055c) {
            ctx->pc = 0x1A0568u;
            goto label_1a0568;
        }
    }
    ctx->pc = 0x1A0564u;
label_1a0564:
    // 0x1a0564: 0x28640120  slti        $a0, $v1, 0x120
    ctx->pc = 0x1a0564u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)288) ? 1 : 0);
label_1a0568:
    // 0x1a0568: 0x14800094  bnez        $a0, . + 4 + (0x94 << 2)
label_1a056c:
    if (ctx->pc == 0x1A056Cu) {
        ctx->pc = 0x1A056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0568u;
        // 0x1a056c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0570u;
        goto label_1a0570;
    }
    ctx->pc = 0x1A0568u;
    {
        const bool branch_taken_0x1a0568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0568u;
        // 0x1a056c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0568) {
            ctx->pc = 0x1A07BCu;
            goto label_1a07bc;
        }
    }
    ctx->pc = 0x1A0570u;
label_1a0570:
    // 0x1a0570: 0x26630044  addiu       $v1, $s3, 0x44
    ctx->pc = 0x1a0570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_1a0574:
    // 0x1a0574: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1a0574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_1a0578:
    // 0x1a0578: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x1a0578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a057c:
    // 0x1a057c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a057cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0580:
    // 0x1a0580: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a0580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1a0584:
    // 0x1a0584: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x1a0584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1a0588:
    // 0x1a0588: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a0588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a058c:
    // 0x1a058c: 0x0  nop
    ctx->pc = 0x1a058cu;
    // NOP
label_1a0590:
    // 0x1a0590: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0594:
    // 0x1a0594: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
label_1a0598:
    if (ctx->pc == 0x1A0598u) {
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A059Cu;
        goto label_1a059c;
    }
    ctx->pc = 0x1A0594u;
    {
        const bool branch_taken_0x1a0594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0594) {
            ctx->pc = 0x1A05A8u;
            goto label_1a05a8;
        }
    }
    ctx->pc = 0x1A059Cu;
label_1a059c:
    // 0x1a059c: 0x8ca20240  lw          $v0, 0x240($a1)
    ctx->pc = 0x1a059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 576)));
label_1a05a0:
    // 0x1a05a0: 0x10480086  beq         $v0, $t0, . + 4 + (0x86 << 2)
label_1a05a4:
    if (ctx->pc == 0x1A05A4u) {
        ctx->pc = 0x1A05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05A0u;
        // 0x1a05a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05A8u;
        goto label_1a05a8;
    }
    ctx->pc = 0x1A05A0u;
    {
        const bool branch_taken_0x1a05a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1A05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05A0u;
        // 0x1a05a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05a0) {
            ctx->pc = 0x1A07BCu;
            goto label_1a07bc;
        }
    }
    ctx->pc = 0x1A05A8u;
label_1a05a8:
    // 0x1a05a8: 0x24a50250  addiu       $a1, $a1, 0x250
    ctx->pc = 0x1a05a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 592));
label_1a05ac:
    // 0x1a05ac: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x1a05acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a05b0:
    // 0x1a05b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1a05b4:
    if (ctx->pc == 0x1A05B4u) {
        ctx->pc = 0x1A05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05B0u;
        // 0x1a05b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05B8u;
        goto label_1a05b8;
    }
    ctx->pc = 0x1A05B0u;
    {
        const bool branch_taken_0x1a05b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05B0u;
        // 0x1a05b4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05b0) {
            ctx->pc = 0x1A0590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0590;
        }
    }
    ctx->pc = 0x1A05B8u;
label_1a05b8:
    // 0x1a05b8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1a05b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a05bc:
    // 0x1a05bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a05bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a05c0:
    // 0x1a05c0: 0x26751328  addiu       $s5, $s3, 0x1328
    ctx->pc = 0x1a05c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4904));
label_1a05c4:
    // 0x1a05c4: 0x3c170055  lui         $s7, 0x55
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)85 << 16));
label_1a05c8:
    // 0x1a05c8: 0x267613b0  addiu       $s6, $s3, 0x13B0
    ctx->pc = 0x1a05c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 5040));
label_1a05cc:
    // 0x1a05cc: 0x0  nop
    ctx->pc = 0x1a05ccu;
    // NOP
label_1a05d0:
    // 0x1a05d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a05d4:
    // 0x1a05d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a05d8:
    // 0x1a05d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a05d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a05dc:
    // 0x1a05dc: 0x54620073  bnel        $v1, $v0, . + 4 + (0x73 << 2)
label_1a05e0:
    if (ctx->pc == 0x1A05E0u) {
        ctx->pc = 0x1A05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05DCu;
        // 0x1a05e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05E4u;
        goto label_1a05e4;
    }
    ctx->pc = 0x1A05DCu;
    {
        const bool branch_taken_0x1a05dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a05dc) {
            ctx->pc = 0x1A05E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A05DCu;
            // 0x1a05e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A07ACu;
            goto label_1a07ac;
        }
    }
    ctx->pc = 0x1A05E4u;
label_1a05e4:
    // 0x1a05e4: 0x24100250  addiu       $s0, $zero, 0x250
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_1a05e8:
    // 0x1a05e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a05ec:
    // 0x1a05ec: 0x908018  mult        $s0, $a0, $s0
    ctx->pc = 0x1a05ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1a05f0:
    // 0x1a05f0: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x1a05f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a05f4:
    // 0x1a05f4: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1a05f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1a05f8:
    // 0x1a05f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a05f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a05fc:
    // 0x1a05fc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a0600:
    // 0x1a0600: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_1a0604:
    // 0x1a0604: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1a0604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1a0608:
    // 0x1a0608: 0x60f809  jalr        $v1
label_1a060c:
    if (ctx->pc == 0x1A060Cu) {
        ctx->pc = 0x1A060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0608u;
        // 0x1a060c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0610u;
        goto label_1a0610;
    }
    ctx->pc = 0x1A0608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0610u);
        ctx->pc = 0x1A060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0608u;
        // 0x1a060c: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0608u, 0x1A0610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0610u;
label_1a0610:
    // 0x1a0610: 0xc66c1300  lwc1        $f12, 0x1300($s3)
    ctx->pc = 0x1a0610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a0614:
    // 0x1a0614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a0614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0618:
    // 0x1a0618: 0xc66d1304  lwc1        $f13, 0x1304($s3)
    ctx->pc = 0x1a0618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a061c:
    // 0x1a061c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a061cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a0620:
    // 0x1a0620: 0x266712f0  addiu       $a3, $s3, 0x12F0
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4848));
label_1a0624:
    // 0x1a0624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0628:
    // 0x1a0628: 0xc068246  jal         func_1A0918
label_1a062c:
    if (ctx->pc == 0x1A062Cu) {
        ctx->pc = 0x1A062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0628u;
        // 0x1a062c: 0x460d6342  mul.s       $f13, $f12, $f13 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0630u;
        goto label_1a0630;
    }
    ctx->pc = 0x1A0628u;
    SET_GPR_U32(ctx, 31, 0x1A0630u);
    ctx->pc = 0x1A062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0628u;
    // 0x1a062c: 0x460d6342  mul.s       $f13, $f12, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0918u, 0x1A0628u, 0x1A0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0630u;
label_1a0630:
    // 0x1a0630: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1a0630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1a0634:
    // 0x1a0634: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1a0634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0638:
    // 0x1a0638: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1a0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1a063c:
    // 0x1a063c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a0640:
    // 0x1a0640: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x1a0640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
label_1a0644:
    // 0x1a0644: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1a0644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1a0648:
    // 0x1a0648: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1a0648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1a064c:
    // 0x1a064c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a0650:
    // 0x1a0650: 0x40f809  jalr        $v0
label_1a0654:
    if (ctx->pc == 0x1A0654u) {
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0658u;
        goto label_1a0658;
    }
    ctx->pc = 0x1A0650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A0658u);
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0650u, 0x1A0658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0658u;
label_1a0658:
    // 0x1a0658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a065c:
    // 0x1a065c: 0xc10c3ac  jal         func_430EB0
label_1a0660:
    if (ctx->pc == 0x1A0660u) {
        ctx->pc = 0x1A0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A065Cu;
        // 0x1a0660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0664u;
        goto label_1a0664;
    }
    ctx->pc = 0x1A065Cu;
    SET_GPR_U32(ctx, 31, 0x1A0664u);
    ctx->pc = 0x1A0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A065Cu;
    // 0x1a0660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A065Cu, 0x1A0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0664u;
label_1a0664:
    // 0x1a0664: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1a0664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a0668:
    // 0x1a0668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a066c:
    // 0x1a066c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1a0670:
    // 0x1a0670: 0xc10c3ac  jal         func_430EB0
label_1a0674:
    if (ctx->pc == 0x1A0674u) {
        ctx->pc = 0x1A0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0670u;
        // 0x1a0674: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0678u;
        goto label_1a0678;
    }
    ctx->pc = 0x1A0670u;
    SET_GPR_U32(ctx, 31, 0x1A0678u);
    ctx->pc = 0x1A0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0670u;
    // 0x1a0674: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A0670u, 0x1A0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0678u;
label_1a0678:
    // 0x1a0678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a067c:
    // 0x1a067c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a067cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0680:
    // 0x1a0680: 0xc10c4de  jal         func_431378
label_1a0684:
    if (ctx->pc == 0x1A0684u) {
        ctx->pc = 0x1A0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0680u;
        // 0x1a0684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0688u;
        goto label_1a0688;
    }
    ctx->pc = 0x1A0680u;
    SET_GPR_U32(ctx, 31, 0x1A0688u);
    ctx->pc = 0x1A0684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0680u;
    // 0x1a0684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1A0680u, 0x1A0688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0688u;
label_1a0688:
    // 0x1a0688: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x1a0688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_1a068c:
    // 0x1a068c: 0x2c620061  sltiu       $v0, $v1, 0x61
    ctx->pc = 0x1a068cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
label_1a0690:
    // 0x1a0690: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a0694:
    if (ctx->pc == 0x1A0694u) {
        ctx->pc = 0x1A0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0690u;
        // 0x1a0694: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0698u;
        goto label_1a0698;
    }
    ctx->pc = 0x1A0690u;
    {
        const bool branch_taken_0x1a0690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0690u;
        // 0x1a0694: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0690) {
            ctx->pc = 0x1A06A4u;
            goto label_1a06a4;
        }
    }
    ctx->pc = 0x1A0698u;
label_1a0698:
    // 0x1a0698: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1a0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_1a069c:
    // 0x1a069c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1a069cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_1a06a0:
    // 0x1a06a0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1a06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1a06a4:
    // 0x1a06a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a06a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a06a8:
    // 0x1a06a8: 0xc10c313  jal         func_430C4C
label_1a06ac:
    if (ctx->pc == 0x1A06ACu) {
        ctx->pc = 0x1A06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06A8u;
        // 0x1a06ac: 0x24453c90  addiu       $a1, $v0, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06B0u;
        goto label_1a06b0;
    }
    ctx->pc = 0x1A06A8u;
    SET_GPR_U32(ctx, 31, 0x1A06B0u);
    ctx->pc = 0x1A06ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06A8u;
    // 0x1a06ac: 0x24453c90  addiu       $a1, $v0, 0x3C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1A06A8u, 0x1A06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06B0u;
label_1a06b0:
    // 0x1a06b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a06b4:
    if (ctx->pc == 0x1A06B4u) {
        ctx->pc = 0x1A06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B0u;
        // 0x1a06b4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06B8u;
        goto label_1a06b8;
    }
    ctx->pc = 0x1A06B0u;
    {
        const bool branch_taken_0x1a06b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B0u;
        // 0x1a06b4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06b0) {
            ctx->pc = 0x1A06CCu;
            goto label_1a06cc;
        }
    }
    ctx->pc = 0x1A06B8u;
label_1a06b8:
    // 0x1a06b8: 0xa3a00020  sb          $zero, 0x20($sp)
    ctx->pc = 0x1a06b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
label_1a06bc:
    // 0x1a06bc: 0x24453ca0  addiu       $a1, $v0, 0x3CA0
    ctx->pc = 0x1a06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_1a06c0:
    // 0x1a06c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a06c4:
    // 0x1a06c4: 0xc10c4de  jal         func_431378
label_1a06c8:
    if (ctx->pc == 0x1A06C8u) {
        ctx->pc = 0x1A06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06C4u;
        // 0x1a06c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06CCu;
        goto label_1a06cc;
    }
    ctx->pc = 0x1A06C4u;
    SET_GPR_U32(ctx, 31, 0x1A06CCu);
    ctx->pc = 0x1A06C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06C4u;
    // 0x1a06c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1A06C4u, 0x1A06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06CCu;
label_1a06cc:
    // 0x1a06cc: 0xc089f76  jal         func_227DD8
label_1a06d0:
    if (ctx->pc == 0x1A06D0u) {
        ctx->pc = 0x1A06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06CCu;
        // 0x1a06d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06D4u;
        goto label_1a06d4;
    }
    ctx->pc = 0x1A06CCu;
    SET_GPR_U32(ctx, 31, 0x1A06D4u);
    ctx->pc = 0x1A06D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06CCu;
    // 0x1a06d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x1A06CCu, 0x1A06D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06D4u;
label_1a06d4:
    // 0x1a06d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a06d8:
    if (ctx->pc == 0x1A06D8u) {
        ctx->pc = 0x1A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06D4u;
        // 0x1a06d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06DCu;
        goto label_1a06dc;
    }
    ctx->pc = 0x1A06D4u;
    {
        const bool branch_taken_0x1a06d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06D4u;
        // 0x1a06d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06d4) {
            ctx->pc = 0x1A0704u;
            goto label_1a0704;
        }
    }
    ctx->pc = 0x1A06DCu;
label_1a06dc:
    // 0x1a06dc: 0xc067bb8  jal         func_19EEE0
label_1a06e0:
    if (ctx->pc == 0x1A06E0u) {
        ctx->pc = 0x1A06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06DCu;
        // 0x1a06e0: 0x26701328  addiu       $s0, $s3, 0x1328 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06E4u;
        goto label_1a06e4;
    }
    ctx->pc = 0x1A06DCu;
    SET_GPR_U32(ctx, 31, 0x1A06E4u);
    ctx->pc = 0x1A06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06DCu;
    // 0x1a06e0: 0x26701328  addiu       $s0, $s3, 0x1328 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1A06DCu, 0x1A06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06E4u;
label_1a06e4:
    // 0x1a06e4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1a06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a06e8:
    // 0x1a06e8: 0x26e63cb8  addiu       $a2, $s7, 0x3CB8
    ctx->pc = 0x1a06e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 15544));
label_1a06ec:
    // 0x1a06ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a06ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a06f0:
    // 0x1a06f0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1a06f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a06f4:
    // 0x1a06f4: 0xc10ca04  jal         func_432810
label_1a06f8:
    if (ctx->pc == 0x1A06F8u) {
        ctx->pc = 0x1A06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06F4u;
        // 0x1a06f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06FCu;
        goto label_1a06fc;
    }
    ctx->pc = 0x1A06F4u;
    SET_GPR_U32(ctx, 31, 0x1A06FCu);
    ctx->pc = 0x1A06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06F4u;
    // 0x1a06f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1A06F4u, 0x1A06FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06FCu;
label_1a06fc:
    // 0x1a06fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a0700:
    if (ctx->pc == 0x1A0700u) {
        ctx->pc = 0x1A0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06FCu;
        // 0x1a0700: 0x240400e1  addiu       $a0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0704u;
        goto label_1a0704;
    }
    ctx->pc = 0x1A06FCu;
    {
        const bool branch_taken_0x1a06fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06FCu;
        // 0x1a0700: 0x240400e1  addiu       $a0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06fc) {
            ctx->pc = 0x1A0738u;
            goto label_1a0738;
        }
    }
    ctx->pc = 0x1A0704u;
label_1a0704:
    // 0x1a0704: 0xc088edc  jal         func_223B70
label_1a0708:
    if (ctx->pc == 0x1A0708u) {
        ctx->pc = 0x1A0708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0704u;
        // 0x1a0708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A070Cu;
        goto label_1a070c;
    }
    ctx->pc = 0x1A0704u;
    SET_GPR_U32(ctx, 31, 0x1A070Cu);
    ctx->pc = 0x1A0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0704u;
    // 0x1a0708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x1A0704u, 0x1A070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A070Cu;
label_1a070c:
    // 0x1a070c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1a0710:
    if (ctx->pc == 0x1A0710u) {
        ctx->pc = 0x1A0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A070Cu;
        // 0x1a0710: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0714u;
        goto label_1a0714;
    }
    ctx->pc = 0x1A070Cu;
    {
        const bool branch_taken_0x1a070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A070Cu;
        // 0x1a0710: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a070c) {
            ctx->pc = 0x1A0754u;
            goto label_1a0754;
        }
    }
    ctx->pc = 0x1A0714u;
label_1a0714:
    // 0x1a0714: 0xc067bb8  jal         func_19EEE0
label_1a0718:
    if (ctx->pc == 0x1A0718u) {
        ctx->pc = 0x1A0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0714u;
        // 0x1a0718: 0x26701328  addiu       $s0, $s3, 0x1328 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A071Cu;
        goto label_1a071c;
    }
    ctx->pc = 0x1A0714u;
    SET_GPR_U32(ctx, 31, 0x1A071Cu);
    ctx->pc = 0x1A0718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0714u;
    // 0x1a0718: 0x26701328  addiu       $s0, $s3, 0x1328 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1A0714u, 0x1A071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A071Cu;
label_1a071c:
    // 0x1a071c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1a071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a0720:
    // 0x1a0720: 0x26e63cb8  addiu       $a2, $s7, 0x3CB8
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 15544));
label_1a0724:
    // 0x1a0724: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a0724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0728:
    // 0x1a0728: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1a0728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a072c:
    // 0x1a072c: 0xc10ca04  jal         func_432810
label_1a0730:
    if (ctx->pc == 0x1A0730u) {
        ctx->pc = 0x1A0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A072Cu;
        // 0x1a0730: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0734u;
        goto label_1a0734;
    }
    ctx->pc = 0x1A072Cu;
    SET_GPR_U32(ctx, 31, 0x1A0734u);
    ctx->pc = 0x1A0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A072Cu;
    // 0x1a0730: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1A072Cu, 0x1A0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0734u;
label_1a0734:
    // 0x1a0734: 0x240400e2  addiu       $a0, $zero, 0xE2
    ctx->pc = 0x1a0734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
label_1a0738:
    // 0x1a0738: 0xc067b9c  jal         func_19EE70
label_1a073c:
    if (ctx->pc == 0x1A073Cu) {
        ctx->pc = 0x1A0740u;
        goto label_1a0740;
    }
    ctx->pc = 0x1A0738u;
    SET_GPR_U32(ctx, 31, 0x1A0740u);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1A0738u, 0x1A0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0740u;
label_1a0740:
    // 0x1a0740: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a0740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0744:
    // 0x1a0744: 0xc10c25f  jal         func_43097C
label_1a0748:
    if (ctx->pc == 0x1A0748u) {
        ctx->pc = 0x1A0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0744u;
        // 0x1a0748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A074Cu;
        goto label_1a074c;
    }
    ctx->pc = 0x1A0744u;
    SET_GPR_U32(ctx, 31, 0x1A074Cu);
    ctx->pc = 0x1A0748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0744u;
    // 0x1a0748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1A0744u, 0x1A074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A074Cu;
label_1a074c:
    // 0x1a074c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a0750:
    if (ctx->pc == 0x1A0750u) {
        ctx->pc = 0x1A0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A074Cu;
        // 0x1a0750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0754u;
        goto label_1a0754;
    }
    ctx->pc = 0x1A074Cu;
    {
        const bool branch_taken_0x1a074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A074Cu;
        // 0x1a0750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a074c) {
            ctx->pc = 0x1A0794u;
            goto label_1a0794;
        }
    }
    ctx->pc = 0x1A0754u;
label_1a0754:
    // 0x1a0754: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
label_1a0758:
    if (ctx->pc == 0x1A0758u) {
        ctx->pc = 0x1A0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0754u;
        // 0x1a0758: 0x26701328  addiu       $s0, $s3, 0x1328 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A075Cu;
        goto label_1a075c;
    }
    ctx->pc = 0x1A0754u;
    {
        const bool branch_taken_0x1a0754 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0754u;
        // 0x1a0758: 0x26701328  addiu       $s0, $s3, 0x1328 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0754) {
            ctx->pc = 0x1A0790u;
            goto label_1a0790;
        }
    }
    ctx->pc = 0x1A075Cu;
label_1a075c:
    // 0x1a075c: 0xc067bb8  jal         func_19EEE0
label_1a0760:
    if (ctx->pc == 0x1A0760u) {
        ctx->pc = 0x1A0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A075Cu;
        // 0x1a0760: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0764u;
        goto label_1a0764;
    }
    ctx->pc = 0x1A075Cu;
    SET_GPR_U32(ctx, 31, 0x1A0764u);
    ctx->pc = 0x1A0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A075Cu;
    // 0x1a0760: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1A075Cu, 0x1A0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0764u;
label_1a0764:
    // 0x1a0764: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1a0764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a0768:
    // 0x1a0768: 0x26e63cb8  addiu       $a2, $s7, 0x3CB8
    ctx->pc = 0x1a0768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 15544));
label_1a076c:
    // 0x1a076c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a076cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0770:
    // 0x1a0770: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1a0770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0774:
    // 0x1a0774: 0xc10ca04  jal         func_432810
label_1a0778:
    if (ctx->pc == 0x1A0778u) {
        ctx->pc = 0x1A0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0774u;
        // 0x1a0778: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A077Cu;
        goto label_1a077c;
    }
    ctx->pc = 0x1A0774u;
    SET_GPR_U32(ctx, 31, 0x1A077Cu);
    ctx->pc = 0x1A0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0774u;
    // 0x1a0778: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1A0774u, 0x1A077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A077Cu;
label_1a077c:
    // 0x1a077c: 0xc067b9c  jal         func_19EE70
label_1a0780:
    if (ctx->pc == 0x1A0780u) {
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A077Cu;
        // 0x1a0780: 0x240400e3  addiu       $a0, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0784u;
        goto label_1a0784;
    }
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x1A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A077Cu;
    // 0x1a0780: 0x240400e3  addiu       $a0, $zero, 0xE3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1A077Cu, 0x1A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0788:
    // 0x1a0788: 0xc10c25f  jal         func_43097C
label_1a078c:
    if (ctx->pc == 0x1A078Cu) {
        ctx->pc = 0x1A078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0788u;
        // 0x1a078c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0790u;
        goto label_1a0790;
    }
    ctx->pc = 0x1A0788u;
    SET_GPR_U32(ctx, 31, 0x1A0790u);
    ctx->pc = 0x1A078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0788u;
    // 0x1a078c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1A0788u, 0x1A0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0790u;
label_1a0790:
    // 0x1a0790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0794:
    // 0x1a0794: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a0794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a0798:
    // 0x1a0798: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x1a0798u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_1a079c:
    // 0x1a079c: 0xc06ec94  jal         func_1BB250
label_1a07a0:
    if (ctx->pc == 0x1A07A0u) {
        ctx->pc = 0x1A07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A079Cu;
        // 0x1a07a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07A4u;
        goto label_1a07a4;
    }
    ctx->pc = 0x1A079Cu;
    SET_GPR_U32(ctx, 31, 0x1A07A4u);
    ctx->pc = 0x1A07A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A079Cu;
    // 0x1a07a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1A079Cu, 0x1A07A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07A4u;
label_1a07a4:
    // 0x1a07a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a07a8:
    if (ctx->pc == 0x1A07A8u) {
        ctx->pc = 0x1A07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07A4u;
        // 0x1a07a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07ACu;
        goto label_1a07ac;
    }
    ctx->pc = 0x1A07A4u;
    {
        const bool branch_taken_0x1a07a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07A4u;
        // 0x1a07a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07a4) {
            ctx->pc = 0x1A07BCu;
            goto label_1a07bc;
        }
    }
    ctx->pc = 0x1A07ACu;
label_1a07ac:
    // 0x1a07ac: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1a07acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a07b0:
    // 0x1a07b0: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
label_1a07b4:
    if (ctx->pc == 0x1A07B4u) {
        ctx->pc = 0x1A07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07B0u;
        // 0x1a07b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07B8u;
        goto label_1a07b8;
    }
    ctx->pc = 0x1A07B0u;
    {
        const bool branch_taken_0x1a07b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07B0u;
        // 0x1a07b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07b0) {
            ctx->pc = 0x1A05D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a05d0;
        }
    }
    ctx->pc = 0x1A07B8u;
label_1a07b8:
    // 0x1a07b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a07b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a07bc:
    // 0x1a07bc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1a07bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a07c0:
    // 0x1a07c0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1a07c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a07c4:
    // 0x1a07c4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1a07c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a07c8:
    // 0x1a07c8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1a07c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a07cc:
    // 0x1a07cc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1a07ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a07d0:
    // 0x1a07d0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1a07d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a07d4:
    // 0x1a07d4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1a07d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a07d8:
    // 0x1a07d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a07d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a07dc:
    // 0x1a07dc: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1a07dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a07e0:
    // 0x1a07e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a07e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a07e4:
    // 0x1a07e4: 0x3e00008  jr          $ra
label_1a07e8:
    if (ctx->pc == 0x1A07E8u) {
        ctx->pc = 0x1A07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07E4u;
        // 0x1a07e8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07ECu;
        goto label_1a07ec;
    }
    ctx->pc = 0x1A07E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07E4u;
        // 0x1a07e8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A07E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A07ECu;
label_1a07ec:
    // 0x1a07ec: 0x0  nop
    ctx->pc = 0x1a07ecu;
    // NOP
    ctx->pc = 0x1a07f0u;
}
