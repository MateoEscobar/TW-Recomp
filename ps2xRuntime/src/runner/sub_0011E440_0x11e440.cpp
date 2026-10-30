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

// Function: sub_0011E440
// Address: 0x11e440 - 0x11e878
void sub_0011E440_0x11e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E440_0x11e440");
#endif

    switch (ctx->pc) {
        case 0x11e440u: goto label_11e440;
        case 0x11e444u: goto label_11e444;
        case 0x11e448u: goto label_11e448;
        case 0x11e44cu: goto label_11e44c;
        case 0x11e450u: goto label_11e450;
        case 0x11e454u: goto label_11e454;
        case 0x11e458u: goto label_11e458;
        case 0x11e45cu: goto label_11e45c;
        case 0x11e460u: goto label_11e460;
        case 0x11e464u: goto label_11e464;
        case 0x11e468u: goto label_11e468;
        case 0x11e46cu: goto label_11e46c;
        case 0x11e470u: goto label_11e470;
        case 0x11e474u: goto label_11e474;
        case 0x11e478u: goto label_11e478;
        case 0x11e47cu: goto label_11e47c;
        case 0x11e480u: goto label_11e480;
        case 0x11e484u: goto label_11e484;
        case 0x11e488u: goto label_11e488;
        case 0x11e48cu: goto label_11e48c;
        case 0x11e490u: goto label_11e490;
        case 0x11e494u: goto label_11e494;
        case 0x11e498u: goto label_11e498;
        case 0x11e49cu: goto label_11e49c;
        case 0x11e4a0u: goto label_11e4a0;
        case 0x11e4a4u: goto label_11e4a4;
        case 0x11e4a8u: goto label_11e4a8;
        case 0x11e4acu: goto label_11e4ac;
        case 0x11e4b0u: goto label_11e4b0;
        case 0x11e4b4u: goto label_11e4b4;
        case 0x11e4b8u: goto label_11e4b8;
        case 0x11e4bcu: goto label_11e4bc;
        case 0x11e4c0u: goto label_11e4c0;
        case 0x11e4c4u: goto label_11e4c4;
        case 0x11e4c8u: goto label_11e4c8;
        case 0x11e4ccu: goto label_11e4cc;
        case 0x11e4d0u: goto label_11e4d0;
        case 0x11e4d4u: goto label_11e4d4;
        case 0x11e4d8u: goto label_11e4d8;
        case 0x11e4dcu: goto label_11e4dc;
        case 0x11e4e0u: goto label_11e4e0;
        case 0x11e4e4u: goto label_11e4e4;
        case 0x11e4e8u: goto label_11e4e8;
        case 0x11e4ecu: goto label_11e4ec;
        case 0x11e4f0u: goto label_11e4f0;
        case 0x11e4f4u: goto label_11e4f4;
        case 0x11e4f8u: goto label_11e4f8;
        case 0x11e4fcu: goto label_11e4fc;
        case 0x11e500u: goto label_11e500;
        case 0x11e504u: goto label_11e504;
        case 0x11e508u: goto label_11e508;
        case 0x11e50cu: goto label_11e50c;
        case 0x11e510u: goto label_11e510;
        case 0x11e514u: goto label_11e514;
        case 0x11e518u: goto label_11e518;
        case 0x11e51cu: goto label_11e51c;
        case 0x11e520u: goto label_11e520;
        case 0x11e524u: goto label_11e524;
        case 0x11e528u: goto label_11e528;
        case 0x11e52cu: goto label_11e52c;
        case 0x11e530u: goto label_11e530;
        case 0x11e534u: goto label_11e534;
        case 0x11e538u: goto label_11e538;
        case 0x11e53cu: goto label_11e53c;
        case 0x11e540u: goto label_11e540;
        case 0x11e544u: goto label_11e544;
        case 0x11e548u: goto label_11e548;
        case 0x11e54cu: goto label_11e54c;
        case 0x11e550u: goto label_11e550;
        case 0x11e554u: goto label_11e554;
        case 0x11e558u: goto label_11e558;
        case 0x11e55cu: goto label_11e55c;
        case 0x11e560u: goto label_11e560;
        case 0x11e564u: goto label_11e564;
        case 0x11e568u: goto label_11e568;
        case 0x11e56cu: goto label_11e56c;
        case 0x11e570u: goto label_11e570;
        case 0x11e574u: goto label_11e574;
        case 0x11e578u: goto label_11e578;
        case 0x11e57cu: goto label_11e57c;
        case 0x11e580u: goto label_11e580;
        case 0x11e584u: goto label_11e584;
        case 0x11e588u: goto label_11e588;
        case 0x11e58cu: goto label_11e58c;
        case 0x11e590u: goto label_11e590;
        case 0x11e594u: goto label_11e594;
        case 0x11e598u: goto label_11e598;
        case 0x11e59cu: goto label_11e59c;
        case 0x11e5a0u: goto label_11e5a0;
        case 0x11e5a4u: goto label_11e5a4;
        case 0x11e5a8u: goto label_11e5a8;
        case 0x11e5acu: goto label_11e5ac;
        case 0x11e5b0u: goto label_11e5b0;
        case 0x11e5b4u: goto label_11e5b4;
        case 0x11e5b8u: goto label_11e5b8;
        case 0x11e5bcu: goto label_11e5bc;
        case 0x11e5c0u: goto label_11e5c0;
        case 0x11e5c4u: goto label_11e5c4;
        case 0x11e5c8u: goto label_11e5c8;
        case 0x11e5ccu: goto label_11e5cc;
        case 0x11e5d0u: goto label_11e5d0;
        case 0x11e5d4u: goto label_11e5d4;
        case 0x11e5d8u: goto label_11e5d8;
        case 0x11e5dcu: goto label_11e5dc;
        case 0x11e5e0u: goto label_11e5e0;
        case 0x11e5e4u: goto label_11e5e4;
        case 0x11e5e8u: goto label_11e5e8;
        case 0x11e5ecu: goto label_11e5ec;
        case 0x11e5f0u: goto label_11e5f0;
        case 0x11e5f4u: goto label_11e5f4;
        case 0x11e5f8u: goto label_11e5f8;
        case 0x11e5fcu: goto label_11e5fc;
        case 0x11e600u: goto label_11e600;
        case 0x11e604u: goto label_11e604;
        case 0x11e608u: goto label_11e608;
        case 0x11e60cu: goto label_11e60c;
        case 0x11e610u: goto label_11e610;
        case 0x11e614u: goto label_11e614;
        case 0x11e618u: goto label_11e618;
        case 0x11e61cu: goto label_11e61c;
        case 0x11e620u: goto label_11e620;
        case 0x11e624u: goto label_11e624;
        case 0x11e628u: goto label_11e628;
        case 0x11e62cu: goto label_11e62c;
        case 0x11e630u: goto label_11e630;
        case 0x11e634u: goto label_11e634;
        case 0x11e638u: goto label_11e638;
        case 0x11e63cu: goto label_11e63c;
        case 0x11e640u: goto label_11e640;
        case 0x11e644u: goto label_11e644;
        case 0x11e648u: goto label_11e648;
        case 0x11e64cu: goto label_11e64c;
        case 0x11e650u: goto label_11e650;
        case 0x11e654u: goto label_11e654;
        case 0x11e658u: goto label_11e658;
        case 0x11e65cu: goto label_11e65c;
        case 0x11e660u: goto label_11e660;
        case 0x11e664u: goto label_11e664;
        case 0x11e668u: goto label_11e668;
        case 0x11e66cu: goto label_11e66c;
        case 0x11e670u: goto label_11e670;
        case 0x11e674u: goto label_11e674;
        case 0x11e678u: goto label_11e678;
        case 0x11e67cu: goto label_11e67c;
        case 0x11e680u: goto label_11e680;
        case 0x11e684u: goto label_11e684;
        case 0x11e688u: goto label_11e688;
        case 0x11e68cu: goto label_11e68c;
        case 0x11e690u: goto label_11e690;
        case 0x11e694u: goto label_11e694;
        case 0x11e698u: goto label_11e698;
        case 0x11e69cu: goto label_11e69c;
        case 0x11e6a0u: goto label_11e6a0;
        case 0x11e6a4u: goto label_11e6a4;
        case 0x11e6a8u: goto label_11e6a8;
        case 0x11e6acu: goto label_11e6ac;
        case 0x11e6b0u: goto label_11e6b0;
        case 0x11e6b4u: goto label_11e6b4;
        case 0x11e6b8u: goto label_11e6b8;
        case 0x11e6bcu: goto label_11e6bc;
        case 0x11e6c0u: goto label_11e6c0;
        case 0x11e6c4u: goto label_11e6c4;
        case 0x11e6c8u: goto label_11e6c8;
        case 0x11e6ccu: goto label_11e6cc;
        case 0x11e6d0u: goto label_11e6d0;
        case 0x11e6d4u: goto label_11e6d4;
        case 0x11e6d8u: goto label_11e6d8;
        case 0x11e6dcu: goto label_11e6dc;
        case 0x11e6e0u: goto label_11e6e0;
        case 0x11e6e4u: goto label_11e6e4;
        case 0x11e6e8u: goto label_11e6e8;
        case 0x11e6ecu: goto label_11e6ec;
        case 0x11e6f0u: goto label_11e6f0;
        case 0x11e6f4u: goto label_11e6f4;
        case 0x11e6f8u: goto label_11e6f8;
        case 0x11e6fcu: goto label_11e6fc;
        case 0x11e700u: goto label_11e700;
        case 0x11e704u: goto label_11e704;
        case 0x11e708u: goto label_11e708;
        case 0x11e70cu: goto label_11e70c;
        case 0x11e710u: goto label_11e710;
        case 0x11e714u: goto label_11e714;
        case 0x11e718u: goto label_11e718;
        case 0x11e71cu: goto label_11e71c;
        case 0x11e720u: goto label_11e720;
        case 0x11e724u: goto label_11e724;
        case 0x11e728u: goto label_11e728;
        case 0x11e72cu: goto label_11e72c;
        case 0x11e730u: goto label_11e730;
        case 0x11e734u: goto label_11e734;
        case 0x11e738u: goto label_11e738;
        case 0x11e73cu: goto label_11e73c;
        case 0x11e740u: goto label_11e740;
        case 0x11e744u: goto label_11e744;
        case 0x11e748u: goto label_11e748;
        case 0x11e74cu: goto label_11e74c;
        case 0x11e750u: goto label_11e750;
        case 0x11e754u: goto label_11e754;
        case 0x11e758u: goto label_11e758;
        case 0x11e75cu: goto label_11e75c;
        case 0x11e760u: goto label_11e760;
        case 0x11e764u: goto label_11e764;
        case 0x11e768u: goto label_11e768;
        case 0x11e76cu: goto label_11e76c;
        case 0x11e770u: goto label_11e770;
        case 0x11e774u: goto label_11e774;
        case 0x11e778u: goto label_11e778;
        case 0x11e77cu: goto label_11e77c;
        case 0x11e780u: goto label_11e780;
        case 0x11e784u: goto label_11e784;
        case 0x11e788u: goto label_11e788;
        case 0x11e78cu: goto label_11e78c;
        case 0x11e790u: goto label_11e790;
        case 0x11e794u: goto label_11e794;
        case 0x11e798u: goto label_11e798;
        case 0x11e79cu: goto label_11e79c;
        case 0x11e7a0u: goto label_11e7a0;
        case 0x11e7a4u: goto label_11e7a4;
        case 0x11e7a8u: goto label_11e7a8;
        case 0x11e7acu: goto label_11e7ac;
        case 0x11e7b0u: goto label_11e7b0;
        case 0x11e7b4u: goto label_11e7b4;
        case 0x11e7b8u: goto label_11e7b8;
        case 0x11e7bcu: goto label_11e7bc;
        case 0x11e7c0u: goto label_11e7c0;
        case 0x11e7c4u: goto label_11e7c4;
        case 0x11e7c8u: goto label_11e7c8;
        case 0x11e7ccu: goto label_11e7cc;
        case 0x11e7d0u: goto label_11e7d0;
        case 0x11e7d4u: goto label_11e7d4;
        case 0x11e7d8u: goto label_11e7d8;
        case 0x11e7dcu: goto label_11e7dc;
        case 0x11e7e0u: goto label_11e7e0;
        case 0x11e7e4u: goto label_11e7e4;
        case 0x11e7e8u: goto label_11e7e8;
        case 0x11e7ecu: goto label_11e7ec;
        case 0x11e7f0u: goto label_11e7f0;
        case 0x11e7f4u: goto label_11e7f4;
        case 0x11e7f8u: goto label_11e7f8;
        case 0x11e7fcu: goto label_11e7fc;
        case 0x11e800u: goto label_11e800;
        case 0x11e804u: goto label_11e804;
        case 0x11e808u: goto label_11e808;
        case 0x11e80cu: goto label_11e80c;
        case 0x11e810u: goto label_11e810;
        case 0x11e814u: goto label_11e814;
        case 0x11e818u: goto label_11e818;
        case 0x11e81cu: goto label_11e81c;
        case 0x11e820u: goto label_11e820;
        case 0x11e824u: goto label_11e824;
        case 0x11e828u: goto label_11e828;
        case 0x11e82cu: goto label_11e82c;
        case 0x11e830u: goto label_11e830;
        case 0x11e834u: goto label_11e834;
        case 0x11e838u: goto label_11e838;
        case 0x11e83cu: goto label_11e83c;
        case 0x11e840u: goto label_11e840;
        case 0x11e844u: goto label_11e844;
        case 0x11e848u: goto label_11e848;
        case 0x11e84cu: goto label_11e84c;
        case 0x11e850u: goto label_11e850;
        case 0x11e854u: goto label_11e854;
        case 0x11e858u: goto label_11e858;
        case 0x11e85cu: goto label_11e85c;
        case 0x11e860u: goto label_11e860;
        case 0x11e864u: goto label_11e864;
        case 0x11e868u: goto label_11e868;
        case 0x11e86cu: goto label_11e86c;
        case 0x11e870u: goto label_11e870;
        case 0x11e874u: goto label_11e874;
        default: break;
    }

    ctx->pc = 0x11e440u;

