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

// Function: sub_0026C548
// Address: 0x26c548 - 0x26c7e0
void sub_0026C548_0x26c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C548_0x26c548");
#endif

    switch (ctx->pc) {
        case 0x26c548u: goto label_26c548;
        case 0x26c54cu: goto label_26c54c;
        case 0x26c550u: goto label_26c550;
        case 0x26c554u: goto label_26c554;
        case 0x26c558u: goto label_26c558;
        case 0x26c55cu: goto label_26c55c;
        case 0x26c560u: goto label_26c560;
        case 0x26c564u: goto label_26c564;
        case 0x26c568u: goto label_26c568;
        case 0x26c56cu: goto label_26c56c;
        case 0x26c570u: goto label_26c570;
        case 0x26c574u: goto label_26c574;
        case 0x26c578u: goto label_26c578;
        case 0x26c57cu: goto label_26c57c;
        case 0x26c580u: goto label_26c580;
        case 0x26c584u: goto label_26c584;
        case 0x26c588u: goto label_26c588;
        case 0x26c58cu: goto label_26c58c;
        case 0x26c590u: goto label_26c590;
        case 0x26c594u: goto label_26c594;
        case 0x26c598u: goto label_26c598;
        case 0x26c59cu: goto label_26c59c;
        case 0x26c5a0u: goto label_26c5a0;
        case 0x26c5a4u: goto label_26c5a4;
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5acu: goto label_26c5ac;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c5bcu: goto label_26c5bc;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c5c4u: goto label_26c5c4;
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5d4u: goto label_26c5d4;
        case 0x26c5d8u: goto label_26c5d8;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c5e0u: goto label_26c5e0;
        case 0x26c5e4u: goto label_26c5e4;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c5ecu: goto label_26c5ec;
        case 0x26c5f0u: goto label_26c5f0;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c5f8u: goto label_26c5f8;
        case 0x26c5fcu: goto label_26c5fc;
        case 0x26c600u: goto label_26c600;
        case 0x26c604u: goto label_26c604;
        case 0x26c608u: goto label_26c608;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c610u: goto label_26c610;
        case 0x26c614u: goto label_26c614;
        case 0x26c618u: goto label_26c618;
        case 0x26c61cu: goto label_26c61c;
        case 0x26c620u: goto label_26c620;
        case 0x26c624u: goto label_26c624;
        case 0x26c628u: goto label_26c628;
        case 0x26c62cu: goto label_26c62c;
        case 0x26c630u: goto label_26c630;
        case 0x26c634u: goto label_26c634;
        case 0x26c638u: goto label_26c638;
        case 0x26c63cu: goto label_26c63c;
        case 0x26c640u: goto label_26c640;
        case 0x26c644u: goto label_26c644;
        case 0x26c648u: goto label_26c648;
        case 0x26c64cu: goto label_26c64c;
        case 0x26c650u: goto label_26c650;
        case 0x26c654u: goto label_26c654;
        case 0x26c658u: goto label_26c658;
        case 0x26c65cu: goto label_26c65c;
        case 0x26c660u: goto label_26c660;
        case 0x26c664u: goto label_26c664;
        case 0x26c668u: goto label_26c668;
        case 0x26c66cu: goto label_26c66c;
        case 0x26c670u: goto label_26c670;
        case 0x26c674u: goto label_26c674;
        case 0x26c678u: goto label_26c678;
        case 0x26c67cu: goto label_26c67c;
        case 0x26c680u: goto label_26c680;
        case 0x26c684u: goto label_26c684;
        case 0x26c688u: goto label_26c688;
        case 0x26c68cu: goto label_26c68c;
        case 0x26c690u: goto label_26c690;
        case 0x26c694u: goto label_26c694;
        case 0x26c698u: goto label_26c698;
        case 0x26c69cu: goto label_26c69c;
        case 0x26c6a0u: goto label_26c6a0;
        case 0x26c6a4u: goto label_26c6a4;
        case 0x26c6a8u: goto label_26c6a8;
        case 0x26c6acu: goto label_26c6ac;
        case 0x26c6b0u: goto label_26c6b0;
        case 0x26c6b4u: goto label_26c6b4;
        case 0x26c6b8u: goto label_26c6b8;
        case 0x26c6bcu: goto label_26c6bc;
        case 0x26c6c0u: goto label_26c6c0;
        case 0x26c6c4u: goto label_26c6c4;
        case 0x26c6c8u: goto label_26c6c8;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6d0u: goto label_26c6d0;
        case 0x26c6d4u: goto label_26c6d4;
        case 0x26c6d8u: goto label_26c6d8;
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c6e0u: goto label_26c6e0;
        case 0x26c6e4u: goto label_26c6e4;
        case 0x26c6e8u: goto label_26c6e8;
        case 0x26c6ecu: goto label_26c6ec;
        case 0x26c6f0u: goto label_26c6f0;
        case 0x26c6f4u: goto label_26c6f4;
        case 0x26c6f8u: goto label_26c6f8;
        case 0x26c6fcu: goto label_26c6fc;
        case 0x26c700u: goto label_26c700;
        case 0x26c704u: goto label_26c704;
        case 0x26c708u: goto label_26c708;
        case 0x26c70cu: goto label_26c70c;
        case 0x26c710u: goto label_26c710;
        case 0x26c714u: goto label_26c714;
        case 0x26c718u: goto label_26c718;
        case 0x26c71cu: goto label_26c71c;
        case 0x26c720u: goto label_26c720;
        case 0x26c724u: goto label_26c724;
        case 0x26c728u: goto label_26c728;
        case 0x26c72cu: goto label_26c72c;
        case 0x26c730u: goto label_26c730;
        case 0x26c734u: goto label_26c734;
        case 0x26c738u: goto label_26c738;
        case 0x26c73cu: goto label_26c73c;
        case 0x26c740u: goto label_26c740;
        case 0x26c744u: goto label_26c744;
        case 0x26c748u: goto label_26c748;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c750u: goto label_26c750;
        case 0x26c754u: goto label_26c754;
        case 0x26c758u: goto label_26c758;
        case 0x26c75cu: goto label_26c75c;
        case 0x26c760u: goto label_26c760;
        case 0x26c764u: goto label_26c764;
        case 0x26c768u: goto label_26c768;
        case 0x26c76cu: goto label_26c76c;
        case 0x26c770u: goto label_26c770;
        case 0x26c774u: goto label_26c774;
        case 0x26c778u: goto label_26c778;
        case 0x26c77cu: goto label_26c77c;
        case 0x26c780u: goto label_26c780;
        case 0x26c784u: goto label_26c784;
        case 0x26c788u: goto label_26c788;
        case 0x26c78cu: goto label_26c78c;
        case 0x26c790u: goto label_26c790;
        case 0x26c794u: goto label_26c794;
        case 0x26c798u: goto label_26c798;
        case 0x26c79cu: goto label_26c79c;
        case 0x26c7a0u: goto label_26c7a0;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7b0u: goto label_26c7b0;
        case 0x26c7b4u: goto label_26c7b4;
        case 0x26c7b8u: goto label_26c7b8;
        case 0x26c7bcu: goto label_26c7bc;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c7c4u: goto label_26c7c4;
        case 0x26c7c8u: goto label_26c7c8;
        case 0x26c7ccu: goto label_26c7cc;
        case 0x26c7d0u: goto label_26c7d0;
        case 0x26c7d4u: goto label_26c7d4;
        case 0x26c7d8u: goto label_26c7d8;
        case 0x26c7dcu: goto label_26c7dc;
        default: break;
    }

    ctx->pc = 0x26c548u;

