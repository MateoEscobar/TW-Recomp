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

// Function: sub_0041A460
// Address: 0x41a460 - 0x41a8c0
void sub_0041A460_0x41a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A460_0x41a460");
#endif

    switch (ctx->pc) {
        case 0x41a460u: goto label_41a460;
        case 0x41a464u: goto label_41a464;
        case 0x41a468u: goto label_41a468;
        case 0x41a46cu: goto label_41a46c;
        case 0x41a470u: goto label_41a470;
        case 0x41a474u: goto label_41a474;
        case 0x41a478u: goto label_41a478;
        case 0x41a47cu: goto label_41a47c;
        case 0x41a480u: goto label_41a480;
        case 0x41a484u: goto label_41a484;
        case 0x41a488u: goto label_41a488;
        case 0x41a48cu: goto label_41a48c;
        case 0x41a490u: goto label_41a490;
        case 0x41a494u: goto label_41a494;
        case 0x41a498u: goto label_41a498;
        case 0x41a49cu: goto label_41a49c;
        case 0x41a4a0u: goto label_41a4a0;
        case 0x41a4a4u: goto label_41a4a4;
        case 0x41a4a8u: goto label_41a4a8;
        case 0x41a4acu: goto label_41a4ac;
        case 0x41a4b0u: goto label_41a4b0;
        case 0x41a4b4u: goto label_41a4b4;
        case 0x41a4b8u: goto label_41a4b8;
        case 0x41a4bcu: goto label_41a4bc;
        case 0x41a4c0u: goto label_41a4c0;
        case 0x41a4c4u: goto label_41a4c4;
        case 0x41a4c8u: goto label_41a4c8;
        case 0x41a4ccu: goto label_41a4cc;
        case 0x41a4d0u: goto label_41a4d0;
        case 0x41a4d4u: goto label_41a4d4;
        case 0x41a4d8u: goto label_41a4d8;
        case 0x41a4dcu: goto label_41a4dc;
        case 0x41a4e0u: goto label_41a4e0;
        case 0x41a4e4u: goto label_41a4e4;
        case 0x41a4e8u: goto label_41a4e8;
        case 0x41a4ecu: goto label_41a4ec;
        case 0x41a4f0u: goto label_41a4f0;
        case 0x41a4f4u: goto label_41a4f4;
        case 0x41a4f8u: goto label_41a4f8;
        case 0x41a4fcu: goto label_41a4fc;
        case 0x41a500u: goto label_41a500;
        case 0x41a504u: goto label_41a504;
        case 0x41a508u: goto label_41a508;
        case 0x41a50cu: goto label_41a50c;
        case 0x41a510u: goto label_41a510;
        case 0x41a514u: goto label_41a514;
        case 0x41a518u: goto label_41a518;
        case 0x41a51cu: goto label_41a51c;
        case 0x41a520u: goto label_41a520;
        case 0x41a524u: goto label_41a524;
        case 0x41a528u: goto label_41a528;
        case 0x41a52cu: goto label_41a52c;
        case 0x41a530u: goto label_41a530;
        case 0x41a534u: goto label_41a534;
        case 0x41a538u: goto label_41a538;
        case 0x41a53cu: goto label_41a53c;
        case 0x41a540u: goto label_41a540;
        case 0x41a544u: goto label_41a544;
        case 0x41a548u: goto label_41a548;
        case 0x41a54cu: goto label_41a54c;
        case 0x41a550u: goto label_41a550;
        case 0x41a554u: goto label_41a554;
        case 0x41a558u: goto label_41a558;
        case 0x41a55cu: goto label_41a55c;
        case 0x41a560u: goto label_41a560;
        case 0x41a564u: goto label_41a564;
        case 0x41a568u: goto label_41a568;
        case 0x41a56cu: goto label_41a56c;
        case 0x41a570u: goto label_41a570;
        case 0x41a574u: goto label_41a574;
        case 0x41a578u: goto label_41a578;
        case 0x41a57cu: goto label_41a57c;
        case 0x41a580u: goto label_41a580;
        case 0x41a584u: goto label_41a584;
        case 0x41a588u: goto label_41a588;
        case 0x41a58cu: goto label_41a58c;
        case 0x41a590u: goto label_41a590;
        case 0x41a594u: goto label_41a594;
        case 0x41a598u: goto label_41a598;
        case 0x41a59cu: goto label_41a59c;
        case 0x41a5a0u: goto label_41a5a0;
        case 0x41a5a4u: goto label_41a5a4;
        case 0x41a5a8u: goto label_41a5a8;
        case 0x41a5acu: goto label_41a5ac;
        case 0x41a5b0u: goto label_41a5b0;
        case 0x41a5b4u: goto label_41a5b4;
        case 0x41a5b8u: goto label_41a5b8;
        case 0x41a5bcu: goto label_41a5bc;
        case 0x41a5c0u: goto label_41a5c0;
        case 0x41a5c4u: goto label_41a5c4;
        case 0x41a5c8u: goto label_41a5c8;
        case 0x41a5ccu: goto label_41a5cc;
        case 0x41a5d0u: goto label_41a5d0;
        case 0x41a5d4u: goto label_41a5d4;
        case 0x41a5d8u: goto label_41a5d8;
        case 0x41a5dcu: goto label_41a5dc;
        case 0x41a5e0u: goto label_41a5e0;
        case 0x41a5e4u: goto label_41a5e4;
        case 0x41a5e8u: goto label_41a5e8;
        case 0x41a5ecu: goto label_41a5ec;
        case 0x41a5f0u: goto label_41a5f0;
        case 0x41a5f4u: goto label_41a5f4;
        case 0x41a5f8u: goto label_41a5f8;
        case 0x41a5fcu: goto label_41a5fc;
        case 0x41a600u: goto label_41a600;
        case 0x41a604u: goto label_41a604;
        case 0x41a608u: goto label_41a608;
        case 0x41a60cu: goto label_41a60c;
        case 0x41a610u: goto label_41a610;
        case 0x41a614u: goto label_41a614;
        case 0x41a618u: goto label_41a618;
        case 0x41a61cu: goto label_41a61c;
        case 0x41a620u: goto label_41a620;
        case 0x41a624u: goto label_41a624;
        case 0x41a628u: goto label_41a628;
        case 0x41a62cu: goto label_41a62c;
        case 0x41a630u: goto label_41a630;
        case 0x41a634u: goto label_41a634;
        case 0x41a638u: goto label_41a638;
        case 0x41a63cu: goto label_41a63c;
        case 0x41a640u: goto label_41a640;
        case 0x41a644u: goto label_41a644;
        case 0x41a648u: goto label_41a648;
        case 0x41a64cu: goto label_41a64c;
        case 0x41a650u: goto label_41a650;
        case 0x41a654u: goto label_41a654;
        case 0x41a658u: goto label_41a658;
        case 0x41a65cu: goto label_41a65c;
        case 0x41a660u: goto label_41a660;
        case 0x41a664u: goto label_41a664;
        case 0x41a668u: goto label_41a668;
        case 0x41a66cu: goto label_41a66c;
        case 0x41a670u: goto label_41a670;
        case 0x41a674u: goto label_41a674;
        case 0x41a678u: goto label_41a678;
        case 0x41a67cu: goto label_41a67c;
        case 0x41a680u: goto label_41a680;
        case 0x41a684u: goto label_41a684;
        case 0x41a688u: goto label_41a688;
        case 0x41a68cu: goto label_41a68c;
        case 0x41a690u: goto label_41a690;
        case 0x41a694u: goto label_41a694;
        case 0x41a698u: goto label_41a698;
        case 0x41a69cu: goto label_41a69c;
        case 0x41a6a0u: goto label_41a6a0;
        case 0x41a6a4u: goto label_41a6a4;
        case 0x41a6a8u: goto label_41a6a8;
        case 0x41a6acu: goto label_41a6ac;
        case 0x41a6b0u: goto label_41a6b0;
        case 0x41a6b4u: goto label_41a6b4;
        case 0x41a6b8u: goto label_41a6b8;
        case 0x41a6bcu: goto label_41a6bc;
        case 0x41a6c0u: goto label_41a6c0;
        case 0x41a6c4u: goto label_41a6c4;
        case 0x41a6c8u: goto label_41a6c8;
        case 0x41a6ccu: goto label_41a6cc;
        case 0x41a6d0u: goto label_41a6d0;
        case 0x41a6d4u: goto label_41a6d4;
        case 0x41a6d8u: goto label_41a6d8;
        case 0x41a6dcu: goto label_41a6dc;
        case 0x41a6e0u: goto label_41a6e0;
        case 0x41a6e4u: goto label_41a6e4;
        case 0x41a6e8u: goto label_41a6e8;
        case 0x41a6ecu: goto label_41a6ec;
        case 0x41a6f0u: goto label_41a6f0;
        case 0x41a6f4u: goto label_41a6f4;
        case 0x41a6f8u: goto label_41a6f8;
        case 0x41a6fcu: goto label_41a6fc;
        case 0x41a700u: goto label_41a700;
        case 0x41a704u: goto label_41a704;
        case 0x41a708u: goto label_41a708;
        case 0x41a70cu: goto label_41a70c;
        case 0x41a710u: goto label_41a710;
        case 0x41a714u: goto label_41a714;
        case 0x41a718u: goto label_41a718;
        case 0x41a71cu: goto label_41a71c;
        case 0x41a720u: goto label_41a720;
        case 0x41a724u: goto label_41a724;
        case 0x41a728u: goto label_41a728;
        case 0x41a72cu: goto label_41a72c;
        case 0x41a730u: goto label_41a730;
        case 0x41a734u: goto label_41a734;
        case 0x41a738u: goto label_41a738;
        case 0x41a73cu: goto label_41a73c;
        case 0x41a740u: goto label_41a740;
        case 0x41a744u: goto label_41a744;
        case 0x41a748u: goto label_41a748;
        case 0x41a74cu: goto label_41a74c;
        case 0x41a750u: goto label_41a750;
        case 0x41a754u: goto label_41a754;
        case 0x41a758u: goto label_41a758;
        case 0x41a75cu: goto label_41a75c;
        case 0x41a760u: goto label_41a760;
        case 0x41a764u: goto label_41a764;
        case 0x41a768u: goto label_41a768;
        case 0x41a76cu: goto label_41a76c;
        case 0x41a770u: goto label_41a770;
        case 0x41a774u: goto label_41a774;
        case 0x41a778u: goto label_41a778;
        case 0x41a77cu: goto label_41a77c;
        case 0x41a780u: goto label_41a780;
        case 0x41a784u: goto label_41a784;
        case 0x41a788u: goto label_41a788;
        case 0x41a78cu: goto label_41a78c;
        case 0x41a790u: goto label_41a790;
        case 0x41a794u: goto label_41a794;
        case 0x41a798u: goto label_41a798;
        case 0x41a79cu: goto label_41a79c;
        case 0x41a7a0u: goto label_41a7a0;
        case 0x41a7a4u: goto label_41a7a4;
        case 0x41a7a8u: goto label_41a7a8;
        case 0x41a7acu: goto label_41a7ac;
        case 0x41a7b0u: goto label_41a7b0;
        case 0x41a7b4u: goto label_41a7b4;
        case 0x41a7b8u: goto label_41a7b8;
        case 0x41a7bcu: goto label_41a7bc;
        case 0x41a7c0u: goto label_41a7c0;
        case 0x41a7c4u: goto label_41a7c4;
        case 0x41a7c8u: goto label_41a7c8;
        case 0x41a7ccu: goto label_41a7cc;
        case 0x41a7d0u: goto label_41a7d0;
        case 0x41a7d4u: goto label_41a7d4;
        case 0x41a7d8u: goto label_41a7d8;
        case 0x41a7dcu: goto label_41a7dc;
        case 0x41a7e0u: goto label_41a7e0;
        case 0x41a7e4u: goto label_41a7e4;
        case 0x41a7e8u: goto label_41a7e8;
        case 0x41a7ecu: goto label_41a7ec;
        case 0x41a7f0u: goto label_41a7f0;
        case 0x41a7f4u: goto label_41a7f4;
        case 0x41a7f8u: goto label_41a7f8;
        case 0x41a7fcu: goto label_41a7fc;
        case 0x41a800u: goto label_41a800;
        case 0x41a804u: goto label_41a804;
        case 0x41a808u: goto label_41a808;
        case 0x41a80cu: goto label_41a80c;
        case 0x41a810u: goto label_41a810;
        case 0x41a814u: goto label_41a814;
        case 0x41a818u: goto label_41a818;
        case 0x41a81cu: goto label_41a81c;
        case 0x41a820u: goto label_41a820;
        case 0x41a824u: goto label_41a824;
        case 0x41a828u: goto label_41a828;
        case 0x41a82cu: goto label_41a82c;
        case 0x41a830u: goto label_41a830;
        case 0x41a834u: goto label_41a834;
        case 0x41a838u: goto label_41a838;
        case 0x41a83cu: goto label_41a83c;
        case 0x41a840u: goto label_41a840;
        case 0x41a844u: goto label_41a844;
        case 0x41a848u: goto label_41a848;
        case 0x41a84cu: goto label_41a84c;
        case 0x41a850u: goto label_41a850;
        case 0x41a854u: goto label_41a854;
        case 0x41a858u: goto label_41a858;
        case 0x41a85cu: goto label_41a85c;
        case 0x41a860u: goto label_41a860;
        case 0x41a864u: goto label_41a864;
        case 0x41a868u: goto label_41a868;
        case 0x41a86cu: goto label_41a86c;
        case 0x41a870u: goto label_41a870;
        case 0x41a874u: goto label_41a874;
        case 0x41a878u: goto label_41a878;
        case 0x41a87cu: goto label_41a87c;
        case 0x41a880u: goto label_41a880;
        case 0x41a884u: goto label_41a884;
        case 0x41a888u: goto label_41a888;
        case 0x41a88cu: goto label_41a88c;
        case 0x41a890u: goto label_41a890;
        case 0x41a894u: goto label_41a894;
        case 0x41a898u: goto label_41a898;
        case 0x41a89cu: goto label_41a89c;
        case 0x41a8a0u: goto label_41a8a0;
        case 0x41a8a4u: goto label_41a8a4;
        case 0x41a8a8u: goto label_41a8a8;
        case 0x41a8acu: goto label_41a8ac;
        case 0x41a8b0u: goto label_41a8b0;
        case 0x41a8b4u: goto label_41a8b4;
        case 0x41a8b8u: goto label_41a8b8;
        case 0x41a8bcu: goto label_41a8bc;
        default: break;
    }

    ctx->pc = 0x41a460u;