label_11e440:
    // 0x11e440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_11e444:
    // 0x11e444: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_11e448:
    // 0x11e448: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_11e44c:
    // 0x11e44c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e450:
    // 0x11e450: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11e450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_11e454:
    // 0x11e454: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_11e458:
    if (ctx->pc == 0x11E458u) {
        ctx->pc = 0x11E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E454u;
        // 0x11e458: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E45Cu;
        goto label_11e45c;
    }
    ctx->pc = 0x11E454u;
    {
        const bool branch_taken_0x11e454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E454u;
        // 0x11e458: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e454) {
            ctx->pc = 0x11E48Cu;
            goto label_11e48c;
        }
    }
    ctx->pc = 0x11E45Cu;
label_11e45c:
    // 0x11e45c: 0xc047e72  jal         func_11F9C8
label_11e460:
    if (ctx->pc == 0x11E460u) {
        ctx->pc = 0x11E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E45Cu;
        // 0x11e460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E464u;
        goto label_11e464;
    }
    ctx->pc = 0x11E45Cu;
    SET_GPR_U32(ctx, 31, 0x11E464u);
    ctx->pc = 0x11E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E45Cu;
    // 0x11e460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11E45Cu, 0x11E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E464u;
label_11e464:
    // 0x11e464: 0x122200fd  beq         $s1, $v0, . + 4 + (0xFD << 2)
