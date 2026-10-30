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

// Function: sub_0032C758
// Address: 0x32c758 - 0x32c860
void sub_0032C758_0x32c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C758_0x32c758");
#endif

    switch (ctx->pc) {
        case 0x32c758u: goto label_32c758;
        case 0x32c75cu: goto label_32c75c;
        case 0x32c760u: goto label_32c760;
        case 0x32c764u: goto label_32c764;
        case 0x32c768u: goto label_32c768;
        case 0x32c76cu: goto label_32c76c;
        case 0x32c770u: goto label_32c770;
        case 0x32c774u: goto label_32c774;
        case 0x32c778u: goto label_32c778;
        case 0x32c77cu: goto label_32c77c;
        case 0x32c780u: goto label_32c780;
        case 0x32c784u: goto label_32c784;
        case 0x32c788u: goto label_32c788;
        case 0x32c78cu: goto label_32c78c;
        case 0x32c790u: goto label_32c790;
        case 0x32c794u: goto label_32c794;
        case 0x32c798u: goto label_32c798;
        case 0x32c79cu: goto label_32c79c;
        case 0x32c7a0u: goto label_32c7a0;
        case 0x32c7a4u: goto label_32c7a4;
        case 0x32c7a8u: goto label_32c7a8;
        case 0x32c7acu: goto label_32c7ac;
        case 0x32c7b0u: goto label_32c7b0;
        case 0x32c7b4u: goto label_32c7b4;
        case 0x32c7b8u: goto label_32c7b8;
        case 0x32c7bcu: goto label_32c7bc;
        case 0x32c7c0u: goto label_32c7c0;
        case 0x32c7c4u: goto label_32c7c4;
        case 0x32c7c8u: goto label_32c7c8;
        case 0x32c7ccu: goto label_32c7cc;
        case 0x32c7d0u: goto label_32c7d0;
        case 0x32c7d4u: goto label_32c7d4;
        case 0x32c7d8u: goto label_32c7d8;
        case 0x32c7dcu: goto label_32c7dc;
        case 0x32c7e0u: goto label_32c7e0;
        case 0x32c7e4u: goto label_32c7e4;
        case 0x32c7e8u: goto label_32c7e8;
        case 0x32c7ecu: goto label_32c7ec;
        case 0x32c7f0u: goto label_32c7f0;
        case 0x32c7f4u: goto label_32c7f4;
        case 0x32c7f8u: goto label_32c7f8;
        case 0x32c7fcu: goto label_32c7fc;
        case 0x32c800u: goto label_32c800;
        case 0x32c804u: goto label_32c804;
        case 0x32c808u: goto label_32c808;
        case 0x32c80cu: goto label_32c80c;
        case 0x32c810u: goto label_32c810;
        case 0x32c814u: goto label_32c814;
        case 0x32c818u: goto label_32c818;
        case 0x32c81cu: goto label_32c81c;
        case 0x32c820u: goto label_32c820;
        case 0x32c824u: goto label_32c824;
        case 0x32c828u: goto label_32c828;
        case 0x32c82cu: goto label_32c82c;
        case 0x32c830u: goto label_32c830;
        case 0x32c834u: goto label_32c834;
        case 0x32c838u: goto label_32c838;
        case 0x32c83cu: goto label_32c83c;
        case 0x32c840u: goto label_32c840;
        case 0x32c844u: goto label_32c844;
        case 0x32c848u: goto label_32c848;
        case 0x32c84cu: goto label_32c84c;
        case 0x32c850u: goto label_32c850;
        case 0x32c854u: goto label_32c854;
        case 0x32c858u: goto label_32c858;
        case 0x32c85cu: goto label_32c85c;
        default: break;
    }

    ctx->pc = 0x32c758u;

