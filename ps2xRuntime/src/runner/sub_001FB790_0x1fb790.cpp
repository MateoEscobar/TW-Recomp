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

// Function: sub_001FB790
// Address: 0x1fb790 - 0x1fb868
void sub_001FB790_0x1fb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB790_0x1fb790");
#endif

    switch (ctx->pc) {
        case 0x1fb790u: goto label_1fb790;
        case 0x1fb794u: goto label_1fb794;
        case 0x1fb798u: goto label_1fb798;
        case 0x1fb79cu: goto label_1fb79c;
        case 0x1fb7a0u: goto label_1fb7a0;
        case 0x1fb7a4u: goto label_1fb7a4;
        case 0x1fb7a8u: goto label_1fb7a8;
        case 0x1fb7acu: goto label_1fb7ac;
        case 0x1fb7b0u: goto label_1fb7b0;
        case 0x1fb7b4u: goto label_1fb7b4;
        case 0x1fb7b8u: goto label_1fb7b8;
        case 0x1fb7bcu: goto label_1fb7bc;
        case 0x1fb7c0u: goto label_1fb7c0;
        case 0x1fb7c4u: goto label_1fb7c4;
        case 0x1fb7c8u: goto label_1fb7c8;
        case 0x1fb7ccu: goto label_1fb7cc;
        case 0x1fb7d0u: goto label_1fb7d0;
        case 0x1fb7d4u: goto label_1fb7d4;
        case 0x1fb7d8u: goto label_1fb7d8;
        case 0x1fb7dcu: goto label_1fb7dc;
        case 0x1fb7e0u: goto label_1fb7e0;
        case 0x1fb7e4u: goto label_1fb7e4;
        case 0x1fb7e8u: goto label_1fb7e8;
        case 0x1fb7ecu: goto label_1fb7ec;
        case 0x1fb7f0u: goto label_1fb7f0;
        case 0x1fb7f4u: goto label_1fb7f4;
        case 0x1fb7f8u: goto label_1fb7f8;
        case 0x1fb7fcu: goto label_1fb7fc;
        case 0x1fb800u: goto label_1fb800;
        case 0x1fb804u: goto label_1fb804;
        case 0x1fb808u: goto label_1fb808;
        case 0x1fb80cu: goto label_1fb80c;
        case 0x1fb810u: goto label_1fb810;
        case 0x1fb814u: goto label_1fb814;
        case 0x1fb818u: goto label_1fb818;
        case 0x1fb81cu: goto label_1fb81c;
        case 0x1fb820u: goto label_1fb820;
        case 0x1fb824u: goto label_1fb824;
        case 0x1fb828u: goto label_1fb828;
        case 0x1fb82cu: goto label_1fb82c;
        case 0x1fb830u: goto label_1fb830;
        case 0x1fb834u: goto label_1fb834;
        case 0x1fb838u: goto label_1fb838;
        case 0x1fb83cu: goto label_1fb83c;
        case 0x1fb840u: goto label_1fb840;
        case 0x1fb844u: goto label_1fb844;
        case 0x1fb848u: goto label_1fb848;
        case 0x1fb84cu: goto label_1fb84c;
        case 0x1fb850u: goto label_1fb850;
        case 0x1fb854u: goto label_1fb854;
        case 0x1fb858u: goto label_1fb858;
        case 0x1fb85cu: goto label_1fb85c;
        case 0x1fb860u: goto label_1fb860;
        case 0x1fb864u: goto label_1fb864;
        default: break;
    }

    ctx->pc = 0x1fb790u;

label_1fb790:
    // 0x1fb790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb794:
    // 0x1fb794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb798:
    // 0x1fb798: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fb798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fb79c:
    // 0x1fb79c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb7a0:
    // 0x1fb7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb7a4:
    // 0x1fb7a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fb7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fb7a8:
    // 0x1fb7a8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1fb7ac:
    if (ctx->pc == 0x1FB7ACu) {
        ctx->pc = 0x1FB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7A8u;
        // 0x1fb7ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB7B0u;
        goto label_1fb7b0;
    }
    ctx->pc = 0x1FB7A8u;
    {
        const bool branch_taken_0x1fb7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7A8u;
        // 0x1fb7ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7a8) {
            ctx->pc = 0x1FB854u;
            goto label_1fb854;
        }
    }
    ctx->pc = 0x1FB7B0u;
label_1fb7b0:
    // 0x1fb7b0: 0xc073462  jal         func_1CD188
label_1fb7b4:
    if (ctx->pc == 0x1FB7B4u) {
        ctx->pc = 0x1FB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B0u;
        // 0x1fb7b4: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB7B8u;
        goto label_1fb7b8;
    }
    ctx->pc = 0x1FB7B0u;
    SET_GPR_U32(ctx, 31, 0x1FB7B8u);
    ctx->pc = 0x1FB7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7B0u;
    // 0x1fb7b4: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1FB7B0u, 0x1FB7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7B8u;
label_1fb7b8:
    // 0x1fb7b8: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1fb7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1fb7bc:
    // 0x1fb7bc: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1fb7c0:
    // 0x1fb7c0: 0x26107d28  addiu       $s0, $s0, 0x7D28
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32040));
label_1fb7c4:
    // 0x1fb7c4: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1fb7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1fb7c8:
    // 0x1fb7c8: 0xc139138  jal         func_4E44E0