label_41a460:
    // 0x41a460: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x41a460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_41a464:
    // 0x41a464: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x41a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_41a468:
    // 0x41a468: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x41a468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_41a46c:
    // 0x41a46c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41a46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a470:
    // 0x41a470: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x41a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_41a474:
    // 0x41a474: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41a474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_41a478:
    // 0x41a478: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x41a478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_41a47c:
    // 0x41a47c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x41a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_41a480:
    // 0x41a480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41a484:
    // 0x41a484: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x41a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_41a488:
    // 0x41a488: 0x86340224  lh          $s4, 0x224($s1)
    ctx->pc = 0x41a488u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a48c:
    // 0x41a48c: 0x12800102  beqz        $s4, . + 4 + (0x102 << 2)
label_41a490:
    if (ctx->pc == 0x41A490u) {
        ctx->pc = 0x41A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A48Cu;
        // 0x41a490: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A494u;
        goto label_41a494;
    }
    ctx->pc = 0x41A48Cu;
    {
        const bool branch_taken_0x41a48c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A48Cu;
        // 0x41a490: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a48c) {
            ctx->pc = 0x41A898u;
            goto label_41a898;
        }
    }
    ctx->pc = 0x41A494u;
label_41a494:
    // 0x41a494: 0x8e2256e8  lw          $v0, 0x56E8($s1)
    ctx->pc = 0x41a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22248)));
label_41a498:
    // 0x41a498: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_41a49c:
    if (ctx->pc == 0x41A49Cu) {
        ctx->pc = 0x41A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A498u;
        // 0x41a49c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4A0u;
        goto label_41a4a0;
    }
    ctx->pc = 0x41A498u;
    {
        const bool branch_taken_0x41a498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A498u;
        // 0x41a49c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a498) {
            ctx->pc = 0x41A4B8u;
            goto label_41a4b8;
        }
    }
    ctx->pc = 0x41A4A0u;
