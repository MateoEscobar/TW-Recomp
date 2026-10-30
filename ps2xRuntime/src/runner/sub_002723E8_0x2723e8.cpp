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

// Function: sub_002723E8
// Address: 0x2723e8 - 0x2726d8
void sub_002723E8_0x2723e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002723E8_0x2723e8");
#endif

    switch (ctx->pc) {
        case 0x2723e8u: goto label_2723e8;
        case 0x2723ecu: goto label_2723ec;
        case 0x2723f0u: goto label_2723f0;
        case 0x2723f4u: goto label_2723f4;
        case 0x2723f8u: goto label_2723f8;
        case 0x2723fcu: goto label_2723fc;
        case 0x272400u: goto label_272400;
        case 0x272404u: goto label_272404;
        case 0x272408u: goto label_272408;
        case 0x27240cu: goto label_27240c;
        case 0x272410u: goto label_272410;
        case 0x272414u: goto label_272414;
        case 0x272418u: goto label_272418;
        case 0x27241cu: goto label_27241c;
        case 0x272420u: goto label_272420;
        case 0x272424u: goto label_272424;
        case 0x272428u: goto label_272428;
        case 0x27242cu: goto label_27242c;
        case 0x272430u: goto label_272430;
        case 0x272434u: goto label_272434;
        case 0x272438u: goto label_272438;
        case 0x27243cu: goto label_27243c;
        case 0x272440u: goto label_272440;
        case 0x272444u: goto label_272444;
        case 0x272448u: goto label_272448;
        case 0x27244cu: goto label_27244c;
        case 0x272450u: goto label_272450;
        case 0x272454u: goto label_272454;
        case 0x272458u: goto label_272458;
        case 0x27245cu: goto label_27245c;
        case 0x272460u: goto label_272460;
        case 0x272464u: goto label_272464;
        case 0x272468u: goto label_272468;
        case 0x27246cu: goto label_27246c;
        case 0x272470u: goto label_272470;
        case 0x272474u: goto label_272474;
        case 0x272478u: goto label_272478;
        case 0x27247cu: goto label_27247c;
        case 0x272480u: goto label_272480;
        case 0x272484u: goto label_272484;
        case 0x272488u: goto label_272488;
        case 0x27248cu: goto label_27248c;
        case 0x272490u: goto label_272490;
        case 0x272494u: goto label_272494;
        case 0x272498u: goto label_272498;
        case 0x27249cu: goto label_27249c;
        case 0x2724a0u: goto label_2724a0;
        case 0x2724a4u: goto label_2724a4;
        case 0x2724a8u: goto label_2724a8;
        case 0x2724acu: goto label_2724ac;
        case 0x2724b0u: goto label_2724b0;
        case 0x2724b4u: goto label_2724b4;
        case 0x2724b8u: goto label_2724b8;
        case 0x2724bcu: goto label_2724bc;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724c4u: goto label_2724c4;
        case 0x2724c8u: goto label_2724c8;
        case 0x2724ccu: goto label_2724cc;
        case 0x2724d0u: goto label_2724d0;
        case 0x2724d4u: goto label_2724d4;
        case 0x2724d8u: goto label_2724d8;
        case 0x2724dcu: goto label_2724dc;
        case 0x2724e0u: goto label_2724e0;
        case 0x2724e4u: goto label_2724e4;
        case 0x2724e8u: goto label_2724e8;
        case 0x2724ecu: goto label_2724ec;
        case 0x2724f0u: goto label_2724f0;
        case 0x2724f4u: goto label_2724f4;
        case 0x2724f8u: goto label_2724f8;
        case 0x2724fcu: goto label_2724fc;
        case 0x272500u: goto label_272500;
        case 0x272504u: goto label_272504;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x272510u: goto label_272510;
        case 0x272514u: goto label_272514;
        case 0x272518u: goto label_272518;
        case 0x27251cu: goto label_27251c;
        case 0x272520u: goto label_272520;
        case 0x272524u: goto label_272524;
        case 0x272528u: goto label_272528;
        case 0x27252cu: goto label_27252c;
        case 0x272530u: goto label_272530;
        case 0x272534u: goto label_272534;
        case 0x272538u: goto label_272538;
        case 0x27253cu: goto label_27253c;
        case 0x272540u: goto label_272540;
        case 0x272544u: goto label_272544;
        case 0x272548u: goto label_272548;
        case 0x27254cu: goto label_27254c;
        case 0x272550u: goto label_272550;
        case 0x272554u: goto label_272554;
        case 0x272558u: goto label_272558;
        case 0x27255cu: goto label_27255c;
        case 0x272560u: goto label_272560;
        case 0x272564u: goto label_272564;
        case 0x272568u: goto label_272568;
        case 0x27256cu: goto label_27256c;
        case 0x272570u: goto label_272570;
        case 0x272574u: goto label_272574;
        case 0x272578u: goto label_272578;
        case 0x27257cu: goto label_27257c;
        case 0x272580u: goto label_272580;
        case 0x272584u: goto label_272584;
        case 0x272588u: goto label_272588;
        case 0x27258cu: goto label_27258c;
        case 0x272590u: goto label_272590;
        case 0x272594u: goto label_272594;
        case 0x272598u: goto label_272598;
        case 0x27259cu: goto label_27259c;
        case 0x2725a0u: goto label_2725a0;
        case 0x2725a4u: goto label_2725a4;
        case 0x2725a8u: goto label_2725a8;
        case 0x2725acu: goto label_2725ac;
        case 0x2725b0u: goto label_2725b0;
        case 0x2725b4u: goto label_2725b4;
        case 0x2725b8u: goto label_2725b8;
        case 0x2725bcu: goto label_2725bc;
        case 0x2725c0u: goto label_2725c0;
        case 0x2725c4u: goto label_2725c4;
        case 0x2725c8u: goto label_2725c8;
        case 0x2725ccu: goto label_2725cc;
        case 0x2725d0u: goto label_2725d0;
        case 0x2725d4u: goto label_2725d4;
        case 0x2725d8u: goto label_2725d8;
        case 0x2725dcu: goto label_2725dc;
        case 0x2725e0u: goto label_2725e0;
        case 0x2725e4u: goto label_2725e4;
        case 0x2725e8u: goto label_2725e8;
        case 0x2725ecu: goto label_2725ec;
        case 0x2725f0u: goto label_2725f0;
        case 0x2725f4u: goto label_2725f4;
        case 0x2725f8u: goto label_2725f8;
        case 0x2725fcu: goto label_2725fc;
        case 0x272600u: goto label_272600;
        case 0x272604u: goto label_272604;
        case 0x272608u: goto label_272608;
        case 0x27260cu: goto label_27260c;
        case 0x272610u: goto label_272610;
        case 0x272614u: goto label_272614;
        case 0x272618u: goto label_272618;
        case 0x27261cu: goto label_27261c;
        case 0x272620u: goto label_272620;
        case 0x272624u: goto label_272624;
        case 0x272628u: goto label_272628;
        case 0x27262cu: goto label_27262c;
        case 0x272630u: goto label_272630;
        case 0x272634u: goto label_272634;
        case 0x272638u: goto label_272638;
        case 0x27263cu: goto label_27263c;
        case 0x272640u: goto label_272640;
        case 0x272644u: goto label_272644;
        case 0x272648u: goto label_272648;
        case 0x27264cu: goto label_27264c;
        case 0x272650u: goto label_272650;
        case 0x272654u: goto label_272654;
        case 0x272658u: goto label_272658;
        case 0x27265cu: goto label_27265c;
        case 0x272660u: goto label_272660;
        case 0x272664u: goto label_272664;
        case 0x272668u: goto label_272668;
        case 0x27266cu: goto label_27266c;
        case 0x272670u: goto label_272670;
        case 0x272674u: goto label_272674;
        case 0x272678u: goto label_272678;
        case 0x27267cu: goto label_27267c;
        case 0x272680u: goto label_272680;
        case 0x272684u: goto label_272684;
        case 0x272688u: goto label_272688;
        case 0x27268cu: goto label_27268c;
        case 0x272690u: goto label_272690;
        case 0x272694u: goto label_272694;
        case 0x272698u: goto label_272698;
        case 0x27269cu: goto label_27269c;
        case 0x2726a0u: goto label_2726a0;
        case 0x2726a4u: goto label_2726a4;
        case 0x2726a8u: goto label_2726a8;
        case 0x2726acu: goto label_2726ac;
        case 0x2726b0u: goto label_2726b0;
        case 0x2726b4u: goto label_2726b4;
        case 0x2726b8u: goto label_2726b8;
        case 0x2726bcu: goto label_2726bc;
        case 0x2726c0u: goto label_2726c0;
        case 0x2726c4u: goto label_2726c4;
        case 0x2726c8u: goto label_2726c8;
        case 0x2726ccu: goto label_2726cc;
        case 0x2726d0u: goto label_2726d0;
        case 0x2726d4u: goto label_2726d4;
        default: break;
    }

    ctx->pc = 0x2723e8u;