label_11e468:
    if (ctx->pc == 0x11E468u) {
        ctx->pc = 0x11E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E464u;
        // 0x11e468: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E46Cu;
        goto label_11e46c;
    }
    ctx->pc = 0x11E464u;
    {
        const bool branch_taken_0x11e464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E464u;
        // 0x11e468: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e464) {
            ctx->pc = 0x11E85Cu;
            goto label_11e85c;
        }
    }
    ctx->pc = 0x11E46Cu;
label_11e46c:
    // 0x11e46c: 0x8c62b19c  lw          $v0, -0x4E64($v1)
    ctx->pc = 0x11e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947228)));
label_11e470:
    // 0x11e470: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11e470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_11e474:
    // 0x11e474: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_11e478:
    if (ctx->pc == 0x11E478u) {
        ctx->pc = 0x11E47Cu;
        goto label_11e47c;
    }
    ctx->pc = 0x11E474u;
    {
        const bool branch_taken_0x11e474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e474) {
            ctx->pc = 0x11E48Cu;
            goto label_11e48c;
        }
    }
    ctx->pc = 0x11E47Cu;
label_11e47c:
    // 0x11e47c: 0xc047e72  jal         func_11F9C8
label_11e480:
    if (ctx->pc == 0x11E480u) {
        ctx->pc = 0x11E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E47Cu;
        // 0x11e480: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E484u;
        goto label_11e484;
    }
    ctx->pc = 0x11E47Cu;
    SET_GPR_U32(ctx, 31, 0x11E484u);
    ctx->pc = 0x11E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E47Cu;
    // 0x11e480: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11E47Cu, 0x11E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E484u;
label_11e484:
    // 0x11e484: 0x122200f6  beq         $s1, $v0, . + 4 + (0xF6 << 2)
label_11e488:
    if (ctx->pc == 0x11E488u) {
        ctx->pc = 0x11E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E484u;
        // 0x11e488: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E48Cu;
        goto label_11e48c;
    }
    ctx->pc = 0x11E484u;
    {
        const bool branch_taken_0x11e484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E484u;
        // 0x11e488: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e484) {
            ctx->pc = 0x11E860u;
            goto label_11e860;
        }
    }
    ctx->pc = 0x11E48Cu;
label_11e48c:
    // 0x11e48c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_11e490:
    if (ctx->pc == 0x11E490u) {
        ctx->pc = 0x11E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E48Cu;
        // 0x11e490: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E494u;
        goto label_11e494;
    }
    ctx->pc = 0x11E48Cu;
    {
        const bool branch_taken_0x11e48c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E48Cu;
        // 0x11e490: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e48c) {
            ctx->pc = 0x11E4ACu;
            goto label_11e4ac;
        }
    }
    ctx->pc = 0x11E494u;
label_11e494:
    // 0x11e494: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e498:
    // 0x11e498: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e49c:
    // 0x11e49c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e4a0:
    // 0x11e4a0: 0x40f809  jalr        $v0
label_11e4a4:
    if (ctx->pc == 0x11E4A4u) {
        ctx->pc = 0x11E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4A0u;
        // 0x11e4a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E4A8u;
        goto label_11e4a8;
    }
    ctx->pc = 0x11E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E4A8u);
        ctx->pc = 0x11E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4A0u;
        // 0x11e4a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E4A0u, 0x11E4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E4A8u;
label_11e4a8:
    // 0x11e4a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e4ac:
    // 0x11e4ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e4b0:
    // 0x11e4b0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11e4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11e4b4:
    // 0x11e4b4: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11e4b8:
    // 0x11e4b8: 0x40f809  jalr        $v0
label_11e4bc:
    if (ctx->pc == 0x11E4BCu) {
        ctx->pc = 0x11E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4B8u;
        // 0x11e4bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E4C0u;
        goto label_11e4c0;
    }
    ctx->pc = 0x11E4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E4C0u);
        ctx->pc = 0x11E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4B8u;
        // 0x11e4bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E4B8u, 0x11E4C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E4C0u;
label_11e4c0:
    // 0x11e4c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e4c4:
    // 0x11e4c4: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x11e4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_11e4c8:
    // 0x11e4c8: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x11e4c8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_11e4cc:
    // 0x11e4cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e4d0:
    // 0x11e4d0: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11e4d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11e4d4:
    // 0x11e4d4: 0x8c620294  lw          $v0, 0x294($v1)
    ctx->pc = 0x11e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11e4d8:
    // 0x11e4d8: 0x40f809  jalr        $v0
label_11e4dc:
    if (ctx->pc == 0x11E4DCu) {
        ctx->pc = 0x11E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D8u;
        // 0x11e4dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E4E0u;
        goto label_11e4e0;
    }
    ctx->pc = 0x11E4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E4E0u);
        ctx->pc = 0x11E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4D8u;
        // 0x11e4dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E4D8u, 0x11E4E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E4E0u;
label_11e4e0:
    // 0x11e4e0: 0xc047e72  jal         func_11F9C8
label_11e4e4:
    if (ctx->pc == 0x11E4E4u) {
        ctx->pc = 0x11E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4E0u;
        // 0x11e4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E4E8u;
        goto label_11e4e8;
    }
    ctx->pc = 0x11E4E0u;
    SET_GPR_U32(ctx, 31, 0x11E4E8u);
    ctx->pc = 0x11E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4E0u;
    // 0x11e4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11E4E0u, 0x11E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4E8u;
label_11e4e8:
    // 0x11e4e8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_11e4ec:
    if (ctx->pc == 0x11E4ECu) {
        ctx->pc = 0x11E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4E8u;
        // 0x11e4ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E4F0u;
        goto label_11e4f0;
    }
    ctx->pc = 0x11E4E8u;
    {
        const bool branch_taken_0x11e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e4e8) {
            ctx->pc = 0x11E4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E4E8u;
            // 0x11e4ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E55Cu;
            goto label_11e55c;
        }
    }
    ctx->pc = 0x11E4F0u;
label_11e4f0:
    // 0x11e4f0: 0xc047e72  jal         func_11F9C8
