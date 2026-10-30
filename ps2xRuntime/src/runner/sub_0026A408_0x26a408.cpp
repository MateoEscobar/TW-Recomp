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

// Function: sub_0026A408
// Address: 0x26a408 - 0x26a6d0
void sub_0026A408_0x26a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A408_0x26a408");
#endif

    switch (ctx->pc) {
        case 0x26a408u: goto label_26a408;
        case 0x26a40cu: goto label_26a40c;
        case 0x26a410u: goto label_26a410;
        case 0x26a414u: goto label_26a414;
        case 0x26a418u: goto label_26a418;
        case 0x26a41cu: goto label_26a41c;
        case 0x26a420u: goto label_26a420;
        case 0x26a424u: goto label_26a424;
        case 0x26a428u: goto label_26a428;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a430u: goto label_26a430;
        case 0x26a434u: goto label_26a434;
        case 0x26a438u: goto label_26a438;
        case 0x26a43cu: goto label_26a43c;
        case 0x26a440u: goto label_26a440;
        case 0x26a444u: goto label_26a444;
        case 0x26a448u: goto label_26a448;
        case 0x26a44cu: goto label_26a44c;
        case 0x26a450u: goto label_26a450;
        case 0x26a454u: goto label_26a454;
        case 0x26a458u: goto label_26a458;
        case 0x26a45cu: goto label_26a45c;
        case 0x26a460u: goto label_26a460;
        case 0x26a464u: goto label_26a464;
        case 0x26a468u: goto label_26a468;
        case 0x26a46cu: goto label_26a46c;
        case 0x26a470u: goto label_26a470;
        case 0x26a474u: goto label_26a474;
        case 0x26a478u: goto label_26a478;
        case 0x26a47cu: goto label_26a47c;
        case 0x26a480u: goto label_26a480;
        case 0x26a484u: goto label_26a484;
        case 0x26a488u: goto label_26a488;
        case 0x26a48cu: goto label_26a48c;
        case 0x26a490u: goto label_26a490;
        case 0x26a494u: goto label_26a494;
        case 0x26a498u: goto label_26a498;
        case 0x26a49cu: goto label_26a49c;
        case 0x26a4a0u: goto label_26a4a0;
        case 0x26a4a4u: goto label_26a4a4;
        case 0x26a4a8u: goto label_26a4a8;
        case 0x26a4acu: goto label_26a4ac;
        case 0x26a4b0u: goto label_26a4b0;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a4b8u: goto label_26a4b8;
        case 0x26a4bcu: goto label_26a4bc;
        case 0x26a4c0u: goto label_26a4c0;
        case 0x26a4c4u: goto label_26a4c4;
        case 0x26a4c8u: goto label_26a4c8;
        case 0x26a4ccu: goto label_26a4cc;
        case 0x26a4d0u: goto label_26a4d0;
        case 0x26a4d4u: goto label_26a4d4;
        case 0x26a4d8u: goto label_26a4d8;
        case 0x26a4dcu: goto label_26a4dc;
        case 0x26a4e0u: goto label_26a4e0;
        case 0x26a4e4u: goto label_26a4e4;
        case 0x26a4e8u: goto label_26a4e8;
        case 0x26a4ecu: goto label_26a4ec;
        case 0x26a4f0u: goto label_26a4f0;
        case 0x26a4f4u: goto label_26a4f4;
        case 0x26a4f8u: goto label_26a4f8;
        case 0x26a4fcu: goto label_26a4fc;
        case 0x26a500u: goto label_26a500;
        case 0x26a504u: goto label_26a504;
        case 0x26a508u: goto label_26a508;
        case 0x26a50cu: goto label_26a50c;
        case 0x26a510u: goto label_26a510;
        case 0x26a514u: goto label_26a514;
        case 0x26a518u: goto label_26a518;
        case 0x26a51cu: goto label_26a51c;
        case 0x26a520u: goto label_26a520;
        case 0x26a524u: goto label_26a524;
        case 0x26a528u: goto label_26a528;
        case 0x26a52cu: goto label_26a52c;
        case 0x26a530u: goto label_26a530;
        case 0x26a534u: goto label_26a534;
        case 0x26a538u: goto label_26a538;
        case 0x26a53cu: goto label_26a53c;
        case 0x26a540u: goto label_26a540;
        case 0x26a544u: goto label_26a544;
        case 0x26a548u: goto label_26a548;
        case 0x26a54cu: goto label_26a54c;
        case 0x26a550u: goto label_26a550;
        case 0x26a554u: goto label_26a554;
        case 0x26a558u: goto label_26a558;
        case 0x26a55cu: goto label_26a55c;
        case 0x26a560u: goto label_26a560;
        case 0x26a564u: goto label_26a564;
        case 0x26a568u: goto label_26a568;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a570u: goto label_26a570;
        case 0x26a574u: goto label_26a574;
        case 0x26a578u: goto label_26a578;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a580u: goto label_26a580;
        case 0x26a584u: goto label_26a584;
        case 0x26a588u: goto label_26a588;
        case 0x26a58cu: goto label_26a58c;
        case 0x26a590u: goto label_26a590;
        case 0x26a594u: goto label_26a594;
        case 0x26a598u: goto label_26a598;
        case 0x26a59cu: goto label_26a59c;
        case 0x26a5a0u: goto label_26a5a0;
        case 0x26a5a4u: goto label_26a5a4;
        case 0x26a5a8u: goto label_26a5a8;
        case 0x26a5acu: goto label_26a5ac;
        case 0x26a5b0u: goto label_26a5b0;
        case 0x26a5b4u: goto label_26a5b4;
        case 0x26a5b8u: goto label_26a5b8;
        case 0x26a5bcu: goto label_26a5bc;
        case 0x26a5c0u: goto label_26a5c0;
        case 0x26a5c4u: goto label_26a5c4;
        case 0x26a5c8u: goto label_26a5c8;
        case 0x26a5ccu: goto label_26a5cc;
        case 0x26a5d0u: goto label_26a5d0;
        case 0x26a5d4u: goto label_26a5d4;
        case 0x26a5d8u: goto label_26a5d8;
        case 0x26a5dcu: goto label_26a5dc;
        case 0x26a5e0u: goto label_26a5e0;
        case 0x26a5e4u: goto label_26a5e4;
        case 0x26a5e8u: goto label_26a5e8;
        case 0x26a5ecu: goto label_26a5ec;
        case 0x26a5f0u: goto label_26a5f0;
        case 0x26a5f4u: goto label_26a5f4;
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a5fcu: goto label_26a5fc;
        case 0x26a600u: goto label_26a600;
        case 0x26a604u: goto label_26a604;
        case 0x26a608u: goto label_26a608;
        case 0x26a60cu: goto label_26a60c;
        case 0x26a610u: goto label_26a610;
        case 0x26a614u: goto label_26a614;
        case 0x26a618u: goto label_26a618;
        case 0x26a61cu: goto label_26a61c;
        case 0x26a620u: goto label_26a620;
        case 0x26a624u: goto label_26a624;
        case 0x26a628u: goto label_26a628;
        case 0x26a62cu: goto label_26a62c;
        case 0x26a630u: goto label_26a630;
        case 0x26a634u: goto label_26a634;
        case 0x26a638u: goto label_26a638;
        case 0x26a63cu: goto label_26a63c;
        case 0x26a640u: goto label_26a640;
        case 0x26a644u: goto label_26a644;
        case 0x26a648u: goto label_26a648;
        case 0x26a64cu: goto label_26a64c;
        case 0x26a650u: goto label_26a650;
        case 0x26a654u: goto label_26a654;
        case 0x26a658u: goto label_26a658;
        case 0x26a65cu: goto label_26a65c;
        case 0x26a660u: goto label_26a660;
        case 0x26a664u: goto label_26a664;
        case 0x26a668u: goto label_26a668;
        case 0x26a66cu: goto label_26a66c;
        case 0x26a670u: goto label_26a670;
        case 0x26a674u: goto label_26a674;
        case 0x26a678u: goto label_26a678;
        case 0x26a67cu: goto label_26a67c;
        case 0x26a680u: goto label_26a680;
        case 0x26a684u: goto label_26a684;
        case 0x26a688u: goto label_26a688;
        case 0x26a68cu: goto label_26a68c;
        case 0x26a690u: goto label_26a690;
        case 0x26a694u: goto label_26a694;
        case 0x26a698u: goto label_26a698;
        case 0x26a69cu: goto label_26a69c;
        case 0x26a6a0u: goto label_26a6a0;
        case 0x26a6a4u: goto label_26a6a4;
        case 0x26a6a8u: goto label_26a6a8;
        case 0x26a6acu: goto label_26a6ac;
        case 0x26a6b0u: goto label_26a6b0;
        case 0x26a6b4u: goto label_26a6b4;
        case 0x26a6b8u: goto label_26a6b8;
        case 0x26a6bcu: goto label_26a6bc;
        case 0x26a6c0u: goto label_26a6c0;
        case 0x26a6c4u: goto label_26a6c4;
        case 0x26a6c8u: goto label_26a6c8;
        case 0x26a6ccu: goto label_26a6cc;
        default: break;
    }

    ctx->pc = 0x26a408u;