label_1fb7cc:
    if (ctx->pc == 0x1FB7CCu) {
        ctx->pc = 0x1FB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7C8u;
        // 0x1fb7cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB7D0u;
        goto label_1fb7d0;
    }
    ctx->pc = 0x1FB7C8u;
    SET_GPR_U32(ctx, 31, 0x1FB7D0u);
    ctx->pc = 0x1FB7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7C8u;
    // 0x1fb7cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1FB7C8u, 0x1FB7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7D0u;
label_1fb7d0:
    // 0x1fb7d0: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x1fb7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1fb7d4:
    // 0x1fb7d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb7d8:
    // 0x1fb7d8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fb7d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fb7dc:
    // 0x1fb7dc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fb7e0:
    // 0x1fb7e0: 0x60f809  jalr        $v1
label_1fb7e4:
    if (ctx->pc == 0x1FB7E4u) {
        ctx->pc = 0x1FB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7E0u;
        // 0x1fb7e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB7E8u;
        goto label_1fb7e8;
    }
    ctx->pc = 0x1FB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB7E8u);
        ctx->pc = 0x1FB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7E0u;
        // 0x1fb7e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7E0u, 0x1FB7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB7E8u;
label_1fb7e8:
    // 0x1fb7e8: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1fb7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1fb7ec:
    // 0x1fb7ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb7f0:
    // 0x1fb7f0: 0xc13a560  jal         func_4E9580
label_1fb7f4:
    if (ctx->pc == 0x1FB7F4u) {
        ctx->pc = 0x1FB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7F0u;
        // 0x1fb7f4: 0x24060071  addiu       $a2, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB7F8u;
        goto label_1fb7f8;
    }
    ctx->pc = 0x1FB7F0u;
    SET_GPR_U32(ctx, 31, 0x1FB7F8u);
    ctx->pc = 0x1FB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7F0u;
    // 0x1fb7f4: 0x24060071  addiu       $a2, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x1FB7F0u, 0x1FB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7F8u;
label_1fb7f8:
    // 0x1fb7f8: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1fb7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1fb7fc:
    // 0x1fb7fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb800:
    // 0x1fb800: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fb800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fb804:
    // 0x1fb804: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fb804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fb808:
    // 0x1fb808: 0x60f809  jalr        $v1
label_1fb80c:
    if (ctx->pc == 0x1FB80Cu) {
        ctx->pc = 0x1FB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB808u;
        // 0x1fb80c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB810u;
        goto label_1fb810;
    }
    ctx->pc = 0x1FB808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB810u);
        ctx->pc = 0x1FB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB808u;
        // 0x1fb80c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB808u, 0x1FB810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB810u;
label_1fb810:
    // 0x1fb810: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1fb810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1fb814:
    // 0x1fb814: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb818:
    // 0x1fb818: 0xc139fe8  jal         func_4E7FA0
label_1fb81c:
    if (ctx->pc == 0x1FB81Cu) {
        ctx->pc = 0x1FB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB818u;
        // 0x1fb81c: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB820u;
        goto label_1fb820;
    }
    ctx->pc = 0x1FB818u;
    SET_GPR_U32(ctx, 31, 0x1FB820u);
    ctx->pc = 0x1FB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB818u;
    // 0x1fb81c: 0x24060074  addiu       $a2, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x1FB818u, 0x1FB820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB820u;
label_1fb820:
    // 0x1fb820: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1fb820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1fb824:
    // 0x1fb824: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb828:
    // 0x1fb828: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1fb82c:
    // 0x1fb82c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fb82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1fb830:
    // 0x1fb830: 0x60f809  jalr        $v1
label_1fb834:
    if (ctx->pc == 0x1FB834u) {
        ctx->pc = 0x1FB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB830u;
        // 0x1fb834: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB838u;
        goto label_1fb838;
    }
    ctx->pc = 0x1FB830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB838u);
        ctx->pc = 0x1FB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB830u;
        // 0x1fb834: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB830u, 0x1FB838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB838u;
label_1fb838:
    // 0x1fb838: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1fb838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1fb83c:
    // 0x1fb83c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb840:
    // 0x1fb840: 0xc139fc8  jal         func_4E7F20
label_1fb844:
    if (ctx->pc == 0x1FB844u) {
        ctx->pc = 0x1FB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB840u;
        // 0x1fb844: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB848u;
        goto label_1fb848;
    }
    ctx->pc = 0x1FB840u;
    SET_GPR_U32(ctx, 31, 0x1FB848u);
    ctx->pc = 0x1FB844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB840u;
    // 0x1fb844: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x1FB840u, 0x1FB848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB848u;
label_1fb848:
    // 0x1fb848: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1fb848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1fb84c:
    // 0x1fb84c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1fb84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1fb850:
    // 0x1fb850: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fb850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb854:
    // 0x1fb854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb858:
    // 0x1fb858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb85c:
    // 0x1fb85c: 0x3e00008  jr          $ra
label_1fb860:
    if (ctx->pc == 0x1FB860u) {
        ctx->pc = 0x1FB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB85Cu;
        // 0x1fb860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB864u;
        goto label_1fb864;
    }
    ctx->pc = 0x1FB85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB85Cu;
        // 0x1fb860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB864u;
label_1fb864:
    // 0x1fb864: 0x0  nop
    ctx->pc = 0x1fb864u;
    // NOP
    ctx->pc = 0x1fb868u;
}