label_11e4f4:
    if (ctx->pc == 0x11E4F4u) {
        ctx->pc = 0x11E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4F0u;
        // 0x11e4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E4F8u;
        goto label_11e4f8;
    }
    ctx->pc = 0x11E4F0u;
    SET_GPR_U32(ctx, 31, 0x11E4F8u);
    ctx->pc = 0x11E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E4F0u;
    // 0x11e4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11E4F0u, 0x11E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4F8u;
label_11e4f8:
    // 0x11e4f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11e4fc:
    // 0x11e4fc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11e4fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11e500:
    // 0x11e500: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11e504:
    // 0x11e504: 0xa0f809  jalr        $a1
label_11e508:
    if (ctx->pc == 0x11E508u) {
        ctx->pc = 0x11E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E504u;
        // 0x11e508: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E50Cu;
        goto label_11e50c;
    }
    ctx->pc = 0x11E504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11E50Cu);
        ctx->pc = 0x11E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E504u;
        // 0x11e508: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E504u, 0x11E50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E50Cu;
label_11e50c:
    // 0x11e50c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11e510:
    // 0x11e510: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_11e514:
    if (ctx->pc == 0x11E514u) {
        ctx->pc = 0x11E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E510u;
        // 0x11e514: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E518u;
        goto label_11e518;
    }
    ctx->pc = 0x11E510u;
    {
        const bool branch_taken_0x11e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e510) {
            ctx->pc = 0x11E514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E510u;
            // 0x11e514: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E55Cu;
            goto label_11e55c;
        }
    }
    ctx->pc = 0x11E518u;
label_11e518:
    // 0x11e518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e51c:
    // 0x11e51c: 0xc047eb2  jal         func_11FAC8
label_11e520:
    if (ctx->pc == 0x11E520u) {
        ctx->pc = 0x11E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E51Cu;
        // 0x11e520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E524u;
        goto label_11e524;
    }
    ctx->pc = 0x11E51Cu;
    SET_GPR_U32(ctx, 31, 0x11E524u);
    ctx->pc = 0x11E520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E51Cu;
    // 0x11e520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC8u, 0x11E51Cu, 0x11E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E524u;
label_11e524:
    // 0x11e524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e528:
    // 0x11e528: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x11e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_11e52c:
    // 0x11e52c: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
label_11e530:
    if (ctx->pc == 0x11E530u) {
        ctx->pc = 0x11E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E52Cu;
        // 0x11e530: 0x8e020214  lw          $v0, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E534u;
        goto label_11e534;
    }
    ctx->pc = 0x11E52Cu;
    {
        const bool branch_taken_0x11e52c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e52c) {
            ctx->pc = 0x11E530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E52Cu;
            // 0x11e530: 0x8e020214  lw          $v0, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E53Cu;
            goto label_11e53c;
        }
    }
    ctx->pc = 0x11E534u;
label_11e534:
    // 0x11e534: 0x10000008  b           . + 4 + (0x8 << 2)
label_11e538:
    if (ctx->pc == 0x11E538u) {
        ctx->pc = 0x11E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E534u;
        // 0x11e538: 0xae000210  sw          $zero, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E53Cu;
        goto label_11e53c;
    }
    ctx->pc = 0x11E534u;
    {
        const bool branch_taken_0x11e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E534u;
        // 0x11e538: 0xae000210  sw          $zero, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e534) {
            ctx->pc = 0x11E558u;
            goto label_11e558;
        }
    }
    ctx->pc = 0x11E53Cu;
label_11e53c:
    // 0x11e53c: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
label_11e540:
    if (ctx->pc == 0x11E540u) {
        ctx->pc = 0x11E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E53Cu;
        // 0x11e540: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E544u;
        goto label_11e544;
    }
    ctx->pc = 0x11E53Cu;
    {
        const bool branch_taken_0x11e53c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e53c) {
            ctx->pc = 0x11E540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E53Cu;
            // 0x11e540: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E55Cu;
            goto label_11e55c;
        }
    }
    ctx->pc = 0x11E544u;
label_11e544:
    // 0x11e544: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
label_11e548:
    if (ctx->pc == 0x11E548u) {
        ctx->pc = 0x11E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E544u;
        // 0x11e548: 0xae000214  sw          $zero, 0x214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E54Cu;
        goto label_11e54c;
    }
    ctx->pc = 0x11E544u;
    {
        const bool branch_taken_0x11e544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e544) {
            ctx->pc = 0x11E548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E544u;
            // 0x11e548: 0xae000214  sw          $zero, 0x214($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E558u;
            goto label_11e558;
        }
    }
    ctx->pc = 0x11E54Cu;
label_11e54c:
    // 0x11e54c: 0xc048130  jal         func_1204C0
label_11e550:
    if (ctx->pc == 0x11E550u) {
        ctx->pc = 0x11E554u;
        goto label_11e554;
    }
    ctx->pc = 0x11E54Cu;
    SET_GPR_U32(ctx, 31, 0x11E554u);
    ctx->pc = 0x1204C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204C0u, 0x11E54Cu, 0x11E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E554u;
label_11e554:
    // 0x11e554: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x11e554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
label_11e558:
    // 0x11e558: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e55c:
    // 0x11e55c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11e55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11e560:
    // 0x11e560: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11e564:
    // 0x11e564: 0x40f809  jalr        $v0
label_11e568:
    if (ctx->pc == 0x11E568u) {
        ctx->pc = 0x11E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E564u;
        // 0x11e568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E56Cu;
        goto label_11e56c;
    }
    ctx->pc = 0x11E564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E56Cu);
        ctx->pc = 0x11E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E564u;
        // 0x11e568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E564u, 0x11E56Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E56Cu;
label_11e56c:
    // 0x11e56c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11e56cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e570:
    // 0x11e570: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x11e570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_11e574:
    // 0x11e574: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_11e578:
    if (ctx->pc == 0x11E578u) {
        ctx->pc = 0x11E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E574u;
        // 0x11e578: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E57Cu;
        goto label_11e57c;
    }
    ctx->pc = 0x11E574u;
    {
        const bool branch_taken_0x11e574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E574u;
        // 0x11e578: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e574) {
            ctx->pc = 0x11E7ECu;
            goto label_11e7ec;
        }
    }
    ctx->pc = 0x11E57Cu;
label_11e57c:
    // 0x11e57c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11e580:
    // 0x11e580: 0x24428600  addiu       $v0, $v0, -0x7A00
    ctx->pc = 0x11e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936064));
label_11e584:
    // 0x11e584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11e588:
    // 0x11e588: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11e588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11e58c:
    // 0x11e58c: 0x800008  jr          $a0
label_11e590:
    if (ctx->pc == 0x11E590u) {
        ctx->pc = 0x11E594u;
        goto label_11e594;
    }
    ctx->pc = 0x11E58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E594u: goto label_11e594;
            case 0x11E5B8u: goto label_11e5b8;
            case 0x11E67Cu: goto label_11e67c;
            case 0x11E6A0u: goto label_11e6a0;
            case 0x11E6C4u: goto label_11e6c4;
            case 0x11E788u: goto label_11e788;
            case 0x11E7ACu: goto label_11e7ac;
            case 0x11E7D8u: goto label_11e7d8;
            case 0x11E7E4u: goto label_11e7e4;
            case 0x11E7ECu: goto label_11e7ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E58Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11E594u;