label_26c548:
    // 0x26c548: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26c54c:
    // 0x26c54c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_26c550:
    // 0x26c550: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_26c554:
    // 0x26c554: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x26c554u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_26c558:
    // 0x26c558: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_26c55c:
    // 0x26c55c: 0x2610e160  addiu       $s0, $s0, -0x1EA0
    ctx->pc = 0x26c55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959456));
label_26c560:
    // 0x26c560: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_26c564:
    // 0x26c564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26c564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c568:
    // 0x26c568: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_26c56c:
    // 0x26c56c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26c56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26c570:
    // 0x26c570: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_26c574:
    // 0x26c574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c578:
    // 0x26c578: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_26c57c:
    // 0x26c57c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26c57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_26c580:
    // 0x26c580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26c584:
    // 0x26c584: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x26c584u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26c588:
    // 0x26c588: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26c58c:
    // 0x26c58c: 0x8e5500d8  lw          $s5, 0xD8($s2)
    ctx->pc = 0x26c58cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26c590:
    // 0x26c590: 0xc041532  jal         func_1054C8
label_26c594:
    if (ctx->pc == 0x26C594u) {
        ctx->pc = 0x26C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C590u;
        // 0x26c594: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C598u;
        goto label_26c598;
    }
    ctx->pc = 0x26C590u;
    SET_GPR_U32(ctx, 31, 0x26C598u);
    ctx->pc = 0x26C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C590u;
    // 0x26c594: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C590u, 0x26C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C598u;