label_26a408:
    // 0x26a408: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26a408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26a40c:
    // 0x26a40c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_26a410:
    // 0x26a410: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_26a414:
    // 0x26a414: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x26a414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_26a418:
    // 0x26a418: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_26a41c:
    // 0x26a41c: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x26a41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_26a420:
    // 0x26a420: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_26a424:
    // 0x26a424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26a424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a428:
    // 0x26a428: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_26a42c:
    // 0x26a42c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26a42cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26a430:
    // 0x26a430: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26a434:
    // 0x26a434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a438:
    // 0x26a438: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26a438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_26a43c:
    // 0x26a43c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_26a440:
    // 0x26a440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26a440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26a444:
    // 0x26a444: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26a444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_26a448:
    // 0x26a448: 0x8e5700d8  lw          $s7, 0xD8($s2)
    ctx->pc = 0x26a448u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26a44c:
    // 0x26a44c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x26a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_26a450:
    // 0x26a450: 0x8e6200d8  lw          $v0, 0xD8($s3)
    ctx->pc = 0x26a450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26a454:
    // 0x26a454: 0xc041532  jal         func_1054C8
label_26a458:
    if (ctx->pc == 0x26A458u) {
        ctx->pc = 0x26A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A454u;
        // 0x26a458: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A45Cu;
        goto label_26a45c;
    }
    ctx->pc = 0x26A454u;
    SET_GPR_U32(ctx, 31, 0x26A45Cu);
    ctx->pc = 0x26A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A454u;
    // 0x26a458: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A454u, 0x26A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A45Cu;