label_2723e8:
    // 0x2723e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2723e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2723ec:
    // 0x2723ec: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2723ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2723f0:
    // 0x2723f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2723f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2723f4:
    // 0x2723f4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2723f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2723f8:
    // 0x2723f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2723f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2723fc:
    // 0x2723fc: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x2723fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
label_272400:
    // 0x272400: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x272400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_272404:
    // 0x272404: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x272404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272408:
    // 0x272408: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x272408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_27240c:
    // 0x27240c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_272410:
    // 0x272410: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x272410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_272414:
    // 0x272414: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x272414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_272418:
    // 0x272418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27241c:
    // 0x27241c: 0xc089998  jal         func_226660
label_272420:
    if (ctx->pc == 0x272420u) {
        ctx->pc = 0x272420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27241Cu;
        // 0x272420: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272424u;
        goto label_272424;
    }
    ctx->pc = 0x27241Cu;
    SET_GPR_U32(ctx, 31, 0x272424u);
    ctx->pc = 0x272420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27241Cu;
    // 0x272420: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27241Cu, 0x272424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272424u;
label_272424:
    // 0x272424: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
label_272428:
    if (ctx->pc == 0x272428u) {
        ctx->pc = 0x272428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272424u;
        // 0x272428: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27242Cu;
        goto label_27242c;
    }
    ctx->pc = 0x272424u;
    {
        const bool branch_taken_0x272424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272424u;
        // 0x272428: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272424) {
            ctx->pc = 0x2726A0u;
            goto label_2726a0;
        }
    }
    ctx->pc = 0x27242Cu;
