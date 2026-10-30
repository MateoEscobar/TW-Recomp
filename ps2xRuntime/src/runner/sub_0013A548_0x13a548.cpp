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

// Function: sub_0013A548
// Address: 0x13a548 - 0x13a818
void sub_0013A548_0x13a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A548_0x13a548");
#endif

    switch (ctx->pc) {
        case 0x13a548u: goto label_13a548;
        case 0x13a54cu: goto label_13a54c;
        case 0x13a550u: goto label_13a550;
        case 0x13a554u: goto label_13a554;
        case 0x13a558u: goto label_13a558;
        case 0x13a55cu: goto label_13a55c;
        case 0x13a560u: goto label_13a560;
        case 0x13a564u: goto label_13a564;
        case 0x13a568u: goto label_13a568;
        case 0x13a56cu: goto label_13a56c;
        case 0x13a570u: goto label_13a570;
        case 0x13a574u: goto label_13a574;
        case 0x13a578u: goto label_13a578;
        case 0x13a57cu: goto label_13a57c;
        case 0x13a580u: goto label_13a580;
        case 0x13a584u: goto label_13a584;
        case 0x13a588u: goto label_13a588;
        case 0x13a58cu: goto label_13a58c;
        case 0x13a590u: goto label_13a590;
        case 0x13a594u: goto label_13a594;
        case 0x13a598u: goto label_13a598;
        case 0x13a59cu: goto label_13a59c;
        case 0x13a5a0u: goto label_13a5a0;
        case 0x13a5a4u: goto label_13a5a4;
        case 0x13a5a8u: goto label_13a5a8;
        case 0x13a5acu: goto label_13a5ac;
        case 0x13a5b0u: goto label_13a5b0;
        case 0x13a5b4u: goto label_13a5b4;
        case 0x13a5b8u: goto label_13a5b8;
        case 0x13a5bcu: goto label_13a5bc;
        case 0x13a5c0u: goto label_13a5c0;
        case 0x13a5c4u: goto label_13a5c4;
        case 0x13a5c8u: goto label_13a5c8;
        case 0x13a5ccu: goto label_13a5cc;
        case 0x13a5d0u: goto label_13a5d0;
        case 0x13a5d4u: goto label_13a5d4;
        case 0x13a5d8u: goto label_13a5d8;
        case 0x13a5dcu: goto label_13a5dc;
        case 0x13a5e0u: goto label_13a5e0;
        case 0x13a5e4u: goto label_13a5e4;
        case 0x13a5e8u: goto label_13a5e8;
        case 0x13a5ecu: goto label_13a5ec;
        case 0x13a5f0u: goto label_13a5f0;
        case 0x13a5f4u: goto label_13a5f4;
        case 0x13a5f8u: goto label_13a5f8;
        case 0x13a5fcu: goto label_13a5fc;
        case 0x13a600u: goto label_13a600;
        case 0x13a604u: goto label_13a604;
        case 0x13a608u: goto label_13a608;
        case 0x13a60cu: goto label_13a60c;
        case 0x13a610u: goto label_13a610;
        case 0x13a614u: goto label_13a614;
        case 0x13a618u: goto label_13a618;
        case 0x13a61cu: goto label_13a61c;
        case 0x13a620u: goto label_13a620;
        case 0x13a624u: goto label_13a624;
        case 0x13a628u: goto label_13a628;
        case 0x13a62cu: goto label_13a62c;
        case 0x13a630u: goto label_13a630;
        case 0x13a634u: goto label_13a634;
        case 0x13a638u: goto label_13a638;
        case 0x13a63cu: goto label_13a63c;
        case 0x13a640u: goto label_13a640;
        case 0x13a644u: goto label_13a644;
        case 0x13a648u: goto label_13a648;
        case 0x13a64cu: goto label_13a64c;
        case 0x13a650u: goto label_13a650;
        case 0x13a654u: goto label_13a654;
        case 0x13a658u: goto label_13a658;
        case 0x13a65cu: goto label_13a65c;
        case 0x13a660u: goto label_13a660;
        case 0x13a664u: goto label_13a664;
        case 0x13a668u: goto label_13a668;
        case 0x13a66cu: goto label_13a66c;
        case 0x13a670u: goto label_13a670;
        case 0x13a674u: goto label_13a674;
        case 0x13a678u: goto label_13a678;
        case 0x13a67cu: goto label_13a67c;
        case 0x13a680u: goto label_13a680;
        case 0x13a684u: goto label_13a684;
        case 0x13a688u: goto label_13a688;
        case 0x13a68cu: goto label_13a68c;
        case 0x13a690u: goto label_13a690;
        case 0x13a694u: goto label_13a694;
        case 0x13a698u: goto label_13a698;
        case 0x13a69cu: goto label_13a69c;
        case 0x13a6a0u: goto label_13a6a0;
        case 0x13a6a4u: goto label_13a6a4;
        case 0x13a6a8u: goto label_13a6a8;
        case 0x13a6acu: goto label_13a6ac;
        case 0x13a6b0u: goto label_13a6b0;
        case 0x13a6b4u: goto label_13a6b4;
        case 0x13a6b8u: goto label_13a6b8;
        case 0x13a6bcu: goto label_13a6bc;
        case 0x13a6c0u: goto label_13a6c0;
        case 0x13a6c4u: goto label_13a6c4;
        case 0x13a6c8u: goto label_13a6c8;
        case 0x13a6ccu: goto label_13a6cc;
        case 0x13a6d0u: goto label_13a6d0;
        case 0x13a6d4u: goto label_13a6d4;
        case 0x13a6d8u: goto label_13a6d8;
        case 0x13a6dcu: goto label_13a6dc;
        case 0x13a6e0u: goto label_13a6e0;
        case 0x13a6e4u: goto label_13a6e4;
        case 0x13a6e8u: goto label_13a6e8;
        case 0x13a6ecu: goto label_13a6ec;
        case 0x13a6f0u: goto label_13a6f0;
        case 0x13a6f4u: goto label_13a6f4;
        case 0x13a6f8u: goto label_13a6f8;
        case 0x13a6fcu: goto label_13a6fc;
        case 0x13a700u: goto label_13a700;
        case 0x13a704u: goto label_13a704;
        case 0x13a708u: goto label_13a708;
        case 0x13a70cu: goto label_13a70c;
        case 0x13a710u: goto label_13a710;
        case 0x13a714u: goto label_13a714;
        case 0x13a718u: goto label_13a718;
        case 0x13a71cu: goto label_13a71c;
        case 0x13a720u: goto label_13a720;
        case 0x13a724u: goto label_13a724;
        case 0x13a728u: goto label_13a728;
        case 0x13a72cu: goto label_13a72c;
        case 0x13a730u: goto label_13a730;
        case 0x13a734u: goto label_13a734;
        case 0x13a738u: goto label_13a738;
        case 0x13a73cu: goto label_13a73c;
        case 0x13a740u: goto label_13a740;
        case 0x13a744u: goto label_13a744;
        case 0x13a748u: goto label_13a748;
        case 0x13a74cu: goto label_13a74c;
        case 0x13a750u: goto label_13a750;
        case 0x13a754u: goto label_13a754;
        case 0x13a758u: goto label_13a758;
        case 0x13a75cu: goto label_13a75c;
        case 0x13a760u: goto label_13a760;
        case 0x13a764u: goto label_13a764;
        case 0x13a768u: goto label_13a768;
        case 0x13a76cu: goto label_13a76c;
        case 0x13a770u: goto label_13a770;
        case 0x13a774u: goto label_13a774;
        case 0x13a778u: goto label_13a778;
        case 0x13a77cu: goto label_13a77c;
        case 0x13a780u: goto label_13a780;
        case 0x13a784u: goto label_13a784;
        case 0x13a788u: goto label_13a788;
        case 0x13a78cu: goto label_13a78c;
        case 0x13a790u: goto label_13a790;
        case 0x13a794u: goto label_13a794;
        case 0x13a798u: goto label_13a798;
        case 0x13a79cu: goto label_13a79c;
        case 0x13a7a0u: goto label_13a7a0;
        case 0x13a7a4u: goto label_13a7a4;
        case 0x13a7a8u: goto label_13a7a8;
        case 0x13a7acu: goto label_13a7ac;
        case 0x13a7b0u: goto label_13a7b0;
        case 0x13a7b4u: goto label_13a7b4;
        case 0x13a7b8u: goto label_13a7b8;
        case 0x13a7bcu: goto label_13a7bc;
        case 0x13a7c0u: goto label_13a7c0;
        case 0x13a7c4u: goto label_13a7c4;
        case 0x13a7c8u: goto label_13a7c8;
        case 0x13a7ccu: goto label_13a7cc;
        case 0x13a7d0u: goto label_13a7d0;
        case 0x13a7d4u: goto label_13a7d4;
        case 0x13a7d8u: goto label_13a7d8;
        case 0x13a7dcu: goto label_13a7dc;
        case 0x13a7e0u: goto label_13a7e0;
        case 0x13a7e4u: goto label_13a7e4;
        case 0x13a7e8u: goto label_13a7e8;
        case 0x13a7ecu: goto label_13a7ec;
        case 0x13a7f0u: goto label_13a7f0;
        case 0x13a7f4u: goto label_13a7f4;
        case 0x13a7f8u: goto label_13a7f8;
        case 0x13a7fcu: goto label_13a7fc;
        case 0x13a800u: goto label_13a800;
        case 0x13a804u: goto label_13a804;
        case 0x13a808u: goto label_13a808;
        case 0x13a80cu: goto label_13a80c;
        case 0x13a810u: goto label_13a810;
        case 0x13a814u: goto label_13a814;
        default: break;
    }

    ctx->pc = 0x13a548u;