label_32c758:
    // 0x32c758: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_32c75c:
    // 0x32c75c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_32c760:
    // 0x32c760: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x32c760u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_32c764:
    // 0x32c764: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32c764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_32c768:
    // 0x32c768: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_32c76c:
    // 0x32c76c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x32c76cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_32c770:
    // 0x32c770: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_32c774:
    // 0x32c774: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32c774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32c778:
    // 0x32c778: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_32c77c:
    // 0x32c77c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32c77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_32c780:
    // 0x32c780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32c784:
    // 0x32c784: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x32c784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c788:
    // 0x32c788: 0x8e0727e4  lw          $a3, 0x27E4($s0)
    ctx->pc = 0x32c788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_32c78c:
    // 0x32c78c: 0x8e2527f0  lw          $a1, 0x27F0($s1)
    ctx->pc = 0x32c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10224)));
label_32c790:
    // 0x32c790: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x32c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32c794:
    // 0x32c794: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x32c794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_32c798:
    // 0x32c798: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x32c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_32c79c:
    // 0x32c79c: 0x60f809  jalr        $v1
label_32c7a0:
    if (ctx->pc == 0x32C7A0u) {
        ctx->pc = 0x32C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C79Cu;
        // 0x32c7a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7A4u;
        goto label_32c7a4;
    }
    ctx->pc = 0x32C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32C7A4u);
        ctx->pc = 0x32C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C79Cu;
        // 0x32c7a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C79Cu, 0x32C7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C7A4u;
label_32c7a4:
    // 0x32c7a4: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x32c7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_32c7a8:
    // 0x32c7a8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_32c7ac:
    // 0x32c7ac: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x32c7acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
label_32c7b0:
    // 0x32c7b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32c7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c7b4:
    // 0x32c7b4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x32c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_32c7b8:
    // 0x32c7b8: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x32c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
label_32c7bc:
    // 0x32c7bc: 0x25295ab8  addiu       $t1, $t1, 0x5AB8
    ctx->pc = 0x32c7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23224));
label_32c7c0:
    // 0x32c7c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x32c7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c7c4:
    // 0x32c7c4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x32c7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_32c7c8:
    // 0x32c7c8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x32c7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_32c7cc:
    // 0x32c7cc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x32c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_32c7d0:
    // 0x32c7d0: 0x240a00ae  addiu       $t2, $zero, 0xAE
    ctx->pc = 0x32c7d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
label_32c7d4:
    // 0x32c7d4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_32c7d8:
    // 0x32c7d8: 0x40f809  jalr        $v0
label_32c7dc:
    if (ctx->pc == 0x32C7DCu) {
        ctx->pc = 0x32C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7D8u;
        // 0x32c7dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7E0u;
        goto label_32c7e0;
    }
    ctx->pc = 0x32C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C7E0u);
        ctx->pc = 0x32C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7D8u;
        // 0x32c7dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C7D8u, 0x32C7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C7E0u;
label_32c7e0:
    // 0x32c7e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32c7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c7e4:
    // 0x32c7e4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_32c7e8:
    if (ctx->pc == 0x32C7E8u) {
        ctx->pc = 0x32C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7E4u;
        // 0x32c7e8: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7ECu;
        goto label_32c7ec;
    }
    ctx->pc = 0x32C7E4u;
    {
        const bool branch_taken_0x32c7e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7E4u;
        // 0x32c7e8: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c7e4) {
            ctx->pc = 0x32C7F8u;
            goto label_32c7f8;
        }
    }
    ctx->pc = 0x32C7ECu;
label_32c7ec:
    // 0x32c7ec: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
label_32c7f0:
    if (ctx->pc == 0x32C7F0u) {
        ctx->pc = 0x32C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C7ECu;
        // 0x32c7f0: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C7F4u;
        goto label_32c7f4;
    }
    ctx->pc = 0x32C7ECu;
    {
        const bool branch_taken_0x32c7ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c7ec) {
            ctx->pc = 0x32C7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C7ECu;
            // 0x32c7f0: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C7F4u;
            goto label_32c7f4;
        }
    }
    ctx->pc = 0x32C7F4u;
label_32c7f4:
    // 0x32c7f4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x32c7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_32c7f8:
    // 0x32c7f8: 0x8e2527f0  lw          $a1, 0x27F0($s1)
    ctx->pc = 0x32c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10224)));
