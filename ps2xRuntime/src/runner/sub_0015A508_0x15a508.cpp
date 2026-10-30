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

// Function: sub_0015A508
// Address: 0x15a508 - 0x15a7a8
void sub_0015A508_0x15a508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A508_0x15a508");
#endif

    switch (ctx->pc) {
        case 0x15a508u: goto label_15a508;
        case 0x15a50cu: goto label_15a50c;
        case 0x15a510u: goto label_15a510;
        case 0x15a514u: goto label_15a514;
        case 0x15a518u: goto label_15a518;
        case 0x15a51cu: goto label_15a51c;
        case 0x15a520u: goto label_15a520;
        case 0x15a524u: goto label_15a524;
        case 0x15a528u: goto label_15a528;
        case 0x15a52cu: goto label_15a52c;
        case 0x15a530u: goto label_15a530;
        case 0x15a534u: goto label_15a534;
        case 0x15a538u: goto label_15a538;
        case 0x15a53cu: goto label_15a53c;
        case 0x15a540u: goto label_15a540;
        case 0x15a544u: goto label_15a544;
        case 0x15a548u: goto label_15a548;
        case 0x15a54cu: goto label_15a54c;
        case 0x15a550u: goto label_15a550;
        case 0x15a554u: goto label_15a554;
        case 0x15a558u: goto label_15a558;
        case 0x15a55cu: goto label_15a55c;
        case 0x15a560u: goto label_15a560;
        case 0x15a564u: goto label_15a564;
        case 0x15a568u: goto label_15a568;
        case 0x15a56cu: goto label_15a56c;
        case 0x15a570u: goto label_15a570;
        case 0x15a574u: goto label_15a574;
        case 0x15a578u: goto label_15a578;
        case 0x15a57cu: goto label_15a57c;
        case 0x15a580u: goto label_15a580;
        case 0x15a584u: goto label_15a584;
        case 0x15a588u: goto label_15a588;
        case 0x15a58cu: goto label_15a58c;
        case 0x15a590u: goto label_15a590;
        case 0x15a594u: goto label_15a594;
        case 0x15a598u: goto label_15a598;
        case 0x15a59cu: goto label_15a59c;
        case 0x15a5a0u: goto label_15a5a0;
        case 0x15a5a4u: goto label_15a5a4;
        case 0x15a5a8u: goto label_15a5a8;
        case 0x15a5acu: goto label_15a5ac;
        case 0x15a5b0u: goto label_15a5b0;
        case 0x15a5b4u: goto label_15a5b4;
        case 0x15a5b8u: goto label_15a5b8;
        case 0x15a5bcu: goto label_15a5bc;
        case 0x15a5c0u: goto label_15a5c0;
        case 0x15a5c4u: goto label_15a5c4;
        case 0x15a5c8u: goto label_15a5c8;
        case 0x15a5ccu: goto label_15a5cc;
        case 0x15a5d0u: goto label_15a5d0;
        case 0x15a5d4u: goto label_15a5d4;
        case 0x15a5d8u: goto label_15a5d8;
        case 0x15a5dcu: goto label_15a5dc;
        case 0x15a5e0u: goto label_15a5e0;
        case 0x15a5e4u: goto label_15a5e4;
        case 0x15a5e8u: goto label_15a5e8;
        case 0x15a5ecu: goto label_15a5ec;
        case 0x15a5f0u: goto label_15a5f0;
        case 0x15a5f4u: goto label_15a5f4;
        case 0x15a5f8u: goto label_15a5f8;
        case 0x15a5fcu: goto label_15a5fc;
        case 0x15a600u: goto label_15a600;
        case 0x15a604u: goto label_15a604;
        case 0x15a608u: goto label_15a608;
        case 0x15a60cu: goto label_15a60c;
        case 0x15a610u: goto label_15a610;
        case 0x15a614u: goto label_15a614;
        case 0x15a618u: goto label_15a618;
        case 0x15a61cu: goto label_15a61c;
        case 0x15a620u: goto label_15a620;
        case 0x15a624u: goto label_15a624;
        case 0x15a628u: goto label_15a628;
        case 0x15a62cu: goto label_15a62c;
        case 0x15a630u: goto label_15a630;
        case 0x15a634u: goto label_15a634;
        case 0x15a638u: goto label_15a638;
        case 0x15a63cu: goto label_15a63c;
        case 0x15a640u: goto label_15a640;
        case 0x15a644u: goto label_15a644;
        case 0x15a648u: goto label_15a648;
        case 0x15a64cu: goto label_15a64c;
        case 0x15a650u: goto label_15a650;
        case 0x15a654u: goto label_15a654;
        case 0x15a658u: goto label_15a658;
        case 0x15a65cu: goto label_15a65c;
        case 0x15a660u: goto label_15a660;
        case 0x15a664u: goto label_15a664;
        case 0x15a668u: goto label_15a668;
        case 0x15a66cu: goto label_15a66c;
        case 0x15a670u: goto label_15a670;
        case 0x15a674u: goto label_15a674;
        case 0x15a678u: goto label_15a678;
        case 0x15a67cu: goto label_15a67c;
        case 0x15a680u: goto label_15a680;
        case 0x15a684u: goto label_15a684;
        case 0x15a688u: goto label_15a688;
        case 0x15a68cu: goto label_15a68c;
        case 0x15a690u: goto label_15a690;
        case 0x15a694u: goto label_15a694;
        case 0x15a698u: goto label_15a698;
        case 0x15a69cu: goto label_15a69c;
        case 0x15a6a0u: goto label_15a6a0;
        case 0x15a6a4u: goto label_15a6a4;
        case 0x15a6a8u: goto label_15a6a8;
        case 0x15a6acu: goto label_15a6ac;
        case 0x15a6b0u: goto label_15a6b0;
        case 0x15a6b4u: goto label_15a6b4;
        case 0x15a6b8u: goto label_15a6b8;
        case 0x15a6bcu: goto label_15a6bc;
        case 0x15a6c0u: goto label_15a6c0;
        case 0x15a6c4u: goto label_15a6c4;
        case 0x15a6c8u: goto label_15a6c8;
        case 0x15a6ccu: goto label_15a6cc;
        case 0x15a6d0u: goto label_15a6d0;
        case 0x15a6d4u: goto label_15a6d4;
        case 0x15a6d8u: goto label_15a6d8;
        case 0x15a6dcu: goto label_15a6dc;
        case 0x15a6e0u: goto label_15a6e0;
        case 0x15a6e4u: goto label_15a6e4;
        case 0x15a6e8u: goto label_15a6e8;
        case 0x15a6ecu: goto label_15a6ec;
        case 0x15a6f0u: goto label_15a6f0;
        case 0x15a6f4u: goto label_15a6f4;
        case 0x15a6f8u: goto label_15a6f8;
        case 0x15a6fcu: goto label_15a6fc;
        case 0x15a700u: goto label_15a700;
        case 0x15a704u: goto label_15a704;
        case 0x15a708u: goto label_15a708;
        case 0x15a70cu: goto label_15a70c;
        case 0x15a710u: goto label_15a710;
        case 0x15a714u: goto label_15a714;
        case 0x15a718u: goto label_15a718;
        case 0x15a71cu: goto label_15a71c;
        case 0x15a720u: goto label_15a720;
        case 0x15a724u: goto label_15a724;
        case 0x15a728u: goto label_15a728;
        case 0x15a72cu: goto label_15a72c;
        case 0x15a730u: goto label_15a730;
        case 0x15a734u: goto label_15a734;
        case 0x15a738u: goto label_15a738;
        case 0x15a73cu: goto label_15a73c;
        case 0x15a740u: goto label_15a740;
        case 0x15a744u: goto label_15a744;
        case 0x15a748u: goto label_15a748;
        case 0x15a74cu: goto label_15a74c;
        case 0x15a750u: goto label_15a750;
        case 0x15a754u: goto label_15a754;
        case 0x15a758u: goto label_15a758;
        case 0x15a75cu: goto label_15a75c;
        case 0x15a760u: goto label_15a760;
        case 0x15a764u: goto label_15a764;
        case 0x15a768u: goto label_15a768;
        case 0x15a76cu: goto label_15a76c;
        case 0x15a770u: goto label_15a770;
        case 0x15a774u: goto label_15a774;
        case 0x15a778u: goto label_15a778;
        case 0x15a77cu: goto label_15a77c;
        case 0x15a780u: goto label_15a780;
        case 0x15a784u: goto label_15a784;
        case 0x15a788u: goto label_15a788;
        case 0x15a78cu: goto label_15a78c;
        case 0x15a790u: goto label_15a790;
        case 0x15a794u: goto label_15a794;
        case 0x15a798u: goto label_15a798;
        case 0x15a79cu: goto label_15a79c;
        case 0x15a7a0u: goto label_15a7a0;
        case 0x15a7a4u: goto label_15a7a4;
        default: break;
    }

    ctx->pc = 0x15a508u;