label_41a4a0:
    // 0x41a4a0: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x41a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_41a4a4:
    // 0x41a4a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_41a4a8:
    if (ctx->pc == 0x41A4A8u) {
        ctx->pc = 0x41A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4A4u;
        // 0x41a4a8: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4ACu;
        goto label_41a4ac;
    }
    ctx->pc = 0x41A4A4u;
    {
        const bool branch_taken_0x41a4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4A4u;
        // 0x41a4a8: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a4a4) {
            ctx->pc = 0x41A4B4u;
            goto label_41a4b4;
        }
    }
    ctx->pc = 0x41A4ACu;
label_41a4ac:
    // 0x41a4ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_41a4b0:
    if (ctx->pc == 0x41A4B0u) {
        ctx->pc = 0x41A4B4u;
        goto label_41a4b4;
    }
    ctx->pc = 0x41A4ACu;
    {
        const bool branch_taken_0x41a4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a4ac) {
            ctx->pc = 0x41A4B8u;
            goto label_41a4b8;
        }
    }
    ctx->pc = 0x41A4B4u;
label_41a4b4:
    // 0x41a4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a4b8:
    // 0x41a4b8: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_41a4bc:
    if (ctx->pc == 0x41A4BCu) {
        ctx->pc = 0x41A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4B8u;
        // 0x41a4bc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4C0u;
        goto label_41a4c0;
    }
    ctx->pc = 0x41A4B8u;
    {
        const bool branch_taken_0x41a4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4B8u;
        // 0x41a4bc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a4b8) {
            ctx->pc = 0x41A6D0u;
            goto label_41a6d0;
        }
    }
    ctx->pc = 0x41A4C0u;
label_41a4c0:
    // 0x41a4c0: 0x16500009  bne         $s2, $s0, . + 4 + (0x9 << 2)
label_41a4c4:
    if (ctx->pc == 0x41A4C4u) {
        ctx->pc = 0x41A4C8u;
        goto label_41a4c8;
    }
    ctx->pc = 0x41A4C0u;
    {
        const bool branch_taken_0x41a4c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x41a4c0) {
            ctx->pc = 0x41A4E8u;
            goto label_41a4e8;
        }
    }
    ctx->pc = 0x41A4C8u;
label_41a4c8:
    // 0x41a4c8: 0xc1066a0  jal         func_419A80
label_41a4cc:
    if (ctx->pc == 0x41A4CCu) {
        ctx->pc = 0x41A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4C8u;
        // 0x41a4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4D0u;
        goto label_41a4d0;
    }
    ctx->pc = 0x41A4C8u;
    SET_GPR_U32(ctx, 31, 0x41A4D0u);
    ctx->pc = 0x41A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A4C8u;
    // 0x41a4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A80u, 0x41A4C8u, 0x41A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A4D0u;
label_41a4d0:
    // 0x41a4d0: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_41a4d4:
    if (ctx->pc == 0x41A4D4u) {
        ctx->pc = 0x41A4D8u;
        goto label_41a4d8;
    }
    ctx->pc = 0x41A4D0u;
    {
        const bool branch_taken_0x41a4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a4d0) {
            ctx->pc = 0x41A6D0u;
            goto label_41a6d0;
        }
    }
    ctx->pc = 0x41A4D8u;
label_41a4d8:
    // 0x41a4d8: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x41a4d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a4dc:
    // 0x41a4dc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x41a4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_41a4e0:
    // 0x41a4e0: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_41a4e4:
    if (ctx->pc == 0x41A4E4u) {
        ctx->pc = 0x41A4E8u;
        goto label_41a4e8;
    }
    ctx->pc = 0x41A4E0u;
    {
        const bool branch_taken_0x41a4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a4e0) {
            ctx->pc = 0x41A6D0u;
            goto label_41a6d0;
        }
    }
    ctx->pc = 0x41A4E8u;
label_41a4e8:
    // 0x41a4e8: 0x6400009  bltz        $s2, . + 4 + (0x9 << 2)
label_41a4ec:
    if (ctx->pc == 0x41A4ECu) {
        ctx->pc = 0x41A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4E8u;
        // 0x41a4ec: 0x86330224  lh          $s3, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A4F0u;
        goto label_41a4f0;
    }
    ctx->pc = 0x41A4E8u;
    {
        const bool branch_taken_0x41a4e8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x41A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A4E8u;
        // 0x41a4ec: 0x86330224  lh          $s3, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a4e8) {
            ctx->pc = 0x41A510u;
            goto label_41a510;
        }
    }
    ctx->pc = 0x41A4F0u;
label_41a4f0:
    // 0x41a4f0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x41a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_41a4f4:
    // 0x41a4f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x41a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_41a4f8:
    // 0x41a4f8: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x41a4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_41a4fc:
    // 0x41a4fc: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x41a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_41a500:
    // 0x41a500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41a504:
    // 0x41a504: 0x84640042  lh          $a0, 0x42($v1)
    ctx->pc = 0x41a504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
label_41a508:
    // 0x41a508: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
label_41a50c:
    if (ctx->pc == 0x41A50Cu) {
        ctx->pc = 0x41A510u;
        goto label_41a510;
    }
    ctx->pc = 0x41A508u;
    {
        const bool branch_taken_0x41a508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x41a508) {
            ctx->pc = 0x41A518u;
            goto label_41a518;
        }
    }
    ctx->pc = 0x41A510u;
label_41a510:
    // 0x41a510: 0x56500046  bnel        $s2, $s0, . + 4 + (0x46 << 2)
label_41a514:
    if (ctx->pc == 0x41A514u) {
        ctx->pc = 0x41A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A510u;
        // 0x41a514: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A518u;
        goto label_41a518;
    }
    ctx->pc = 0x41A510u;
    {
        const bool branch_taken_0x41a510 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x41a510) {
            ctx->pc = 0x41A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A510u;
            // 0x41a514: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A62Cu;
            goto label_41a62c;
        }
    }
    ctx->pc = 0x41A518u;
label_41a518:
    // 0x41a518: 0xc0e409a  jal         func_390268
label_41a51c:
    if (ctx->pc == 0x41A51Cu) {
        ctx->pc = 0x41A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A518u;
        // 0x41a51c: 0x26240228  addiu       $a0, $s1, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A520u;
        goto label_41a520;
    }
    ctx->pc = 0x41A518u;
    SET_GPR_U32(ctx, 31, 0x41A520u);
    ctx->pc = 0x41A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A518u;
    // 0x41a51c: 0x26240228  addiu       $a0, $s1, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A518u, 0x41A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A520u;
label_41a520:
    // 0x41a520: 0xc087502  jal         func_21D408
label_41a524:
    if (ctx->pc == 0x41A524u) {
        ctx->pc = 0x41A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A520u;
        // 0x41a524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A528u;
        goto label_41a528;
    }
    ctx->pc = 0x41A520u;
    SET_GPR_U32(ctx, 31, 0x41A528u);
    ctx->pc = 0x41A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A520u;
    // 0x41a524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x41A520u, 0x41A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A528u;
label_41a528:
    // 0x41a528: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x41a528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_41a52c:
    // 0x41a52c: 0xc08a9dc  jal         func_22A770
label_41a530:
    if (ctx->pc == 0x41A530u) {
        ctx->pc = 0x41A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A52Cu;
        // 0x41a530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A534u;
        goto label_41a534;
    }
    ctx->pc = 0x41A52Cu;
    SET_GPR_U32(ctx, 31, 0x41A534u);
    ctx->pc = 0x41A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A52Cu;
    // 0x41a530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A770u, 0x41A52Cu, 0x41A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A534u;
label_41a534:
    // 0x41a534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41a534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a538:
    // 0x41a538: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_41a53c:
    if (ctx->pc == 0x41A53Cu) {
        ctx->pc = 0x41A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A538u;
        // 0x41a53c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A540u;
        goto label_41a540;
    }
    ctx->pc = 0x41A538u;
    {
        const bool branch_taken_0x41a538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A538u;
        // 0x41a53c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a538) {
            ctx->pc = 0x41A628u;
            goto label_41a628;
        }
    }
    ctx->pc = 0x41A540u;
label_41a540:
    // 0x41a540: 0x12750039  beq         $s3, $s5, . + 4 + (0x39 << 2)
label_41a544:
    if (ctx->pc == 0x41A544u) {
        ctx->pc = 0x41A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A540u;
        // 0x41a544: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A548u;
        goto label_41a548;
    }
    ctx->pc = 0x41A540u;
    {
        const bool branch_taken_0x41a540 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x41A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A540u;
        // 0x41a544: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a540) {
            ctx->pc = 0x41A628u;
            goto label_41a628;
        }
    }
    ctx->pc = 0x41A548u;
