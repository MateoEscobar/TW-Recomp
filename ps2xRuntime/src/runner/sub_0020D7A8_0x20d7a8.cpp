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

// Function: sub_0020D7A8
// Address: 0x20d7a8 - 0x20d890
void sub_0020D7A8_0x20d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D7A8_0x20d7a8");
#endif

    switch (ctx->pc) {
        case 0x20d7a8u: goto label_20d7a8;
        case 0x20d7acu: goto label_20d7ac;
        case 0x20d7b0u: goto label_20d7b0;
        case 0x20d7b4u: goto label_20d7b4;
        case 0x20d7b8u: goto label_20d7b8;
        case 0x20d7bcu: goto label_20d7bc;
        case 0x20d7c0u: goto label_20d7c0;
        case 0x20d7c4u: goto label_20d7c4;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7ccu: goto label_20d7cc;
        case 0x20d7d0u: goto label_20d7d0;
        case 0x20d7d4u: goto label_20d7d4;
        case 0x20d7d8u: goto label_20d7d8;
        case 0x20d7dcu: goto label_20d7dc;
        case 0x20d7e0u: goto label_20d7e0;
        case 0x20d7e4u: goto label_20d7e4;
        case 0x20d7e8u: goto label_20d7e8;
        case 0x20d7ecu: goto label_20d7ec;
        case 0x20d7f0u: goto label_20d7f0;
        case 0x20d7f4u: goto label_20d7f4;
        case 0x20d7f8u: goto label_20d7f8;
        case 0x20d7fcu: goto label_20d7fc;
        case 0x20d800u: goto label_20d800;
        case 0x20d804u: goto label_20d804;
        case 0x20d808u: goto label_20d808;
        case 0x20d80cu: goto label_20d80c;
        case 0x20d810u: goto label_20d810;
        case 0x20d814u: goto label_20d814;
        case 0x20d818u: goto label_20d818;
        case 0x20d81cu: goto label_20d81c;
        case 0x20d820u: goto label_20d820;
        case 0x20d824u: goto label_20d824;
        case 0x20d828u: goto label_20d828;
        case 0x20d82cu: goto label_20d82c;
        case 0x20d830u: goto label_20d830;
        case 0x20d834u: goto label_20d834;
        case 0x20d838u: goto label_20d838;
        case 0x20d83cu: goto label_20d83c;
        case 0x20d840u: goto label_20d840;
        case 0x20d844u: goto label_20d844;
        case 0x20d848u: goto label_20d848;
        case 0x20d84cu: goto label_20d84c;
        case 0x20d850u: goto label_20d850;
        case 0x20d854u: goto label_20d854;
        case 0x20d858u: goto label_20d858;
        case 0x20d85cu: goto label_20d85c;
        case 0x20d860u: goto label_20d860;
        case 0x20d864u: goto label_20d864;
        case 0x20d868u: goto label_20d868;
        case 0x20d86cu: goto label_20d86c;
        case 0x20d870u: goto label_20d870;
        case 0x20d874u: goto label_20d874;
        case 0x20d878u: goto label_20d878;
        case 0x20d87cu: goto label_20d87c;
        case 0x20d880u: goto label_20d880;
        case 0x20d884u: goto label_20d884;
        case 0x20d888u: goto label_20d888;
        case 0x20d88cu: goto label_20d88c;
        default: break;
    }

    ctx->pc = 0x20d7a8u;

label_20d7a8:
    // 0x20d7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20d7ac:
    // 0x20d7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20d7b0:
    // 0x20d7b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20d7b4:
    // 0x20d7b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d7b8:
    // 0x20d7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d7bc:
    // 0x20d7bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20d7c0:
    // 0x20d7c0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_20d7c4:
    if (ctx->pc == 0x20D7C4u) {
        ctx->pc = 0x20D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7C0u;
        // 0x20d7c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D7C8u;
        goto label_20d7c8;
    }
    ctx->pc = 0x20D7C0u;
    {
        const bool branch_taken_0x20d7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7C0u;
        // 0x20d7c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7c0) {
            ctx->pc = 0x20D87Cu;
            goto label_20d87c;
        }
    }
    ctx->pc = 0x20D7C8u;
label_20d7c8:
    // 0x20d7c8: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x20d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20d7cc:
    // 0x20d7cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d7d0:
    // 0x20d7d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20d7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20d7d4:
    // 0x20d7d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20d7d8:
    // 0x20d7d8: 0x60f809  jalr        $v1
label_20d7dc:
    if (ctx->pc == 0x20D7DCu) {
        ctx->pc = 0x20D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7D8u;
        // 0x20d7dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D7E0u;
        goto label_20d7e0;
    }
    ctx->pc = 0x20D7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D7E0u);
        ctx->pc = 0x20D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7D8u;
        // 0x20d7dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D7D8u, 0x20D7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D7E0u;
