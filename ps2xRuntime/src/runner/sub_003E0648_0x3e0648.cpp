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

// Function: sub_003E0648
// Address: 0x3e0648 - 0x3e0708
void sub_003E0648_0x3e0648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0648_0x3e0648");
#endif

    switch (ctx->pc) {
        case 0x3e0648u: goto label_3e0648;
        case 0x3e064cu: goto label_3e064c;
        case 0x3e0650u: goto label_3e0650;
        case 0x3e0654u: goto label_3e0654;
        case 0x3e0658u: goto label_3e0658;
        case 0x3e065cu: goto label_3e065c;
        case 0x3e0660u: goto label_3e0660;
        case 0x3e0664u: goto label_3e0664;
        case 0x3e0668u: goto label_3e0668;
        case 0x3e066cu: goto label_3e066c;
        case 0x3e0670u: goto label_3e0670;
        case 0x3e0674u: goto label_3e0674;
        case 0x3e0678u: goto label_3e0678;
        case 0x3e067cu: goto label_3e067c;
        case 0x3e0680u: goto label_3e0680;
        case 0x3e0684u: goto label_3e0684;
        case 0x3e0688u: goto label_3e0688;
        case 0x3e068cu: goto label_3e068c;
        case 0x3e0690u: goto label_3e0690;
        case 0x3e0694u: goto label_3e0694;
        case 0x3e0698u: goto label_3e0698;
        case 0x3e069cu: goto label_3e069c;
        case 0x3e06a0u: goto label_3e06a0;
        case 0x3e06a4u: goto label_3e06a4;
        case 0x3e06a8u: goto label_3e06a8;
        case 0x3e06acu: goto label_3e06ac;
        case 0x3e06b0u: goto label_3e06b0;
        case 0x3e06b4u: goto label_3e06b4;
        case 0x3e06b8u: goto label_3e06b8;
        case 0x3e06bcu: goto label_3e06bc;
        case 0x3e06c0u: goto label_3e06c0;
        case 0x3e06c4u: goto label_3e06c4;
        case 0x3e06c8u: goto label_3e06c8;
        case 0x3e06ccu: goto label_3e06cc;
        case 0x3e06d0u: goto label_3e06d0;
        case 0x3e06d4u: goto label_3e06d4;
        case 0x3e06d8u: goto label_3e06d8;
        case 0x3e06dcu: goto label_3e06dc;
        case 0x3e06e0u: goto label_3e06e0;
        case 0x3e06e4u: goto label_3e06e4;
        case 0x3e06e8u: goto label_3e06e8;
        case 0x3e06ecu: goto label_3e06ec;
        case 0x3e06f0u: goto label_3e06f0;
        case 0x3e06f4u: goto label_3e06f4;
        case 0x3e06f8u: goto label_3e06f8;
        case 0x3e06fcu: goto label_3e06fc;
        case 0x3e0700u: goto label_3e0700;
        case 0x3e0704u: goto label_3e0704;
        default: break;
    }

    ctx->pc = 0x3e0648u;

label_3e0648:
    // 0x3e0648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e0648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e064c:
    // 0x3e064c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3e0650:
    // 0x3e0650: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e0650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3e0654:
    // 0x3e0654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e0654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0658:
    // 0x3e0658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e0658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e065c:
    // 0x3e065c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e065cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0660:
    // 0x3e0660: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e0660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3e0664:
    // 0x3e0664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e0668:
    // 0x3e0668: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e0668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e066c:
    // 0x3e066c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e0670:
    // 0x3e0670: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e0670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0674:
    // 0x3e0674: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0678:
    // 0x3e0678: 0x40f809  jalr        $v0
label_3e067c:
    if (ctx->pc == 0x3E067Cu) {
        ctx->pc = 0x3E067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0678u;
        // 0x3e067c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0680u;
        goto label_3e0680;
    }
    ctx->pc = 0x3E0678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0680u);
        ctx->pc = 0x3E067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0678u;
        // 0x3e067c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0678u, 0x3E0680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0680u;
label_3e0680:
    // 0x3e0680: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e0680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0684:
    // 0x3e0684: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x3e0684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3e0688:
    // 0x3e0688: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_3e068c:
    if (ctx->pc == 0x3E068Cu) {
        ctx->pc = 0x3E068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0688u;
        // 0x3e068c: 0x2e02001a  sltiu       $v0, $s0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0690u;
        goto label_3e0690;
    }
    ctx->pc = 0x3E0688u;
    {
        const bool branch_taken_0x3e0688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0688u;
        // 0x3e068c: 0x2e02001a  sltiu       $v0, $s0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0688) {
            ctx->pc = 0x3E06C0u;
            goto label_3e06c0;
        }
    }
    ctx->pc = 0x3E0690u;
label_3e0690:
    // 0x3e0690: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3e0694:
    if (ctx->pc == 0x3E0694u) {
        ctx->pc = 0x3E0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0690u;
        // 0x3e0694: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0698u;
        goto label_3e0698;
    }
    ctx->pc = 0x3E0690u;
    {
        const bool branch_taken_0x3e0690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0690) {
            ctx->pc = 0x3E0694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0690u;
            // 0x3e0694: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E06ECu;
            goto label_3e06ec;
        }
    }
    ctx->pc = 0x3E0698u;