label_26c598:
    // 0x26c598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c59c:
    // 0x26c59c: 0xc041532  jal         func_1054C8
label_26c5a0:
    if (ctx->pc == 0x26C5A0u) {
        ctx->pc = 0x26C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C59Cu;
        // 0x26c5a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5A4u;
        goto label_26c5a4;
    }
    ctx->pc = 0x26C59Cu;
    SET_GPR_U32(ctx, 31, 0x26C5A4u);
    ctx->pc = 0x26C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C59Cu;
    // 0x26c5a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C59Cu, 0x26C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5A4u;
label_26c5a4:
    // 0x26c5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c5a8:
    // 0x26c5a8: 0xc041532  jal         func_1054C8
label_26c5ac:
    if (ctx->pc == 0x26C5ACu) {
        ctx->pc = 0x26C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5A8u;
        // 0x26c5ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5B0u;
        goto label_26c5b0;
    }
    ctx->pc = 0x26C5A8u;
    SET_GPR_U32(ctx, 31, 0x26C5B0u);
    ctx->pc = 0x26C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5A8u;
    // 0x26c5ac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C5A8u, 0x26C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5B0u;
label_26c5b0:
    // 0x26c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c5b4:
    // 0x26c5b4: 0xc041532  jal         func_1054C8
label_26c5b8:
    if (ctx->pc == 0x26C5B8u) {
        ctx->pc = 0x26C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5B4u;
        // 0x26c5b8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5BCu;
        goto label_26c5bc;
    }
    ctx->pc = 0x26C5B4u;
    SET_GPR_U32(ctx, 31, 0x26C5BCu);
    ctx->pc = 0x26C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5B4u;
    // 0x26c5b8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C5B4u, 0x26C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5BCu;
label_26c5bc:
    // 0x26c5bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26c5bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c5c0:
    // 0x26c5c0: 0xc095f3a  jal         func_257CE8
label_26c5c4:
    if (ctx->pc == 0x26C5C4u) {
        ctx->pc = 0x26C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5C0u;
        // 0x26c5c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5C8u;
        goto label_26c5c8;
    }
    ctx->pc = 0x26C5C0u;
    SET_GPR_U32(ctx, 31, 0x26C5C8u);
    ctx->pc = 0x26C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5C0u;
    // 0x26c5c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257CE8u, 0x26C5C0u, 0x26C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5C8u;
label_26c5c8:
    // 0x26c5c8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26c5cc:
    // 0x26c5cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c5d0:
    // 0x26c5d0: 0xc0874fa  jal         func_21D3E8