label_13a548:
    // 0x13a548: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_13a54c:
    // 0x13a54c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x13a54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_13a550:
    // 0x13a550: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x13a550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_13a554:
    // 0x13a554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a558:
    // 0x13a558: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_13a55c:
    // 0x13a55c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x13a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_13a560:
    // 0x13a560: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13a560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_13a564:
    // 0x13a564: 0x82420331  lb          $v0, 0x331($s2)
    ctx->pc = 0x13a564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 817)));
label_13a568:
    // 0x13a568: 0x44000a3  bltz        $v0, . + 4 + (0xA3 << 2)
label_13a56c:
    if (ctx->pc == 0x13A56Cu) {
        ctx->pc = 0x13A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A568u;
        // 0x13a56c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A570u;
        goto label_13a570;
    }
    ctx->pc = 0x13A568u;
    {
        const bool branch_taken_0x13a568 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x13A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A568u;
        // 0x13a56c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a568) {
            ctx->pc = 0x13A7F8u;
            goto label_13a7f8;
        }
    }
    ctx->pc = 0x13A570u;
label_13a570:
    // 0x13a570: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_13a574:
    if (ctx->pc == 0x13A574u) {
        ctx->pc = 0x13A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A570u;
        // 0x13a574: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A578u;
        goto label_13a578;
    }
    ctx->pc = 0x13A570u;
    {
        const bool branch_taken_0x13a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A570u;
        // 0x13a574: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a570) {
            ctx->pc = 0x13A7FCu;
            goto label_13a7fc;
        }
    }
    ctx->pc = 0x13A578u;