label_27242c:
    // 0x27242c: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x27242cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
label_272430:
    // 0x272430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_272434:
    // 0x272434: 0xc089998  jal         func_226660
label_272438:
    if (ctx->pc == 0x272438u) {
        ctx->pc = 0x272438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272434u;
        // 0x272438: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27243Cu;
        goto label_27243c;
    }
    ctx->pc = 0x272434u;
    SET_GPR_U32(ctx, 31, 0x27243Cu);
    ctx->pc = 0x272438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272434u;
    // 0x272438: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x272434u, 0x27243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27243Cu;
label_27243c:
    // 0x27243c: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
label_272440:
    if (ctx->pc == 0x272440u) {
        ctx->pc = 0x272440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27243Cu;
        // 0x272440: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272444u;
        goto label_272444;
    }
    ctx->pc = 0x27243Cu;
    {
        const bool branch_taken_0x27243c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27243Cu;
        // 0x272440: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27243c) {
            ctx->pc = 0x2726A0u;
            goto label_2726a0;
        }
    }
    ctx->pc = 0x272444u;
label_272444:
    // 0x272444: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x272444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272448:
    // 0x272448: 0x240600f3  addiu       $a2, $zero, 0xF3
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
label_27244c:
    // 0x27244c: 0xc08ae58  jal         func_22B960
label_272450:
    if (ctx->pc == 0x272450u) {
        ctx->pc = 0x272450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27244Cu;
        // 0x272450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272454u;
        goto label_272454;
    }
    ctx->pc = 0x27244Cu;
    SET_GPR_U32(ctx, 31, 0x272454u);
    ctx->pc = 0x272450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27244Cu;
    // 0x272450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x27244Cu, 0x272454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272454u;
label_272454:
    // 0x272454: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x272454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_272458:
    // 0x272458: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x272458u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_27245c:
    // 0x27245c: 0x2450e250  addiu       $s0, $v0, -0x1DB0
    ctx->pc = 0x27245cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
label_272460:
    // 0x272460: 0xc041532  jal         func_1054C8
label_272464:
    if (ctx->pc == 0x272464u) {
        ctx->pc = 0x272464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272460u;
        // 0x272464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272468u;
        goto label_272468;
    }
    ctx->pc = 0x272460u;
    SET_GPR_U32(ctx, 31, 0x272468u);
    ctx->pc = 0x272464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272460u;
    // 0x272464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272460u, 0x272468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272468u;