label_26c5d4:
    if (ctx->pc == 0x26C5D4u) {
        ctx->pc = 0x26C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5D0u;
        // 0x26c5d4: 0xac5100b4  sw          $s1, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5D8u;
        goto label_26c5d8;
    }
    ctx->pc = 0x26C5D0u;
    SET_GPR_U32(ctx, 31, 0x26C5D8u);
    ctx->pc = 0x26C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5D0u;
    // 0x26c5d4: 0xac5100b4  sw          $s1, 0xB4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x26C5D0u, 0x26C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5D8u;
label_26c5d8:
    // 0x26c5d8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x26c5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_26c5dc:
    // 0x26c5dc: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_26c5e0:
    if (ctx->pc == 0x26C5E0u) {
        ctx->pc = 0x26C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5DCu;
        // 0x26c5e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C5E4u;
        goto label_26c5e4;
    }
    ctx->pc = 0x26C5DCu;
    {
        const bool branch_taken_0x26c5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5DCu;
        // 0x26c5e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5dc) {
            ctx->pc = 0x26C624u;
            goto label_26c624;
        }
    }
    ctx->pc = 0x26C5E4u;
label_26c5e4:
    // 0x26c5e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x26c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_26c5e8:
    // 0x26c5e8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x26c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_26c5ec:
    // 0x26c5ec: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x26c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_26c5f0:
    // 0x26c5f0: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_26c5f4:
    if (ctx->pc == 0x26C5F4u) {
        ctx->pc = 0x26C5F8u;
        goto label_26c5f8;
    }
    ctx->pc = 0x26C5F0u;
    {
        const bool branch_taken_0x26c5f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c5f0) {
            ctx->pc = 0x26C628u;
            goto label_26c628;
        }
    }
    ctx->pc = 0x26C5F8u;
label_26c5f8:
    // 0x26c5f8: 0xc087502  jal         func_21D408
label_26c5fc:
    if (ctx->pc == 0x26C5FCu) {
        ctx->pc = 0x26C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5F8u;
        // 0x26c5fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C600u;
        goto label_26c600;
    }
    ctx->pc = 0x26C5F8u;
    SET_GPR_U32(ctx, 31, 0x26C600u);
    ctx->pc = 0x26C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5F8u;
    // 0x26c5fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26C5F8u, 0x26C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C600u;
label_26c600:
    // 0x26c600: 0x8043000b  lb          $v1, 0xB($v0)
    ctx->pc = 0x26c600u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_26c604:
    // 0x26c604: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_26c608:
    if (ctx->pc == 0x26C608u) {
        ctx->pc = 0x26C60Cu;
        goto label_26c60c;
    }
    ctx->pc = 0x26C604u;
    {
        const bool branch_taken_0x26c604 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x26c604) {
            ctx->pc = 0x26C628u;
            goto label_26c628;
        }
    }
    ctx->pc = 0x26C60Cu;
label_26c60c:
    // 0x26c60c: 0xc087502  jal         func_21D408
label_26c610:
    if (ctx->pc == 0x26C610u) {
        ctx->pc = 0x26C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C60Cu;
        // 0x26c610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C614u;
        goto label_26c614;
    }
    ctx->pc = 0x26C60Cu;
    SET_GPR_U32(ctx, 31, 0x26C614u);
    ctx->pc = 0x26C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C60Cu;
    // 0x26c610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26C60Cu, 0x26C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C614u;
label_26c614:
    // 0x26c614: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26c618:
    // 0x26c618: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26c61c:
    // 0x26c61c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_26c620:
    if (ctx->pc == 0x26C620u) {
        ctx->pc = 0x26C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C61Cu;
        // 0x26c620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C624u;
        goto label_26c624;
    }
    ctx->pc = 0x26C61Cu;
    {
        const bool branch_taken_0x26c61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C61Cu;
        // 0x26c620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c61c) {
            ctx->pc = 0x26C628u;
            goto label_26c628;
        }
    }
    ctx->pc = 0x26C624u;