label_41a548:
    // 0x41a548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a54c:
    // 0x41a54c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x41a54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41a550:
    // 0x41a550: 0xc08a710  jal         func_229C40
label_41a554:
    if (ctx->pc == 0x41A554u) {
        ctx->pc = 0x41A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A550u;
        // 0x41a554: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A558u;
        goto label_41a558;
    }
    ctx->pc = 0x41A550u;
    SET_GPR_U32(ctx, 31, 0x41A558u);
    ctx->pc = 0x41A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A550u;
    // 0x41a554: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x41A550u, 0x41A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A558u;
label_41a558:
    // 0x41a558: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_41a55c:
    if (ctx->pc == 0x41A55Cu) {
        ctx->pc = 0x41A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A558u;
        // 0x41a55c: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A560u;
        goto label_41a560;
    }
    ctx->pc = 0x41A558u;
    {
        const bool branch_taken_0x41a558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a558) {
            ctx->pc = 0x41A55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A558u;
            // 0x41a55c: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A62Cu;
            goto label_41a62c;
        }
    }
    ctx->pc = 0x41A560u;
label_41a560:
    // 0x41a560: 0xc0874fa  jal         func_21D3E8
label_41a564:
    if (ctx->pc == 0x41A564u) {
        ctx->pc = 0x41A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A560u;
        // 0x41a564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A568u;
        goto label_41a568;
    }
    ctx->pc = 0x41A560u;
    SET_GPR_U32(ctx, 31, 0x41A568u);
    ctx->pc = 0x41A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A560u;
    // 0x41a564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x41A560u, 0x41A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A568u;
label_41a568:
    // 0x41a568: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x41a568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_41a56c:
    // 0x41a56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a570:
    // 0x41a570: 0x96250456  lhu         $a1, 0x456($s1)
    ctx->pc = 0x41a570u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1110)));
label_41a574:
    // 0x41a574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a578:
    // 0x41a578: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x41a578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_41a57c:
    // 0x41a57c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x41a57cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_41a580:
    // 0x41a580: 0xc048892  jal         func_122248
label_41a584:
    if (ctx->pc == 0x41A584u) {
        ctx->pc = 0x41A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A580u;
        // 0x41a584: 0xa6250456  sh          $a1, 0x456($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1110), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A588u;
        goto label_41a588;
    }
    ctx->pc = 0x41A580u;
    SET_GPR_U32(ctx, 31, 0x41A588u);
    ctx->pc = 0x41A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A580u;
    // 0x41a584: 0xa6250456  sh          $a1, 0x456($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1110), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x41A580u, 0x41A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A588u;
label_41a588:
    // 0x41a588: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_41a58c:
    if (ctx->pc == 0x41A58Cu) {
        ctx->pc = 0x41A590u;
        goto label_41a590;
    }
    ctx->pc = 0x41A588u;
    {
        const bool branch_taken_0x41a588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a588) {
            ctx->pc = 0x41A5A4u;
            goto label_41a5a4;
        }
    }
    ctx->pc = 0x41A590u;
label_41a590:
    // 0x41a590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a594:
    // 0x41a594: 0xc0488ac  jal         func_1222B0
label_41a598:
    if (ctx->pc == 0x41A598u) {
        ctx->pc = 0x41A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A594u;
        // 0x41a598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A59Cu;
        goto label_41a59c;
    }
    ctx->pc = 0x41A594u;
    SET_GPR_U32(ctx, 31, 0x41A59Cu);
    ctx->pc = 0x41A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A594u;
    // 0x41a598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x41A594u, 0x41A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A59Cu;
label_41a59c:
    // 0x41a59c: 0xc047abc  jal         func_11EAF0
label_41a5a0:
    if (ctx->pc == 0x41A5A0u) {
        ctx->pc = 0x41A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A59Cu;
        // 0x41a5a0: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5A4u;
        goto label_41a5a4;
    }
    ctx->pc = 0x41A59Cu;
    SET_GPR_U32(ctx, 31, 0x41A5A4u);
    ctx->pc = 0x41A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A59Cu;
    // 0x41a5a0: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAF0u, 0x41A59Cu, 0x41A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5A4u;
label_41a5a4:
    // 0x41a5a4: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
label_41a5a8:
    if (ctx->pc == 0x41A5A8u) {
        ctx->pc = 0x41A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5A4u;
        // 0x41a5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5ACu;
        goto label_41a5ac;
    }
    ctx->pc = 0x41A5A4u;
    {
        const bool branch_taken_0x41a5a4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x41A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5A4u;
        // 0x41a5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a5a4) {
            ctx->pc = 0x41A5BCu;
            goto label_41a5bc;
        }
    }
    ctx->pc = 0x41A5ACu;
label_41a5ac:
    // 0x41a5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a5b0:
    // 0x41a5b0: 0xc1066b0  jal         func_419AC0
label_41a5b4:
    if (ctx->pc == 0x41A5B4u) {
        ctx->pc = 0x41A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5B0u;
        // 0x41a5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5B8u;
        goto label_41a5b8;
    }
    ctx->pc = 0x41A5B0u;
    SET_GPR_U32(ctx, 31, 0x41A5B8u);
    ctx->pc = 0x41A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A5B0u;
    // 0x41a5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419AC0u, 0x41A5B0u, 0x41A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5B8u;
label_41a5b8:
    // 0x41a5b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a5bc:
    // 0x41a5bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41a5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a5c0:
    // 0x41a5c0: 0xc106c52  jal         func_41B148
label_41a5c4:
    if (ctx->pc == 0x41A5C4u) {
        ctx->pc = 0x41A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5C0u;
        // 0x41a5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5C8u;
        goto label_41a5c8;
    }
    ctx->pc = 0x41A5C0u;
    SET_GPR_U32(ctx, 31, 0x41A5C8u);
    ctx->pc = 0x41A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A5C0u;
    // 0x41a5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B148u, 0x41A5C0u, 0x41A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5C8u;
label_41a5c8:
    // 0x41a5c8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41a5cc:
    // 0x41a5cc: 0xc136b50  jal         func_4DAD40
label_41a5d0:
    if (ctx->pc == 0x41A5D0u) {
        ctx->pc = 0x41A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5CCu;
        // 0x41a5d0: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5D4u;
        goto label_41a5d4;
    }
    ctx->pc = 0x41A5CCu;
    SET_GPR_U32(ctx, 31, 0x41A5D4u);
    ctx->pc = 0x41A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A5CCu;
    // 0x41a5d0: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x41A5CCu, 0x41A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5D4u;
label_41a5d4:
    // 0x41a5d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_41a5d8:
    // 0x41a5d8: 0xc048bb4  jal         func_122ED0
label_41a5dc:
    if (ctx->pc == 0x41A5DCu) {
        ctx->pc = 0x41A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5D8u;
        // 0x41a5dc: 0xac62b194  sw          $v0, -0x4E6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5E0u;
        goto label_41a5e0;
    }
    ctx->pc = 0x41A5D8u;
    SET_GPR_U32(ctx, 31, 0x41A5E0u);
    ctx->pc = 0x41A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A5D8u;
    // 0x41a5dc: 0xac62b194  sw          $v0, -0x4E6C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x41A5D8u, 0x41A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5E0u;
label_41a5e0:
    // 0x41a5e0: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x41a5e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a5e4:
    // 0x41a5e4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x41a5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41a5e8:
    // 0x41a5e8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_41a5ec:
    if (ctx->pc == 0x41A5ECu) {
        ctx->pc = 0x41A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5E8u;
        // 0x41a5ec: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5F0u;
        goto label_41a5f0;
    }
    ctx->pc = 0x41A5E8u;
    {
        const bool branch_taken_0x41a5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a5e8) {
            ctx->pc = 0x41A5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A5E8u;
            // 0x41a5ec: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A62Cu;
            goto label_41a62c;
        }
    }
    ctx->pc = 0x41A5F0u;
label_41a5f0:
    // 0x41a5f0: 0xc047e6c  jal         func_11F9B0