label_15a508:
    // 0x15a508: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15a508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_15a50c:
    // 0x15a50c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15a510:
    // 0x15a510: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x15a510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_15a514:
    // 0x15a514: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x15a514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_15a518:
    // 0x15a518: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x15a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_15a51c:
    // 0x15a51c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x15a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_15a520:
    // 0x15a520: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15a524:
    // 0x15a524: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15a524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15a528:
    // 0x15a528: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15a52c:
    // 0x15a52c: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x15a52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_15a530:
    // 0x15a530: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x15a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_15a534:
    // 0x15a534: 0x40f809  jalr        $v0
label_15a538:
    if (ctx->pc == 0x15A538u) {
        ctx->pc = 0x15A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A534u;
        // 0x15a538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A53Cu;
        goto label_15a53c;
    }
    ctx->pc = 0x15A534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A53Cu);
        ctx->pc = 0x15A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A534u;
        // 0x15a538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A534u, 0x15A53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A53Cu;
label_15a53c:
    // 0x15a53c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15a53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a540:
    // 0x15a540: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15a544:
    // 0x15a544: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15a548:
    // 0x15a548: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_15a54c:
    if (ctx->pc == 0x15A54Cu) {
        ctx->pc = 0x15A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A548u;
        // 0x15a54c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A550u;
        goto label_15a550;
    }
    ctx->pc = 0x15A548u;
    {
        const bool branch_taken_0x15a548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A548u;
        // 0x15a54c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a548) {
            ctx->pc = 0x15A668u;
            goto label_15a668;
        }
    }
    ctx->pc = 0x15A550u;