label_26a45c:
    // 0x26a45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a460:
    // 0x26a460: 0xc041532  jal         func_1054C8
label_26a464:
    if (ctx->pc == 0x26A464u) {
        ctx->pc = 0x26A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A460u;
        // 0x26a464: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A468u;
        goto label_26a468;
    }
    ctx->pc = 0x26A460u;
    SET_GPR_U32(ctx, 31, 0x26A468u);
    ctx->pc = 0x26A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A460u;
    // 0x26a464: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A460u, 0x26A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A468u;
label_26a468:
    // 0x26a468: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x26a468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_26a46c:
    // 0x26a46c: 0xc041532  jal         func_1054C8
label_26a470:
    if (ctx->pc == 0x26A470u) {
        ctx->pc = 0x26A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A46Cu;
        // 0x26a470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A474u;
        goto label_26a474;
    }
    ctx->pc = 0x26A46Cu;
    SET_GPR_U32(ctx, 31, 0x26A474u);
    ctx->pc = 0x26A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A46Cu;
    // 0x26a470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A46Cu, 0x26A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A474u;
label_26a474:
    // 0x26a474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a478:
    // 0x26a478: 0xc041532  jal         func_1054C8
label_26a47c:
    if (ctx->pc == 0x26A47Cu) {
        ctx->pc = 0x26A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A478u;
        // 0x26a47c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A480u;
        goto label_26a480;
    }
    ctx->pc = 0x26A478u;
    SET_GPR_U32(ctx, 31, 0x26A480u);
    ctx->pc = 0x26A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A478u;
    // 0x26a47c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A478u, 0x26A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A480u;
