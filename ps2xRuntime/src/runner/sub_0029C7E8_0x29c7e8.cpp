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

// Function: sub_0029C7E8
// Address: 0x29c7e8 - 0x29c910
void sub_0029C7E8_0x29c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C7E8_0x29c7e8");
#endif

    switch (ctx->pc) {
        case 0x29c7e8u: goto label_29c7e8;
        case 0x29c7ecu: goto label_29c7ec;
        case 0x29c7f0u: goto label_29c7f0;
        case 0x29c7f4u: goto label_29c7f4;
        case 0x29c7f8u: goto label_29c7f8;
        case 0x29c7fcu: goto label_29c7fc;
        case 0x29c800u: goto label_29c800;
        case 0x29c804u: goto label_29c804;
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c810u: goto label_29c810;
        case 0x29c814u: goto label_29c814;
        case 0x29c818u: goto label_29c818;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c820u: goto label_29c820;
        case 0x29c824u: goto label_29c824;
        case 0x29c828u: goto label_29c828;
        case 0x29c82cu: goto label_29c82c;
        case 0x29c830u: goto label_29c830;
        case 0x29c834u: goto label_29c834;
        case 0x29c838u: goto label_29c838;
        case 0x29c83cu: goto label_29c83c;
        case 0x29c840u: goto label_29c840;
        case 0x29c844u: goto label_29c844;
        case 0x29c848u: goto label_29c848;
        case 0x29c84cu: goto label_29c84c;
        case 0x29c850u: goto label_29c850;
        case 0x29c854u: goto label_29c854;
        case 0x29c858u: goto label_29c858;
        case 0x29c85cu: goto label_29c85c;
        case 0x29c860u: goto label_29c860;
        case 0x29c864u: goto label_29c864;
        case 0x29c868u: goto label_29c868;
        case 0x29c86cu: goto label_29c86c;
        case 0x29c870u: goto label_29c870;
        case 0x29c874u: goto label_29c874;
        case 0x29c878u: goto label_29c878;
        case 0x29c87cu: goto label_29c87c;
        case 0x29c880u: goto label_29c880;
        case 0x29c884u: goto label_29c884;
        case 0x29c888u: goto label_29c888;
        case 0x29c88cu: goto label_29c88c;
        case 0x29c890u: goto label_29c890;
        case 0x29c894u: goto label_29c894;
        case 0x29c898u: goto label_29c898;
        case 0x29c89cu: goto label_29c89c;
        case 0x29c8a0u: goto label_29c8a0;
        case 0x29c8a4u: goto label_29c8a4;
        case 0x29c8a8u: goto label_29c8a8;
        case 0x29c8acu: goto label_29c8ac;
        case 0x29c8b0u: goto label_29c8b0;
        case 0x29c8b4u: goto label_29c8b4;
        case 0x29c8b8u: goto label_29c8b8;
        case 0x29c8bcu: goto label_29c8bc;
        case 0x29c8c0u: goto label_29c8c0;
        case 0x29c8c4u: goto label_29c8c4;
        case 0x29c8c8u: goto label_29c8c8;
        case 0x29c8ccu: goto label_29c8cc;
        case 0x29c8d0u: goto label_29c8d0;
        case 0x29c8d4u: goto label_29c8d4;
        case 0x29c8d8u: goto label_29c8d8;
        case 0x29c8dcu: goto label_29c8dc;
        case 0x29c8e0u: goto label_29c8e0;
        case 0x29c8e4u: goto label_29c8e4;
        case 0x29c8e8u: goto label_29c8e8;
        case 0x29c8ecu: goto label_29c8ec;
        case 0x29c8f0u: goto label_29c8f0;
        case 0x29c8f4u: goto label_29c8f4;
        case 0x29c8f8u: goto label_29c8f8;
        case 0x29c8fcu: goto label_29c8fc;
        case 0x29c900u: goto label_29c900;
        case 0x29c904u: goto label_29c904;
        case 0x29c908u: goto label_29c908;
        case 0x29c90cu: goto label_29c90c;
        default: break;
    }

    ctx->pc = 0x29c7e8u;

