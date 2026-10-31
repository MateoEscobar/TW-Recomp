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

// Function: sub_0029C6D0
// Address: 0x29c6d0 - 0x29c7e8
void sub_0029C6D0_0x29c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C6D0_0x29c6d0");
#endif

    switch (ctx->pc) {
        case 0x29c6d0u: goto label_29c6d0;
        case 0x29c6d4u: goto label_29c6d4;
        case 0x29c6d8u: goto label_29c6d8;
        case 0x29c6dcu: goto label_29c6dc;
        case 0x29c6e0u: goto label_29c6e0;
        case 0x29c6e4u: goto label_29c6e4;
        case 0x29c6e8u: goto label_29c6e8;
        case 0x29c6ecu: goto label_29c6ec;
        case 0x29c6f0u: goto label_29c6f0;
        case 0x29c6f4u: goto label_29c6f4;
        case 0x29c6f8u: goto label_29c6f8;
        case 0x29c6fcu: goto label_29c6fc;
        case 0x29c700u: goto label_29c700;
        case 0x29c704u: goto label_29c704;
        case 0x29c708u: goto label_29c708;
        case 0x29c70cu: goto label_29c70c;
        case 0x29c710u: goto label_29c710;
        case 0x29c714u: goto label_29c714;
        case 0x29c718u: goto label_29c718;
        case 0x29c71cu: goto label_29c71c;
        case 0x29c720u: goto label_29c720;
        case 0x29c724u: goto label_29c724;
        case 0x29c728u: goto label_29c728;
        case 0x29c72cu: goto label_29c72c;
        case 0x29c730u: goto label_29c730;
        case 0x29c734u: goto label_29c734;
        case 0x29c738u: goto label_29c738;
        case 0x29c73cu: goto label_29c73c;
        case 0x29c740u: goto label_29c740;
        case 0x29c744u: goto label_29c744;
        case 0x29c748u: goto label_29c748;
        case 0x29c74cu: goto label_29c74c;
        case 0x29c750u: goto label_29c750;
        case 0x29c754u: goto label_29c754;
        case 0x29c758u: goto label_29c758;
        case 0x29c75cu: goto label_29c75c;
        case 0x29c760u: goto label_29c760;
        case 0x29c764u: goto label_29c764;
        case 0x29c768u: goto label_29c768;
        case 0x29c76cu: goto label_29c76c;
        case 0x29c770u: goto label_29c770;
        case 0x29c774u: goto label_29c774;
        case 0x29c778u: goto label_29c778;
        case 0x29c77cu: goto label_29c77c;
        case 0x29c780u: goto label_29c780;
        case 0x29c784u: goto label_29c784;
        case 0x29c788u: goto label_29c788;
        case 0x29c78cu: goto label_29c78c;
        case 0x29c790u: goto label_29c790;
        case 0x29c794u: goto label_29c794;
        case 0x29c798u: goto label_29c798;
        case 0x29c79cu: goto label_29c79c;
        case 0x29c7a0u: goto label_29c7a0;
        case 0x29c7a4u: goto label_29c7a4;
        case 0x29c7a8u: goto label_29c7a8;
        case 0x29c7acu: goto label_29c7ac;
        case 0x29c7b0u: goto label_29c7b0;
        case 0x29c7b4u: goto label_29c7b4;
        case 0x29c7b8u: goto label_29c7b8;
        case 0x29c7bcu: goto label_29c7bc;
        case 0x29c7c0u: goto label_29c7c0;
        case 0x29c7c4u: goto label_29c7c4;
        case 0x29c7c8u: goto label_29c7c8;
        case 0x29c7ccu: goto label_29c7cc;
        case 0x29c7d0u: goto label_29c7d0;
        case 0x29c7d4u: goto label_29c7d4;
        case 0x29c7d8u: goto label_29c7d8;
        case 0x29c7dcu: goto label_29c7dc;
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7e4u: goto label_29c7e4;
        default: break;
    }

    ctx->pc = 0x29c6d0u;