label_41a5f4:
    if (ctx->pc == 0x41A5F4u) {
        ctx->pc = 0x41A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A5F0u;
        // 0x41a5f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A5F8u;
        goto label_41a5f8;
    }
    ctx->pc = 0x41A5F0u;
    SET_GPR_U32(ctx, 31, 0x41A5F8u);
    ctx->pc = 0x41A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A5F0u;
    // 0x41a5f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x41A5F0u, 0x41A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A5F8u;
label_41a5f8:
    // 0x41a5f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41a5fc:
    // 0x41a5fc: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x41a5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_41a600:
    // 0x41a600: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x41a600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_41a604:
    // 0x41a604: 0xa0f809  jalr        $a1
label_41a608:
    if (ctx->pc == 0x41A608u) {
        ctx->pc = 0x41A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A604u;
        // 0x41a608: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A60Cu;
        goto label_41a60c;
    }
    ctx->pc = 0x41A604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x41A60Cu);
        ctx->pc = 0x41A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A604u;
        // 0x41a608: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A604u, 0x41A60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A60Cu;
label_41a60c:
    // 0x41a60c: 0x54550007  bnel        $v0, $s5, . + 4 + (0x7 << 2)
label_41a610:
    if (ctx->pc == 0x41A610u) {
        ctx->pc = 0x41A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A60Cu;
        // 0x41a610: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A614u;
        goto label_41a614;
    }
    ctx->pc = 0x41A60Cu;
    {
        const bool branch_taken_0x41a60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x41a60c) {
            ctx->pc = 0x41A610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A60Cu;
            // 0x41a610: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A62Cu;
            goto label_41a62c;
        }
    }
    ctx->pc = 0x41A614u;
label_41a614:
    // 0x41a614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a618:
    // 0x41a618: 0xc047e78  jal         func_11F9E0
label_41a61c:
    if (ctx->pc == 0x41A61Cu) {
        ctx->pc = 0x41A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A618u;
        // 0x41a61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A620u;
        goto label_41a620;
    }
    ctx->pc = 0x41A618u;
    SET_GPR_U32(ctx, 31, 0x41A620u);
    ctx->pc = 0x41A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A618u;
    // 0x41a61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x41A618u, 0x41A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A620u;
label_41a620:
    // 0x41a620: 0xc049f04  jal         func_127C10
label_41a624:
    if (ctx->pc == 0x41A624u) {
        ctx->pc = 0x41A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A620u;
        // 0x41a624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A628u;
        goto label_41a628;
    }
    ctx->pc = 0x41A620u;
    SET_GPR_U32(ctx, 31, 0x41A628u);
    ctx->pc = 0x41A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A620u;
    // 0x41a624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x41A620u, 0x41A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A628u;
label_41a628:
    // 0x41a628: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x41a628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a62c:
    // 0x41a62c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x41a62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_41a630:
    // 0x41a630: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
label_41a634:
    if (ctx->pc == 0x41A634u) {
        ctx->pc = 0x41A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A630u;
        // 0x41a634: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A638u;
        goto label_41a638;
    }
    ctx->pc = 0x41A630u;
    {
        const bool branch_taken_0x41a630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A630u;
        // 0x41a634: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a630) {
            ctx->pc = 0x41A89Cu;
            goto label_41a89c;
        }
    }
    ctx->pc = 0x41A638u;
label_41a638:
    // 0x41a638: 0xc0e409a  jal         func_390268
label_41a63c:
    if (ctx->pc == 0x41A63Cu) {
        ctx->pc = 0x41A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A638u;
        // 0x41a63c: 0x26240228  addiu       $a0, $s1, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A640u;
        goto label_41a640;
    }
    ctx->pc = 0x41A638u;
    SET_GPR_U32(ctx, 31, 0x41A640u);
    ctx->pc = 0x41A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A638u;
    // 0x41a63c: 0x26240228  addiu       $a0, $s1, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A638u, 0x41A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A640u;
label_41a640:
    // 0x41a640: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x41a640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_41a644:
    // 0x41a644: 0x86220222  lh          $v0, 0x222($s1)
    ctx->pc = 0x41a644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
label_41a648:
    // 0x41a648: 0x10620093  beq         $v1, $v0, . + 4 + (0x93 << 2)
label_41a64c:
    if (ctx->pc == 0x41A64Cu) {
        ctx->pc = 0x41A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A648u;
        // 0x41a64c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A650u;
        goto label_41a650;
    }
    ctx->pc = 0x41A648u;
    {
        const bool branch_taken_0x41a648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A648u;
        // 0x41a64c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a648) {
            ctx->pc = 0x41A898u;
            goto label_41a898;
        }
    }
    ctx->pc = 0x41A650u;
label_41a650:
    // 0x41a650: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x41a650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41a654:
    // 0x41a654: 0x10000005  b           . + 4 + (0x5 << 2)
label_41a658:
    if (ctx->pc == 0x41A658u) {
        ctx->pc = 0x41A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A654u;
        // 0x41a658: 0x2630022c  addiu       $s0, $s1, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A65Cu;
        goto label_41a65c;
    }
    ctx->pc = 0x41A654u;
    {
        const bool branch_taken_0x41a654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A654u;
        // 0x41a658: 0x2630022c  addiu       $s0, $s1, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a654) {
            ctx->pc = 0x41A66Cu;
            goto label_41a66c;
        }
    }
    ctx->pc = 0x41A65Cu;
label_41a65c:
    // 0x41a65c: 0x0  nop
    ctx->pc = 0x41a65cu;
    // NOP
label_41a660:
    // 0x41a660: 0x24930004  addiu       $s3, $a0, 0x4
    ctx->pc = 0x41a660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_41a664:
    // 0x41a664: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x41a664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_41a668:
    // 0x41a668: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x41a668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41a66c:
    // 0x41a66c: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x41a66cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a670:
    // 0x41a670: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x41a670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41a674:
    // 0x41a674: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
label_41a678:
    if (ctx->pc == 0x41A678u) {
        ctx->pc = 0x41A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A674u;
        // 0x41a678: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A67Cu;
        goto label_41a67c;
    }
    ctx->pc = 0x41A674u;
    {
        const bool branch_taken_0x41a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a674) {
            ctx->pc = 0x41A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A674u;
            // 0x41a678: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A89Cu;
            goto label_41a89c;
        }
    }
    ctx->pc = 0x41A67Cu;
label_41a67c:
    // 0x41a67c: 0xc0e409a  jal         func_390268
label_41a680:
    if (ctx->pc == 0x41A680u) {
        ctx->pc = 0x41A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A67Cu;
        // 0x41a680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A684u;
        goto label_41a684;
    }
    ctx->pc = 0x41A67Cu;
    SET_GPR_U32(ctx, 31, 0x41A684u);
    ctx->pc = 0x41A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A67Cu;
    // 0x41a680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A67Cu, 0x41A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A684u;
label_41a684:
    // 0x41a684: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x41a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
label_41a688:
    // 0x41a688: 0x86220222  lh          $v0, 0x222($s1)
    ctx->pc = 0x41a688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
label_41a68c:
    // 0x41a68c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_41a690:
    if (ctx->pc == 0x41A690u) {
        ctx->pc = 0x41A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A68Cu;
        // 0x41a690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A694u;
        goto label_41a694;
    }
    ctx->pc = 0x41A68Cu;
    {
        const bool branch_taken_0x41a68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x41A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A68Cu;
        // 0x41a690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a68c) {
            ctx->pc = 0x41A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a660;
        }
    }
    ctx->pc = 0x41A694u;
label_41a694:
    // 0x41a694: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x41a694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a698:
    // 0x41a698: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x41a698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41a69c:
    // 0x41a69c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_41a6a0:
    if (ctx->pc == 0x41A6A0u) {
        ctx->pc = 0x41A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A69Cu;
        // 0x41a6a0: 0x26640228  addiu       $a0, $s3, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6A4u;
        goto label_41a6a4;
    }
    ctx->pc = 0x41A69Cu;
    {
        const bool branch_taken_0x41a69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A69Cu;
        // 0x41a6a0: 0x26640228  addiu       $a0, $s3, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a69c) {
            ctx->pc = 0x41A898u;
            goto label_41a898;
        }
    }
    ctx->pc = 0x41A6A4u;
label_41a6a4:
    // 0x41a6a4: 0xc0e409a  jal         func_390268