label_29c7e8:
    // 0x29c7e8: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x29c7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_29c7ec:
    // 0x29c7ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29c7f0:
    // 0x29c7f0: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x29c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_29c7f4:
    // 0x29c7f4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29c7f8:
    // 0x29c7f8: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x29c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_29c7fc:
    // 0x29c7fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c800:
    // 0x29c800: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x29c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_29c804:
    // 0x29c804: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29c804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c808:
    // 0x29c808: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x29c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_29c80c:
    // 0x29c80c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29c80cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c810:
    // 0x29c810: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x29c810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_29c814:
    // 0x29c814: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x29c814u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c818:
    // 0x29c818: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x29c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_29c81c:
    // 0x29c81c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c820:
    // 0x29c820: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x29c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_29c824:
    // 0x29c824: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x29c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_29c828:
    // 0x29c828: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x29c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_29c82c:
    // 0x29c82c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29c82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29c830:
    // 0x29c830: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x29c830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_29c834:
    // 0x29c834: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x29c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_29c838:
    // 0x29c838: 0x86a70092  lh          $a3, 0x92($s5)
    ctx->pc = 0x29c838u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_29c83c:
    // 0x29c83c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x29c83cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_29c840:
    // 0x29c840: 0xc089d2a  jal         func_2274A8
label_29c844:
    if (ctx->pc == 0x29C844u) {
        ctx->pc = 0x29C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C840u;
        // 0x29c844: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C848u;
        goto label_29c848;
    }
    ctx->pc = 0x29C840u;
    SET_GPR_U32(ctx, 31, 0x29C848u);
    ctx->pc = 0x29C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C840u;
    // 0x29c844: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x29C840u, 0x29C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C848u;
label_29c848:
    // 0x29c848: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29c848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c84c:
    // 0x29c84c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29c850:
    // 0x29c850: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x29c850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_29c854:
    // 0x29c854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29c858:
    if (ctx->pc == 0x29C858u) {
        ctx->pc = 0x29C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C854u;
        // 0x29c858: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C85Cu;
        goto label_29c85c;
    }
    ctx->pc = 0x29C854u;
    {
        const bool branch_taken_0x29c854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C854u;
        // 0x29c858: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c854) {
            ctx->pc = 0x29C868u;
            goto label_29c868;
        }
    }
    ctx->pc = 0x29C85Cu;
label_29c85c:
    // 0x29c85c: 0xc0e1a34  jal         func_3868D0
label_29c860:
    if (ctx->pc == 0x29C860u) {
        ctx->pc = 0x29C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C85Cu;
        // 0x29c860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C864u;
        goto label_29c864;
    }
    ctx->pc = 0x29C85Cu;
    SET_GPR_U32(ctx, 31, 0x29C864u);
    ctx->pc = 0x29C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C85Cu;
    // 0x29c860: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x29C85Cu, 0x29C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C864u;
label_29c864:
    // 0x29c864: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x29c864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29c868:
    // 0x29c868: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29c868u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c86c:
    // 0x29c86c: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
label_29c870:
    if (ctx->pc == 0x29C870u) {
        ctx->pc = 0x29C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C86Cu;
        // 0x29c870: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C874u;
        goto label_29c874;
    }
    ctx->pc = 0x29C86Cu;
    {
        const bool branch_taken_0x29c86c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C86Cu;
        // 0x29c870: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c86c) {
            ctx->pc = 0x29C8E0u;
            goto label_29c8e0;
        }
    }
    ctx->pc = 0x29C874u;
label_29c874:
    // 0x29c874: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x29c874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c878:
    // 0x29c878: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x29c878u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29c87c:
    // 0x29c87c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29c87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29c880:
    // 0x29c880: 0x2e0f809  jalr        $s7
label_29c884:
    if (ctx->pc == 0x29C884u) {
        ctx->pc = 0x29C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C880u;
        // 0x29c884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C888u;
        goto label_29c888;
    }
    ctx->pc = 0x29C880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x29C888u);
        ctx->pc = 0x29C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C880u;
        // 0x29c884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C880u, 0x29C888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C888u;
label_29c888:
    // 0x29c888: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_29c88c:
    if (ctx->pc == 0x29C88Cu) {
        ctx->pc = 0x29C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C888u;
        // 0x29c88c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C890u;
        goto label_29c890;
    }
    ctx->pc = 0x29C888u;
    {
        const bool branch_taken_0x29c888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C888u;
        // 0x29c88c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c888) {
            ctx->pc = 0x29C8D0u;
            goto label_29c8d0;
        }
    }
    ctx->pc = 0x29C890u;