label_272468:
    // 0x272468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27246c:
    // 0x27246c: 0xc041532  jal         func_1054C8
label_272470:
    if (ctx->pc == 0x272470u) {
        ctx->pc = 0x272470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27246Cu;
        // 0x272470: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272474u;
        goto label_272474;
    }
    ctx->pc = 0x27246Cu;
    SET_GPR_U32(ctx, 31, 0x272474u);
    ctx->pc = 0x272470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27246Cu;
    // 0x272470: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27246Cu, 0x272474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272474u;
label_272474:
    // 0x272474: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x272474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272478:
    // 0x272478: 0xc041532  jal         func_1054C8
label_27247c:
    if (ctx->pc == 0x27247Cu) {
        ctx->pc = 0x27247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272478u;
        // 0x27247c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272480u;
        goto label_272480;
    }
    ctx->pc = 0x272478u;
    SET_GPR_U32(ctx, 31, 0x272480u);
    ctx->pc = 0x27247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272478u;
    // 0x27247c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272478u, 0x272480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272480u;
label_272480:
    // 0x272480: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_272484:
    if (ctx->pc == 0x272484u) {
        ctx->pc = 0x272484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272480u;
        // 0x272484: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272488u;
        goto label_272488;
    }
    ctx->pc = 0x272480u;
    {
        const bool branch_taken_0x272480 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x272484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272480u;
        // 0x272484: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272480) {
            ctx->pc = 0x2724ACu;
            goto label_2724ac;
        }
    }
    ctx->pc = 0x272488u;
label_272488:
    // 0x272488: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x272488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_27248c:
    // 0x27248c: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x27248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_272490:
    // 0x272490: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x272490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272494:
    // 0x272494: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x272494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272498:
    // 0x272498: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x272498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_27249c:
    // 0x27249c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x27249cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_2724a0:
    // 0x2724a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2724a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2724a4:
    // 0x2724a4: 0xc041b20  jal         func_106C80
label_2724a8:
    if (ctx->pc == 0x2724A8u) {
        ctx->pc = 0x2724A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724A4u;
        // 0x2724a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724ACu;
        goto label_2724ac;
    }
    ctx->pc = 0x2724A4u;
    SET_GPR_U32(ctx, 31, 0x2724ACu);
    ctx->pc = 0x2724A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2724A4u;
    // 0x2724a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2724A4u, 0x2724ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724ACu;
label_2724ac:
    // 0x2724ac: 0xc05d484  jal         func_175210
label_2724b0:
    if (ctx->pc == 0x2724B0u) {
        ctx->pc = 0x2724B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724ACu;
        // 0x2724b0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724B4u;
        goto label_2724b4;
    }
    ctx->pc = 0x2724ACu;
    SET_GPR_U32(ctx, 31, 0x2724B4u);
    ctx->pc = 0x2724B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2724ACu;
    // 0x2724b0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2724ACu, 0x2724B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724B4u;
label_2724b4:
    // 0x2724b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2724b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2724b8:
    // 0x2724b8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2724b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2724bc:
    // 0x2724bc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2724bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2724c0:
    // 0x2724c0: 0xa0f809  jalr        $a1
label_2724c4:
    if (ctx->pc == 0x2724C4u) {
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724C8u;
        goto label_2724c8;
    }
    ctx->pc = 0x2724C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2724C8u);
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2724C0u, 0x2724C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2724C8u;
label_2724c8:
    // 0x2724c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2724c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2724cc:
    // 0x2724cc: 0xc087016  jal         func_21C058
label_2724d0:
    if (ctx->pc == 0x2724D0u) {
        ctx->pc = 0x2724D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724CCu;
        // 0x2724d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724D4u;
        goto label_2724d4;
    }
    ctx->pc = 0x2724CCu;
    SET_GPR_U32(ctx, 31, 0x2724D4u);
    ctx->pc = 0x2724D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2724CCu;
    // 0x2724d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2724CCu, 0x2724D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724D4u;
label_2724d4:
    // 0x2724d4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2724d8:
    if (ctx->pc == 0x2724D8u) {
        ctx->pc = 0x2724D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724D4u;
        // 0x2724d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724DCu;
        goto label_2724dc;
    }
    ctx->pc = 0x2724D4u;
    {
        const bool branch_taken_0x2724d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724D4u;
        // 0x2724d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724d4) {
            ctx->pc = 0x2724F4u;
            goto label_2724f4;
        }
    }
    ctx->pc = 0x2724DCu;