label_26c624:
    // 0x26c624: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26c624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_26c628:
    // 0x26c628: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_26c62c:
    if (ctx->pc == 0x26C62Cu) {
        ctx->pc = 0x26C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C628u;
        // 0x26c62c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C630u;
        goto label_26c630;
    }
    ctx->pc = 0x26C628u;
    {
        const bool branch_taken_0x26c628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C628u;
        // 0x26c62c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c628) {
            ctx->pc = 0x26C650u;
            goto label_26c650;
        }
    }
    ctx->pc = 0x26C630u;
label_26c630:
    // 0x26c630: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26c634:
    // 0x26c634: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26c634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26c638:
    // 0x26c638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26c63c:
    // 0x26c63c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26c63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26c640:
    // 0x26c640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c644:
    // 0x26c644: 0xc04159e  jal         func_105678
label_26c648:
    if (ctx->pc == 0x26C648u) {
        ctx->pc = 0x26C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C644u;
        // 0x26c648: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C64Cu;
        goto label_26c64c;
    }
    ctx->pc = 0x26C644u;
    SET_GPR_U32(ctx, 31, 0x26C64Cu);
    ctx->pc = 0x26C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C644u;
    // 0x26c648: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26C644u, 0x26C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C64Cu;
label_26c64c:
    // 0x26c64c: 0x0  nop
    ctx->pc = 0x26c64cu;
    // NOP
label_26c650:
    // 0x26c650: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26c654:
    // 0x26c654: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26c658:
    // 0x26c658: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_26c65c:
    if (ctx->pc == 0x26C65Cu) {
        ctx->pc = 0x26C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C658u;
        // 0x26c65c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C660u;
        goto label_26c660;
    }
    ctx->pc = 0x26C658u;
    {
        const bool branch_taken_0x26c658 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C658u;
        // 0x26c65c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c658) {
            ctx->pc = 0x26C6A0u;
            goto label_26c6a0;
        }
    }
    ctx->pc = 0x26C660u;
label_26c660:
    // 0x26c660: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26c664:
    // 0x26c664: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26c664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26c668:
    // 0x26c668: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26c66c:
    // 0x26c66c: 0x40f809  jalr        $v0
label_26c670:
    if (ctx->pc == 0x26C670u) {
        ctx->pc = 0x26C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C66Cu;
        // 0x26c670: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C674u;
        goto label_26c674;
    }
    ctx->pc = 0x26C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26C674u);
        ctx->pc = 0x26C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C66Cu;
        // 0x26c670: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C66Cu, 0x26C674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C674u;
label_26c674:
    // 0x26c674: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26c674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26c678:
    // 0x26c678: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26c678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26c67c:
    // 0x26c67c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26c67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c680:
    // 0x26c680: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26c680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26c684:
    // 0x26c684: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26c684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c688:
    // 0x26c688: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c68c:
    // 0x26c68c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26c68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c690:
    // 0x26c690: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x26c690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_26c694:
    // 0x26c694: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26c698:
    // 0x26c698: 0xc041664  jal         func_105990
label_26c69c:
    if (ctx->pc == 0x26C69Cu) {
        ctx->pc = 0x26C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C698u;
        // 0x26c69c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6A0u;
        goto label_26c6a0;
    }
    ctx->pc = 0x26C698u;
    SET_GPR_U32(ctx, 31, 0x26C6A0u);
    ctx->pc = 0x26C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C698u;
    // 0x26c69c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26C698u, 0x26C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6A0u;
label_26c6a0:
    // 0x26c6a0: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
label_26c6a4:
    if (ctx->pc == 0x26C6A4u) {
        ctx->pc = 0x26C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6A0u;
        // 0x26c6a4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6A8u;
        goto label_26c6a8;
    }
    ctx->pc = 0x26C6A0u;
    {
        const bool branch_taken_0x26c6a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6A0u;
        // 0x26c6a4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6a0) {
            ctx->pc = 0x26C700u;
            goto label_26c700;
        }
    }
    ctx->pc = 0x26C6A8u;