label_20d7e0:
    // 0x20d7e0: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x20d7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_20d7e4:
    // 0x20d7e4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x20d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20d7e8:
    // 0x20d7e8: 0x26109490  addiu       $s0, $s0, -0x6B70
    ctx->pc = 0x20d7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939792));
label_20d7ec:
    // 0x20d7ec: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x20d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20d7f0:
    // 0x20d7f0: 0xc13a560  jal         func_4E9580
label_20d7f4:
    if (ctx->pc == 0x20D7F4u) {
        ctx->pc = 0x20D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7F0u;
        // 0x20d7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D7F8u;
        goto label_20d7f8;
    }
    ctx->pc = 0x20D7F0u;
    SET_GPR_U32(ctx, 31, 0x20D7F8u);
    ctx->pc = 0x20D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7F0u;
    // 0x20d7f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x20D7F0u, 0x20D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7F8u;
label_20d7f8:
    // 0x20d7f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20d7fc:
    // 0x20d7fc: 0x8e25008c  lw          $a1, 0x8C($s1)
    ctx->pc = 0x20d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_20d800:
    // 0x20d800: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x20d800u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_20d804:
    // 0x20d804: 0x24070066  addiu       $a3, $zero, 0x66
    ctx->pc = 0x20d804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_20d808:
    // 0x20d808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20d808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d80c:
    // 0x20d80c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20d810:
    // 0x20d810: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x20d810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20d814:
    // 0x20d814: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20d814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20d818:
    // 0x20d818: 0x60f809  jalr        $v1
label_20d81c:
    if (ctx->pc == 0x20D81Cu) {
        ctx->pc = 0x20D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D818u;
        // 0x20d81c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D820u;
        goto label_20d820;
    }
    ctx->pc = 0x20D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D820u);
        ctx->pc = 0x20D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D818u;
        // 0x20d81c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D818u, 0x20D820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D820u;
label_20d820:
    // 0x20d820: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x20d820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_20d824:
    // 0x20d824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d828:
    // 0x20d828: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20d828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20d82c:
    // 0x20d82c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20d830:
    // 0x20d830: 0x60f809  jalr        $v1
label_20d834:
    if (ctx->pc == 0x20D834u) {
        ctx->pc = 0x20D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D830u;
        // 0x20d834: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D838u;
        goto label_20d838;
    }
    ctx->pc = 0x20D830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D838u);
        ctx->pc = 0x20D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D830u;
        // 0x20d834: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D830u, 0x20D838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D838u;
label_20d838:
    // 0x20d838: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x20d838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_20d83c:
    // 0x20d83c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d840:
    // 0x20d840: 0xc139fe8  jal         func_4E7FA0
label_20d844:
    if (ctx->pc == 0x20D844u) {
        ctx->pc = 0x20D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D840u;
        // 0x20d844: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D848u;
        goto label_20d848;
    }
    ctx->pc = 0x20D840u;
    SET_GPR_U32(ctx, 31, 0x20D848u);
    ctx->pc = 0x20D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D840u;
    // 0x20d844: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x20D840u, 0x20D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D848u;
label_20d848:
    // 0x20d848: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x20d848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20d84c:
    // 0x20d84c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d850:
    // 0x20d850: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20d850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20d854:
    // 0x20d854: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20d858:
    // 0x20d858: 0x60f809  jalr        $v1
label_20d85c:
    if (ctx->pc == 0x20D85Cu) {
        ctx->pc = 0x20D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D858u;
        // 0x20d85c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D860u;
        goto label_20d860;
    }
    ctx->pc = 0x20D858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D860u);
        ctx->pc = 0x20D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D858u;
        // 0x20d85c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D858u, 0x20D860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D860u;
label_20d860:
    // 0x20d860: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x20d860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_20d864:
    // 0x20d864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d868:
    // 0x20d868: 0xc139fc8  jal         func_4E7F20
label_20d86c:
    if (ctx->pc == 0x20D86Cu) {
        ctx->pc = 0x20D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D868u;
        // 0x20d86c: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D870u;
        goto label_20d870;
    }
    ctx->pc = 0x20D868u;
    SET_GPR_U32(ctx, 31, 0x20D870u);
    ctx->pc = 0x20D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D868u;
    // 0x20d86c: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x20D868u, 0x20D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D870u;
label_20d870:
    // 0x20d870: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20d870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20d874:
    // 0x20d874: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20d874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_20d878:
    // 0x20d878: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20d878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d87c:
    // 0x20d87c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d880:
    // 0x20d880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d884:
    // 0x20d884: 0x3e00008  jr          $ra
label_20d888:
    if (ctx->pc == 0x20D888u) {
        ctx->pc = 0x20D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D884u;
        // 0x20d888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D88Cu;
        goto label_20d88c;
    }
    ctx->pc = 0x20D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D884u;
        // 0x20d888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D88Cu;
label_20d88c:
    // 0x20d88c: 0x0  nop
    ctx->pc = 0x20d88cu;
    // NOP
    ctx->pc = 0x20d890u;
}