label_2724dc:
    // 0x2724dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2724dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2724e0:
    // 0x2724e0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2724e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2724e4:
    // 0x2724e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2724e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2724e8:
    // 0x2724e8: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x2724e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_2724ec:
    // 0x2724ec: 0xc04159e  jal         func_105678
label_2724f0:
    if (ctx->pc == 0x2724F0u) {
        ctx->pc = 0x2724F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724ECu;
        // 0x2724f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724F4u;
        goto label_2724f4;
    }
    ctx->pc = 0x2724ECu;
    SET_GPR_U32(ctx, 31, 0x2724F4u);
    ctx->pc = 0x2724F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2724ECu;
    // 0x2724f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2724ECu, 0x2724F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724F4u;
label_2724f4:
    // 0x2724f4: 0x52800011  beql        $s4, $zero, . + 4 + (0x11 << 2)
label_2724f8:
    if (ctx->pc == 0x2724F8u) {
        ctx->pc = 0x2724F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724F4u;
        // 0x2724f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724FCu;
        goto label_2724fc;
    }
    ctx->pc = 0x2724F4u;
    {
        const bool branch_taken_0x2724f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2724f4) {
            ctx->pc = 0x2724F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2724F4u;
            // 0x2724f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27253Cu;
            goto label_27253c;
        }
    }
    ctx->pc = 0x2724FCu;
label_2724fc:
    // 0x2724fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2724fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272500:
    // 0x272500: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272504:
    // 0x272504: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272508:
    // 0x272508: 0x40f809  jalr        $v0
label_27250c:
    if (ctx->pc == 0x27250Cu) {
        ctx->pc = 0x27250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272508u;
        // 0x27250c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272510u;
        goto label_272510;
    }
    ctx->pc = 0x272508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272510u);
        ctx->pc = 0x27250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272508u;
        // 0x27250c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272508u, 0x272510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272510u;
label_272510:
    // 0x272510: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x272510u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_272514:
    // 0x272514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x272514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272518:
    // 0x272518: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x272518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27251c:
    // 0x27251c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27251cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272520:
    // 0x272520: 0x254a2310  addiu       $t2, $t2, 0x2310
    ctx->pc = 0x272520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8976));
label_272524:
    // 0x272524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x272524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272528:
    // 0x272528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x272528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27252c:
    // 0x27252c: 0x240600f2  addiu       $a2, $zero, 0xF2
    ctx->pc = 0x27252cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_272530:
    // 0x272530: 0xc041664  jal         func_105990
label_272534:
    if (ctx->pc == 0x272534u) {
        ctx->pc = 0x272534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272530u;
        // 0x272534: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272538u;
        goto label_272538;
    }
    ctx->pc = 0x272530u;
    SET_GPR_U32(ctx, 31, 0x272538u);
    ctx->pc = 0x272534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272530u;
    // 0x272534: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x272530u, 0x272538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272538u;
label_272538:
    // 0x272538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27253c:
    // 0x27253c: 0xc089990  jal         func_226640
label_272540:
    if (ctx->pc == 0x272540u) {
        ctx->pc = 0x272540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27253Cu;
        // 0x272540: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272544u;
        goto label_272544;
    }
    ctx->pc = 0x27253Cu;
    SET_GPR_U32(ctx, 31, 0x272544u);
    ctx->pc = 0x272540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27253Cu;
    // 0x272540: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x27253Cu, 0x272544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272544u;
label_272544:
    // 0x272544: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272548:
    // 0x272548: 0xc05d53a  jal         func_1754E8
label_27254c:
    if (ctx->pc == 0x27254Cu) {
        ctx->pc = 0x27254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272548u;
        // 0x27254c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272550u;
        goto label_272550;
    }
    ctx->pc = 0x272548u;
    SET_GPR_U32(ctx, 31, 0x272550u);
    ctx->pc = 0x27254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272548u;
    // 0x27254c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x272548u, 0x272550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272550u;
label_272550:
    // 0x272550: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x272550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272554:
    // 0x272554: 0xc05d4f6  jal         func_1753D8
label_272558:
    if (ctx->pc == 0x272558u) {
        ctx->pc = 0x272558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272554u;
        // 0x272558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27255Cu;
        goto label_27255c;
    }
    ctx->pc = 0x272554u;
    SET_GPR_U32(ctx, 31, 0x27255Cu);
    ctx->pc = 0x272558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272554u;
    // 0x272558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x272554u, 0x27255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27255Cu;
