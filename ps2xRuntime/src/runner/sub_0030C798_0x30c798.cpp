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

// Function: sub_0030C798
// Address: 0x30c798 - 0x30c888
void sub_0030C798_0x30c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C798_0x30c798");
#endif

    switch (ctx->pc) {
        case 0x30c798u: goto label_30c798;
        case 0x30c79cu: goto label_30c79c;
        case 0x30c7a0u: goto label_30c7a0;
        case 0x30c7a4u: goto label_30c7a4;
        case 0x30c7a8u: goto label_30c7a8;
        case 0x30c7acu: goto label_30c7ac;
        case 0x30c7b0u: goto label_30c7b0;
        case 0x30c7b4u: goto label_30c7b4;
        case 0x30c7b8u: goto label_30c7b8;
        case 0x30c7bcu: goto label_30c7bc;
        case 0x30c7c0u: goto label_30c7c0;
        case 0x30c7c4u: goto label_30c7c4;
        case 0x30c7c8u: goto label_30c7c8;
        case 0x30c7ccu: goto label_30c7cc;
        case 0x30c7d0u: goto label_30c7d0;
        case 0x30c7d4u: goto label_30c7d4;
        case 0x30c7d8u: goto label_30c7d8;
        case 0x30c7dcu: goto label_30c7dc;
        case 0x30c7e0u: goto label_30c7e0;
        case 0x30c7e4u: goto label_30c7e4;
        case 0x30c7e8u: goto label_30c7e8;
        case 0x30c7ecu: goto label_30c7ec;
        case 0x30c7f0u: goto label_30c7f0;
        case 0x30c7f4u: goto label_30c7f4;
        case 0x30c7f8u: goto label_30c7f8;
        case 0x30c7fcu: goto label_30c7fc;
        case 0x30c800u: goto label_30c800;
        case 0x30c804u: goto label_30c804;
        case 0x30c808u: goto label_30c808;
        case 0x30c80cu: goto label_30c80c;
        case 0x30c810u: goto label_30c810;
        case 0x30c814u: goto label_30c814;
        case 0x30c818u: goto label_30c818;
        case 0x30c81cu: goto label_30c81c;
        case 0x30c820u: goto label_30c820;
        case 0x30c824u: goto label_30c824;
        case 0x30c828u: goto label_30c828;
        case 0x30c82cu: goto label_30c82c;
        case 0x30c830u: goto label_30c830;
        case 0x30c834u: goto label_30c834;
        case 0x30c838u: goto label_30c838;
        case 0x30c83cu: goto label_30c83c;
        case 0x30c840u: goto label_30c840;
        case 0x30c844u: goto label_30c844;
        case 0x30c848u: goto label_30c848;
        case 0x30c84cu: goto label_30c84c;
        case 0x30c850u: goto label_30c850;
        case 0x30c854u: goto label_30c854;
        case 0x30c858u: goto label_30c858;
        case 0x30c85cu: goto label_30c85c;
        case 0x30c860u: goto label_30c860;
        case 0x30c864u: goto label_30c864;
        case 0x30c868u: goto label_30c868;
        case 0x30c86cu: goto label_30c86c;
        case 0x30c870u: goto label_30c870;
        case 0x30c874u: goto label_30c874;
        case 0x30c878u: goto label_30c878;
        case 0x30c87cu: goto label_30c87c;
        case 0x30c880u: goto label_30c880;
        case 0x30c884u: goto label_30c884;
        default: break;
    }

    ctx->pc = 0x30c798u;

label_30c798:
    // 0x30c798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30c79c:
    // 0x30c79c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_30c7a0:
    // 0x30c7a0: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x30c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_30c7a4:
    // 0x30c7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30c7a8:
    // 0x30c7a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30c7ac:
    // 0x30c7ac: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x30c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_30c7b0:
    // 0x30c7b0: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
label_30c7b4:
    if (ctx->pc == 0x30C7B4u) {
        ctx->pc = 0x30C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7B0u;
        // 0x30c7b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C7B8u;
        goto label_30c7b8;
    }
    ctx->pc = 0x30C7B0u;
    {
        const bool branch_taken_0x30c7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7B0u;
        // 0x30c7b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7b0) {
            ctx->pc = 0x30C878u;
            goto label_30c878;
        }
    }
    ctx->pc = 0x30C7B8u;