label_15a550:
    // 0x15a550: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15a554:
    // 0x15a554: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15a558:
    // 0x15a558: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_15a55c:
    if (ctx->pc == 0x15A55Cu) {
        ctx->pc = 0x15A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A558u;
        // 0x15a55c: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A560u;
        goto label_15a560;
    }
    ctx->pc = 0x15A558u;
    {
        const bool branch_taken_0x15a558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A558u;
        // 0x15a55c: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a558) {
            ctx->pc = 0x15A600u;
            goto label_15a600;
        }
    }
    ctx->pc = 0x15A560u;
label_15a560:
    // 0x15a560: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x15a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_15a564:
    // 0x15a564: 0x2610f178  addiu       $s0, $s0, -0xE88
    ctx->pc = 0x15a564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963576));
label_15a568:
    // 0x15a568: 0xc067b9c  jal         func_19EE70
label_15a56c:
    if (ctx->pc == 0x15A56Cu) {
        ctx->pc = 0x15A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A568u;
        // 0x15a56c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A570u;
        goto label_15a570;
    }
    ctx->pc = 0x15A568u;
    SET_GPR_U32(ctx, 31, 0x15A570u);
    ctx->pc = 0x15A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A568u;
    // 0x15a56c: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A568u, 0x15A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A570u;