label_27255c:
    // 0x27255c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272560:
    // 0x272560: 0xc041532  jal         func_1054C8
label_272564:
    if (ctx->pc == 0x272564u) {
        ctx->pc = 0x272564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272560u;
        // 0x272564: 0x8eb300d8  lw          $s3, 0xD8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272568u;
        goto label_272568;
    }
    ctx->pc = 0x272560u;
    SET_GPR_U32(ctx, 31, 0x272568u);
    ctx->pc = 0x272564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272560u;
    // 0x272564: 0x8eb300d8  lw          $s3, 0xD8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272560u, 0x272568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272568u;
label_272568:
    // 0x272568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27256c:
    // 0x27256c: 0xc041532  jal         func_1054C8
label_272570:
    if (ctx->pc == 0x272570u) {
        ctx->pc = 0x272570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27256Cu;
        // 0x272570: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272574u;
        goto label_272574;
    }
    ctx->pc = 0x27256Cu;
    SET_GPR_U32(ctx, 31, 0x272574u);
    ctx->pc = 0x272570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27256Cu;
    // 0x272570: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27256Cu, 0x272574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272574u;
label_272574:
    // 0x272574: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x272574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272578:
    // 0x272578: 0xc041532  jal         func_1054C8
label_27257c:
    if (ctx->pc == 0x27257Cu) {
        ctx->pc = 0x27257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272578u;
        // 0x27257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272580u;
        goto label_272580;
    }
    ctx->pc = 0x272578u;
    SET_GPR_U32(ctx, 31, 0x272580u);
    ctx->pc = 0x27257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272578u;
    // 0x27257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x272578u, 0x272580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272580u;
label_272580:
    // 0x272580: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_272584:
    if (ctx->pc == 0x272584u) {
        ctx->pc = 0x272584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272580u;
        // 0x272584: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272588u;
        goto label_272588;
    }
    ctx->pc = 0x272580u;
    {
        const bool branch_taken_0x272580 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x272584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272580u;
        // 0x272584: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272580) {
            ctx->pc = 0x2725ACu;
            goto label_2725ac;
        }
    }
    ctx->pc = 0x272588u;
label_272588:
    // 0x272588: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x272588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_27258c:
    // 0x27258c: 0x8ea500d8  lw          $a1, 0xD8($s5)
    ctx->pc = 0x27258cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_272590:
    // 0x272590: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x272590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_272594:
    // 0x272594: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x272594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272598:
    // 0x272598: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x272598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_27259c:
    // 0x27259c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x27259cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_2725a0:
    // 0x2725a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2725a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2725a4:
    // 0x2725a4: 0xc041b20  jal         func_106C80
label_2725a8:
    if (ctx->pc == 0x2725A8u) {
        ctx->pc = 0x2725A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725A4u;
        // 0x2725a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725ACu;
        goto label_2725ac;
    }
    ctx->pc = 0x2725A4u;
    SET_GPR_U32(ctx, 31, 0x2725ACu);
    ctx->pc = 0x2725A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725A4u;
    // 0x2725a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2725A4u, 0x2725ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725ACu;
label_2725ac:
    // 0x2725ac: 0xc05d484  jal         func_175210
label_2725b0:
    if (ctx->pc == 0x2725B0u) {
        ctx->pc = 0x2725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725ACu;
        // 0x2725b0: 0x8ea400d8  lw          $a0, 0xD8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725B4u;
        goto label_2725b4;
    }
    ctx->pc = 0x2725ACu;
    SET_GPR_U32(ctx, 31, 0x2725B4u);
    ctx->pc = 0x2725B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725ACu;
    // 0x2725b0: 0x8ea400d8  lw          $a0, 0xD8($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2725ACu, 0x2725B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725B4u;
label_2725b4:
    // 0x2725b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2725b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2725b8:
    // 0x2725b8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2725b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2725bc:
    // 0x2725bc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2725bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2725c0:
    // 0x2725c0: 0xa0f809  jalr        $a1
label_2725c4:
    if (ctx->pc == 0x2725C4u) {
        ctx->pc = 0x2725C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725C0u;
        // 0x2725c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725C8u;
        goto label_2725c8;
    }
    ctx->pc = 0x2725C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2725C8u);
        ctx->pc = 0x2725C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725C0u;
        // 0x2725c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2725C0u, 0x2725C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2725C8u;