label_13a578:
    // 0x13a578: 0x8e450320  lw          $a1, 0x320($s2)
    ctx->pc = 0x13a578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_13a57c:
    // 0x13a57c: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
label_13a580:
    if (ctx->pc == 0x13A580u) {
        ctx->pc = 0x13A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A57Cu;
        // 0x13a580: 0x9242032e  lbu         $v0, 0x32E($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 814)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A584u;
        goto label_13a584;
    }
    ctx->pc = 0x13A57Cu;
    {
        const bool branch_taken_0x13a57c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a57c) {
            ctx->pc = 0x13A580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A57Cu;
            // 0x13a580: 0x9242032e  lbu         $v0, 0x32E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 814)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A594u;
            goto label_13a594;
        }
    }
    ctx->pc = 0x13A584u;
label_13a584:
    // 0x13a584: 0xc04e8ec  jal         func_13A3B0
label_13a588:
    if (ctx->pc == 0x13A588u) {
        ctx->pc = 0x13A58Cu;
        goto label_13a58c;
    }
    ctx->pc = 0x13A584u;
    SET_GPR_U32(ctx, 31, 0x13A58Cu);
    ctx->pc = 0x13A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3B0u, 0x13A584u, 0x13A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A58Cu;
label_13a58c:
    // 0x13a58c: 0x1000009b  b           . + 4 + (0x9B << 2)
label_13a590:
    if (ctx->pc == 0x13A590u) {
        ctx->pc = 0x13A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A58Cu;
        // 0x13a590: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A594u;
        goto label_13a594;
    }
    ctx->pc = 0x13A58Cu;
    {
        const bool branch_taken_0x13a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A58Cu;
        // 0x13a590: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a58c) {
            ctx->pc = 0x13A7FCu;
            goto label_13a7fc;
        }
    }
    ctx->pc = 0x13A594u;