label_15a570:
    // 0x15a570: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15a570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a574:
    // 0x15a574: 0xc067b9c  jal         func_19EE70
label_15a578:
    if (ctx->pc == 0x15A578u) {
        ctx->pc = 0x15A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A574u;
        // 0x15a578: 0x2404009d  addiu       $a0, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A57Cu;
        goto label_15a57c;
    }
    ctx->pc = 0x15A574u;
    SET_GPR_U32(ctx, 31, 0x15A57Cu);
    ctx->pc = 0x15A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A574u;
    // 0x15a578: 0x2404009d  addiu       $a0, $zero, 0x9D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A574u, 0x15A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A57Cu;
label_15a57c:
    // 0x15a57c: 0x8e44c738  lw          $a0, -0x38C8($s2)
    ctx->pc = 0x15a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15a580:
    // 0x15a580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a584:
    // 0x15a584: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15a584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a588:
    // 0x15a588: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15a588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a58c:
    // 0x15a58c: 0xc10ca28  jal         func_4328A0
label_15a590:
    if (ctx->pc == 0x15A590u) {
        ctx->pc = 0x15A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A58Cu;
        // 0x15a590: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A594u;
        goto label_15a594;
    }
    ctx->pc = 0x15A58Cu;
    SET_GPR_U32(ctx, 31, 0x15A594u);
    ctx->pc = 0x15A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A58Cu;
    // 0x15a590: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15A58Cu, 0x15A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A594u;
label_15a594:
    // 0x15a594: 0x8e50c738  lw          $s0, -0x38C8($s2)
    ctx->pc = 0x15a594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15a598:
    // 0x15a598: 0xc067b9c  jal         func_19EE70
label_15a59c:
    if (ctx->pc == 0x15A59Cu) {
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A598u;
        // 0x15a59c: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5A0u;
        goto label_15a5a0;
    }
    ctx->pc = 0x15A598u;
    SET_GPR_U32(ctx, 31, 0x15A5A0u);
    ctx->pc = 0x15A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A598u;
    // 0x15a59c: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A598u, 0x15A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5A0u;
label_15a5a0:
    // 0x15a5a0: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15a5a4:
    // 0x15a5a4: 0xc067b9c  jal         func_19EE70
label_15a5a8:
    if (ctx->pc == 0x15A5A8u) {
        ctx->pc = 0x15A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5A4u;
        // 0x15a5a8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5ACu;
        goto label_15a5ac;
    }
    ctx->pc = 0x15A5A4u;
    SET_GPR_U32(ctx, 31, 0x15A5ACu);
    ctx->pc = 0x15A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5A4u;
    // 0x15a5a8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A5A4u, 0x15A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5ACu;
label_15a5ac:
    // 0x15a5ac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15a5b0:
    // 0x15a5b0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15a5b4:
    // 0x15a5b4: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15a5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15a5b8:
    // 0x15a5b8: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15a5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15a5bc:
    // 0x15a5bc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15a5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a5c0:
    // 0x15a5c0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15a5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a5c4:
    // 0x15a5c4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15a5c8:
    // 0x15a5c8: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15a5cc:
    // 0x15a5cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a5d0:
    // 0x15a5d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a5d4:
    // 0x15a5d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15a5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a5d8:
    // 0x15a5d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15a5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a5dc:
    // 0x15a5dc: 0x2443f180  addiu       $v1, $v0, -0xE80
    ctx->pc = 0x15a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
