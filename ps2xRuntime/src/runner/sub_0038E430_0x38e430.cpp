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

// Function: sub_0038E430
// Address: 0x38e430 - 0x38e538
void sub_0038E430_0x38e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E430_0x38e430");
#endif

    switch (ctx->pc) {
        case 0x38e430u: goto label_38e430;
        case 0x38e434u: goto label_38e434;
        case 0x38e438u: goto label_38e438;
        case 0x38e43cu: goto label_38e43c;
        case 0x38e440u: goto label_38e440;
        case 0x38e444u: goto label_38e444;
        case 0x38e448u: goto label_38e448;
        case 0x38e44cu: goto label_38e44c;
        case 0x38e450u: goto label_38e450;
        case 0x38e454u: goto label_38e454;
        case 0x38e458u: goto label_38e458;
        case 0x38e45cu: goto label_38e45c;
        case 0x38e460u: goto label_38e460;
        case 0x38e464u: goto label_38e464;
        case 0x38e468u: goto label_38e468;
        case 0x38e46cu: goto label_38e46c;
        case 0x38e470u: goto label_38e470;
        case 0x38e474u: goto label_38e474;
        case 0x38e478u: goto label_38e478;
        case 0x38e47cu: goto label_38e47c;
        case 0x38e480u: goto label_38e480;
        case 0x38e484u: goto label_38e484;
        case 0x38e488u: goto label_38e488;
        case 0x38e48cu: goto label_38e48c;
        case 0x38e490u: goto label_38e490;
        case 0x38e494u: goto label_38e494;
        case 0x38e498u: goto label_38e498;
        case 0x38e49cu: goto label_38e49c;
        case 0x38e4a0u: goto label_38e4a0;
        case 0x38e4a4u: goto label_38e4a4;
        case 0x38e4a8u: goto label_38e4a8;
        case 0x38e4acu: goto label_38e4ac;
        case 0x38e4b0u: goto label_38e4b0;
        case 0x38e4b4u: goto label_38e4b4;
        case 0x38e4b8u: goto label_38e4b8;
        case 0x38e4bcu: goto label_38e4bc;
        case 0x38e4c0u: goto label_38e4c0;
        case 0x38e4c4u: goto label_38e4c4;
        case 0x38e4c8u: goto label_38e4c8;
        case 0x38e4ccu: goto label_38e4cc;
        case 0x38e4d0u: goto label_38e4d0;
        case 0x38e4d4u: goto label_38e4d4;
        case 0x38e4d8u: goto label_38e4d8;
        case 0x38e4dcu: goto label_38e4dc;
        case 0x38e4e0u: goto label_38e4e0;
        case 0x38e4e4u: goto label_38e4e4;
        case 0x38e4e8u: goto label_38e4e8;
        case 0x38e4ecu: goto label_38e4ec;
        case 0x38e4f0u: goto label_38e4f0;
        case 0x38e4f4u: goto label_38e4f4;
        case 0x38e4f8u: goto label_38e4f8;
        case 0x38e4fcu: goto label_38e4fc;
        case 0x38e500u: goto label_38e500;
        case 0x38e504u: goto label_38e504;
        case 0x38e508u: goto label_38e508;
        case 0x38e50cu: goto label_38e50c;
        case 0x38e510u: goto label_38e510;
        case 0x38e514u: goto label_38e514;
        case 0x38e518u: goto label_38e518;
        case 0x38e51cu: goto label_38e51c;
        case 0x38e520u: goto label_38e520;
        case 0x38e524u: goto label_38e524;
        case 0x38e528u: goto label_38e528;
        case 0x38e52cu: goto label_38e52c;
        case 0x38e530u: goto label_38e530;
        case 0x38e534u: goto label_38e534;
        default: break;
    }

    ctx->pc = 0x38e430u;