label_29c6d0:
    // 0x29c6d0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x29c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_29c6d4:
    // 0x29c6d4: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x29c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_29c6d8:
    // 0x29c6d8: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x29c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_29c6dc:
    // 0x29c6dc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x29c6dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c6e0:
    // 0x29c6e0: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x29c6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_29c6e4:
    // 0x29c6e4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x29c6e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29c6e8:
    // 0x29c6e8: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x29c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_29c6ec:
    // 0x29c6ec: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x29c6ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c6f0:
    // 0x29c6f0: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x29c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_29c6f4:
    // 0x29c6f4: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x29c6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_29c6f8:
    // 0x29c6f8: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x29c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_29c6fc:
    // 0x29c6fc: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x29c6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_29c700:
    // 0x29c700: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x29c700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_29c704:
    // 0x29c704: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_29c708:
    if (ctx->pc == 0x29C708u) {
        ctx->pc = 0x29C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C704u;
        // 0x29c708: 0xffbf01e0  sd          $ra, 0x1E0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C70Cu;
        goto label_29c70c;
    }
    ctx->pc = 0x29C704u;
    {
        const bool branch_taken_0x29c704 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C704u;
        // 0x29c708: 0xffbf01e0  sd          $ra, 0x1E0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c704) {
            ctx->pc = 0x29C720u;
            goto label_29c720;
        }
    }
    ctx->pc = 0x29C70Cu;
label_29c70c:
    // 0x29c70c: 0x86c30092  lh          $v1, 0x92($s6)
    ctx->pc = 0x29c70cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_29c710:
    // 0x29c710: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x29c710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_29c714:
    // 0x29c714: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x29c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_29c718:
    // 0x29c718: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29c718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29c71c:
    // 0x29c71c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x29c71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29c720:
    // 0x29c720: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x29c720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c724:
    // 0x29c724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c728:
    // 0x29c728: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x29c728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_29c72c:
    // 0x29c72c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x29c72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29c730:
    // 0x29c730: 0xc089d2a  jal         func_2274A8
label_29c734:
    if (ctx->pc == 0x29C734u) {
        ctx->pc = 0x29C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C730u;
        // 0x29c734: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C738u;
        goto label_29c738;
    }
    ctx->pc = 0x29C730u;
    SET_GPR_U32(ctx, 31, 0x29C738u);
    ctx->pc = 0x29C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C730u;
    // 0x29c734: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x29C730u, 0x29C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C738u;
label_29c738:
    // 0x29c738: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29c738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c73c:
    // 0x29c73c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29c740:
    // 0x29c740: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x29c740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_29c744:
    // 0x29c744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29c748:
    if (ctx->pc == 0x29C748u) {
        ctx->pc = 0x29C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C744u;
        // 0x29c748: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C74Cu;
        goto label_29c74c;
    }
    ctx->pc = 0x29C744u;
    {
        const bool branch_taken_0x29c744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C744u;
        // 0x29c748: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c744) {
            ctx->pc = 0x29C758u;
            goto label_29c758;
        }
    }
    ctx->pc = 0x29C74Cu;
label_29c74c:
    // 0x29c74c: 0xc0e1a34  jal         func_3868D0
label_29c750:
    if (ctx->pc == 0x29C750u) {
        ctx->pc = 0x29C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C74Cu;
        // 0x29c750: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C754u;
        goto label_29c754;
    }
    ctx->pc = 0x29C74Cu;
    SET_GPR_U32(ctx, 31, 0x29C754u);
    ctx->pc = 0x29C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C74Cu;
    // 0x29c750: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x29C74Cu, 0x29C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C754u;
label_29c754:
    // 0x29c754: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x29c754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29c758:
    // 0x29c758: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29c758u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c75c:
    // 0x29c75c: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_29c760:
    if (ctx->pc == 0x29C760u) {
        ctx->pc = 0x29C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C75Cu;
        // 0x29c760: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C764u;
        goto label_29c764;
    }
    ctx->pc = 0x29C75Cu;
    {
        const bool branch_taken_0x29c75c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C75Cu;
        // 0x29c760: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c75c) {
            ctx->pc = 0x29C7B8u;
            goto label_29c7b8;
        }
    }
    ctx->pc = 0x29C764u;