label_26c6a8:
    // 0x26c6a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26c6ac:
    // 0x26c6ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x26c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26c6b0:
    // 0x26c6b0: 0x24100046  addiu       $s0, $zero, 0x46
    ctx->pc = 0x26c6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_26c6b4:
    // 0x26c6b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26c6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26c6b8:
    // 0x26c6b8: 0x45800b  movn        $s0, $v0, $a1
    ctx->pc = 0x26c6b8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_26c6bc:
    // 0x26c6bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26c6c0:
    // 0x26c6c0: 0x40f809  jalr        $v0
label_26c6c4:
    if (ctx->pc == 0x26C6C4u) {
        ctx->pc = 0x26C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6C0u;
        // 0x26c6c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6C8u;
        goto label_26c6c8;
    }
    ctx->pc = 0x26C6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26C6C8u);
        ctx->pc = 0x26C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6C0u;
        // 0x26c6c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C6C0u, 0x26C6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C6C8u;
label_26c6c8:
    // 0x26c6c8: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_26c6cc:
    if (ctx->pc == 0x26C6CCu) {
        ctx->pc = 0x26C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6C8u;
        // 0x26c6cc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6D0u;
        goto label_26c6d0;
    }
    ctx->pc = 0x26C6C8u;
    {
        const bool branch_taken_0x26c6c8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6C8u;
        // 0x26c6cc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6c8) {
            ctx->pc = 0x26C6DCu;
            goto label_26c6dc;
        }
    }
    ctx->pc = 0x26C6D0u;
label_26c6d0:
    // 0x26c6d0: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_26c6d4:
    // 0x26c6d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_26c6d8:
    if (ctx->pc == 0x26C6D8u) {
        ctx->pc = 0x26C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6D4u;
        // 0x26c6d8: 0x244ac1b8  addiu       $t2, $v0, -0x3E48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6DCu;
        goto label_26c6dc;
    }
    ctx->pc = 0x26C6D4u;
    {
        const bool branch_taken_0x26c6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6D4u;
        // 0x26c6d8: 0x244ac1b8  addiu       $t2, $v0, -0x3E48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6d4) {
            ctx->pc = 0x26C6E4u;
            goto label_26c6e4;
        }
    }
    ctx->pc = 0x26C6DCu;
label_26c6dc:
    // 0x26c6dc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x26c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_26c6e0:
    // 0x26c6e0: 0x244ac1d8  addiu       $t2, $v0, -0x3E28
    ctx->pc = 0x26c6e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951384));
label_26c6e4:
    // 0x26c6e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26c6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c6e8:
    // 0x26c6e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26c6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c6ec:
    // 0x26c6ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26c6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c6f0:
    // 0x26c6f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26c6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26c6f4:
    // 0x26c6f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26c6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c6f8:
    // 0x26c6f8: 0xc041664  jal         func_105990
label_26c6fc:
    if (ctx->pc == 0x26C6FCu) {
        ctx->pc = 0x26C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6F8u;
        // 0x26c6fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C700u;
        goto label_26c700;
    }
    ctx->pc = 0x26C6F8u;
    SET_GPR_U32(ctx, 31, 0x26C700u);
    ctx->pc = 0x26C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6F8u;
    // 0x26c6fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26C6F8u, 0x26C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C700u;
label_26c700:
    // 0x26c700: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_26c704:
    if (ctx->pc == 0x26C704u) {
        ctx->pc = 0x26C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C700u;
        // 0x26c704: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C708u;
        goto label_26c708;
    }
    ctx->pc = 0x26C700u;
    {
        const bool branch_taken_0x26c700 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C700u;
        // 0x26c704: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c700) {
            ctx->pc = 0x26C728u;
            goto label_26c728;
        }
    }
    ctx->pc = 0x26C708u;