label_11e594:
    // 0x11e594: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e598:
    // 0x11e598: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e59c:
    // 0x11e59c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e5a0:
    // 0x11e5a0: 0x40f809  jalr        $v0
label_11e5a4:
    if (ctx->pc == 0x11E5A4u) {
        ctx->pc = 0x11E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5A0u;
        // 0x11e5a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E5A8u;
        goto label_11e5a8;
    }
    ctx->pc = 0x11E5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E5A8u);
        ctx->pc = 0x11E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5A0u;
        // 0x11e5a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E5A0u, 0x11E5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E5A8u;
label_11e5a8:
    // 0x11e5a8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e5ac:
    // 0x11e5ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11e5b0:
    // 0x11e5b0: 0x10000086  b           . + 4 + (0x86 << 2)
label_11e5b4:
    if (ctx->pc == 0x11E5B4u) {
        ctx->pc = 0x11E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5B0u;
        // 0x11e5b4: 0x24639180  addiu       $v1, $v1, -0x6E80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E5B8u;
        goto label_11e5b8;
    }
    ctx->pc = 0x11E5B0u;
    {
        const bool branch_taken_0x11e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5B0u;
        // 0x11e5b4: 0x24639180  addiu       $v1, $v1, -0x6E80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e5b0) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E5B8u;
label_11e5b8:
    // 0x11e5b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11e5bc:
    // 0x11e5bc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11e5c0:
    // 0x11e5c0: 0x8c65b198  lw          $a1, -0x4E68($v1)
    ctx->pc = 0x11e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_11e5c4:
    // 0x11e5c4: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x11e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_11e5c8:
    // 0x11e5c8: 0x50a20024  beql        $a1, $v0, . + 4 + (0x24 << 2)
label_11e5cc:
    if (ctx->pc == 0x11E5CCu) {
        ctx->pc = 0x11E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5C8u;
        // 0x11e5cc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E5D0u;
        goto label_11e5d0;
    }
    ctx->pc = 0x11E5C8u;
    {
        const bool branch_taken_0x11e5c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e5c8) {
            ctx->pc = 0x11E5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5C8u;
            // 0x11e5cc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E5D0u;
label_11e5d0:
    // 0x11e5d0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e5d4:
    // 0x11e5d4: 0x8c629150  lw          $v0, -0x6EB0($v1)
    ctx->pc = 0x11e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938960)));
label_11e5d8:
    // 0x11e5d8: 0x54510020  bnel        $v0, $s1, . + 4 + (0x20 << 2)
label_11e5dc:
    if (ctx->pc == 0x11E5DCu) {
        ctx->pc = 0x11E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5D8u;
        // 0x11e5dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E5E0u;
        goto label_11e5e0;
    }
    ctx->pc = 0x11E5D8u;
    {
        const bool branch_taken_0x11e5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x11e5d8) {
            ctx->pc = 0x11E5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5D8u;
            // 0x11e5dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E5E0u;
label_11e5e0:
    // 0x11e5e0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11e5e4:
    // 0x11e5e4: 0x8c459148  lw          $a1, -0x6EB8($v0)
    ctx->pc = 0x11e5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938952)));
label_11e5e8:
    // 0x11e5e8: 0x50b1001c  beql        $a1, $s1, . + 4 + (0x1C << 2)
label_11e5ec:
    if (ctx->pc == 0x11E5ECu) {
        ctx->pc = 0x11E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E5E8u;
        // 0x11e5ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E5F0u;
        goto label_11e5f0;
    }
    ctx->pc = 0x11E5E8u;
    {
        const bool branch_taken_0x11e5e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x11e5e8) {
            ctx->pc = 0x11E5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E5E8u;
            // 0x11e5ec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E5F0u;
label_11e5f0:
    // 0x11e5f0: 0xac659150  sw          $a1, -0x6EB0($v1)
    ctx->pc = 0x11e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938960), GPR_U32(ctx, 5));
label_11e5f4:
    // 0x11e5f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11e5f8:
    // 0x11e5f8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11e5f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11e5fc:
    // 0x11e5fc: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11e600:
    // 0x11e600: 0x40f809  jalr        $v0
label_11e604:
    if (ctx->pc == 0x11E604u) {
        ctx->pc = 0x11E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E600u;
        // 0x11e604: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E608u;
        goto label_11e608;
    }
    ctx->pc = 0x11E600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E608u);
        ctx->pc = 0x11E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E600u;
        // 0x11e604: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E600u, 0x11E608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E608u;
label_11e608:
    // 0x11e608: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11e608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11e60c:
    // 0x11e60c: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_11e610:
    if (ctx->pc == 0x11E610u) {
        ctx->pc = 0x11E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E60Cu;
        // 0x11e610: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E614u;
        goto label_11e614;
    }
    ctx->pc = 0x11E60Cu;
    {
        const bool branch_taken_0x11e60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e60c) {
            ctx->pc = 0x11E610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E60Cu;
            // 0x11e610: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E614u;
label_11e614:
    // 0x11e614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e618:
    // 0x11e618: 0xc047eec  jal         func_11FBB0
label_11e61c:
    if (ctx->pc == 0x11E61Cu) {
        ctx->pc = 0x11E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E618u;
        // 0x11e61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E620u;
        goto label_11e620;
    }
    ctx->pc = 0x11E618u;
    SET_GPR_U32(ctx, 31, 0x11E620u);
    ctx->pc = 0x11E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E618u;
    // 0x11e61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11E618u, 0x11E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E620u;
label_11e620:
    // 0x11e620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11e624:
    // 0x11e624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e628:
    // 0x11e628: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11e628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11e62c:
    // 0x11e62c: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11e62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11e630:
    // 0x11e630: 0xc0f809  jalr        $a2
label_11e634:
    if (ctx->pc == 0x11E634u) {
        ctx->pc = 0x11E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E630u;
        // 0x11e634: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E638u;
        goto label_11e638;
    }
    ctx->pc = 0x11E630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11E638u);
        ctx->pc = 0x11E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E630u;
        // 0x11e634: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E630u, 0x11E638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E638u;
label_11e638:
    // 0x11e638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e63c:
    // 0x11e63c: 0xc047eec  jal         func_11FBB0
label_11e640:
    if (ctx->pc == 0x11E640u) {
        ctx->pc = 0x11E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E63Cu;
        // 0x11e640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E644u;
        goto label_11e644;
    }
    ctx->pc = 0x11E63Cu;
    SET_GPR_U32(ctx, 31, 0x11E644u);
    ctx->pc = 0x11E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E63Cu;
    // 0x11e640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11E63Cu, 0x11E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E644u;
label_11e644:
    // 0x11e644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11e648:
    // 0x11e648: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x11e648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_11e64c:
    // 0x11e64c: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x11e64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_11e650:
    // 0x11e650: 0xa0f809  jalr        $a1
label_11e654:
    if (ctx->pc == 0x11E654u) {
        ctx->pc = 0x11E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E650u;
        // 0x11e654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E658u;
        goto label_11e658;
    }
    ctx->pc = 0x11E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11E658u);
        ctx->pc = 0x11E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E650u;
        // 0x11e654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E650u, 0x11E658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E658u;
label_11e658:
    // 0x11e658: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e65c:
    // 0x11e65c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e660:
    // 0x11e660: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e664:
    // 0x11e664: 0x40f809  jalr        $v0