label_29c764:
    // 0x29c764: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x29c764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c768:
    // 0x29c768: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x29c768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29c76c:
    // 0x29c76c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29c770:
    // 0x29c770: 0x2e0f809  jalr        $s7
label_29c774:
    if (ctx->pc == 0x29C774u) {
        ctx->pc = 0x29C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C770u;
        // 0x29c774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C778u;
        goto label_29c778;
    }
    ctx->pc = 0x29C770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x29C778u);
        ctx->pc = 0x29C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C770u;
        // 0x29c774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C770u, 0x29C778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C778u;
label_29c778:
    // 0x29c778: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29c77c:
    if (ctx->pc == 0x29C77Cu) {
        ctx->pc = 0x29C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C778u;
        // 0x29c77c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C780u;
        goto label_29c780;
    }
    ctx->pc = 0x29C778u;
    {
        const bool branch_taken_0x29c778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C778u;
        // 0x29c77c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c778) {
            ctx->pc = 0x29C7A8u;
            goto label_29c7a8;
        }
    }
    ctx->pc = 0x29C780u;
label_29c780:
    // 0x29c780: 0xc137826  jal         func_4DE098
label_29c784:
    if (ctx->pc == 0x29C784u) {
        ctx->pc = 0x29C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C780u;
        // 0x29c784: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C788u;
        goto label_29c788;
    }
    ctx->pc = 0x29C780u;
    SET_GPR_U32(ctx, 31, 0x29C788u);
    ctx->pc = 0x29C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C780u;
    // 0x29c784: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x29C780u, 0x29C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C788u;
label_29c788:
    // 0x29c788: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29c788u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_29c78c:
    // 0x29c78c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29c790:
    // 0x29c790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c794:
    // 0x29c794: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29c794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_29c798:
    // 0x29c798: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29c79c:
    // 0x29c79c: 0x40f809  jalr        $v0
label_29c7a0:
    if (ctx->pc == 0x29C7A0u) {
        ctx->pc = 0x29C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C79Cu;
        // 0x29c7a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C7A4u;
        goto label_29c7a4;
    }
    ctx->pc = 0x29C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C7A4u);
        ctx->pc = 0x29C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C79Cu;
        // 0x29c7a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C79Cu, 0x29C7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C7A4u;
label_29c7a4:
    // 0x29c7a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29c7a8:
    // 0x29c7a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29c7ac:
    // 0x29c7ac: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x29c7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_29c7b0:
    // 0x29c7b0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_29c7b4:
    if (ctx->pc == 0x29C7B4u) {
        ctx->pc = 0x29C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7B0u;
        // 0x29c7b4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C7B8u;
        goto label_29c7b8;
    }
    ctx->pc = 0x29C7B0u;
    {
        const bool branch_taken_0x29c7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7B0u;
        // 0x29c7b4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c7b0) {
            ctx->pc = 0x29C768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c768;
        }
    }
    ctx->pc = 0x29C7B8u;
label_29c7b8:
    // 0x29c7b8: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x29c7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_29c7bc:
    // 0x29c7bc: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x29c7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_29c7c0:
    // 0x29c7c0: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x29c7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_29c7c4:
    // 0x29c7c4: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x29c7c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_29c7c8:
    // 0x29c7c8: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x29c7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_29c7cc:
    // 0x29c7cc: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x29c7ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_29c7d0:
    // 0x29c7d0: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x29c7d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_29c7d4:
    // 0x29c7d4: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x29c7d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_29c7d8:
    // 0x29c7d8: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x29c7d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_29c7dc:
    // 0x29c7dc: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x29c7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_29c7e0:
    // 0x29c7e0: 0x3e00008  jr          $ra
label_29c7e4:
    if (ctx->pc == 0x29C7E4u) {
        ctx->pc = 0x29C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7E0u;
        // 0x29c7e4: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C7E8u;
        goto label_fallthrough_0x29c7e0;
    }
    ctx->pc = 0x29C7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7E0u;
        // 0x29c7e4: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c7e0:
    ctx->pc = 0x29C7E8u;
}