label_26a480:
    // 0x26a480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a484:
    // 0x26a484: 0xc041532  jal         func_1054C8
label_26a488:
    if (ctx->pc == 0x26A488u) {
        ctx->pc = 0x26A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A484u;
        // 0x26a488: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A48Cu;
        goto label_26a48c;
    }
    ctx->pc = 0x26A484u;
    SET_GPR_U32(ctx, 31, 0x26A48Cu);
    ctx->pc = 0x26A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A484u;
    // 0x26a488: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A484u, 0x26A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A48Cu;
label_26a48c:
    // 0x26a48c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a490:
    // 0x26a490: 0xc041532  jal         func_1054C8
label_26a494:
    if (ctx->pc == 0x26A494u) {
        ctx->pc = 0x26A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A490u;
        // 0x26a494: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A498u;
        goto label_26a498;
    }
    ctx->pc = 0x26A490u;
    SET_GPR_U32(ctx, 31, 0x26A498u);
    ctx->pc = 0x26A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A490u;
    // 0x26a494: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26A490u, 0x26A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A498u;
label_26a498:
    // 0x26a498: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26a498u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a49c:
    // 0x26a49c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a4a0:
    // 0x26a4a0: 0xc089990  jal         func_226640
label_26a4a4:
    if (ctx->pc == 0x26A4A4u) {
        ctx->pc = 0x26A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A0u;
        // 0x26a4a4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4A8u;
        goto label_26a4a8;
    }
    ctx->pc = 0x26A4A0u;
    SET_GPR_U32(ctx, 31, 0x26A4A8u);
    ctx->pc = 0x26A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A4A0u;
    // 0x26a4a4: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26A4A0u, 0x26A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4A8u;
label_26a4a8:
    // 0x26a4a8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_26a4ac:
    if (ctx->pc == 0x26A4ACu) {
        ctx->pc = 0x26A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A8u;
        // 0x26a4ac: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4B0u;
        goto label_26a4b0;
    }
    ctx->pc = 0x26A4A8u;
    {
        const bool branch_taken_0x26a4a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A8u;
        // 0x26a4ac: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4a8) {
            ctx->pc = 0x26A4D0u;
            goto label_26a4d0;
        }
    }
    ctx->pc = 0x26A4B0u;
label_26a4b0:
    // 0x26a4b0: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26a4b4:
    // 0x26a4b4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26a4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26a4b8:
    // 0x26a4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a4bc:
    // 0x26a4bc: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26a4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26a4c0:
    // 0x26a4c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26a4c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a4c4:
    // 0x26a4c4: 0xc04159e  jal         func_105678
label_26a4c8:
    if (ctx->pc == 0x26A4C8u) {
        ctx->pc = 0x26A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4C4u;
        // 0x26a4c8: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4CCu;
        goto label_26a4cc;
    }
    ctx->pc = 0x26A4C4u;
    SET_GPR_U32(ctx, 31, 0x26A4CCu);
    ctx->pc = 0x26A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A4C4u;
    // 0x26a4c8: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26A4C4u, 0x26A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4CCu;
label_26a4cc:
    // 0x26a4cc: 0x0  nop
    ctx->pc = 0x26a4ccu;
    // NOP
label_26a4d0:
    // 0x26a4d0: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26a4d4:
    // 0x26a4d4: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x26a4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26a4d8:
    // 0x26a4d8: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
label_26a4dc:
    if (ctx->pc == 0x26A4DCu) {
        ctx->pc = 0x26A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D8u;
        // 0x26a4dc: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4E0u;
        goto label_26a4e0;
    }
    ctx->pc = 0x26A4D8u;
    {
        const bool branch_taken_0x26a4d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D8u;
        // 0x26a4dc: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4d8) {
            ctx->pc = 0x26A524u;
            goto label_26a524;
        }
    }
    ctx->pc = 0x26A4E0u;