label_15a5e0:
    // 0x15a5e0: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15a5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_15a5e4:
    // 0x15a5e4: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15a5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_15a5e8:
    // 0x15a5e8: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15a5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a5ec:
    // 0x15a5ec: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15a5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a5f0:
    // 0x15a5f0: 0xc071c4a  jal         func_1C7128
label_15a5f4:
    if (ctx->pc == 0x15A5F4u) {
        ctx->pc = 0x15A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5F0u;
        // 0x15a5f4: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5F8u;
        goto label_15a5f8;
    }
    ctx->pc = 0x15A5F0u;
    SET_GPR_U32(ctx, 31, 0x15A5F8u);
    ctx->pc = 0x15A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5F0u;
    // 0x15a5f4: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15A5F0u, 0x15A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5F8u;
label_15a5f8:
    // 0x15a5f8: 0x10000062  b           . + 4 + (0x62 << 2)
label_15a5fc:
    if (ctx->pc == 0x15A5FCu) {
        ctx->pc = 0x15A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5F8u;
        // 0x15a5fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A600u;
        goto label_15a600;
    }
    ctx->pc = 0x15A5F8u;
    {
        const bool branch_taken_0x15a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5F8u;
        // 0x15a5fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5f8) {
            ctx->pc = 0x15A784u;
            goto label_15a784;
        }
    }
    ctx->pc = 0x15A600u;
label_15a600:
    // 0x15a600: 0xc067b9c  jal         func_19EE70
label_15a604:
    if (ctx->pc == 0x15A604u) {
        ctx->pc = 0x15A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A600u;
        // 0x15a604: 0x2404009f  addiu       $a0, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A608u;
        goto label_15a608;
    }
    ctx->pc = 0x15A600u;
    SET_GPR_U32(ctx, 31, 0x15A608u);
    ctx->pc = 0x15A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A600u;
    // 0x15a604: 0x2404009f  addiu       $a0, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A600u, 0x15A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A608u;
label_15a608:
    // 0x15a608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a60c:
    // 0x15a60c: 0xc067b9c  jal         func_19EE70
label_15a610:
    if (ctx->pc == 0x15A610u) {
        ctx->pc = 0x15A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A60Cu;
        // 0x15a610: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A614u;
        goto label_15a614;
    }
    ctx->pc = 0x15A60Cu;
    SET_GPR_U32(ctx, 31, 0x15A614u);
    ctx->pc = 0x15A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A60Cu;
    // 0x15a610: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A60Cu, 0x15A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A614u;
label_15a614:
    // 0x15a614: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15a618:
    // 0x15a618: 0xc067b9c  jal         func_19EE70
label_15a61c:
    if (ctx->pc == 0x15A61Cu) {
        ctx->pc = 0x15A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A618u;
        // 0x15a61c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A620u;
        goto label_15a620;
    }
    ctx->pc = 0x15A618u;
    SET_GPR_U32(ctx, 31, 0x15A620u);
    ctx->pc = 0x15A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A618u;
    // 0x15a61c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A618u, 0x15A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A620u;
label_15a620:
    // 0x15a620: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15a620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_15a624:
    // 0x15a624: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15a628:
    // 0x15a628: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15a62c:
    // 0x15a62c: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x15a62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_15a630:
    // 0x15a630: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x15a630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_15a634:
    // 0x15a634: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x15a634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a638:
    // 0x15a638: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x15a638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a63c:
    // 0x15a63c: 0x2442b8d8  addiu       $v0, $v0, -0x4728
    ctx->pc = 0x15a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949080));
label_15a640:
    // 0x15a640: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15a644:
    // 0x15a644: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x15a644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_15a648:
    // 0x15a648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a64c:
    // 0x15a64c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a650:
    // 0x15a650: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15a650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a654:
    // 0x15a654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a658:
    // 0x15a658: 0xc071c4a  jal         func_1C7128
