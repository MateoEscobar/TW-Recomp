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

// Function: sub_002AA490
// Address: 0x2aa490 - 0x2aa558
void sub_002AA490_0x2aa490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA490_0x2aa490");
#endif

    switch (ctx->pc) {
        case 0x2aa490u: goto label_2aa490;
        case 0x2aa494u: goto label_2aa494;
        case 0x2aa498u: goto label_2aa498;
        case 0x2aa49cu: goto label_2aa49c;
        case 0x2aa4a0u: goto label_2aa4a0;
        case 0x2aa4a4u: goto label_2aa4a4;
        case 0x2aa4a8u: goto label_2aa4a8;
        case 0x2aa4acu: goto label_2aa4ac;
        case 0x2aa4b0u: goto label_2aa4b0;
        case 0x2aa4b4u: goto label_2aa4b4;
        case 0x2aa4b8u: goto label_2aa4b8;
        case 0x2aa4bcu: goto label_2aa4bc;
        case 0x2aa4c0u: goto label_2aa4c0;
        case 0x2aa4c4u: goto label_2aa4c4;
        case 0x2aa4c8u: goto label_2aa4c8;
        case 0x2aa4ccu: goto label_2aa4cc;
        case 0x2aa4d0u: goto label_2aa4d0;
        case 0x2aa4d4u: goto label_2aa4d4;
        case 0x2aa4d8u: goto label_2aa4d8;
        case 0x2aa4dcu: goto label_2aa4dc;
        case 0x2aa4e0u: goto label_2aa4e0;
        case 0x2aa4e4u: goto label_2aa4e4;
        case 0x2aa4e8u: goto label_2aa4e8;
        case 0x2aa4ecu: goto label_2aa4ec;
        case 0x2aa4f0u: goto label_2aa4f0;
        case 0x2aa4f4u: goto label_2aa4f4;
        case 0x2aa4f8u: goto label_2aa4f8;
        case 0x2aa4fcu: goto label_2aa4fc;
        case 0x2aa500u: goto label_2aa500;
        case 0x2aa504u: goto label_2aa504;
        case 0x2aa508u: goto label_2aa508;
        case 0x2aa50cu: goto label_2aa50c;
        case 0x2aa510u: goto label_2aa510;
        case 0x2aa514u: goto label_2aa514;
        case 0x2aa518u: goto label_2aa518;
        case 0x2aa51cu: goto label_2aa51c;
        case 0x2aa520u: goto label_2aa520;
        case 0x2aa524u: goto label_2aa524;
        case 0x2aa528u: goto label_2aa528;
        case 0x2aa52cu: goto label_2aa52c;
        case 0x2aa530u: goto label_2aa530;
        case 0x2aa534u: goto label_2aa534;
        case 0x2aa538u: goto label_2aa538;
        case 0x2aa53cu: goto label_2aa53c;
        case 0x2aa540u: goto label_2aa540;
        case 0x2aa544u: goto label_2aa544;
        case 0x2aa548u: goto label_2aa548;
        case 0x2aa54cu: goto label_2aa54c;
        case 0x2aa550u: goto label_2aa550;
        case 0x2aa554u: goto label_2aa554;
        default: break;
    }

    ctx->pc = 0x2aa490u;

label_2aa490:
    // 0x2aa490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2aa490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2aa494:
    // 0x2aa494: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aa494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2aa498:
    // 0x2aa498: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2aa498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2aa49c:
    // 0x2aa49c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2aa49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4a0:
    // 0x2aa4a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2aa4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2aa4a4:
    // 0x2aa4a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2aa4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4a8:
    // 0x2aa4a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2aa4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2aa4ac:
    // 0x2aa4ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2aa4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2aa4b0:
    // 0x2aa4b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2aa4b4:
    // 0x2aa4b4: 0xc0e4060  jal         func_390180
label_2aa4b8:
    if (ctx->pc == 0x2AA4B8u) {
        ctx->pc = 0x2AA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4B4u;
        // 0x2aa4b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA4BCu;
        goto label_2aa4bc;
    }
    ctx->pc = 0x2AA4B4u;
    SET_GPR_U32(ctx, 31, 0x2AA4BCu);
    ctx->pc = 0x2AA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA4B4u;
    // 0x2aa4b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2AA4B4u, 0x2AA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4BCu;
label_2aa4bc:
    // 0x2aa4bc: 0xc08a61a  jal         func_229868
label_2aa4c0:
    if (ctx->pc == 0x2AA4C0u) {
        ctx->pc = 0x2AA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4BCu;
        // 0x2aa4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA4C4u;
        goto label_2aa4c4;
    }
    ctx->pc = 0x2AA4BCu;
    SET_GPR_U32(ctx, 31, 0x2AA4C4u);
    ctx->pc = 0x2AA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA4BCu;
    // 0x2aa4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2AA4BCu, 0x2AA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4C4u;
label_2aa4c4:
    // 0x2aa4c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4c8:
    // 0x2aa4c8: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_2aa4cc:
    if (ctx->pc == 0x2AA4CCu) {
        ctx->pc = 0x2AA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4C8u;
        // 0x2aa4cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA4D0u;
        goto label_2aa4d0;
    }
    ctx->pc = 0x2AA4C8u;
    {
        const bool branch_taken_0x2aa4c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa4c8) {
            ctx->pc = 0x2AA4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA4C8u;
            // 0x2aa4cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA53Cu;
            goto label_2aa53c;
        }
    }
    ctx->pc = 0x2AA4D0u;