label_26a4e0:
    // 0x26a4e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26a4e4:
    // 0x26a4e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26a4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26a4e8:
    // 0x26a4e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26a4ec:
    // 0x26a4ec: 0x40f809  jalr        $v0
label_26a4f0:
    if (ctx->pc == 0x26A4F0u) {
        ctx->pc = 0x26A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4ECu;
        // 0x26a4f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4F4u;
        goto label_26a4f4;
    }
    ctx->pc = 0x26A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A4F4u);
        ctx->pc = 0x26A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4ECu;
        // 0x26a4f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A4ECu, 0x26A4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A4F4u;
label_26a4f4:
    // 0x26a4f4: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26a4f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26a4f8:
    // 0x26a4f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26a4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26a4fc:
    // 0x26a4fc: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26a4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26a500:
    // 0x26a500: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26a504:
    // 0x26a504: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x26a504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26a508:
    // 0x26a508: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26a508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a50c:
    // 0x26a50c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26a50cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a510:
    // 0x26a510: 0x254aa1f0  addiu       $t2, $t2, -0x5E10
    ctx->pc = 0x26a510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943216));
label_26a514:
    // 0x26a514: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26a518:
    // 0x26a518: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26a518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26a51c:
    // 0x26a51c: 0xc041664  jal         func_105990
label_26a520:
    if (ctx->pc == 0x26A520u) {
        ctx->pc = 0x26A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A51Cu;
        // 0x26a520: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A524u;
        goto label_26a524;
    }
    ctx->pc = 0x26A51Cu;
    SET_GPR_U32(ctx, 31, 0x26A524u);
    ctx->pc = 0x26A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A51Cu;
    // 0x26a520: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26A51Cu, 0x26A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A524u;
label_26a524:
    // 0x26a524: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_26a528:
    if (ctx->pc == 0x26A528u) {
        ctx->pc = 0x26A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A524u;
        // 0x26a528: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A52Cu;
        goto label_26a52c;
    }
    ctx->pc = 0x26A524u;
    {
        const bool branch_taken_0x26a524 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A524u;
        // 0x26a528: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a524) {
            ctx->pc = 0x26A54Cu;
            goto label_26a54c;
        }
    }
    ctx->pc = 0x26A52Cu;
label_26a52c:
    // 0x26a52c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26a530:
    // 0x26a530: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26a530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26a534:
    // 0x26a534: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26a538:
    // 0x26a538: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26a538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26a53c:
    // 0x26a53c: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26a53cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26a540:
    // 0x26a540: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26a544:
    // 0x26a544: 0xc041b20  jal         func_106C80
label_26a548:
    if (ctx->pc == 0x26A548u) {
        ctx->pc = 0x26A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A544u;
        // 0x26a548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A54Cu;
        goto label_26a54c;
    }
    ctx->pc = 0x26A544u;
    SET_GPR_U32(ctx, 31, 0x26A54Cu);
    ctx->pc = 0x26A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A544u;
    // 0x26a548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26A544u, 0x26A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A54Cu;
label_26a54c:
    // 0x26a54c: 0xc05d484  jal         func_175210
label_26a550:
    if (ctx->pc == 0x26A550u) {
        ctx->pc = 0x26A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A54Cu;
        // 0x26a550: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A554u;
        goto label_26a554;
    }
    ctx->pc = 0x26A54Cu;
    SET_GPR_U32(ctx, 31, 0x26A554u);
    ctx->pc = 0x26A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A54Cu;
    // 0x26a550: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26A54Cu, 0x26A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A554u;
label_26a554:
    // 0x26a554: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a558:
    // 0x26a558: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26a558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26a55c:
    // 0x26a55c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26a560:
    // 0x26a560: 0xa0f809  jalr        $a1