label_38e430:
    // 0x38e430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38e434:
    // 0x38e434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38e438:
    // 0x38e438: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38e43c:
    // 0x38e43c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38e440:
    // 0x38e440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e444:
    // 0x38e444: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_38e448:
    // 0x38e448: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x38e448u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_38e44c:
    // 0x38e44c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38e450:
    // 0x38e450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e454:
    // 0x38e454: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x38e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_38e458:
    // 0x38e458: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x38e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_38e45c:
    // 0x38e45c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_38e460:
    if (ctx->pc == 0x38E460u) {
        ctx->pc = 0x38E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E45Cu;
        // 0x38e460: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E464u;
        goto label_38e464;
    }
    ctx->pc = 0x38E45Cu;
    {
        const bool branch_taken_0x38e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E45Cu;
        // 0x38e460: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e45c) {
            ctx->pc = 0x38E4D4u;
            goto label_38e4d4;
        }
    }
    ctx->pc = 0x38E464u;
label_38e464:
    // 0x38e464: 0xc0e8b48  jal         func_3A2D20
label_38e468:
    if (ctx->pc == 0x38E468u) {
        ctx->pc = 0x38E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E464u;
        // 0x38e468: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E46Cu;
        goto label_38e46c;
    }
    ctx->pc = 0x38E464u;
    SET_GPR_U32(ctx, 31, 0x38E46Cu);
    ctx->pc = 0x38E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E464u;
    // 0x38e468: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38E464u, 0x38E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E46Cu;
label_38e46c:
    // 0x38e46c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38e46cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38e470:
    // 0x38e470: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x38e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_38e474:
    // 0x38e474: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x38e474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_38e478:
    // 0x38e478: 0xc0e8b58  jal         func_3A2D60
label_38e47c:
    if (ctx->pc == 0x38E47Cu) {
        ctx->pc = 0x38E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E478u;
        // 0x38e47c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E480u;
        goto label_38e480;
    }
    ctx->pc = 0x38E478u;
    SET_GPR_U32(ctx, 31, 0x38E480u);
    ctx->pc = 0x38E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E478u;
    // 0x38e47c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38E478u, 0x38E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E480u;
label_38e480:
    // 0x38e480: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x38e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_38e484:
    // 0x38e484: 0xc0e8b58  jal         func_3A2D60
label_38e488:
    if (ctx->pc == 0x38E488u) {
        ctx->pc = 0x38E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E484u;
        // 0x38e488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E48Cu;
        goto label_38e48c;
    }
    ctx->pc = 0x38E484u;
    SET_GPR_U32(ctx, 31, 0x38E48Cu);
    ctx->pc = 0x38E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E484u;
    // 0x38e488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38E484u, 0x38E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E48Cu;
label_38e48c:
    // 0x38e48c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x38e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_38e490:
    // 0x38e490: 0xc0e8b70  jal         func_3A2DC0
label_38e494:
    if (ctx->pc == 0x38E494u) {
        ctx->pc = 0x38E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E490u;
        // 0x38e494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E498u;
        goto label_38e498;
    }
    ctx->pc = 0x38E490u;
    SET_GPR_U32(ctx, 31, 0x38E498u);
    ctx->pc = 0x38E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E490u;
    // 0x38e494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x38E490u, 0x38E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E498u;
label_38e498:
    // 0x38e498: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x38e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_38e49c:
    // 0x38e49c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x38e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_38e4a0:
    // 0x38e4a0: 0xc0e8b90  jal         func_3A2E40
label_38e4a4:
    if (ctx->pc == 0x38E4A4u) {
        ctx->pc = 0x38E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4A0u;
        // 0x38e4a4: 0x24a50978  addiu       $a1, $a1, 0x978 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4A8u;
        goto label_38e4a8;
    }
    ctx->pc = 0x38E4A0u;
    SET_GPR_U32(ctx, 31, 0x38E4A8u);
    ctx->pc = 0x38E4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E4A0u;
    // 0x38e4a4: 0x24a50978  addiu       $a1, $a1, 0x978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x38E4A0u, 0x38E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4A8u;
label_38e4a8:
    // 0x38e4a8: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x38e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_38e4ac:
    // 0x38e4ac: 0xc0e8b50  jal         func_3A2D40
label_38e4b0:
    if (ctx->pc == 0x38E4B0u) {
        ctx->pc = 0x38E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4ACu;
        // 0x38e4b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4B4u;
        goto label_38e4b4;
    }
    ctx->pc = 0x38E4ACu;
    SET_GPR_U32(ctx, 31, 0x38E4B4u);
    ctx->pc = 0x38E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E4ACu;
    // 0x38e4b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38E4ACu, 0x38E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4B4u;