label_3e0698:
    // 0x3e0698: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3e069c:
    // 0x3e069c: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_3e06a0:
    if (ctx->pc == 0x3E06A0u) {
        ctx->pc = 0x3E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E069Cu;
        // 0x3e06a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E06A4u;
        goto label_3e06a4;
    }
    ctx->pc = 0x3E069Cu;
    {
        const bool branch_taken_0x3e069c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E069Cu;
        // 0x3e06a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e069c) {
            ctx->pc = 0x3E06ECu;
            goto label_3e06ec;
        }
    }
    ctx->pc = 0x3E06A4u;
label_3e06a4:
    // 0x3e06a4: 0xc0ea146  jal         func_3A8518
label_3e06a8:
    if (ctx->pc == 0x3E06A8u) {
        ctx->pc = 0x3E06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06A4u;
        // 0x3e06a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E06ACu;
        goto label_3e06ac;
    }
    ctx->pc = 0x3E06A4u;
    SET_GPR_U32(ctx, 31, 0x3E06ACu);
    ctx->pc = 0x3E06A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E06A4u;
    // 0x3e06a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E06A4u, 0x3E06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E06ACu;
label_3e06ac:
    // 0x3e06ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e06acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e06b0:
    // 0x3e06b0: 0xc0e858c  jal         func_3A1630
label_3e06b4:
    if (ctx->pc == 0x3E06B4u) {
        ctx->pc = 0x3E06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06B0u;
        // 0x3e06b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E06B8u;
        goto label_3e06b8;
    }
    ctx->pc = 0x3E06B0u;
    SET_GPR_U32(ctx, 31, 0x3E06B8u);
    ctx->pc = 0x3E06B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E06B0u;
    // 0x3e06b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E06B0u, 0x3E06B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E06B8u;
label_3e06b8:
    // 0x3e06b8: 0x1000000c  b           . + 4 + (0xC << 2)
label_3e06bc:
    if (ctx->pc == 0x3E06BCu) {
        ctx->pc = 0x3E06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06B8u;
        // 0x3e06bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E06C0u;
        goto label_3e06c0;
    }
    ctx->pc = 0x3E06B8u;
    {
        const bool branch_taken_0x3e06b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06B8u;
        // 0x3e06bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06b8) {
            ctx->pc = 0x3E06ECu;
            goto label_3e06ec;
        }
    }
    ctx->pc = 0x3E06C0u;
label_3e06c0:
    // 0x3e06c0: 0xc0ea146  jal         func_3A8518
label_3e06c4:
    if (ctx->pc == 0x3E06C4u) {
        ctx->pc = 0x3E06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06C0u;
        // 0x3e06c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E06C8u;
        goto label_3e06c8;
    }
    ctx->pc = 0x3E06C0u;
    SET_GPR_U32(ctx, 31, 0x3E06C8u);
    ctx->pc = 0x3E06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E06C0u;
    // 0x3e06c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E06C0u, 0x3E06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E06C8u;
label_3e06c8:
    // 0x3e06c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e06cc:
    // 0x3e06cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e06ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e06d0:
    // 0x3e06d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3e06d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3e06d4:
    // 0x3e06d4: 0xc0e916a  jal         func_3A45A8
label_3e06d8:
    if (ctx->pc == 0x3E06D8u) {
        ctx->pc = 0x3E06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06D4u;
        // 0x3e06d8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E06DCu;
        goto label_3e06dc;
    }
    ctx->pc = 0x3E06D4u;
    SET_GPR_U32(ctx, 31, 0x3E06DCu);
    ctx->pc = 0x3E06D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E06D4u;
    // 0x3e06d8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45A8u, 0x3E06D4u, 0x3E06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E06DCu;
label_3e06dc:
    // 0x3e06dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e06dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e06e0:
    // 0x3e06e0: 0xc0e9176  jal         func_3A45D8
label_3e06e4:
    if (ctx->pc == 0x3E06E4u) {
        ctx->pc = 0x3E06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06E0u;
        // 0x3e06e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E06E8u;
        goto label_3e06e8;
    }
    ctx->pc = 0x3E06E0u;
    SET_GPR_U32(ctx, 31, 0x3E06E8u);
    ctx->pc = 0x3E06E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E06E0u;
    // 0x3e06e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A45D8u, 0x3E06E0u, 0x3E06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E06E8u;
label_3e06e8:
    // 0x3e06e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e06e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e06ec:
    // 0x3e06ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e06ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e06f0:
    // 0x3e06f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e06f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e06f4:
    // 0x3e06f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e06f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e06f8:
    // 0x3e06f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e06f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e06fc:
    // 0x3e06fc: 0x3e00008  jr          $ra
label_3e0700:
    if (ctx->pc == 0x3E0700u) {
        ctx->pc = 0x3E0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06FCu;
        // 0x3e0700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0704u;
        goto label_3e0704;
    }
    ctx->pc = 0x3E06FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06FCu;
        // 0x3e0700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E06FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0704u;
label_3e0704:
    // 0x3e0704: 0x0  nop
    ctx->pc = 0x3e0704u;
    // NOP
    ctx->pc = 0x3e0708u;
}