label_11e668:
    if (ctx->pc == 0x11E668u) {
        ctx->pc = 0x11E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E664u;
        // 0x11e668: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E66Cu;
        goto label_11e66c;
    }
    ctx->pc = 0x11E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E66Cu);
        ctx->pc = 0x11E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E664u;
        // 0x11e668: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E664u, 0x11E66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E66Cu;
label_11e66c:
    // 0x11e66c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e670:
    // 0x11e670: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11e674:
    // 0x11e674: 0x10000055  b           . + 4 + (0x55 << 2)
label_11e678:
    if (ctx->pc == 0x11E678u) {
        ctx->pc = 0x11E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E674u;
        // 0x11e678: 0x24639160  addiu       $v1, $v1, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E67Cu;
        goto label_11e67c;
    }
    ctx->pc = 0x11E674u;
    {
        const bool branch_taken_0x11e674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E674u;
        // 0x11e678: 0x24639160  addiu       $v1, $v1, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e674) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E67Cu;
label_11e67c:
    // 0x11e67c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e680:
    // 0x11e680: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e684:
    // 0x11e684: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e688:
    // 0x11e688: 0x40f809  jalr        $v0
label_11e68c:
    if (ctx->pc == 0x11E68Cu) {
        ctx->pc = 0x11E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E688u;
        // 0x11e68c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E690u;
        goto label_11e690;
    }
    ctx->pc = 0x11E688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E690u);
        ctx->pc = 0x11E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E688u;
        // 0x11e68c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E688u, 0x11E690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E690u;
label_11e690:
    // 0x11e690: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e694:
    // 0x11e694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11e698:
    // 0x11e698: 0x1000004c  b           . + 4 + (0x4C << 2)
label_11e69c:
    if (ctx->pc == 0x11E69Cu) {
        ctx->pc = 0x11E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E698u;
        // 0x11e69c: 0x24639170  addiu       $v1, $v1, -0x6E90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E6A0u;
        goto label_11e6a0;
    }
    ctx->pc = 0x11E698u;
    {
        const bool branch_taken_0x11e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E698u;
        // 0x11e69c: 0x24639170  addiu       $v1, $v1, -0x6E90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e698) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E6A0u;
label_11e6a0:
    // 0x11e6a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e6a4:
    // 0x11e6a4: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e6a8:
    // 0x11e6a8: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e6ac:
    // 0x11e6ac: 0x40f809  jalr        $v0
label_11e6b0:
    if (ctx->pc == 0x11E6B0u) {
        ctx->pc = 0x11E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6ACu;
        // 0x11e6b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E6B4u;
        goto label_11e6b4;
    }
    ctx->pc = 0x11E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E6B4u);
        ctx->pc = 0x11E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6ACu;
        // 0x11e6b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E6ACu, 0x11E6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E6B4u;
label_11e6b4:
    // 0x11e6b4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e6b8:
    // 0x11e6b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11e6bc:
    // 0x11e6bc: 0x10000043  b           . + 4 + (0x43 << 2)
label_11e6c0:
    if (ctx->pc == 0x11E6C0u) {
        ctx->pc = 0x11E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6BCu;
        // 0x11e6c0: 0x24639178  addiu       $v1, $v1, -0x6E88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E6C4u;
        goto label_11e6c4;
    }
    ctx->pc = 0x11E6BCu;
    {
        const bool branch_taken_0x11e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6BCu;
        // 0x11e6c0: 0x24639178  addiu       $v1, $v1, -0x6E88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6bc) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E6C4u;
label_11e6c4:
    // 0x11e6c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_11e6c8:
    // 0x11e6c8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11e6cc:
    // 0x11e6cc: 0x8c65b198  lw          $a1, -0x4E68($v1)
    ctx->pc = 0x11e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_11e6d0:
    // 0x11e6d0: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x11e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_11e6d4:
    // 0x11e6d4: 0x50a20024  beql        $a1, $v0, . + 4 + (0x24 << 2)
label_11e6d8:
    if (ctx->pc == 0x11E6D8u) {
        ctx->pc = 0x11E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6D4u;
        // 0x11e6d8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E6DCu;
        goto label_11e6dc;
    }
    ctx->pc = 0x11E6D4u;
    {
        const bool branch_taken_0x11e6d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11e6d4) {
            ctx->pc = 0x11E6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E6D4u;
            // 0x11e6d8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E768u;
            goto label_11e768;
        }
    }
    ctx->pc = 0x11E6DCu;
label_11e6dc:
    // 0x11e6dc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e6e0:
    // 0x11e6e0: 0x8c629150  lw          $v0, -0x6EB0($v1)
    ctx->pc = 0x11e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938960)));
label_11e6e4:
    // 0x11e6e4: 0x54510020  bnel        $v0, $s1, . + 4 + (0x20 << 2)
label_11e6e8:
    if (ctx->pc == 0x11E6E8u) {
        ctx->pc = 0x11E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6E4u;
        // 0x11e6e8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E6ECu;
        goto label_11e6ec;
    }
    ctx->pc = 0x11E6E4u;
    {
        const bool branch_taken_0x11e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x11e6e4) {
            ctx->pc = 0x11E6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E6E4u;
            // 0x11e6e8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E768u;
            goto label_11e768;
        }
    }
    ctx->pc = 0x11E6ECu;
label_11e6ec:
    // 0x11e6ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11e6f0:
    // 0x11e6f0: 0x8c459148  lw          $a1, -0x6EB8($v0)
    ctx->pc = 0x11e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938952)));
label_11e6f4:
    // 0x11e6f4: 0x50b1001c  beql        $a1, $s1, . + 4 + (0x1C << 2)
label_11e6f8:
    if (ctx->pc == 0x11E6F8u) {
        ctx->pc = 0x11E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6F4u;
        // 0x11e6f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E6FCu;
        goto label_11e6fc;
    }
    ctx->pc = 0x11E6F4u;
    {
        const bool branch_taken_0x11e6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x11e6f4) {
            ctx->pc = 0x11E6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E6F4u;
            // 0x11e6f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E768u;
            goto label_11e768;
        }
    }
    ctx->pc = 0x11E6FCu;
label_11e6fc:
    // 0x11e6fc: 0xac659150  sw          $a1, -0x6EB0($v1)
    ctx->pc = 0x11e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938960), GPR_U32(ctx, 5));
label_11e700:
    // 0x11e700: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11e704:
    // 0x11e704: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11e704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11e708:
    // 0x11e708: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11e70c:
    // 0x11e70c: 0x40f809  jalr        $v0
label_11e710:
    if (ctx->pc == 0x11E710u) {
        ctx->pc = 0x11E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E70Cu;
        // 0x11e710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E714u;
        goto label_11e714;
    }
    ctx->pc = 0x11E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E714u);
        ctx->pc = 0x11E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E70Cu;
        // 0x11e710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E70Cu, 0x11E714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E714u;
label_11e714:
    // 0x11e714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11e718:
    // 0x11e718: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_11e71c:
    if (ctx->pc == 0x11E71Cu) {
        ctx->pc = 0x11E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E718u;
        // 0x11e71c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E720u;
        goto label_11e720;
    }
    ctx->pc = 0x11E718u;
    {
        const bool branch_taken_0x11e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e718) {
            ctx->pc = 0x11E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E718u;
            // 0x11e71c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E768u;
            goto label_11e768;
        }
    }
    ctx->pc = 0x11E720u;