label_2725c8:
    // 0x2725c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2725c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2725cc:
    // 0x2725cc: 0xc087016  jal         func_21C058
label_2725d0:
    if (ctx->pc == 0x2725D0u) {
        ctx->pc = 0x2725D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725CCu;
        // 0x2725d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725D4u;
        goto label_2725d4;
    }
    ctx->pc = 0x2725CCu;
    SET_GPR_U32(ctx, 31, 0x2725D4u);
    ctx->pc = 0x2725D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725CCu;
    // 0x2725d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2725CCu, 0x2725D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725D4u;
label_2725d4:
    // 0x2725d4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2725d8:
    if (ctx->pc == 0x2725D8u) {
        ctx->pc = 0x2725D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725D4u;
        // 0x2725d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725DCu;
        goto label_2725dc;
    }
    ctx->pc = 0x2725D4u;
    {
        const bool branch_taken_0x2725d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725D4u;
        // 0x2725d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725d4) {
            ctx->pc = 0x2725F4u;
            goto label_2725f4;
        }
    }
    ctx->pc = 0x2725DCu;
label_2725dc:
    // 0x2725dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2725dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2725e0:
    // 0x2725e0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2725e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2725e4:
    // 0x2725e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2725e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2725e8:
    // 0x2725e8: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x2725e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
label_2725ec:
    // 0x2725ec: 0xc04159e  jal         func_105678
label_2725f0:
    if (ctx->pc == 0x2725F0u) {
        ctx->pc = 0x2725F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725ECu;
        // 0x2725f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725F4u;
        goto label_2725f4;
    }
    ctx->pc = 0x2725ECu;
    SET_GPR_U32(ctx, 31, 0x2725F4u);
    ctx->pc = 0x2725F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725ECu;
    // 0x2725f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2725ECu, 0x2725F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725F4u;
label_2725f4:
    // 0x2725f4: 0x52800018  beql        $s4, $zero, . + 4 + (0x18 << 2)
label_2725f8:
    if (ctx->pc == 0x2725F8u) {
        ctx->pc = 0x2725F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725F4u;
        // 0x2725f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2725FCu;
        goto label_2725fc;
    }
    ctx->pc = 0x2725F4u;
    {
        const bool branch_taken_0x2725f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2725f4) {
            ctx->pc = 0x2725F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2725F4u;
            // 0x2725f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272658u;
            goto label_272658;
        }
    }
    ctx->pc = 0x2725FCu;
label_2725fc:
    // 0x2725fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2725fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_272600:
    // 0x272600: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_272604:
    // 0x272604: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x272604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272608:
    // 0x272608: 0x40f809  jalr        $v0
label_27260c:
    if (ctx->pc == 0x27260Cu) {
        ctx->pc = 0x27260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272608u;
        // 0x27260c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272610u;
        goto label_272610;
    }
    ctx->pc = 0x272608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272610u);
        ctx->pc = 0x27260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272608u;
        // 0x27260c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272608u, 0x272610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272610u;
label_272610:
    // 0x272610: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x272610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_272614:
    // 0x272614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_272618:
    // 0x272618: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x272618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_27261c:
    // 0x27261c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x27261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_272620:
    // 0x272620: 0x40f809  jalr        $v0
label_272624:
    if (ctx->pc == 0x272624u) {
        ctx->pc = 0x272624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272620u;
        // 0x272624: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272628u;
        goto label_272628;
    }
    ctx->pc = 0x272620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x272628u);
        ctx->pc = 0x272624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272620u;
        // 0x272624: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272620u, 0x272628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272628u;
label_272628:
    // 0x272628: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x272628u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_27262c:
    // 0x27262c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27262cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272630:
    // 0x272630: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x272630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272634:
    // 0x272634: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x272634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272638:
    // 0x272638: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x272638u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27263c:
    // 0x27263c: 0x256b23a8  addiu       $t3, $t3, 0x23A8
    ctx->pc = 0x27263cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9128));
label_272640:
    // 0x272640: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x272640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272644:
    // 0x272644: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x272644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272648:
    // 0x272648: 0x240700f3  addiu       $a3, $zero, 0xF3
    ctx->pc = 0x272648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
label_27264c:
    // 0x27264c: 0xc04229e  jal         func_108A78