label_13a594:
    // 0x13a594: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_13a598:
    if (ctx->pc == 0x13A598u) {
        ctx->pc = 0x13A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A594u;
        // 0x13a598: 0x82450332  lb          $a1, 0x332($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 818)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A59Cu;
        goto label_13a59c;
    }
    ctx->pc = 0x13A594u;
    {
        const bool branch_taken_0x13a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a594) {
            ctx->pc = 0x13A598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A594u;
            // 0x13a598: 0x82450332  lb          $a1, 0x332($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 818)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A5A8u;
            goto label_13a5a8;
        }
    }
    ctx->pc = 0x13A59Cu;
label_13a59c:
    // 0x13a59c: 0xc04ea06  jal         func_13A818
label_13a5a0:
    if (ctx->pc == 0x13A5A0u) {
        ctx->pc = 0x13A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A59Cu;
        // 0x13a5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A5A4u;
        goto label_13a5a4;
    }
    ctx->pc = 0x13A59Cu;
    SET_GPR_U32(ctx, 31, 0x13A5A4u);
    ctx->pc = 0x13A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A59Cu;
    // 0x13a5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A818u, 0x13A59Cu, 0x13A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5A4u;
label_13a5a4:
    // 0x13a5a4: 0x82450332  lb          $a1, 0x332($s2)
    ctx->pc = 0x13a5a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 818)));
label_13a5a8:
    // 0x13a5a8: 0x4a00075  bltz        $a1, . + 4 + (0x75 << 2)
label_13a5ac:
    if (ctx->pc == 0x13A5ACu) {
        ctx->pc = 0x13A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5A8u;
        // 0x13a5ac: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A5B0u;
        goto label_13a5b0;
    }
    ctx->pc = 0x13A5A8u;
    {
        const bool branch_taken_0x13a5a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x13A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5A8u;
        // 0x13a5ac: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5a8) {
            ctx->pc = 0x13A780u;
            goto label_13a780;
        }
    }
    ctx->pc = 0x13A5B0u;
label_13a5b0:
    // 0x13a5b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a5b4:
    // 0x13a5b4: 0x24a501e0  addiu       $a1, $a1, 0x1E0
    ctx->pc = 0x13a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
label_13a5b8:
    // 0x13a5b8: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x13a5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_13a5bc:
    // 0x13a5bc: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x13a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_13a5c0:
    // 0x13a5c0: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x13a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_13a5c4:
    // 0x13a5c4: 0x40f809  jalr        $v0
label_13a5c8:
    if (ctx->pc == 0x13A5C8u) {
        ctx->pc = 0x13A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5C4u;
        // 0x13a5c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A5CCu;
        goto label_13a5cc;
    }
    ctx->pc = 0x13A5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A5CCu);
        ctx->pc = 0x13A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5C4u;
        // 0x13a5c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5C4u, 0x13A5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A5CCu;
label_13a5cc:
    // 0x13a5cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a5d0:
    // 0x13a5d0: 0x82450332  lb          $a1, 0x332($s2)
    ctx->pc = 0x13a5d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 818)));
label_13a5d4:
    // 0x13a5d4: 0x846401c0  lh          $a0, 0x1C0($v1)
    ctx->pc = 0x13a5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 448)));
label_13a5d8:
    // 0x13a5d8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13a5dc:
    // 0x13a5dc: 0x8c6201c4  lw          $v0, 0x1C4($v1)
    ctx->pc = 0x13a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 452)));
label_13a5e0:
    // 0x13a5e0: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x13a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
label_13a5e4:
    // 0x13a5e4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x13a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_13a5e8:
    // 0x13a5e8: 0x40f809  jalr        $v0
label_13a5ec:
    if (ctx->pc == 0x13A5ECu) {
        ctx->pc = 0x13A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5E8u;
        // 0x13a5ec: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A5F0u;
        goto label_13a5f0;
    }
    ctx->pc = 0x13A5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A5F0u);
        ctx->pc = 0x13A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5E8u;
        // 0x13a5ec: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5E8u, 0x13A5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A5F0u;
label_13a5f0:
    // 0x13a5f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a5f4:
    // 0x13a5f4: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13a5f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13a5f8:
    // 0x13a5f8: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13a5fc:
    // 0x13a5fc: 0x40f809  jalr        $v0
label_13a600:
    if (ctx->pc == 0x13A600u) {
        ctx->pc = 0x13A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5FCu;
        // 0x13a600: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A604u;
        goto label_13a604;
    }
    ctx->pc = 0x13A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A604u);
        ctx->pc = 0x13A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5FCu;
        // 0x13a600: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5FCu, 0x13A604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A604u;