label_11e720:
    // 0x11e720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e724:
    // 0x11e724: 0xc047e78  jal         func_11F9E0
label_11e728:
    if (ctx->pc == 0x11E728u) {
        ctx->pc = 0x11E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E724u;
        // 0x11e728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E72Cu;
        goto label_11e72c;
    }
    ctx->pc = 0x11E724u;
    SET_GPR_U32(ctx, 31, 0x11E72Cu);
    ctx->pc = 0x11E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E724u;
    // 0x11e728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11E724u, 0x11E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E72Cu;
label_11e72c:
    // 0x11e72c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11e730:
    // 0x11e730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e734:
    // 0x11e734: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x11e734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_11e738:
    // 0x11e738: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x11e738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_11e73c:
    // 0x11e73c: 0xc0f809  jalr        $a2
label_11e740:
    if (ctx->pc == 0x11E740u) {
        ctx->pc = 0x11E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E73Cu;
        // 0x11e740: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E744u;
        goto label_11e744;
    }
    ctx->pc = 0x11E73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11E744u);
        ctx->pc = 0x11E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E73Cu;
        // 0x11e740: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E73Cu, 0x11E744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E744u;
label_11e744:
    // 0x11e744: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e748:
    // 0x11e748: 0xc047e78  jal         func_11F9E0
label_11e74c:
    if (ctx->pc == 0x11E74Cu) {
        ctx->pc = 0x11E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E748u;
        // 0x11e74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E750u;
        goto label_11e750;
    }
    ctx->pc = 0x11E748u;
    SET_GPR_U32(ctx, 31, 0x11E750u);
    ctx->pc = 0x11E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E748u;
    // 0x11e74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11E748u, 0x11E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E750u;
label_11e750:
    // 0x11e750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11e754:
    // 0x11e754: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x11e754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_11e758:
    // 0x11e758: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x11e758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_11e75c:
    // 0x11e75c: 0xa0f809  jalr        $a1
label_11e760:
    if (ctx->pc == 0x11E760u) {
        ctx->pc = 0x11E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E75Cu;
        // 0x11e760: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E764u;
        goto label_11e764;
    }
    ctx->pc = 0x11E75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11E764u);
        ctx->pc = 0x11E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E75Cu;
        // 0x11e760: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E75Cu, 0x11E764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E764u;
label_11e764:
    // 0x11e764: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e768:
    // 0x11e768: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e768u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e76c:
    // 0x11e76c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e770:
    // 0x11e770: 0x40f809  jalr        $v0
label_11e774:
    if (ctx->pc == 0x11E774u) {
        ctx->pc = 0x11E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E770u;
        // 0x11e774: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E778u;
        goto label_11e778;
    }
    ctx->pc = 0x11E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E778u);
        ctx->pc = 0x11E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E770u;
        // 0x11e774: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E770u, 0x11E778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E778u;
label_11e778:
    // 0x11e778: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e77c:
    // 0x11e77c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11e780:
    // 0x11e780: 0x10000012  b           . + 4 + (0x12 << 2)
label_11e784:
    if (ctx->pc == 0x11E784u) {
        ctx->pc = 0x11E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E780u;
        // 0x11e784: 0x24639158  addiu       $v1, $v1, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E788u;
        goto label_11e788;
    }
    ctx->pc = 0x11E780u;
    {
        const bool branch_taken_0x11e780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E780u;
        // 0x11e784: 0x24639158  addiu       $v1, $v1, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e780) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E788u;
label_11e788:
    // 0x11e788: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e78c:
    // 0x11e78c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e78cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e790:
    // 0x11e790: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e794:
    // 0x11e794: 0x40f809  jalr        $v0
label_11e798:
    if (ctx->pc == 0x11E798u) {
        ctx->pc = 0x11E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E794u;
        // 0x11e798: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E79Cu;
        goto label_11e79c;
    }
    ctx->pc = 0x11E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E79Cu);
        ctx->pc = 0x11E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E794u;
        // 0x11e798: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E794u, 0x11E79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E79Cu;
label_11e79c:
    // 0x11e79c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e7a0:
    // 0x11e7a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11e7a4:
    // 0x11e7a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_11e7a8:
    if (ctx->pc == 0x11E7A8u) {
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7A4u;
        // 0x11e7a8: 0x24639168  addiu       $v1, $v1, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7ACu;
        goto label_11e7ac;
    }
    ctx->pc = 0x11E7A4u;
    {
        const bool branch_taken_0x11e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7A4u;
        // 0x11e7a8: 0x24639168  addiu       $v1, $v1, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7a4) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E7ACu;
label_11e7ac:
    // 0x11e7ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11e7b0:
    // 0x11e7b0: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11e7b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11e7b4:
    // 0x11e7b4: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11e7b8:
    // 0x11e7b8: 0x40f809  jalr        $v0
label_11e7bc:
    if (ctx->pc == 0x11E7BCu) {
        ctx->pc = 0x11E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7B8u;
        // 0x11e7bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7C0u;
        goto label_11e7c0;
    }
    ctx->pc = 0x11E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11E7C0u);
        ctx->pc = 0x11E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7B8u;
        // 0x11e7bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E7B8u, 0x11E7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E7C0u;
label_11e7c0:
    // 0x11e7c0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x11e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_11e7c4:
    // 0x11e7c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11e7c8:
    // 0x11e7c8: 0x24639188  addiu       $v1, $v1, -0x6E78
    ctx->pc = 0x11e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939016));
label_11e7cc:
    // 0x11e7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11e7d0:
    // 0x11e7d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_11e7d4:
    if (ctx->pc == 0x11E7D4u) {
        ctx->pc = 0x11E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7D0u;
        // 0x11e7d4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7D8u;
        goto label_11e7d8;
    }
    ctx->pc = 0x11E7D0u;
    {
        const bool branch_taken_0x11e7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7D0u;
        // 0x11e7d4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7d0) {
            ctx->pc = 0x11E7ECu;
            goto label_11e7ec;
        }
    }
    ctx->pc = 0x11E7D8u;
label_11e7d8:
    // 0x11e7d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11e7dc:
    // 0x11e7dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_11e7e0:
    if (ctx->pc == 0x11E7E0u) {
        ctx->pc = 0x11E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7DCu;
        // 0x11e7e0: 0xac40b170  sw          $zero, -0x4E90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7E4u;
        goto label_11e7e4;
    }
    ctx->pc = 0x11E7DCu;
    {
        const bool branch_taken_0x11e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7DCu;
        // 0x11e7e0: 0xac40b170  sw          $zero, -0x4E90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7dc) {
            ctx->pc = 0x11E7ECu;
            goto label_11e7ec;
        }
    }
    ctx->pc = 0x11E7E4u;
label_11e7e4:
    // 0x11e7e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11e7e8:
    // 0x11e7e8: 0xac40b174  sw          $zero, -0x4E8C($v0)
    ctx->pc = 0x11e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947188), GPR_U32(ctx, 0));
label_11e7ec:
    // 0x11e7ec: 0xc047e72  jal         func_11F9C8