label_272650:
    if (ctx->pc == 0x272650u) {
        ctx->pc = 0x272650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27264Cu;
        // 0x272650: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272654u;
        goto label_272654;
    }
    ctx->pc = 0x27264Cu;
    SET_GPR_U32(ctx, 31, 0x272654u);
    ctx->pc = 0x272650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27264Cu;
    // 0x272650: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x27264Cu, 0x272654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272654u;
label_272654:
    // 0x272654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x272654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272658:
    // 0x272658: 0xc089990  jal         func_226640
label_27265c:
    if (ctx->pc == 0x27265Cu) {
        ctx->pc = 0x27265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272658u;
        // 0x27265c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272660u;
        goto label_272660;
    }
    ctx->pc = 0x272658u;
    SET_GPR_U32(ctx, 31, 0x272660u);
    ctx->pc = 0x27265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272658u;
    // 0x27265c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x272658u, 0x272660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272660u;
label_272660:
    // 0x272660: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_272664:
    // 0x272664: 0xc05d53a  jal         func_1754E8
label_272668:
    if (ctx->pc == 0x272668u) {
        ctx->pc = 0x272668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272664u;
        // 0x272668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27266Cu;
        goto label_27266c;
    }
    ctx->pc = 0x272664u;
    SET_GPR_U32(ctx, 31, 0x27266Cu);
    ctx->pc = 0x272668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272664u;
    // 0x272668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x272664u, 0x27266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27266Cu;
label_27266c:
    // 0x27266c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_272670:
    // 0x272670: 0xc05d4f6  jal         func_1753D8
label_272674:
    if (ctx->pc == 0x272674u) {
        ctx->pc = 0x272674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272670u;
        // 0x272674: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272678u;
        goto label_272678;
    }
    ctx->pc = 0x272670u;
    SET_GPR_U32(ctx, 31, 0x272678u);
    ctx->pc = 0x272674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272670u;
    // 0x272674: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x272670u, 0x272678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272678u;
label_272678:
    // 0x272678: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x272678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_27267c:
    // 0x27267c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x27267cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_272680:
    // 0x272680: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_272684:
    if (ctx->pc == 0x272684u) {
        ctx->pc = 0x272684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272680u;
        // 0x272684: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272688u;
        goto label_272688;
    }
    ctx->pc = 0x272680u;
    {
        const bool branch_taken_0x272680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272680u;
        // 0x272684: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272680) {
            ctx->pc = 0x27269Cu;
            goto label_27269c;
        }
    }
    ctx->pc = 0x272688u;
label_272688:
    // 0x272688: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27268c:
    // 0x27268c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x27268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_272690:
    // 0x272690: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x272690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_272694:
    // 0x272694: 0xc13b632  jal         func_4ED8C8
label_272698:
    if (ctx->pc == 0x272698u) {
        ctx->pc = 0x272698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272694u;
        // 0x272698: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27269Cu;
        goto label_27269c;
    }
    ctx->pc = 0x272694u;
    SET_GPR_U32(ctx, 31, 0x27269Cu);
    ctx->pc = 0x272698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272694u;
    // 0x272698: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x272694u, 0x27269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27269Cu;
label_27269c:
    // 0x27269c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x27269cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2726a0:
    // 0x2726a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2726a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2726a4:
    // 0x2726a4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2726a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2726a8:
    // 0x2726a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2726a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2726ac:
    // 0x2726ac: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2726acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2726b0:
    // 0x2726b0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2726b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2726b4:
    // 0x2726b4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2726b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2726b8:
    // 0x2726b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2726b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2726bc:
    // 0x2726bc: 0x3e00008  jr          $ra
label_2726c0:
    if (ctx->pc == 0x2726C0u) {
        ctx->pc = 0x2726C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726BCu;
        // 0x2726c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2726C4u;
        goto label_2726c4;
    }
    ctx->pc = 0x2726BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2726C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726BCu;
        // 0x2726c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2726C4u;
label_2726c4:
    // 0x2726c4: 0x0  nop
    ctx->pc = 0x2726c4u;
    // NOP
label_2726c8:
    // 0x2726c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2726c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2726cc:
    // 0x2726cc: 0x0  nop
    ctx->pc = 0x2726ccu;
    // NOP
label_2726d0:
    // 0x2726d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2726d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2726d4:
    // 0x2726d4: 0x0  nop
    ctx->pc = 0x2726d4u;
    // NOP
    ctx->pc = 0x2726d8u;
}