label_32c7fc:
    // 0x32c7fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_32c800:
    // 0x32c800: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x32c800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_32c804:
    // 0x32c804: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x32c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_32c808:
    // 0x32c808: 0x60f809  jalr        $v1
label_32c80c:
    if (ctx->pc == 0x32C80Cu) {
        ctx->pc = 0x32C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C808u;
        // 0x32c80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C810u;
        goto label_32c810;
    }
    ctx->pc = 0x32C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32C810u);
        ctx->pc = 0x32C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C808u;
        // 0x32c80c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C808u, 0x32C810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C810u;
label_32c810:
    // 0x32c810: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_32c814:
    if (ctx->pc == 0x32C814u) {
        ctx->pc = 0x32C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C810u;
        // 0x32c814: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C818u;
        goto label_32c818;
    }
    ctx->pc = 0x32C810u;
    {
        const bool branch_taken_0x32c810 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C810u;
        // 0x32c814: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c810) {
            ctx->pc = 0x32C83Cu;
            goto label_32c83c;
        }
    }
    ctx->pc = 0x32C818u;
label_32c818:
    // 0x32c818: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_32c81c:
    if (ctx->pc == 0x32C81Cu) {
        ctx->pc = 0x32C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C818u;
        // 0x32c81c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C820u;
        goto label_32c820;
    }
    ctx->pc = 0x32C818u;
    {
        const bool branch_taken_0x32c818 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C818u;
        // 0x32c81c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c818) {
            ctx->pc = 0x32C840u;
            goto label_32c840;
        }
    }
    ctx->pc = 0x32C820u;
label_32c820:
    // 0x32c820: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_32c824:
    if (ctx->pc == 0x32C824u) {
        ctx->pc = 0x32C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C820u;
        // 0x32c824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C828u;
        goto label_32c828;
    }
    ctx->pc = 0x32C820u;
    {
        const bool branch_taken_0x32c820 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C820u;
        // 0x32c824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c820) {
            ctx->pc = 0x32C830u;
            goto label_32c830;
        }
    }
    ctx->pc = 0x32C828u;
label_32c828:
    // 0x32c828: 0x10000005  b           . + 4 + (0x5 << 2)
label_32c82c:
    if (ctx->pc == 0x32C82Cu) {
        ctx->pc = 0x32C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C828u;
        // 0x32c82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C830u;
        goto label_32c830;
    }
    ctx->pc = 0x32C828u;
    {
        const bool branch_taken_0x32c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C828u;
        // 0x32c82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c828) {
            ctx->pc = 0x32C840u;
            goto label_32c840;
        }
    }
    ctx->pc = 0x32C830u;
label_32c830:
    // 0x32c830: 0xc0ca47c  jal         func_3291F0
label_32c834:
    if (ctx->pc == 0x32C834u) {
        ctx->pc = 0x32C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C830u;
        // 0x32c834: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C838u;
        goto label_32c838;
    }
    ctx->pc = 0x32C830u;
    SET_GPR_U32(ctx, 31, 0x32C838u);
    ctx->pc = 0x32C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C830u;
    // 0x32c834: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291F0u, 0x32C830u, 0x32C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C838u;
label_32c838:
    // 0x32c838: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32c838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c83c:
    // 0x32c83c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32c83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32c840:
    // 0x32c840: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32c840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32c844:
    // 0x32c844: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32c844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32c848:
    // 0x32c848: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32c848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32c84c:
    // 0x32c84c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32c84cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32c850:
    // 0x32c850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32c854:
    // 0x32c854: 0x3e00008  jr          $ra
label_32c858:
    if (ctx->pc == 0x32C858u) {
        ctx->pc = 0x32C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C854u;
        // 0x32c858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C85Cu;
        goto label_32c85c;
    }
    ctx->pc = 0x32C854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C854u;
        // 0x32c858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C85Cu;
label_32c85c:
    // 0x32c85c: 0x0  nop
    ctx->pc = 0x32c85cu;
    // NOP
    ctx->pc = 0x32c860u;
}