label_26a564:
    if (ctx->pc == 0x26A564u) {
        ctx->pc = 0x26A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A560u;
        // 0x26a564: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A568u;
        goto label_26a568;
    }
    ctx->pc = 0x26A560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26A568u);
        ctx->pc = 0x26A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A560u;
        // 0x26a564: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A560u, 0x26A568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A568u;
label_26a568:
    // 0x26a568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a56c:
    // 0x26a56c: 0xc087016  jal         func_21C058
label_26a570:
    if (ctx->pc == 0x26A570u) {
        ctx->pc = 0x26A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A56Cu;
        // 0x26a570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A574u;
        goto label_26a574;
    }
    ctx->pc = 0x26A56Cu;
    SET_GPR_U32(ctx, 31, 0x26A574u);
    ctx->pc = 0x26A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A56Cu;
    // 0x26a570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26A56Cu, 0x26A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A574u;
label_26a574:
    // 0x26a574: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26a574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26a578:
    // 0x26a578: 0xc05d53a  jal         func_1754E8
label_26a57c:
    if (ctx->pc == 0x26A57Cu) {
        ctx->pc = 0x26A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A578u;
        // 0x26a57c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A580u;
        goto label_26a580;
    }
    ctx->pc = 0x26A578u;
    SET_GPR_U32(ctx, 31, 0x26A580u);
    ctx->pc = 0x26A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A578u;
    // 0x26a57c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26A578u, 0x26A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A580u;
label_26a580:
    // 0x26a580: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26a584:
    // 0x26a584: 0xc05d4f6  jal         func_1753D8
label_26a588:
    if (ctx->pc == 0x26A588u) {
        ctx->pc = 0x26A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A584u;
        // 0x26a588: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A58Cu;
        goto label_26a58c;
    }
    ctx->pc = 0x26A584u;
    SET_GPR_U32(ctx, 31, 0x26A58Cu);
    ctx->pc = 0x26A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A584u;
    // 0x26a588: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26A584u, 0x26A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A58Cu;
label_26a58c:
    // 0x26a58c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a590:
    // 0x26a590: 0xc089990  jal         func_226640
label_26a594:
    if (ctx->pc == 0x26A594u) {
        ctx->pc = 0x26A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A590u;
        // 0x26a594: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A598u;
        goto label_26a598;
    }
    ctx->pc = 0x26A590u;
    SET_GPR_U32(ctx, 31, 0x26A598u);
    ctx->pc = 0x26A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A590u;
    // 0x26a594: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26A590u, 0x26A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A598u;
label_26a598:
    // 0x26a598: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26a59c:
    if (ctx->pc == 0x26A59Cu) {
        ctx->pc = 0x26A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A598u;
        // 0x26a59c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5A0u;
        goto label_26a5a0;
    }
    ctx->pc = 0x26A598u;
    {
        const bool branch_taken_0x26a598 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A598u;
        // 0x26a59c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a598) {
            ctx->pc = 0x26A5C0u;
            goto label_26a5c0;
        }
    }
    ctx->pc = 0x26A5A0u;
label_26a5a0:
    // 0x26a5a0: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26a5a4:
    // 0x26a5a4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26a5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26a5a8:
    // 0x26a5a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26a5ac:
    // 0x26a5ac: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26a5b0:
    // 0x26a5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26a5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a5b4:
    // 0x26a5b4: 0xc04159e  jal         func_105678
label_26a5b8:
    if (ctx->pc == 0x26A5B8u) {
        ctx->pc = 0x26A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5B4u;
        // 0x26a5b8: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5BCu;
        goto label_26a5bc;
    }
    ctx->pc = 0x26A5B4u;
    SET_GPR_U32(ctx, 31, 0x26A5BCu);
    ctx->pc = 0x26A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A5B4u;
    // 0x26a5b8: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26A5B4u, 0x26A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5BCu;
label_26a5bc:
    // 0x26a5bc: 0x0  nop
    ctx->pc = 0x26a5bcu;
    // NOP
label_26a5c0:
    // 0x26a5c0: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26a5c4:
    // 0x26a5c4: 0x13c0001b  beqz        $fp, . + 4 + (0x1B << 2)