label_41a6a8:
    if (ctx->pc == 0x41A6A8u) {
        ctx->pc = 0x41A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6A4u;
        // 0x41a6a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6ACu;
        goto label_41a6ac;
    }
    ctx->pc = 0x41A6A4u;
    SET_GPR_U32(ctx, 31, 0x41A6ACu);
    ctx->pc = 0x41A6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A6A4u;
    // 0x41a6a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A6A4u, 0x41A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A6ACu;
label_41a6ac:
    // 0x41a6ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41a6b0:
    // 0x41a6b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41a6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41a6b4:
    // 0x41a6b4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x41a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41a6b8:
    // 0x41a6b8: 0xa0f809  jalr        $a1
label_41a6bc:
    if (ctx->pc == 0x41A6BCu) {
        ctx->pc = 0x41A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6B8u;
        // 0x41a6bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6C0u;
        goto label_41a6c0;
    }
    ctx->pc = 0x41A6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x41A6C0u);
        ctx->pc = 0x41A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6B8u;
        // 0x41a6bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A6B8u, 0x41A6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A6C0u;
label_41a6c0:
    // 0x41a6c0: 0xc08e62c  jal         func_2398B0
label_41a6c4:
    if (ctx->pc == 0x41A6C4u) {
        ctx->pc = 0x41A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6C0u;
        // 0x41a6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6C8u;
        goto label_41a6c8;
    }
    ctx->pc = 0x41A6C0u;
    SET_GPR_U32(ctx, 31, 0x41A6C8u);
    ctx->pc = 0x41A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A6C0u;
    // 0x41a6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2398B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398B0u, 0x41A6C0u, 0x41A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A6C8u;
label_41a6c8:
    // 0x41a6c8: 0x10000074  b           . + 4 + (0x74 << 2)
label_41a6cc:
    if (ctx->pc == 0x41A6CCu) {
        ctx->pc = 0x41A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6C8u;
        // 0x41a6cc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6D0u;
        goto label_41a6d0;
    }
    ctx->pc = 0x41A6C8u;
    {
        const bool branch_taken_0x41a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6C8u;
        // 0x41a6cc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a6c8) {
            ctx->pc = 0x41A89Cu;
            goto label_41a89c;
        }
    }
    ctx->pc = 0x41A6D0u;
label_41a6d0:
    // 0x41a6d0: 0xc1066a0  jal         func_419A80
label_41a6d4:
    if (ctx->pc == 0x41A6D4u) {
        ctx->pc = 0x41A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6D0u;
        // 0x41a6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6D8u;
        goto label_41a6d8;
    }
    ctx->pc = 0x41A6D0u;
    SET_GPR_U32(ctx, 31, 0x41A6D8u);
    ctx->pc = 0x41A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A6D0u;
    // 0x41a6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A80u, 0x41A6D0u, 0x41A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A6D8u;
label_41a6d8:
    // 0x41a6d8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_41a6dc:
    if (ctx->pc == 0x41A6DCu) {
        ctx->pc = 0x41A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6D8u;
        // 0x41a6dc: 0x8e2256e8  lw          $v0, 0x56E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6E0u;
        goto label_41a6e0;
    }
    ctx->pc = 0x41A6D8u;
    {
        const bool branch_taken_0x41a6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41a6d8) {
            ctx->pc = 0x41A6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A6D8u;
            // 0x41a6dc: 0x8e2256e8  lw          $v0, 0x56E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A770u;
            goto label_41a770;
        }
    }
    ctx->pc = 0x41A6E0u;
label_41a6e0:
    // 0x41a6e0: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x41a6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a6e4:
    // 0x41a6e4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x41a6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_41a6e8:
    // 0x41a6e8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_41a6ec:
    if (ctx->pc == 0x41A6ECu) {
        ctx->pc = 0x41A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6E8u;
        // 0x41a6ec: 0x8e2256e8  lw          $v0, 0x56E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6F0u;
        goto label_41a6f0;
    }
    ctx->pc = 0x41A6E8u;
    {
        const bool branch_taken_0x41a6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a6e8) {
            ctx->pc = 0x41A6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A6E8u;
            // 0x41a6ec: 0x8e2256e8  lw          $v0, 0x56E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A770u;
            goto label_41a770;
        }
    }
    ctx->pc = 0x41A6F0u;
label_41a6f0:
    // 0x41a6f0: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
label_41a6f4:
    if (ctx->pc == 0x41A6F4u) {
        ctx->pc = 0x41A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6F0u;
        // 0x41a6f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A6F8u;
        goto label_41a6f8;
    }
    ctx->pc = 0x41A6F0u;
    {
        const bool branch_taken_0x41a6f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x41A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A6F0u;
        // 0x41a6f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a6f0) {
            ctx->pc = 0x41A750u;
            goto label_41a750;
        }
    }
    ctx->pc = 0x41A6F8u;
label_41a6f8:
    // 0x41a6f8: 0x26320228  addiu       $s2, $s1, 0x228
    ctx->pc = 0x41a6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
label_41a6fc:
    // 0x41a6fc: 0x0  nop
    ctx->pc = 0x41a6fcu;
    // NOP
label_41a700:
    // 0x41a700: 0xc0e409a  jal         func_390268
label_41a704:
    if (ctx->pc == 0x41A704u) {
        ctx->pc = 0x41A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A700u;
        // 0x41a704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A708u;
        goto label_41a708;
    }
    ctx->pc = 0x41A700u;
    SET_GPR_U32(ctx, 31, 0x41A708u);
    ctx->pc = 0x41A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A700u;
    // 0x41a704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A700u, 0x41A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A708u;
label_41a708:
    // 0x41a708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41a708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a70c:
    // 0x41a70c: 0xc048892  jal         func_122248
label_41a710:
    if (ctx->pc == 0x41A710u) {
        ctx->pc = 0x41A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A70Cu;
        // 0x41a710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A714u;
        goto label_41a714;
    }
    ctx->pc = 0x41A70Cu;
    SET_GPR_U32(ctx, 31, 0x41A714u);
    ctx->pc = 0x41A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A70Cu;
    // 0x41a710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x41A70Cu, 0x41A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A714u;
label_41a714:
    // 0x41a714: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_41a718:
    if (ctx->pc == 0x41A718u) {
        ctx->pc = 0x41A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A714u;
        // 0x41a718: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A71Cu;
        goto label_41a71c;
    }
    ctx->pc = 0x41A714u;
    {
        const bool branch_taken_0x41a714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a714) {
            ctx->pc = 0x41A718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A714u;
            // 0x41a718: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A72Cu;
            goto label_41a72c;
        }
    }
    ctx->pc = 0x41A71Cu;
label_41a71c:
    // 0x41a71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a720:
    // 0x41a720: 0xc0488ac  jal         func_1222B0
label_41a724:
    if (ctx->pc == 0x41A724u) {
        ctx->pc = 0x41A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A720u;
        // 0x41a724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A728u;
        goto label_41a728;
    }
    ctx->pc = 0x41A720u;
    SET_GPR_U32(ctx, 31, 0x41A728u);
    ctx->pc = 0x41A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A720u;
    // 0x41a724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x41A720u, 0x41A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A728u;
label_41a728:
    // 0x41a728: 0x820401b0  lb          $a0, 0x1B0($s0)
    ctx->pc = 0x41a728u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_41a72c:
    // 0x41a72c: 0x58800004  blezl       $a0, . + 4 + (0x4 << 2)
label_41a730:
    if (ctx->pc == 0x41A730u) {
        ctx->pc = 0x41A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A72Cu;
        // 0x41a730: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A734u;
        goto label_41a734;
    }
    ctx->pc = 0x41A72Cu;
    {
        const bool branch_taken_0x41a72c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x41a72c) {
            ctx->pc = 0x41A730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A72Cu;
            // 0x41a730: 0x86220224  lh          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A740u;
            goto label_41a740;
        }
    }
    ctx->pc = 0x41A734u;
label_41a734:
    // 0x41a734: 0xc047abc  jal         func_11EAF0
label_41a738:
    if (ctx->pc == 0x41A738u) {
        ctx->pc = 0x41A73Cu;
        goto label_41a73c;
    }
    ctx->pc = 0x41A734u;
    SET_GPR_U32(ctx, 31, 0x41A73Cu);
    ctx->pc = 0x11EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAF0u, 0x41A734u, 0x41A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A73Cu;