label_11e7f0:
    if (ctx->pc == 0x11E7F0u) {
        ctx->pc = 0x11E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7ECu;
        // 0x11e7f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7F4u;
        goto label_11e7f4;
    }
    ctx->pc = 0x11E7ECu;
    SET_GPR_U32(ctx, 31, 0x11E7F4u);
    ctx->pc = 0x11E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E7ECu;
    // 0x11e7f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11E7ECu, 0x11E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7F4u;
label_11e7f4:
    // 0x11e7f4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_11e7f8:
    if (ctx->pc == 0x11E7F8u) {
        ctx->pc = 0x11E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7F4u;
        // 0x11e7f8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E7FCu;
        goto label_11e7fc;
    }
    ctx->pc = 0x11E7F4u;
    {
        const bool branch_taken_0x11e7f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7F4u;
        // 0x11e7f8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7f4) {
            ctx->pc = 0x11E804u;
            goto label_11e804;
        }
    }
    ctx->pc = 0x11E7FCu;
label_11e7fc:
    // 0x11e7fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_11e800:
    if (ctx->pc == 0x11E800u) {
        ctx->pc = 0x11E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7FCu;
        // 0x11e800: 0xac409148  sw          $zero, -0x6EB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E804u;
        goto label_11e804;
    }
    ctx->pc = 0x11E7FCu;
    {
        const bool branch_taken_0x11e7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7FCu;
        // 0x11e800: 0xac409148  sw          $zero, -0x6EB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7fc) {
            ctx->pc = 0x11E818u;
            goto label_11e818;
        }
    }
    ctx->pc = 0x11E804u;
label_11e804:
    // 0x11e804: 0xc047e72  jal         func_11F9C8
label_11e808:
    if (ctx->pc == 0x11E808u) {
        ctx->pc = 0x11E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E804u;
        // 0x11e808: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E80Cu;
        goto label_11e80c;
    }
    ctx->pc = 0x11E804u;
    SET_GPR_U32(ctx, 31, 0x11E80Cu);
    ctx->pc = 0x11E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E804u;
    // 0x11e808: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x11E804u, 0x11E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E80Cu;
label_11e80c:
    // 0x11e80c: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_11e810:
    if (ctx->pc == 0x11E810u) {
        ctx->pc = 0x11E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E80Cu;
        // 0x11e810: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E814u;
        goto label_11e814;
    }
    ctx->pc = 0x11E80Cu;
    {
        const bool branch_taken_0x11e80c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E80Cu;
        // 0x11e810: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e80c) {
            ctx->pc = 0x11E818u;
            goto label_11e818;
        }
    }
    ctx->pc = 0x11E814u;
label_11e814:
    // 0x11e814: 0xac40914c  sw          $zero, -0x6EB4($v0)
    ctx->pc = 0x11e814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938956), GPR_U32(ctx, 0));
label_11e818:
    // 0x11e818: 0xc047e6c  jal         func_11F9B0
label_11e81c:
    if (ctx->pc == 0x11E81Cu) {
        ctx->pc = 0x11E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E818u;
        // 0x11e81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E820u;
        goto label_11e820;
    }
    ctx->pc = 0x11E818u;
    SET_GPR_U32(ctx, 31, 0x11E820u);
    ctx->pc = 0x11E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E818u;
    // 0x11e81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11E818u, 0x11E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E820u;
label_11e820:
    // 0x11e820: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_11e824:
    if (ctx->pc == 0x11E824u) {
        ctx->pc = 0x11E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E820u;
        // 0x11e824: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E828u;
        goto label_11e828;
    }
    ctx->pc = 0x11E820u;
    {
        const bool branch_taken_0x11e820 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E820u;
        // 0x11e824: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e820) {
            ctx->pc = 0x11E830u;
            goto label_11e830;
        }
    }
    ctx->pc = 0x11E828u;
label_11e828:
    // 0x11e828: 0x10000007  b           . + 4 + (0x7 << 2)
label_11e82c:
    if (ctx->pc == 0x11E82Cu) {
        ctx->pc = 0x11E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E828u;
        // 0x11e82c: 0xac409150  sw          $zero, -0x6EB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E830u;
        goto label_11e830;
    }
    ctx->pc = 0x11E828u;
    {
        const bool branch_taken_0x11e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E828u;
        // 0x11e82c: 0xac409150  sw          $zero, -0x6EB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e828) {
            ctx->pc = 0x11E848u;
            goto label_11e848;
        }
    }
    ctx->pc = 0x11E830u;
label_11e830:
    // 0x11e830: 0xc047e6c  jal         func_11F9B0
label_11e834:
    if (ctx->pc == 0x11E834u) {
        ctx->pc = 0x11E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E830u;
        // 0x11e834: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E838u;
        goto label_11e838;
    }
    ctx->pc = 0x11E830u;
    SET_GPR_U32(ctx, 31, 0x11E838u);
    ctx->pc = 0x11E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E830u;
    // 0x11e834: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11E830u, 0x11E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E838u;
label_11e838:
    // 0x11e838: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_11e83c:
    if (ctx->pc == 0x11E83Cu) {
        ctx->pc = 0x11E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E838u;
        // 0x11e83c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E840u;
        goto label_11e840;
    }
    ctx->pc = 0x11E838u;
    {
        const bool branch_taken_0x11e838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E838u;
        // 0x11e83c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e838) {
            ctx->pc = 0x11E84Cu;
            goto label_11e84c;
        }
    }
    ctx->pc = 0x11E840u;
label_11e840:
    // 0x11e840: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11e840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11e844:
    // 0x11e844: 0xac409154  sw          $zero, -0x6EAC($v0)
    ctx->pc = 0x11e844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938964), GPR_U32(ctx, 0));
label_11e848:
    // 0x11e848: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11e848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_11e84c:
    // 0x11e84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e850:
    // 0x11e850: 0x24a58550  addiu       $a1, $a1, -0x7AB0
    ctx->pc = 0x11e850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935888));
label_11e854:
    // 0x11e854: 0xc136ada  jal         func_4DAB68
label_11e858:
    if (ctx->pc == 0x11E858u) {
        ctx->pc = 0x11E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E854u;
        // 0x11e858: 0x24060188  addiu       $a2, $zero, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E85Cu;
        goto label_11e85c;
    }
    ctx->pc = 0x11E854u;
    SET_GPR_U32(ctx, 31, 0x11E85Cu);
    ctx->pc = 0x11E858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E854u;
    // 0x11e858: 0x24060188  addiu       $a2, $zero, 0x188 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB68u, 0x11E854u, 0x11E85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E85Cu;
label_11e85c:
    // 0x11e85c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11e85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11e860:
    // 0x11e860: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11e860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11e864:
    // 0x11e864: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11e864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11e868:
    // 0x11e868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e86c:
    // 0x11e86c: 0x3e00008  jr          $ra
label_11e870:
    if (ctx->pc == 0x11E870u) {
        ctx->pc = 0x11E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E86Cu;
        // 0x11e870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E874u;
        goto label_11e874;
    }
    ctx->pc = 0x11E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E86Cu;
        // 0x11e870: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E874u;
label_11e874:
    // 0x11e874: 0x0  nop
    ctx->pc = 0x11e874u;
    // NOP
    ctx->pc = 0x11e878u;
}