label_26a5c8:
    if (ctx->pc == 0x26A5C8u) {
        ctx->pc = 0x26A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5C4u;
        // 0x26a5c8: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5CCu;
        goto label_26a5cc;
    }
    ctx->pc = 0x26A5C4u;
    {
        const bool branch_taken_0x26a5c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5C4u;
        // 0x26a5c8: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5c4) {
            ctx->pc = 0x26A634u;
            goto label_26a634;
        }
    }
    ctx->pc = 0x26A5CCu;
label_26a5cc:
    // 0x26a5cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26a5d0:
    // 0x26a5d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26a5d4:
    // 0x26a5d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26a5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26a5d8:
    // 0x26a5d8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x26a5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26a5dc:
    // 0x26a5dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26a5e0:
    // 0x26a5e0: 0x40f809  jalr        $v0
label_26a5e4:
    if (ctx->pc == 0x26A5E4u) {
        ctx->pc = 0x26A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5E0u;
        // 0x26a5e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5E8u;
        goto label_26a5e8;
    }
    ctx->pc = 0x26A5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A5E8u);
        ctx->pc = 0x26A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5E0u;
        // 0x26a5e4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A5E0u, 0x26A5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A5E8u;
label_26a5e8:
    // 0x26a5e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26a5ec:
    // 0x26a5ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a5f0:
    // 0x26a5f0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26a5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26a5f4:
    // 0x26a5f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26a5f8:
    // 0x26a5f8: 0x40f809  jalr        $v0
label_26a5fc:
    if (ctx->pc == 0x26A5FCu) {
        ctx->pc = 0x26A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5F8u;
        // 0x26a5fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A600u;
        goto label_26a600;
    }
    ctx->pc = 0x26A5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A600u);
        ctx->pc = 0x26A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5F8u;
        // 0x26a5fc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A5F8u, 0x26A600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A600u;
label_26a600:
    // 0x26a600: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26a600u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26a604:
    // 0x26a604: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26a604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26a608:
    // 0x26a608: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26a608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26a60c:
    // 0x26a60c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26a610:
    // 0x26a610: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x26a610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26a614:
    // 0x26a614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26a614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a618:
    // 0x26a618: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26a618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a61c:
    // 0x26a61c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x26a61cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26a620:
    // 0x26a620: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26a620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a624:
    // 0x26a624: 0x256ba1f0  addiu       $t3, $t3, -0x5E10
    ctx->pc = 0x26a624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294943216));
label_26a628:
    // 0x26a628: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26a62c:
    // 0x26a62c: 0xc04229e  jal         func_108A78
label_26a630:
    if (ctx->pc == 0x26A630u) {
        ctx->pc = 0x26A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A62Cu;
        // 0x26a630: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A634u;
        goto label_26a634;
    }
    ctx->pc = 0x26A62Cu;
    SET_GPR_U32(ctx, 31, 0x26A634u);
    ctx->pc = 0x26A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A62Cu;
    // 0x26a630: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26A62Cu, 0x26A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A634u;
label_26a634:
    // 0x26a634: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x26a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_26a638:
    // 0x26a638: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26a63c:
    if (ctx->pc == 0x26A63Cu) {
        ctx->pc = 0x26A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A638u;
        // 0x26a63c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A640u;
        goto label_26a640;
    }
    ctx->pc = 0x26A638u;
    {
        const bool branch_taken_0x26a638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A638u;
        // 0x26a63c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a638) {
            ctx->pc = 0x26A660u;
            goto label_26a660;
        }
    }
    ctx->pc = 0x26A640u;
label_26a640:
    // 0x26a640: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26a640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26a644:
    // 0x26a644: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26a644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26a648:
    // 0x26a648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a64c:
    // 0x26a64c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26a64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26a650:
    // 0x26a650: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26a650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26a654:
    // 0x26a654: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26a658:
    // 0x26a658: 0xc041b20  jal         func_106C80