label_41a73c:
    // 0x41a73c: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x41a73cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a740:
    // 0x41a740: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41a740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41a744:
    // 0x41a744: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x41a744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41a748:
    // 0x41a748: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_41a74c:
    if (ctx->pc == 0x41A74Cu) {
        ctx->pc = 0x41A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A748u;
        // 0x41a74c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A750u;
        goto label_41a750;
    }
    ctx->pc = 0x41A748u;
    {
        const bool branch_taken_0x41a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A748u;
        // 0x41a74c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a748) {
            ctx->pc = 0x41A700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a700;
        }
    }
    ctx->pc = 0x41A750u;
label_41a750:
    // 0x41a750: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41a750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41a754:
    // 0x41a754: 0xc136b50  jal         func_4DAD40
label_41a758:
    if (ctx->pc == 0x41A758u) {
        ctx->pc = 0x41A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A754u;
        // 0x41a758: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A75Cu;
        goto label_41a75c;
    }
    ctx->pc = 0x41A754u;
    SET_GPR_U32(ctx, 31, 0x41A75Cu);
    ctx->pc = 0x41A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A754u;
    // 0x41a758: 0x248491a8  addiu       $a0, $a0, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x41A754u, 0x41A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A75Cu;
label_41a75c:
    // 0x41a75c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_41a760:
    // 0x41a760: 0xc048bb4  jal         func_122ED0
label_41a764:
    if (ctx->pc == 0x41A764u) {
        ctx->pc = 0x41A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A760u;
        // 0x41a764: 0xac62b194  sw          $v0, -0x4E6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A768u;
        goto label_41a768;
    }
    ctx->pc = 0x41A760u;
    SET_GPR_U32(ctx, 31, 0x41A768u);
    ctx->pc = 0x41A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A760u;
    // 0x41a764: 0xac62b194  sw          $v0, -0x4E6C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x41A760u, 0x41A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A768u;
label_41a768:
    // 0x41a768: 0x1000004c  b           . + 4 + (0x4C << 2)
label_41a76c:
    if (ctx->pc == 0x41A76Cu) {
        ctx->pc = 0x41A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A768u;
        // 0x41a76c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A770u;
        goto label_41a770;
    }
    ctx->pc = 0x41A768u;
    {
        const bool branch_taken_0x41a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A768u;
        // 0x41a76c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a768) {
            ctx->pc = 0x41A89Cu;
            goto label_41a89c;
        }
    }
    ctx->pc = 0x41A770u;
label_41a770:
    // 0x41a770: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_41a774:
    if (ctx->pc == 0x41A774u) {
        ctx->pc = 0x41A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A770u;
        // 0x41a774: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A778u;
        goto label_41a778;
    }
    ctx->pc = 0x41A770u;
    {
        const bool branch_taken_0x41a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A770u;
        // 0x41a774: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a770) {
            ctx->pc = 0x41A790u;
            goto label_41a790;
        }
    }
    ctx->pc = 0x41A778u;
label_41a778:
    // 0x41a778: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x41a778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_41a77c:
    // 0x41a77c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_41a780:
    if (ctx->pc == 0x41A780u) {
        ctx->pc = 0x41A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A77Cu;
        // 0x41a780: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A784u;
        goto label_41a784;
    }
    ctx->pc = 0x41A77Cu;
    {
        const bool branch_taken_0x41a77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A77Cu;
        // 0x41a780: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a77c) {
            ctx->pc = 0x41A78Cu;
            goto label_41a78c;
        }
    }
    ctx->pc = 0x41A784u;
label_41a784:
    // 0x41a784: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_41a788:
    if (ctx->pc == 0x41A788u) {
        ctx->pc = 0x41A78Cu;
        goto label_41a78c;
    }
    ctx->pc = 0x41A784u;
    {
        const bool branch_taken_0x41a784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a784) {
            ctx->pc = 0x41A790u;
            goto label_41a790;
        }
    }
    ctx->pc = 0x41A78Cu;
label_41a78c:
    // 0x41a78c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a790:
    // 0x41a790: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_41a794:
    if (ctx->pc == 0x41A794u) {
        ctx->pc = 0x41A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A790u;
        // 0x41a794: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A798u;
        goto label_41a798;
    }
    ctx->pc = 0x41A790u;
    {
        const bool branch_taken_0x41a790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A790u;
        // 0x41a794: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a790) {
            ctx->pc = 0x41A89Cu;
            goto label_41a89c;
        }
    }
    ctx->pc = 0x41A798u;
label_41a798:
    // 0x41a798: 0xc1066a0  jal         func_419A80
label_41a79c:
    if (ctx->pc == 0x41A79Cu) {
        ctx->pc = 0x41A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A798u;
        // 0x41a79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7A0u;
        goto label_41a7a0;
    }
    ctx->pc = 0x41A798u;
    SET_GPR_U32(ctx, 31, 0x41A7A0u);
    ctx->pc = 0x41A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A798u;
    // 0x41a79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419A80u, 0x41A798u, 0x41A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A7A0u;
label_41a7a0:
    // 0x41a7a0: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_41a7a4:
    if (ctx->pc == 0x41A7A4u) {
        ctx->pc = 0x41A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7A0u;
        // 0x41a7a4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7A8u;
        goto label_41a7a8;
    }
    ctx->pc = 0x41A7A0u;
    {
        const bool branch_taken_0x41a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7A0u;
        // 0x41a7a4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a7a0) {
            ctx->pc = 0x41A89Cu;
            goto label_41a89c;
        }
    }
    ctx->pc = 0x41A7A8u;
label_41a7a8:
    // 0x41a7a8: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x41a7a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a7ac:
    // 0x41a7ac: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x41a7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_41a7b0:
    // 0x41a7b0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
label_41a7b4:
    if (ctx->pc == 0x41A7B4u) {
        ctx->pc = 0x41A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7B0u;
        // 0x41a7b4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7B8u;
        goto label_41a7b8;
    }
    ctx->pc = 0x41A7B0u;
    {
        const bool branch_taken_0x41a7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a7b0) {
            ctx->pc = 0x41A7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A7B0u;
            // 0x41a7b4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A8A0u;
            goto label_41a8a0;
        }
    }
    ctx->pc = 0x41A7B8u;
label_41a7b8:
    // 0x41a7b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x41a7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a7bc:
    // 0x41a7bc: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x41a7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_41a7c0:
    // 0x41a7c0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_41a7c4:
    if (ctx->pc == 0x41A7C4u) {
        ctx->pc = 0x41A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7C0u;
        // 0x41a7c4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7C8u;
        goto label_41a7c8;
    }
    ctx->pc = 0x41A7C0u;
    {
        const bool branch_taken_0x41a7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7C0u;
        // 0x41a7c4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a7c0) {
            ctx->pc = 0x41A89Cu;
            goto label_41a89c;
        }
    }
    ctx->pc = 0x41A7C8u;
label_41a7c8:
    // 0x41a7c8: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x41a7c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_41a7cc:
    // 0x41a7cc: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x41a7ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_41a7d0:
    // 0x41a7d0: 0x2632022c  addiu       $s2, $s1, 0x22C
    ctx->pc = 0x41a7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
label_41a7d4:
    // 0x41a7d4: 0x0  nop
    ctx->pc = 0x41a7d4u;
    // NOP
label_41a7d8:
    // 0x41a7d8: 0xc0e409a  jal         func_390268
label_41a7dc:
    if (ctx->pc == 0x41A7DCu) {
        ctx->pc = 0x41A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7D8u;
        // 0x41a7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7E0u;
        goto label_41a7e0;
    }
    ctx->pc = 0x41A7D8u;
    SET_GPR_U32(ctx, 31, 0x41A7E0u);
    ctx->pc = 0x41A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A7D8u;
    // 0x41a7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41A7D8u, 0x41A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A7E0u;
label_41a7e0:
    // 0x41a7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41a7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a7e4:
    // 0x41a7e4: 0xc048892  jal         func_122248
label_41a7e8:
    if (ctx->pc == 0x41A7E8u) {
        ctx->pc = 0x41A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7E4u;
        // 0x41a7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7ECu;
        goto label_41a7ec;
    }
    ctx->pc = 0x41A7E4u;
    SET_GPR_U32(ctx, 31, 0x41A7ECu);
    ctx->pc = 0x41A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A7E4u;
    // 0x41a7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x41A7E4u, 0x41A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A7ECu;
label_41a7ec:
    // 0x41a7ec: 0x14540006  bne         $v0, $s4, . + 4 + (0x6 << 2)