label_38e4b4:
    // 0x38e4b4: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_38e4b8:
    if (ctx->pc == 0x38E4B8u) {
        ctx->pc = 0x38E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4B4u;
        // 0x38e4b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4BCu;
        goto label_38e4bc;
    }
    ctx->pc = 0x38E4B4u;
    {
        const bool branch_taken_0x38e4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e4b4) {
            ctx->pc = 0x38E4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E4B4u;
            // 0x38e4b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E4D8u;
            goto label_38e4d8;
        }
    }
    ctx->pc = 0x38E4BCu;
label_38e4bc:
    // 0x38e4bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e4c0:
    // 0x38e4c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x38e4c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_38e4c4:
    // 0x38e4c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38e4c8:
    // 0x38e4c8: 0x40f809  jalr        $v0
label_38e4cc:
    if (ctx->pc == 0x38E4CCu) {
        ctx->pc = 0x38E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4C8u;
        // 0x38e4cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4D0u;
        goto label_38e4d0;
    }
    ctx->pc = 0x38E4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E4D0u);
        ctx->pc = 0x38E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4C8u;
        // 0x38e4cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E4C8u, 0x38E4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E4D0u;
label_38e4d0:
    // 0x38e4d0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x38e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_38e4d4:
    // 0x38e4d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38e4d8:
    // 0x38e4d8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x38e4d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38e4dc:
    // 0x38e4dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x38e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38e4e0:
    // 0x38e4e0: 0x40f809  jalr        $v0
label_38e4e4:
    if (ctx->pc == 0x38E4E4u) {
        ctx->pc = 0x38E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4E0u;
        // 0x38e4e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4E8u;
        goto label_38e4e8;
    }
    ctx->pc = 0x38E4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E4E8u);
        ctx->pc = 0x38E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4E0u;
        // 0x38e4e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E4E0u, 0x38E4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E4E8u;
label_38e4e8:
    // 0x38e4e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38e4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e4ec:
    // 0x38e4ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38e4f0:
    // 0x38e4f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e4f4:
    // 0x38e4f4: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x38e4f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_38e4f8:
    // 0x38e4f8: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x38e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_38e4fc:
    // 0x38e4fc: 0x60f809  jalr        $v1
label_38e500:
    if (ctx->pc == 0x38E500u) {
        ctx->pc = 0x38E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4FCu;
        // 0x38e500: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E504u;
        goto label_38e504;
    }
    ctx->pc = 0x38E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38E504u);
        ctx->pc = 0x38E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4FCu;
        // 0x38e500: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E4FCu, 0x38E504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E504u;
label_38e504:
    // 0x38e504: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x38e504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_38e508:
    // 0x38e508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e50c:
    // 0x38e50c: 0xc0e8cbc  jal         func_3A32F0
label_38e510:
    if (ctx->pc == 0x38E510u) {
        ctx->pc = 0x38E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E50Cu;
        // 0x38e510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E514u;
        goto label_38e514;
    }
    ctx->pc = 0x38E50Cu;
    SET_GPR_U32(ctx, 31, 0x38E514u);
    ctx->pc = 0x38E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E50Cu;
    // 0x38e510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x38E50Cu, 0x38E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E514u;
label_38e514:
    // 0x38e514: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38e514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e518:
    // 0x38e518: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38e518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38e51c:
    // 0x38e51c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38e51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38e520:
    // 0x38e520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e524:
    // 0x38e524: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38e524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e528:
    // 0x38e528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e52c:
    // 0x38e52c: 0x3e00008  jr          $ra
label_38e530:
    if (ctx->pc == 0x38E530u) {
        ctx->pc = 0x38E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E52Cu;
        // 0x38e530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E534u;
        goto label_38e534;
    }
    ctx->pc = 0x38E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E52Cu;
        // 0x38e530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E534u;
label_38e534:
    // 0x38e534: 0x0  nop
    ctx->pc = 0x38e534u;
    // NOP
    ctx->pc = 0x38e538u;
}