label_13a604:
    // 0x13a604: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a604u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a608:
    // 0x13a608: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a60c:
    // 0x13a60c: 0x7e430270  sq          $v1, 0x270($s2)
    ctx->pc = 0x13a60cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 624), GPR_VEC(ctx, 3));
label_13a610:
    // 0x13a610: 0x84a40220  lh          $a0, 0x220($a1)
    ctx->pc = 0x13a610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
label_13a614:
    // 0x13a614: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x13a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
label_13a618:
    // 0x13a618: 0x40f809  jalr        $v0
label_13a61c:
    if (ctx->pc == 0x13A61Cu) {
        ctx->pc = 0x13A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A618u;
        // 0x13a61c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A620u;
        goto label_13a620;
    }
    ctx->pc = 0x13A618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A620u);
        ctx->pc = 0x13A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A618u;
        // 0x13a61c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A618u, 0x13A620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A620u;
label_13a620:
    // 0x13a620: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13a620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13a624:
    // 0x13a624: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x13a624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_13a628:
    // 0x13a628: 0x8e420320  lw          $v0, 0x320($s2)
    ctx->pc = 0x13a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_13a62c:
    // 0x13a62c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x13a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_13a630:
    // 0x13a630: 0x7e430310  sq          $v1, 0x310($s2)
    ctx->pc = 0x13a630u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 784), GPR_VEC(ctx, 3));
label_13a634:
    // 0x13a634: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x13a634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a638:
    // 0x13a638: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_13a63c:
    // 0x13a63c: 0x84c40218  lh          $a0, 0x218($a2)
    ctx->pc = 0x13a63cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 536)));
label_13a640:
    // 0x13a640: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x13a640u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_13a644:
    // 0x13a644: 0x8cc2021c  lw          $v0, 0x21C($a2)
    ctx->pc = 0x13a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 540)));
label_13a648:
    // 0x13a648: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x13a648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_13a64c:
    // 0x13a64c: 0x40f809  jalr        $v0
label_13a650:
    if (ctx->pc == 0x13A650u) {
        ctx->pc = 0x13A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A64Cu;
        // 0x13a650: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A654u;
        goto label_13a654;
    }
    ctx->pc = 0x13A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A654u);
        ctx->pc = 0x13A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A64Cu;
        // 0x13a650: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A64Cu, 0x13A654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A654u;
label_13a654:
    // 0x13a654: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13a658:
    // 0x13a658: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a65c:
    // 0x13a65c: 0xc136afa  jal         func_4DABE8
label_13a660:
    if (ctx->pc == 0x13A660u) {
        ctx->pc = 0x13A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A65Cu;
        // 0x13a660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A664u;
        goto label_13a664;
    }
    ctx->pc = 0x13A65Cu;
    SET_GPR_U32(ctx, 31, 0x13A664u);
    ctx->pc = 0x13A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A65Cu;
    // 0x13a660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x13A65Cu, 0x13A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A664u;
label_13a664:
    // 0x13a664: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x13a664u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13a668:
    // 0x13a668: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13a668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_13a66c:
    // 0x13a66c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x13a66cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13a670:
    // 0x13a670: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x13a670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13a674:
    // 0x13a674: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x13a674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13a678:
    // 0x13a678: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13a678u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_13a67c:
    // 0x13a67c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13a67cu;
    // VWAITQ (Q already resolved in this runtime)
label_13a680:
    // 0x13a680: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x13a680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_13a684:
    // 0x13a684: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x13a684u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_13a688:
    // 0x13a688: 0x3c013e9c  lui         $at, 0x3E9C
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16028 << 16));
label_13a68c:
    // 0x13a68c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x13a68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_13a690:
    // 0x13a690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13a690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13a694:
    // 0x13a694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13a694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a698:
    // 0x13a698: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_13a69c:
    // 0x13a69c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a69cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_13a6a0:
    // 0x13a6a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a6a4:
    // 0x13a6a4: 0xe6400328  swc1        $f0, 0x328($s2)
    ctx->pc = 0x13a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 808), bits); }
label_13a6a8:
    // 0x13a6a8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x13a6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_13a6ac:
    // 0x13a6ac: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x13a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_13a6b0:
    // 0x13a6b0: 0x40f809  jalr        $v0
label_13a6b4:
    if (ctx->pc == 0x13A6B4u) {
        ctx->pc = 0x13A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6B0u;
        // 0x13a6b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6B8u;
        goto label_13a6b8;
    }
    ctx->pc = 0x13A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A6B8u);
        ctx->pc = 0x13A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6B0u;
        // 0x13a6b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A6B0u, 0x13A6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A6B8u;