label_15a65c:
    if (ctx->pc == 0x15A65Cu) {
        ctx->pc = 0x15A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A658u;
        // 0x15a65c: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A660u;
        goto label_15a660;
    }
    ctx->pc = 0x15A658u;
    SET_GPR_U32(ctx, 31, 0x15A660u);
    ctx->pc = 0x15A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A658u;
    // 0x15a65c: 0x27a90040  addiu       $t1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15A658u, 0x15A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A660u;
label_15a660:
    // 0x15a660: 0x10000048  b           . + 4 + (0x48 << 2)
label_15a664:
    if (ctx->pc == 0x15A664u) {
        ctx->pc = 0x15A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A660u;
        // 0x15a664: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A668u;
        goto label_15a668;
    }
    ctx->pc = 0x15A660u;
    {
        const bool branch_taken_0x15a660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A660u;
        // 0x15a664: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a660) {
            ctx->pc = 0x15A784u;
            goto label_15a784;
        }
    }
    ctx->pc = 0x15A668u;
label_15a668:
    // 0x15a668: 0x8c43c6fc  lw          $v1, -0x3904($v0)
    ctx->pc = 0x15a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952700)));
label_15a66c:
    // 0x15a66c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_15a670:
    if (ctx->pc == 0x15A670u) {
        ctx->pc = 0x15A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A66Cu;
        // 0x15a670: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A674u;
        goto label_15a674;
    }
    ctx->pc = 0x15A66Cu;
    {
        const bool branch_taken_0x15a66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A66Cu;
        // 0x15a670: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a66c) {
            ctx->pc = 0x15A714u;
            goto label_15a714;
        }
    }
    ctx->pc = 0x15A674u;
label_15a674:
    // 0x15a674: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x15a674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_15a678:
    // 0x15a678: 0x2610f178  addiu       $s0, $s0, -0xE88
    ctx->pc = 0x15a678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963576));
label_15a67c:
    // 0x15a67c: 0xc067b9c  jal         func_19EE70
label_15a680:
    if (ctx->pc == 0x15A680u) {
        ctx->pc = 0x15A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A67Cu;
        // 0x15a680: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A684u;
        goto label_15a684;
    }
    ctx->pc = 0x15A67Cu;
    SET_GPR_U32(ctx, 31, 0x15A684u);
    ctx->pc = 0x15A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A67Cu;
    // 0x15a680: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A67Cu, 0x15A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A684u;
label_15a684:
    // 0x15a684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15a684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a688:
    // 0x15a688: 0xc067b9c  jal         func_19EE70
label_15a68c:
    if (ctx->pc == 0x15A68Cu) {
        ctx->pc = 0x15A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A688u;
        // 0x15a68c: 0x2404009e  addiu       $a0, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A690u;
        goto label_15a690;
    }
    ctx->pc = 0x15A688u;
    SET_GPR_U32(ctx, 31, 0x15A690u);
    ctx->pc = 0x15A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A688u;
    // 0x15a68c: 0x2404009e  addiu       $a0, $zero, 0x9E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A688u, 0x15A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A690u;
label_15a690:
    // 0x15a690: 0x8e44c738  lw          $a0, -0x38C8($s2)
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15a694:
    // 0x15a694: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a698:
    // 0x15a698: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15a698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a69c:
    // 0x15a69c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15a69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a6a0:
    // 0x15a6a0: 0xc10ca28  jal         func_4328A0
label_15a6a4:
    if (ctx->pc == 0x15A6A4u) {
        ctx->pc = 0x15A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A0u;
        // 0x15a6a4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6A8u;
        goto label_15a6a8;
    }
    ctx->pc = 0x15A6A0u;
    SET_GPR_U32(ctx, 31, 0x15A6A8u);
    ctx->pc = 0x15A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A6A0u;
    // 0x15a6a4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15A6A0u, 0x15A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A6A8u;
label_15a6a8:
    // 0x15a6a8: 0x8e50c738  lw          $s0, -0x38C8($s2)
    ctx->pc = 0x15a6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15a6ac:
    // 0x15a6ac: 0xc067b9c  jal         func_19EE70