label_30c7b8:
    // 0x30c7b8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30c7bc:
    // 0x30c7bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30c7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30c7c0:
    // 0x30c7c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30c7c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30c7c4:
    // 0x30c7c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30c7c8:
    // 0x30c7c8: 0x60f809  jalr        $v1
label_30c7cc:
    if (ctx->pc == 0x30C7CCu) {
        ctx->pc = 0x30C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7C8u;
        // 0x30c7cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C7D0u;
        goto label_30c7d0;
    }
    ctx->pc = 0x30C7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30C7D0u);
        ctx->pc = 0x30C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7C8u;
        // 0x30c7cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C7C8u, 0x30C7D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C7D0u;
label_30c7d0:
    // 0x30c7d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_30c7d4:
    // 0x30c7d4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x30c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_30c7d8:
    // 0x30c7d8: 0xc0e409a  jal         func_390268
label_30c7dc:
    if (ctx->pc == 0x30C7DCu) {
        ctx->pc = 0x30C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7D8u;
        // 0x30c7dc: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C7E0u;
        goto label_30c7e0;
    }
    ctx->pc = 0x30C7D8u;
    SET_GPR_U32(ctx, 31, 0x30C7E0u);
    ctx->pc = 0x30C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7D8u;
    // 0x30c7dc: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30C7D8u, 0x30C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7E0u;
label_30c7e0:
    // 0x30c7e0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_30c7e4:
    if (ctx->pc == 0x30C7E4u) {
        ctx->pc = 0x30C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7E0u;
        // 0x30c7e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C7E8u;
        goto label_30c7e8;
    }
    ctx->pc = 0x30C7E0u;
    {
        const bool branch_taken_0x30c7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c7e0) {
            ctx->pc = 0x30C7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C7E0u;
            // 0x30c7e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C87Cu;
            goto label_30c87c;
        }
    }
    ctx->pc = 0x30C7E8u;
label_30c7e8:
    // 0x30c7e8: 0xc087502  jal         func_21D408
label_30c7ec:
    if (ctx->pc == 0x30C7ECu) {
        ctx->pc = 0x30C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7E8u;
        // 0x30c7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C7F0u;
        goto label_30c7f0;
    }
    ctx->pc = 0x30C7E8u;
    SET_GPR_U32(ctx, 31, 0x30C7F0u);
    ctx->pc = 0x30C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7E8u;
    // 0x30c7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30C7E8u, 0x30C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7F0u;
label_30c7f0:
    // 0x30c7f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c7f4:
    // 0x30c7f4: 0x90620009  lbu         $v0, 0x9($v1)
    ctx->pc = 0x30c7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
label_30c7f8:
    // 0x30c7f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30c7fc:
    if (ctx->pc == 0x30C7FCu) {
        ctx->pc = 0x30C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7F8u;
        // 0x30c7fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C800u;
        goto label_30c800;
    }
    ctx->pc = 0x30C7F8u;
    {
        const bool branch_taken_0x30c7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7F8u;
        // 0x30c7fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7f8) {
            ctx->pc = 0x30C810u;
            goto label_30c810;
        }
    }
    ctx->pc = 0x30C800u;
label_30c800:
    // 0x30c800: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x30c800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_30c804:
    // 0x30c804: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30c804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_30c808:
    // 0x30c808: 0x5444001c  bnel        $v0, $a0, . + 4 + (0x1C << 2)
label_30c80c:
    if (ctx->pc == 0x30C80Cu) {
        ctx->pc = 0x30C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C808u;
        // 0x30c80c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C810u;
        goto label_30c810;
    }
    ctx->pc = 0x30C808u;
    {
        const bool branch_taken_0x30c808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x30c808) {
            ctx->pc = 0x30C80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C808u;
            // 0x30c80c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C87Cu;
            goto label_30c87c;
        }
    }
    ctx->pc = 0x30C810u;
label_30c810:
    // 0x30c810: 0xc087502  jal         func_21D408
label_30c814:
    if (ctx->pc == 0x30C814u) {
        ctx->pc = 0x30C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C810u;
        // 0x30c814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C818u;
        goto label_30c818;
    }
    ctx->pc = 0x30C810u;
    SET_GPR_U32(ctx, 31, 0x30C818u);
    ctx->pc = 0x30C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C810u;
    // 0x30c814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30C810u, 0x30C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C818u;