label_13a6b8:
    // 0x13a6b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a6bc:
    // 0x13a6bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13a6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a6c0:
    // 0x13a6c0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x13a6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13a6c4:
    // 0x13a6c4: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x13a6c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_13a6c8:
    // 0x13a6c8: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x13a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_13a6cc:
    // 0x13a6cc: 0x40f809  jalr        $v0
label_13a6d0:
    if (ctx->pc == 0x13A6D0u) {
        ctx->pc = 0x13A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6CCu;
        // 0x13a6d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6D4u;
        goto label_13a6d4;
    }
    ctx->pc = 0x13A6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A6D4u);
        ctx->pc = 0x13A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6CCu;
        // 0x13a6d0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A6CCu, 0x13A6D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A6D4u;
label_13a6d4:
    // 0x13a6d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13a6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a6d8:
    // 0x13a6d8: 0xc0cd8ec  jal         func_3363B0
label_13a6dc:
    if (ctx->pc == 0x13A6DCu) {
        ctx->pc = 0x13A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6D8u;
        // 0x13a6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6E0u;
        goto label_13a6e0;
    }
    ctx->pc = 0x13A6D8u;
    SET_GPR_U32(ctx, 31, 0x13A6E0u);
    ctx->pc = 0x13A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6D8u;
    // 0x13a6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x13A6D8u, 0x13A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6E0u;
label_13a6e0:
    // 0x13a6e0: 0xc64c0328  lwc1        $f12, 0x328($s2)
    ctx->pc = 0x13a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13a6e4:
    // 0x13a6e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a6e8:
    // 0x13a6e8: 0xc136b24  jal         func_4DAC90
label_13a6ec:
    if (ctx->pc == 0x13A6ECu) {
        ctx->pc = 0x13A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A6E8u;
        // 0x13a6ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A6F0u;
        goto label_13a6f0;
    }
    ctx->pc = 0x13A6E8u;
    SET_GPR_U32(ctx, 31, 0x13A6F0u);
    ctx->pc = 0x13A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6E8u;
    // 0x13a6ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13A6E8u, 0x13A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6F0u;
label_13a6f0:
    // 0x13a6f0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13a6f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13a6f4:
    // 0x13a6f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a6f8:
    // 0x13a6f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13a6fc:
    // 0x13a6fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x13a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13a700:
    // 0x13a700: 0xc136b18  jal         func_4DAC60
label_13a704:
    if (ctx->pc == 0x13A704u) {
        ctx->pc = 0x13A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A700u;
        // 0x13a704: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A708u;
        goto label_13a708;
    }
    ctx->pc = 0x13A700u;
    SET_GPR_U32(ctx, 31, 0x13A708u);
    ctx->pc = 0x13A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A700u;
    // 0x13a704: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x13A700u, 0x13A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A708u;
label_13a708:
    // 0x13a708: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x13a708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13a70c:
    // 0x13a70c: 0x9243032e  lbu         $v1, 0x32E($s2)
    ctx->pc = 0x13a70cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 814)));
label_13a710:
    // 0x13a710: 0x7e420180  sq          $v0, 0x180($s2)
    ctx->pc = 0x13a710u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 384), GPR_VEC(ctx, 2));
label_13a714:
    // 0x13a714: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_13a718:
    if (ctx->pc == 0x13A718u) {
        ctx->pc = 0x13A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A714u;
        // 0x13a718: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A71Cu;
        goto label_13a71c;
    }
    ctx->pc = 0x13A714u;
    {
        const bool branch_taken_0x13a714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A714u;
        // 0x13a718: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a714) {
            ctx->pc = 0x13A780u;
            goto label_13a780;
        }
    }
    ctx->pc = 0x13A71Cu;
label_13a71c:
    // 0x13a71c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a720:
    // 0x13a720: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13a720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13a724:
    // 0x13a724: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13a728:
    // 0x13a728: 0x40f809  jalr        $v0
label_13a72c:
    if (ctx->pc == 0x13A72Cu) {
        ctx->pc = 0x13A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A728u;
        // 0x13a72c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A730u;
        goto label_13a730;
    }
    ctx->pc = 0x13A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A730u);
        ctx->pc = 0x13A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A728u;
        // 0x13a72c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A728u, 0x13A730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A730u;
label_13a730:
    // 0x13a730: 0xc047e6c  jal         func_11F9B0