label_29c890:
    // 0x29c890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29c894:
    // 0x29c894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c898:
    // 0x29c898: 0xc0888a2  jal         func_222288
label_29c89c:
    if (ctx->pc == 0x29C89Cu) {
        ctx->pc = 0x29C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C898u;
        // 0x29c89c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C8A0u;
        goto label_29c8a0;
    }
    ctx->pc = 0x29C898u;
    SET_GPR_U32(ctx, 31, 0x29C8A0u);
    ctx->pc = 0x29C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C898u;
    // 0x29c89c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x29C898u, 0x29C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8A0u;
label_29c8a0:
    // 0x29c8a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29c8a4:
    if (ctx->pc == 0x29C8A4u) {
        ctx->pc = 0x29C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8A0u;
        // 0x29c8a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C8A8u;
        goto label_29c8a8;
    }
    ctx->pc = 0x29C8A0u;
    {
        const bool branch_taken_0x29c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8A0u;
        // 0x29c8a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8a0) {
            ctx->pc = 0x29C8D0u;
            goto label_29c8d0;
        }
    }
    ctx->pc = 0x29C8A8u;
label_29c8a8:
    // 0x29c8a8: 0xc137826  jal         func_4DE098
label_29c8ac:
    if (ctx->pc == 0x29C8ACu) {
        ctx->pc = 0x29C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8A8u;
        // 0x29c8ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C8B0u;
        goto label_29c8b0;
    }
    ctx->pc = 0x29C8A8u;
    SET_GPR_U32(ctx, 31, 0x29C8B0u);
    ctx->pc = 0x29C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8A8u;
    // 0x29c8ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29C8A8u, 0x29C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8B0u;
label_29c8b0:
    // 0x29c8b0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29c8b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_29c8b4:
    // 0x29c8b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29c8b8:
    // 0x29c8b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c8bc:
    // 0x29c8bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29c8bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29c8c0:
    // 0x29c8c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29c8c4:
    // 0x29c8c4: 0x40f809  jalr        $v0
label_29c8c8:
    if (ctx->pc == 0x29C8C8u) {
        ctx->pc = 0x29C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8C4u;
        // 0x29c8c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C8CCu;
        goto label_29c8cc;
    }
    ctx->pc = 0x29C8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C8CCu);
        ctx->pc = 0x29C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8C4u;
        // 0x29c8c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8C4u, 0x29C8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C8CCu;
label_29c8cc:
    // 0x29c8cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29c8d0:
    // 0x29c8d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29c8d4:
    // 0x29c8d4: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x29c8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_29c8d8:
    // 0x29c8d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_29c8dc:
    if (ctx->pc == 0x29C8DCu) {
        ctx->pc = 0x29C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8D8u;
        // 0x29c8dc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C8E0u;
        goto label_29c8e0;
    }
    ctx->pc = 0x29C8D8u;
    {
        const bool branch_taken_0x29c8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8D8u;
        // 0x29c8dc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8d8) {
            ctx->pc = 0x29C878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c878;
        }
    }
    ctx->pc = 0x29C8E0u;
label_29c8e0:
    // 0x29c8e0: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x29c8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_29c8e4:
    // 0x29c8e4: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x29c8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_29c8e8:
    // 0x29c8e8: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x29c8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_29c8ec:
    // 0x29c8ec: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x29c8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_29c8f0:
    // 0x29c8f0: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x29c8f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_29c8f4:
    // 0x29c8f4: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x29c8f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_29c8f8:
    // 0x29c8f8: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x29c8f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_29c8fc:
    // 0x29c8fc: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x29c8fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_29c900:
    // 0x29c900: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x29c900u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_29c904:
    // 0x29c904: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x29c904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_29c908:
    // 0x29c908: 0x3e00008  jr          $ra
label_29c90c:
    if (ctx->pc == 0x29C90Cu) {
        ctx->pc = 0x29C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C908u;
        // 0x29c90c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C910u;
        goto label_fallthrough_0x29c908;
    }
    ctx->pc = 0x29C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C908u;
        // 0x29c90c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c908:
    ctx->pc = 0x29C910u;
}