label_41a7f0:
    if (ctx->pc == 0x41A7F0u) {
        ctx->pc = 0x41A7F4u;
        goto label_41a7f4;
    }
    ctx->pc = 0x41A7ECu;
    {
        const bool branch_taken_0x41a7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x41a7ec) {
            ctx->pc = 0x41A808u;
            goto label_41a808;
        }
    }
    ctx->pc = 0x41A7F4u;
label_41a7f4:
    // 0x41a7f4: 0xc047b58  jal         func_11ED60
label_41a7f8:
    if (ctx->pc == 0x41A7F8u) {
        ctx->pc = 0x41A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A7F4u;
        // 0x41a7f8: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A7FCu;
        goto label_41a7fc;
    }
    ctx->pc = 0x41A7F4u;
    SET_GPR_U32(ctx, 31, 0x41A7FCu);
    ctx->pc = 0x41A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A7F4u;
    // 0x41a7f8: 0x820401b0  lb          $a0, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED60u, 0x41A7F4u, 0x41A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A7FCu;
label_41a7fc:
    // 0x41a7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a800:
    // 0x41a800: 0xc04890e  jal         func_122438
label_41a804:
    if (ctx->pc == 0x41A804u) {
        ctx->pc = 0x41A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A800u;
        // 0x41a804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A808u;
        goto label_41a808;
    }
    ctx->pc = 0x41A800u;
    SET_GPR_U32(ctx, 31, 0x41A808u);
    ctx->pc = 0x41A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A800u;
    // 0x41a804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x41A800u, 0x41A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A808u;
label_41a808:
    // 0x41a808: 0xc0874fa  jal         func_21D3E8
label_41a80c:
    if (ctx->pc == 0x41A80Cu) {
        ctx->pc = 0x41A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A808u;
        // 0x41a80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A810u;
        goto label_41a810;
    }
    ctx->pc = 0x41A808u;
    SET_GPR_U32(ctx, 31, 0x41A810u);
    ctx->pc = 0x41A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A808u;
    // 0x41a80c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x41A808u, 0x41A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A810u;
label_41a810:
    // 0x41a810: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x41a810u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_41a814:
    // 0x41a814: 0x96220456  lhu         $v0, 0x456($s1)
    ctx->pc = 0x41a814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1110)));
label_41a818:
    // 0x41a818: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x41a818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_41a81c:
    // 0x41a81c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41a820:
    // 0x41a820: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_41a824:
    if (ctx->pc == 0x41A824u) {
        ctx->pc = 0x41A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A820u;
        // 0x41a824: 0x26c491a8  addiu       $a0, $s6, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A828u;
        goto label_41a828;
    }
    ctx->pc = 0x41A820u;
    {
        const bool branch_taken_0x41a820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A820u;
        // 0x41a824: 0x26c491a8  addiu       $a0, $s6, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a820) {
            ctx->pc = 0x41A874u;
            goto label_41a874;
        }
    }
    ctx->pc = 0x41A828u;
label_41a828:
    // 0x41a828: 0xc0962a2  jal         func_258A88
label_41a82c:
    if (ctx->pc == 0x41A82Cu) {
        ctx->pc = 0x41A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A828u;
        // 0x41a82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A830u;
        goto label_41a830;
    }
    ctx->pc = 0x41A828u;
    SET_GPR_U32(ctx, 31, 0x41A830u);
    ctx->pc = 0x41A82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A828u;
    // 0x41a82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x41A828u, 0x41A830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A830u;
label_41a830:
    // 0x41a830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41a830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a834:
    // 0x41a834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41a834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41a838:
    // 0x41a838: 0xc08a8aa  jal         func_22A2A8
label_41a83c:
    if (ctx->pc == 0x41A83Cu) {
        ctx->pc = 0x41A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A838u;
        // 0x41a83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A840u;
        goto label_41a840;
    }
    ctx->pc = 0x41A838u;
    SET_GPR_U32(ctx, 31, 0x41A840u);
    ctx->pc = 0x41A83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A838u;
    // 0x41a83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2A8u, 0x41A838u, 0x41A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A840u;
label_41a840:
    // 0x41a840: 0xc0874fa  jal         func_21D3E8
label_41a844:
    if (ctx->pc == 0x41A844u) {
        ctx->pc = 0x41A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A840u;
        // 0x41a844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A848u;
        goto label_41a848;
    }
    ctx->pc = 0x41A840u;
    SET_GPR_U32(ctx, 31, 0x41A848u);
    ctx->pc = 0x41A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A840u;
    // 0x41a844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x41A840u, 0x41A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A848u;
label_41a848:
    // 0x41a848: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x41a848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_41a84c:
    // 0x41a84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41a84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a850:
    // 0x41a850: 0x96220456  lhu         $v0, 0x456($s1)
    ctx->pc = 0x41a850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1110)));
label_41a854:
    // 0x41a854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a858:
    // 0x41a858: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x41a858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
label_41a85c:
    // 0x41a85c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41a85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41a860:
    // 0x41a860: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x41a860u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_41a864:
    // 0x41a864: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x41a864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_41a868:
    // 0x41a868: 0xc106c52  jal         func_41B148
label_41a86c:
    if (ctx->pc == 0x41A86Cu) {
        ctx->pc = 0x41A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A868u;
        // 0x41a86c: 0xa6220456  sh          $v0, 0x456($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1110), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A870u;
        goto label_41a870;
    }
    ctx->pc = 0x41A868u;
    SET_GPR_U32(ctx, 31, 0x41A870u);
    ctx->pc = 0x41A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A868u;
    // 0x41a86c: 0xa6220456  sh          $v0, 0x456($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1110), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B148u, 0x41A868u, 0x41A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A870u;
label_41a870:
    // 0x41a870: 0x26c491a8  addiu       $a0, $s6, -0x6E58
    ctx->pc = 0x41a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939048));
label_41a874:
    // 0x41a874: 0xc136b50  jal         func_4DAD40
label_41a878:
    if (ctx->pc == 0x41A878u) {
        ctx->pc = 0x41A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A874u;
        // 0x41a878: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A87Cu;
        goto label_41a87c;
    }
    ctx->pc = 0x41A874u;
    SET_GPR_U32(ctx, 31, 0x41A87Cu);
    ctx->pc = 0x41A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A874u;
    // 0x41a878: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x41A874u, 0x41A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A87Cu;
label_41a87c:
    // 0x41a87c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x41a87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_41a880:
    // 0x41a880: 0xc048bb4  jal         func_122ED0
label_41a884:
    if (ctx->pc == 0x41A884u) {
        ctx->pc = 0x41A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A880u;
        // 0x41a884: 0xaea2b194  sw          $v0, -0x4E6C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294947220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A888u;
        goto label_41a888;
    }
    ctx->pc = 0x41A880u;
    SET_GPR_U32(ctx, 31, 0x41A888u);
    ctx->pc = 0x41A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A880u;
    // 0x41a884: 0xaea2b194  sw          $v0, -0x4E6C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294947220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x41A880u, 0x41A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A888u;
label_41a888:
    // 0x41a888: 0x86220224  lh          $v0, 0x224($s1)
    ctx->pc = 0x41a888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_41a88c:
    // 0x41a88c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x41a88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41a890:
    // 0x41a890: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_41a894:
    if (ctx->pc == 0x41A894u) {
        ctx->pc = 0x41A898u;
        goto label_41a898;
    }
    ctx->pc = 0x41A890u;
    {
        const bool branch_taken_0x41a890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a890) {
            ctx->pc = 0x41A7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a7d8;
        }
    }
    ctx->pc = 0x41A898u;
label_41a898:
    // 0x41a898: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x41a898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41a89c:
    // 0x41a89c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41a89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41a8a0:
    // 0x41a8a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x41a8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41a8a4:
    // 0x41a8a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41a8a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41a8a8:
    // 0x41a8a8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x41a8a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41a8ac:
    // 0x41a8ac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x41a8acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a8b0:
    // 0x41a8b0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x41a8b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a8b4:
    // 0x41a8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41a8b8:
    // 0x41a8b8: 0x3e00008  jr          $ra
label_41a8bc:
    if (ctx->pc == 0x41A8BCu) {
        ctx->pc = 0x41A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8B8u;
        // 0x41a8bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A8C0u;
        goto label_fallthrough_0x41a8b8;
    }
    ctx->pc = 0x41A8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A8B8u;
        // 0x41a8bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41a8b8:
    ctx->pc = 0x41A8C0u;
}