label_15a6b0:
    if (ctx->pc == 0x15A6B0u) {
        ctx->pc = 0x15A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6ACu;
        // 0x15a6b0: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6B4u;
        goto label_15a6b4;
    }
    ctx->pc = 0x15A6ACu;
    SET_GPR_U32(ctx, 31, 0x15A6B4u);
    ctx->pc = 0x15A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A6ACu;
    // 0x15a6b0: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A6ACu, 0x15A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A6B4u;
label_15a6b4:
    // 0x15a6b4: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15a6b8:
    // 0x15a6b8: 0xc067b9c  jal         func_19EE70
label_15a6bc:
    if (ctx->pc == 0x15A6BCu) {
        ctx->pc = 0x15A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6B8u;
        // 0x15a6bc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6C0u;
        goto label_15a6c0;
    }
    ctx->pc = 0x15A6B8u;
    SET_GPR_U32(ctx, 31, 0x15A6C0u);
    ctx->pc = 0x15A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A6B8u;
    // 0x15a6bc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A6B8u, 0x15A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A6C0u;
label_15a6c0:
    // 0x15a6c0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x15a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_15a6c4:
    // 0x15a6c4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15a6c8:
    // 0x15a6c8: 0x6bab0037  ldl         $t3, 0x37($sp)
    ctx->pc = 0x15a6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_15a6cc:
    // 0x15a6cc: 0x6fab0030  ldr         $t3, 0x30($sp)
    ctx->pc = 0x15a6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_15a6d0:
    // 0x15a6d0: 0xb3ab0007  sdl         $t3, 0x7($sp)
    ctx->pc = 0x15a6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a6d4:
    // 0x15a6d4: 0xb7ab0000  sdr         $t3, 0x0($sp)
    ctx->pc = 0x15a6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a6d8:
    // 0x15a6d8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15a6dc:
    // 0x15a6dc: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15a6e0:
    // 0x15a6e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a6e4:
    // 0x15a6e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a6e8:
    // 0x15a6e8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15a6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a6ec:
    // 0x15a6ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a6ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a6f0:
    // 0x15a6f0: 0x2443f188  addiu       $v1, $v0, -0xE78
    ctx->pc = 0x15a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
label_15a6f4:
    // 0x15a6f4: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15a6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_15a6f8:
    // 0x15a6f8: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15a6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_15a6fc:
    // 0x15a6fc: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x15a6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a700:
    // 0x15a700: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x15a700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a704:
    // 0x15a704: 0xc071c4a  jal         func_1C7128
label_15a708:
    if (ctx->pc == 0x15A708u) {
        ctx->pc = 0x15A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A704u;
        // 0x15a708: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A70Cu;
        goto label_15a70c;
    }
    ctx->pc = 0x15A704u;
    SET_GPR_U32(ctx, 31, 0x15A70Cu);
    ctx->pc = 0x15A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A704u;
    // 0x15a708: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15A704u, 0x15A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A70Cu;
label_15a70c:
    // 0x15a70c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_15a710:
    if (ctx->pc == 0x15A710u) {
        ctx->pc = 0x15A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A70Cu;
        // 0x15a710: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A714u;
        goto label_15a714;
    }
    ctx->pc = 0x15A70Cu;
    {
        const bool branch_taken_0x15a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A70Cu;
        // 0x15a710: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a70c) {
            ctx->pc = 0x15A784u;
            goto label_15a784;
        }
    }
    ctx->pc = 0x15A714u;
label_15a714:
    // 0x15a714: 0xc067b9c  jal         func_19EE70