label_13a734:
    if (ctx->pc == 0x13A734u) {
        ctx->pc = 0x13A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A730u;
        // 0x13a734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A738u;
        goto label_13a738;
    }
    ctx->pc = 0x13A730u;
    SET_GPR_U32(ctx, 31, 0x13A738u);
    ctx->pc = 0x13A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A730u;
    // 0x13a734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x13A730u, 0x13A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A738u;
label_13a738:
    // 0x13a738: 0x50520012  beql        $v0, $s2, . + 4 + (0x12 << 2)
label_13a73c:
    if (ctx->pc == 0x13A73Cu) {
        ctx->pc = 0x13A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A738u;
        // 0x13a73c: 0x82420333  lb          $v0, 0x333($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A740u;
        goto label_13a740;
    }
    ctx->pc = 0x13A738u;
    {
        const bool branch_taken_0x13a738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x13a738) {
            ctx->pc = 0x13A73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A738u;
            // 0x13a73c: 0x82420333  lb          $v0, 0x333($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A784u;
            goto label_13a784;
        }
    }
    ctx->pc = 0x13A740u;
label_13a740:
    // 0x13a740: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x13a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_13a744:
    // 0x13a744: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x13a744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_13a748:
    // 0x13a748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13a748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a74c:
    // 0x13a74c: 0xc04828c  jal         func_120A30
label_13a750:
    if (ctx->pc == 0x13A750u) {
        ctx->pc = 0x13A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A74Cu;
        // 0x13a750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A754u;
        goto label_13a754;
    }
    ctx->pc = 0x13A74Cu;
    SET_GPR_U32(ctx, 31, 0x13A754u);
    ctx->pc = 0x13A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A74Cu;
    // 0x13a750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x13A74Cu, 0x13A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A754u;
label_13a754:
    // 0x13a754: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a758:
    // 0x13a758: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x13a758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_13a75c:
    // 0x13a75c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x13a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_13a760:
    // 0x13a760: 0x40f809  jalr        $v0
label_13a764:
    if (ctx->pc == 0x13A764u) {
        ctx->pc = 0x13A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A760u;
        // 0x13a764: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A768u;
        goto label_13a768;
    }
    ctx->pc = 0x13A760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A768u);
        ctx->pc = 0x13A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A760u;
        // 0x13a764: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A760u, 0x13A768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A768u;
label_13a768:
    // 0x13a768: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13a768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a76c:
    // 0x13a76c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a770:
    // 0x13a770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13a774:
    // 0x13a774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13a774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a778:
    // 0x13a778: 0xc047b82  jal         func_11EE08
label_13a77c:
    if (ctx->pc == 0x13A77Cu) {
        ctx->pc = 0x13A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A778u;
        // 0x13a77c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A780u;
        goto label_13a780;
    }
    ctx->pc = 0x13A778u;
    SET_GPR_U32(ctx, 31, 0x13A780u);
    ctx->pc = 0x13A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A778u;
    // 0x13a77c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x13A778u, 0x13A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A780u;
label_13a780:
    // 0x13a780: 0x82420333  lb          $v0, 0x333($s2)
    ctx->pc = 0x13a780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
label_13a784:
    // 0x13a784: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_13a788:
    if (ctx->pc == 0x13A788u) {
        ctx->pc = 0x13A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A784u;
        // 0x13a788: 0x92430333  lbu         $v1, 0x333($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A78Cu;
        goto label_13a78c;
    }
    ctx->pc = 0x13A784u;
    {
        const bool branch_taken_0x13a784 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x13A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A784u;
        // 0x13a788: 0x92430333  lbu         $v1, 0x333($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 819)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a784) {
            ctx->pc = 0x13A798u;
            goto label_13a798;
        }
    }
    ctx->pc = 0x13A78Cu;
label_13a78c:
    // 0x13a78c: 0x82420332  lb          $v0, 0x332($s2)
    ctx->pc = 0x13a78cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 818)));
label_13a790:
    // 0x13a790: 0xa2430332  sb          $v1, 0x332($s2)
    ctx->pc = 0x13a790u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 818), (uint8_t)GPR_U32(ctx, 3));
label_13a794:
    // 0x13a794: 0xa2420333  sb          $v0, 0x333($s2)
    ctx->pc = 0x13a794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 819), (uint8_t)GPR_U32(ctx, 2));
label_13a798:
    // 0x13a798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13a79c:
    // 0x13a79c: 0x0  nop
    ctx->pc = 0x13a79cu;
    // NOP