label_26c708:
    // 0x26c708: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26c708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26c70c:
    // 0x26c70c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26c70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26c710:
    // 0x26c710: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26c714:
    // 0x26c714: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26c714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26c718:
    // 0x26c718: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26c718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26c71c:
    // 0x26c71c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26c71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c720:
    // 0x26c720: 0xc041b20  jal         func_106C80
label_26c724:
    if (ctx->pc == 0x26C724u) {
        ctx->pc = 0x26C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C720u;
        // 0x26c724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C728u;
        goto label_26c728;
    }
    ctx->pc = 0x26C720u;
    SET_GPR_U32(ctx, 31, 0x26C728u);
    ctx->pc = 0x26C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C720u;
    // 0x26c724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26C720u, 0x26C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C728u;
label_26c728:
    // 0x26c728: 0xc05d484  jal         func_175210
label_26c72c:
    if (ctx->pc == 0x26C72Cu) {
        ctx->pc = 0x26C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C728u;
        // 0x26c72c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C730u;
        goto label_26c730;
    }
    ctx->pc = 0x26C728u;
    SET_GPR_U32(ctx, 31, 0x26C730u);
    ctx->pc = 0x26C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C728u;
    // 0x26c72c: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26C728u, 0x26C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C730u;
label_26c730:
    // 0x26c730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c734:
    // 0x26c734: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26c734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26c738:
    // 0x26c738: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26c738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26c73c:
    // 0x26c73c: 0xa0f809  jalr        $a1
label_26c740:
    if (ctx->pc == 0x26C740u) {
        ctx->pc = 0x26C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C73Cu;
        // 0x26c740: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C744u;
        goto label_26c744;
    }
    ctx->pc = 0x26C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26C744u);
        ctx->pc = 0x26C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C73Cu;
        // 0x26c740: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C73Cu, 0x26C744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C744u;
label_26c744:
    // 0x26c744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c748:
    // 0x26c748: 0xc087016  jal         func_21C058
label_26c74c:
    if (ctx->pc == 0x26C74Cu) {
        ctx->pc = 0x26C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C748u;
        // 0x26c74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C750u;
        goto label_26c750;
    }
    ctx->pc = 0x26C748u;
    SET_GPR_U32(ctx, 31, 0x26C750u);
    ctx->pc = 0x26C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C748u;
    // 0x26c74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26C748u, 0x26C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C750u;
label_26c750:
    // 0x26c750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c754:
    // 0x26c754: 0xc089990  jal         func_226640
label_26c758:
    if (ctx->pc == 0x26C758u) {
        ctx->pc = 0x26C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C754u;
        // 0x26c758: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C75Cu;
        goto label_26c75c;
    }
    ctx->pc = 0x26C754u;
    SET_GPR_U32(ctx, 31, 0x26C75Cu);
    ctx->pc = 0x26C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C754u;
    // 0x26c758: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26C754u, 0x26C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C75Cu;
label_26c75c:
    // 0x26c75c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26c760:
    // 0x26c760: 0xc05d53a  jal         func_1754E8
label_26c764:
    if (ctx->pc == 0x26C764u) {
        ctx->pc = 0x26C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C760u;
        // 0x26c764: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C768u;
        goto label_26c768;
    }
    ctx->pc = 0x26C760u;
    SET_GPR_U32(ctx, 31, 0x26C768u);
    ctx->pc = 0x26C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C760u;
    // 0x26c764: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26C760u, 0x26C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C768u;
label_26c768:
    // 0x26c768: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c76c:
    // 0x26c76c: 0xc05d4f6  jal         func_1753D8
label_26c770:
    if (ctx->pc == 0x26C770u) {
        ctx->pc = 0x26C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C76Cu;
        // 0x26c770: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C774u;
        goto label_26c774;
    }
    ctx->pc = 0x26C76Cu;
    SET_GPR_U32(ctx, 31, 0x26C774u);
    ctx->pc = 0x26C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C76Cu;
    // 0x26c770: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26C76Cu, 0x26C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C774u;