label_2aa4d0:
    // 0x2aa4d0: 0xc087502  jal         func_21D408
label_2aa4d4:
    if (ctx->pc == 0x2AA4D4u) {
        ctx->pc = 0x2AA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4D0u;
        // 0x2aa4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA4D8u;
        goto label_2aa4d8;
    }
    ctx->pc = 0x2AA4D0u;
    SET_GPR_U32(ctx, 31, 0x2AA4D8u);
    ctx->pc = 0x2AA4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA4D0u;
    // 0x2aa4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AA4D0u, 0x2AA4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4D8u;
label_2aa4d8:
    // 0x2aa4d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aa4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2aa4dc:
    // 0x2aa4dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aa4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4e0:
    // 0x2aa4e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2aa4e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2aa4e4:
    // 0x2aa4e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2aa4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2aa4e8:
    // 0x2aa4e8: 0x40f809  jalr        $v0
label_2aa4ec:
    if (ctx->pc == 0x2AA4ECu) {
        ctx->pc = 0x2AA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4E8u;
        // 0x2aa4ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA4F0u;
        goto label_2aa4f0;
    }
    ctx->pc = 0x2AA4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AA4F0u);
        ctx->pc = 0x2AA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4E8u;
        // 0x2aa4ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA4E8u, 0x2AA4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA4F0u;
label_2aa4f0:
    // 0x2aa4f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4f4:
    // 0x2aa4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4f8:
    // 0x2aa4f8: 0xc08e1a4  jal         func_238690
label_2aa4fc:
    if (ctx->pc == 0x2AA4FCu) {
        ctx->pc = 0x2AA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA4F8u;
        // 0x2aa4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA500u;
        goto label_2aa500;
    }
    ctx->pc = 0x2AA4F8u;
    SET_GPR_U32(ctx, 31, 0x2AA500u);
    ctx->pc = 0x2AA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA4F8u;
    // 0x2aa4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2AA4F8u, 0x2AA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA500u;
label_2aa500:
    // 0x2aa500: 0xc0a4e54  jal         func_293950
label_2aa504:
    if (ctx->pc == 0x2AA504u) {
        ctx->pc = 0x2AA508u;
        goto label_2aa508;
    }
    ctx->pc = 0x2AA500u;
    SET_GPR_U32(ctx, 31, 0x2AA508u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AA500u, 0x2AA508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA508u;
label_2aa508:
    // 0x2aa508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa50c:
    // 0x2aa50c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2aa510:
    if (ctx->pc == 0x2AA510u) {
        ctx->pc = 0x2AA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA50Cu;
        // 0x2aa510: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA514u;
        goto label_2aa514;
    }
    ctx->pc = 0x2AA50Cu;
    {
        const bool branch_taken_0x2aa50c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA50Cu;
        // 0x2aa510: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa50c) {
            ctx->pc = 0x2AA52Cu;
            goto label_2aa52c;
        }
    }
    ctx->pc = 0x2AA514u;
label_2aa514:
    // 0x2aa514: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2aa514u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2aa518:
    // 0x2aa518: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2aa518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aa51c:
    // 0x2aa51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa520:
    // 0x2aa520: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa524:
    // 0x2aa524: 0xc0aa956  jal         func_2AA558
label_2aa528:
    if (ctx->pc == 0x2AA528u) {
        ctx->pc = 0x2AA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA524u;
        // 0x2aa528: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA52Cu;
        goto label_2aa52c;
    }
    ctx->pc = 0x2AA524u;
    SET_GPR_U32(ctx, 31, 0x2AA52Cu);
    ctx->pc = 0x2AA528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA524u;
    // 0x2aa528: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA558u, 0x2AA524u, 0x2AA52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA52Cu;
label_2aa52c:
    // 0x2aa52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa530:
    // 0x2aa530: 0xc0a35d6  jal         func_28D758
label_2aa534:
    if (ctx->pc == 0x2AA534u) {
        ctx->pc = 0x2AA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA530u;
        // 0x2aa534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA538u;
        goto label_2aa538;
    }
    ctx->pc = 0x2AA530u;
    SET_GPR_U32(ctx, 31, 0x2AA538u);
    ctx->pc = 0x2AA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA530u;
    // 0x2aa534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AA530u, 0x2AA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA538u;
label_2aa538:
    // 0x2aa538: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2aa538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2aa53c:
    // 0x2aa53c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2aa53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2aa540:
    // 0x2aa540: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2aa540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa544:
    // 0x2aa544: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2aa544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa548:
    // 0x2aa548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa54c:
    // 0x2aa54c: 0x3e00008  jr          $ra
label_2aa550:
    if (ctx->pc == 0x2AA550u) {
        ctx->pc = 0x2AA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA54Cu;
        // 0x2aa550: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA554u;
        goto label_2aa554;
    }
    ctx->pc = 0x2AA54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA54Cu;
        // 0x2aa550: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA554u;
label_2aa554:
    // 0x2aa554: 0x0  nop
    ctx->pc = 0x2aa554u;
    // NOP
    ctx->pc = 0x2aa558u;
}