label_26a65c:
    if (ctx->pc == 0x26A65Cu) {
        ctx->pc = 0x26A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A658u;
        // 0x26a65c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A660u;
        goto label_26a660;
    }
    ctx->pc = 0x26A658u;
    SET_GPR_U32(ctx, 31, 0x26A660u);
    ctx->pc = 0x26A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A658u;
    // 0x26a65c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26A658u, 0x26A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A660u;
label_26a660:
    // 0x26a660: 0xc05d484  jal         func_175210
label_26a664:
    if (ctx->pc == 0x26A664u) {
        ctx->pc = 0x26A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A660u;
        // 0x26a664: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A668u;
        goto label_26a668;
    }
    ctx->pc = 0x26A660u;
    SET_GPR_U32(ctx, 31, 0x26A668u);
    ctx->pc = 0x26A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A660u;
    // 0x26a664: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26A660u, 0x26A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A668u;
label_26a668:
    // 0x26a668: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a66c:
    // 0x26a66c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26a66cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26a670:
    // 0x26a670: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26a670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26a674:
    // 0x26a674: 0xa0f809  jalr        $a1
label_26a678:
    if (ctx->pc == 0x26A678u) {
        ctx->pc = 0x26A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A674u;
        // 0x26a678: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A67Cu;
        goto label_26a67c;
    }
    ctx->pc = 0x26A674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26A67Cu);
        ctx->pc = 0x26A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A674u;
        // 0x26a678: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A674u, 0x26A67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A67Cu;
label_26a67c:
    // 0x26a67c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a680:
    // 0x26a680: 0xc087016  jal         func_21C058
label_26a684:
    if (ctx->pc == 0x26A684u) {
        ctx->pc = 0x26A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A680u;
        // 0x26a684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A688u;
        goto label_26a688;
    }
    ctx->pc = 0x26A680u;
    SET_GPR_U32(ctx, 31, 0x26A688u);
    ctx->pc = 0x26A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A680u;
    // 0x26a684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26A680u, 0x26A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A688u;
label_26a688:
    // 0x26a688: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26a68c:
    // 0x26a68c: 0xc05d53a  jal         func_1754E8
label_26a690:
    if (ctx->pc == 0x26A690u) {
        ctx->pc = 0x26A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A68Cu;
        // 0x26a690: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A694u;
        goto label_26a694;
    }
    ctx->pc = 0x26A68Cu;
    SET_GPR_U32(ctx, 31, 0x26A694u);
    ctx->pc = 0x26A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A68Cu;
    // 0x26a690: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26A68Cu, 0x26A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A694u;
label_26a694:
    // 0x26a694: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x26a694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26a698:
    // 0x26a698: 0xc05d4f6  jal         func_1753D8
label_26a69c:
    if (ctx->pc == 0x26A69Cu) {
        ctx->pc = 0x26A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A698u;
        // 0x26a69c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A6A0u;
        goto label_26a6a0;
    }
    ctx->pc = 0x26A698u;
    SET_GPR_U32(ctx, 31, 0x26A6A0u);
    ctx->pc = 0x26A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A698u;
    // 0x26a69c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26A698u, 0x26A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A6A0u;
label_26a6a0:
    // 0x26a6a0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26a6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26a6a4:
    // 0x26a6a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26a6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26a6a8:
    // 0x26a6a8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26a6a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26a6ac:
    // 0x26a6ac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26a6acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26a6b0:
    // 0x26a6b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26a6b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26a6b4:
    // 0x26a6b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26a6b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26a6b8:
    // 0x26a6b8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26a6b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26a6bc:
    // 0x26a6bc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26a6bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26a6c0:
    // 0x26a6c0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26a6c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26a6c4:
    // 0x26a6c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26a6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26a6c8:
    // 0x26a6c8: 0x3e00008  jr          $ra
label_26a6cc:
    if (ctx->pc == 0x26A6CCu) {
        ctx->pc = 0x26A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6C8u;
        // 0x26a6cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A6D0u;
        goto label_fallthrough_0x26a6c8;
    }
    ctx->pc = 0x26A6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6C8u;
        // 0x26a6cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26a6c8:
    ctx->pc = 0x26A6D0u;
}