label_15a718:
    if (ctx->pc == 0x15A718u) {
        ctx->pc = 0x15A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A714u;
        // 0x15a718: 0x2404009f  addiu       $a0, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A71Cu;
        goto label_15a71c;
    }
    ctx->pc = 0x15A714u;
    SET_GPR_U32(ctx, 31, 0x15A71Cu);
    ctx->pc = 0x15A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A714u;
    // 0x15a718: 0x2404009f  addiu       $a0, $zero, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A714u, 0x15A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A71Cu;
label_15a71c:
    // 0x15a71c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a720:
    // 0x15a720: 0xc067b9c  jal         func_19EE70
label_15a724:
    if (ctx->pc == 0x15A724u) {
        ctx->pc = 0x15A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A720u;
        // 0x15a724: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A728u;
        goto label_15a728;
    }
    ctx->pc = 0x15A720u;
    SET_GPR_U32(ctx, 31, 0x15A728u);
    ctx->pc = 0x15A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A720u;
    // 0x15a724: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A720u, 0x15A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A728u;
label_15a728:
    // 0x15a728: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15a72c:
    // 0x15a72c: 0xc067b9c  jal         func_19EE70
label_15a730:
    if (ctx->pc == 0x15A730u) {
        ctx->pc = 0x15A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A72Cu;
        // 0x15a730: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A734u;
        goto label_15a734;
    }
    ctx->pc = 0x15A72Cu;
    SET_GPR_U32(ctx, 31, 0x15A734u);
    ctx->pc = 0x15A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A72Cu;
    // 0x15a730: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A72Cu, 0x15A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A734u;
label_15a734:
    // 0x15a734: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15a734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15a738:
    // 0x15a738: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15a73c:
    // 0x15a73c: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x15a73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_15a740:
    // 0x15a740: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x15a740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_15a744:
    // 0x15a744: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x15a744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a748:
    // 0x15a748: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x15a748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a74c:
    // 0x15a74c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15a750:
    // 0x15a750: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15a754:
    // 0x15a754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a758:
    // 0x15a758: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a75c:
    // 0x15a75c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15a75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a760:
    // 0x15a760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a764:
    // 0x15a764: 0x244af188  addiu       $t2, $v0, -0xE78
    ctx->pc = 0x15a764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
label_15a768:
    // 0x15a768: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x15a768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_15a76c:
    // 0x15a76c: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x15a76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_15a770:
    // 0x15a770: 0xb3ab0017  sdl         $t3, 0x17($sp)
    ctx->pc = 0x15a770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a774:
    // 0x15a774: 0xb7ab0010  sdr         $t3, 0x10($sp)
    ctx->pc = 0x15a774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15a778:
    // 0x15a778: 0xc071c4a  jal         func_1C7128
label_15a77c:
    if (ctx->pc == 0x15A77Cu) {
        ctx->pc = 0x15A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A778u;
        // 0x15a77c: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A780u;
        goto label_15a780;
    }
    ctx->pc = 0x15A778u;
    SET_GPR_U32(ctx, 31, 0x15A780u);
    ctx->pc = 0x15A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A778u;
    // 0x15a77c: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15A778u, 0x15A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A780u;
label_15a780:
    // 0x15a780: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15a784:
    // 0x15a784: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15a784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15a788:
    // 0x15a788: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15a788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15a78c:
    // 0x15a78c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x15a78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15a790:
    // 0x15a790: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x15a790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15a794:
    // 0x15a794: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15a794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15a798:
    // 0x15a798: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15a798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
label_15a79c:
    // 0x15a79c: 0x3e00008  jr          $ra
label_15a7a0:
    if (ctx->pc == 0x15A7A0u) {
        ctx->pc = 0x15A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A79Cu;
        // 0x15a7a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7A4u;
        goto label_15a7a4;
    }
    ctx->pc = 0x15A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A79Cu;
        // 0x15a7a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A7A4u;
label_15a7a4:
    // 0x15a7a4: 0x0  nop
    ctx->pc = 0x15a7a4u;
    // NOP
    ctx->pc = 0x15a7a8u;
}