label_13a7a0:
    // 0x13a7a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x13a7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13a7a4:
    // 0x13a7a4: 0x0  nop
    ctx->pc = 0x13a7a4u;
    // NOP
label_13a7a8:
    // 0x13a7a8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_13a7ac:
    if (ctx->pc == 0x13A7ACu) {
        ctx->pc = 0x13A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7A8u;
        // 0x13a7ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7B0u;
        goto label_13a7b0;
    }
    ctx->pc = 0x13A7A8u;
    {
        const bool branch_taken_0x13a7a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7A8u;
        // 0x13a7ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7a8) {
            ctx->pc = 0x13A7D8u;
            goto label_13a7d8;
        }
    }
    ctx->pc = 0x13A7B0u;
label_13a7b0:
    // 0x13a7b0: 0x8c43b29c  lw          $v1, -0x4D64($v0)
    ctx->pc = 0x13a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947484)));
label_13a7b4:
    // 0x13a7b4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_13a7b8:
    if (ctx->pc == 0x13A7B8u) {
        ctx->pc = 0x13A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7B4u;
        // 0x13a7b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7BCu;
        goto label_13a7bc;
    }
    ctx->pc = 0x13A7B4u;
    {
        const bool branch_taken_0x13a7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7B4u;
        // 0x13a7b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7b4) {
            ctx->pc = 0x13A7D8u;
            goto label_13a7d8;
        }
    }
    ctx->pc = 0x13A7BCu;
label_13a7bc:
    // 0x13a7bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a7c0:
    // 0x13a7c0: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x13a7c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_13a7c4:
    // 0x13a7c4: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x13a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_13a7c8:
    // 0x13a7c8: 0x60f809  jalr        $v1
label_13a7cc:
    if (ctx->pc == 0x13A7CCu) {
        ctx->pc = 0x13A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7C8u;
        // 0x13a7cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7D0u;
        goto label_13a7d0;
    }
    ctx->pc = 0x13A7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13A7D0u);
        ctx->pc = 0x13A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7C8u;
        // 0x13a7cc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A7C8u, 0x13A7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A7D0u;
label_13a7d0:
    // 0x13a7d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_13a7d4:
    if (ctx->pc == 0x13A7D4u) {
        ctx->pc = 0x13A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7D0u;
        // 0x13a7d4: 0xa240032e  sb          $zero, 0x32E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 814), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7D8u;
        goto label_13a7d8;
    }
    ctx->pc = 0x13A7D0u;
    {
        const bool branch_taken_0x13a7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7D0u;
        // 0x13a7d4: 0xa240032e  sb          $zero, 0x32E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 814), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a7d0) {
            ctx->pc = 0x13A7F8u;
            goto label_13a7f8;
        }
    }
    ctx->pc = 0x13A7D8u;
label_13a7d8:
    // 0x13a7d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13a7dc:
    // 0x13a7dc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x13a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_13a7e0:
    // 0x13a7e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13a7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13a7e4:
    // 0x13a7e4: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x13a7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_13a7e8:
    // 0x13a7e8: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x13a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_13a7ec:
    // 0x13a7ec: 0x60f809  jalr        $v1
label_13a7f0:
    if (ctx->pc == 0x13A7F0u) {
        ctx->pc = 0x13A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7ECu;
        // 0x13a7f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A7F4u;
        goto label_13a7f4;
    }
    ctx->pc = 0x13A7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13A7F4u);
        ctx->pc = 0x13A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7ECu;
        // 0x13a7f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A7ECu, 0x13A7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13A7F4u;
label_13a7f4:
    // 0x13a7f4: 0xa240032e  sb          $zero, 0x32E($s2)
    ctx->pc = 0x13a7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 814), (uint8_t)GPR_U32(ctx, 0));
label_13a7f8:
    // 0x13a7f8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13a7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13a7fc:
    // 0x13a7fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x13a7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13a800:
    // 0x13a800: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13a800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13a804:
    // 0x13a804: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13a808:
    // 0x13a808: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x13a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13a80c:
    // 0x13a80c: 0x3e00008  jr          $ra
label_13a810:
    if (ctx->pc == 0x13A810u) {
        ctx->pc = 0x13A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A80Cu;
        // 0x13a810: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13A814u;
        goto label_13a814;
    }
    ctx->pc = 0x13A80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A80Cu;
        // 0x13a810: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A814u;
label_13a814:
    // 0x13a814: 0x0  nop
    ctx->pc = 0x13a814u;
    // NOP
    ctx->pc = 0x13a818u;
}