label_30c818:
    // 0x30c818: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30c818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c81c:
    // 0x30c81c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30c81cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30c820:
    // 0x30c820: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30c824:
    if (ctx->pc == 0x30C824u) {
        ctx->pc = 0x30C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C820u;
        // 0x30c824: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C828u;
        goto label_30c828;
    }
    ctx->pc = 0x30C820u;
    {
        const bool branch_taken_0x30c820 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C820u;
        // 0x30c824: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c820) {
            ctx->pc = 0x30C834u;
            goto label_30c834;
        }
    }
    ctx->pc = 0x30C828u;
label_30c828:
    // 0x30c828: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30c828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30c82c:
    // 0x30c82c: 0x10000002  b           . + 4 + (0x2 << 2)
label_30c830:
    if (ctx->pc == 0x30C830u) {
        ctx->pc = 0x30C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C82Cu;
        // 0x30c830: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C834u;
        goto label_30c834;
    }
    ctx->pc = 0x30C82Cu;
    {
        const bool branch_taken_0x30c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C82Cu;
        // 0x30c830: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c82c) {
            ctx->pc = 0x30C838u;
            goto label_30c838;
        }
    }
    ctx->pc = 0x30C834u;
label_30c834:
    // 0x30c834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30c834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c838:
    // 0x30c838: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_30c83c:
    if (ctx->pc == 0x30C83Cu) {
        ctx->pc = 0x30C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C838u;
        // 0x30c83c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C840u;
        goto label_30c840;
    }
    ctx->pc = 0x30C838u;
    {
        const bool branch_taken_0x30c838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c838) {
            ctx->pc = 0x30C83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C838u;
            // 0x30c83c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C87Cu;
            goto label_30c87c;
        }
    }
    ctx->pc = 0x30C840u;
label_30c840:
    // 0x30c840: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30c844:
    // 0x30c844: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30c844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30c848:
    // 0x30c848: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30c84c:
    // 0x30c84c: 0x40f809  jalr        $v0
label_30c850:
    if (ctx->pc == 0x30C850u) {
        ctx->pc = 0x30C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C84Cu;
        // 0x30c850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C854u;
        goto label_30c854;
    }
    ctx->pc = 0x30C84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30C854u);
        ctx->pc = 0x30C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C84Cu;
        // 0x30c850: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C84Cu, 0x30C854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C854u;
label_30c854:
    // 0x30c854: 0x2403008e  addiu       $v1, $zero, 0x8E
    ctx->pc = 0x30c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_30c858:
    // 0x30c858: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_30c85c:
    if (ctx->pc == 0x30C85Cu) {
        ctx->pc = 0x30C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C858u;
        // 0x30c85c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C860u;
        goto label_30c860;
    }
    ctx->pc = 0x30C858u;
    {
        const bool branch_taken_0x30c858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30c858) {
            ctx->pc = 0x30C85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C858u;
            // 0x30c85c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C87Cu;
            goto label_30c87c;
        }
    }
    ctx->pc = 0x30C860u;
label_30c860:
    // 0x30c860: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x30c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30c864:
    // 0x30c864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c868:
    // 0x30c868: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x30c868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_30c86c:
    // 0x30c86c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x30c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_30c870:
    // 0x30c870: 0x60f809  jalr        $v1
label_30c874:
    if (ctx->pc == 0x30C874u) {
        ctx->pc = 0x30C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C870u;
        // 0x30c874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C878u;
        goto label_30c878;
    }
    ctx->pc = 0x30C870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30C878u);
        ctx->pc = 0x30C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C870u;
        // 0x30c874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C870u, 0x30C878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C878u;
label_30c878:
    // 0x30c878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30c878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30c87c:
    // 0x30c87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c880:
    // 0x30c880: 0x3e00008  jr          $ra
label_30c884:
    if (ctx->pc == 0x30C884u) {
        ctx->pc = 0x30C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C880u;
        // 0x30c884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C888u;
        goto label_fallthrough_0x30c880;
    }
    ctx->pc = 0x30C880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C880u;
        // 0x30c884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30c880:
    ctx->pc = 0x30C888u;
}