label_26c774:
    // 0x26c774: 0xc089b98  jal         func_226E60
label_26c778:
    if (ctx->pc == 0x26C778u) {
        ctx->pc = 0x26C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C774u;
        // 0x26c778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C77Cu;
        goto label_26c77c;
    }
    ctx->pc = 0x26C774u;
    SET_GPR_U32(ctx, 31, 0x26C77Cu);
    ctx->pc = 0x26C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C774u;
    // 0x26c778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x26C774u, 0x26C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C77Cu;
label_26c77c:
    // 0x26c77c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c780:
    // 0x26c780: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_26c784:
    if (ctx->pc == 0x26C784u) {
        ctx->pc = 0x26C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C780u;
        // 0x26c784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C788u;
        goto label_26c788;
    }
    ctx->pc = 0x26C780u;
    {
        const bool branch_taken_0x26c780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C780u;
        // 0x26c784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c780) {
            ctx->pc = 0x26C7B0u;
            goto label_26c7b0;
        }
    }
    ctx->pc = 0x26C788u;
label_26c788:
    // 0x26c788: 0xc040680  jal         func_101A00
label_26c78c:
    if (ctx->pc == 0x26C78Cu) {
        ctx->pc = 0x26C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C788u;
        // 0x26c78c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C790u;
        goto label_26c790;
    }
    ctx->pc = 0x26C788u;
    SET_GPR_U32(ctx, 31, 0x26C790u);
    ctx->pc = 0x26C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C788u;
    // 0x26c78c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x26C788u, 0x26C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C790u;
label_26c790:
    // 0x26c790: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c794:
    // 0x26c794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c798:
    // 0x26c798: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26c798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26c79c:
    // 0x26c79c: 0xc088736  jal         func_221CD8
label_26c7a0:
    if (ctx->pc == 0x26C7A0u) {
        ctx->pc = 0x26C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C79Cu;
        // 0x26c7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7A4u;
        goto label_26c7a4;
    }
    ctx->pc = 0x26C79Cu;
    SET_GPR_U32(ctx, 31, 0x26C7A4u);
    ctx->pc = 0x26C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C79Cu;
    // 0x26c7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x26C79Cu, 0x26C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7A4u;
label_26c7a4:
    // 0x26c7a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c7a8:
    // 0x26c7a8: 0xc087016  jal         func_21C058
label_26c7ac:
    if (ctx->pc == 0x26C7ACu) {
        ctx->pc = 0x26C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7A8u;
        // 0x26c7ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7B0u;
        goto label_26c7b0;
    }
    ctx->pc = 0x26C7A8u;
    SET_GPR_U32(ctx, 31, 0x26C7B0u);
    ctx->pc = 0x26C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7A8u;
    // 0x26c7ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26C7A8u, 0x26C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7B0u;
label_26c7b0:
    // 0x26c7b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26c7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26c7b4:
    // 0x26c7b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26c7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26c7b8:
    // 0x26c7b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26c7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26c7bc:
    // 0x26c7bc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26c7bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26c7c0:
    // 0x26c7c0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26c7c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26c7c4:
    // 0x26c7c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26c7c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26c7c8:
    // 0x26c7c8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26c7c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26c7cc:
    // 0x26c7cc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26c7ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26c7d0:
    // 0x26c7d0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26c7d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26c7d4:
    // 0x26c7d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26c7d8:
    // 0x26c7d8: 0x3e00008  jr          $ra
label_26c7dc:
    if (ctx->pc == 0x26C7DCu) {
        ctx->pc = 0x26C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7D8u;
        // 0x26c7dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C7E0u;
        goto label_fallthrough_0x26c7d8;
    }
    ctx->pc = 0x26C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7D8u;
        // 0x26c7dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26c7d8:
    ctx->pc = 0x26C7E0u;
}
