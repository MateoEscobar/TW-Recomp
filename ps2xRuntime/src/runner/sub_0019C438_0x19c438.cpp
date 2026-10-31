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

// Function: sub_0019C438
// Address: 0x19c438 - 0x19c598
void sub_0019C438_0x19c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C438_0x19c438");
#endif

    switch (ctx->pc) {
        case 0x19c438u: goto label_19c438;
        case 0x19c43cu: goto label_19c43c;
        case 0x19c440u: goto label_19c440;
        case 0x19c444u: goto label_19c444;
        case 0x19c448u: goto label_19c448;
        case 0x19c44cu: goto label_19c44c;
        case 0x19c450u: goto label_19c450;
        case 0x19c454u: goto label_19c454;
        case 0x19c458u: goto label_19c458;
        case 0x19c45cu: goto label_19c45c;
        case 0x19c460u: goto label_19c460;
        case 0x19c464u: goto label_19c464;
        case 0x19c468u: goto label_19c468;
        case 0x19c46cu: goto label_19c46c;
        case 0x19c470u: goto label_19c470;
        case 0x19c474u: goto label_19c474;
        case 0x19c478u: goto label_19c478;
        case 0x19c47cu: goto label_19c47c;
        case 0x19c480u: goto label_19c480;
        case 0x19c484u: goto label_19c484;
        case 0x19c488u: goto label_19c488;
        case 0x19c48cu: goto label_19c48c;
        case 0x19c490u: goto label_19c490;
        case 0x19c494u: goto label_19c494;
        case 0x19c498u: goto label_19c498;
        case 0x19c49cu: goto label_19c49c;
        case 0x19c4a0u: goto label_19c4a0;
        case 0x19c4a4u: goto label_19c4a4;
        case 0x19c4a8u: goto label_19c4a8;
        case 0x19c4acu: goto label_19c4ac;
        case 0x19c4b0u: goto label_19c4b0;
        case 0x19c4b4u: goto label_19c4b4;
        case 0x19c4b8u: goto label_19c4b8;
        case 0x19c4bcu: goto label_19c4bc;
        case 0x19c4c0u: goto label_19c4c0;
        case 0x19c4c4u: goto label_19c4c4;
        case 0x19c4c8u: goto label_19c4c8;
        case 0x19c4ccu: goto label_19c4cc;
        case 0x19c4d0u: goto label_19c4d0;
        case 0x19c4d4u: goto label_19c4d4;
        case 0x19c4d8u: goto label_19c4d8;
        case 0x19c4dcu: goto label_19c4dc;
        case 0x19c4e0u: goto label_19c4e0;
        case 0x19c4e4u: goto label_19c4e4;
        case 0x19c4e8u: goto label_19c4e8;
        case 0x19c4ecu: goto label_19c4ec;
        case 0x19c4f0u: goto label_19c4f0;
        case 0x19c4f4u: goto label_19c4f4;
        case 0x19c4f8u: goto label_19c4f8;
        case 0x19c4fcu: goto label_19c4fc;
        case 0x19c500u: goto label_19c500;
        case 0x19c504u: goto label_19c504;
        case 0x19c508u: goto label_19c508;
        case 0x19c50cu: goto label_19c50c;
        case 0x19c510u: goto label_19c510;
        case 0x19c514u: goto label_19c514;
        case 0x19c518u: goto label_19c518;
        case 0x19c51cu: goto label_19c51c;
        case 0x19c520u: goto label_19c520;
        case 0x19c524u: goto label_19c524;
        case 0x19c528u: goto label_19c528;
        case 0x19c52cu: goto label_19c52c;
        case 0x19c530u: goto label_19c530;
        case 0x19c534u: goto label_19c534;
        case 0x19c538u: goto label_19c538;
        case 0x19c53cu: goto label_19c53c;
        case 0x19c540u: goto label_19c540;
        case 0x19c544u: goto label_19c544;
        case 0x19c548u: goto label_19c548;
        case 0x19c54cu: goto label_19c54c;
        case 0x19c550u: goto label_19c550;
        case 0x19c554u: goto label_19c554;
        case 0x19c558u: goto label_19c558;
        case 0x19c55cu: goto label_19c55c;
        case 0x19c560u: goto label_19c560;
        case 0x19c564u: goto label_19c564;
        case 0x19c568u: goto label_19c568;
        case 0x19c56cu: goto label_19c56c;
        case 0x19c570u: goto label_19c570;
        case 0x19c574u: goto label_19c574;
        case 0x19c578u: goto label_19c578;
        case 0x19c57cu: goto label_19c57c;
        case 0x19c580u: goto label_19c580;
        case 0x19c584u: goto label_19c584;
        case 0x19c588u: goto label_19c588;
        case 0x19c58cu: goto label_19c58c;
        case 0x19c590u: goto label_19c590;
        case 0x19c594u: goto label_19c594;
        default: break;
    }

    ctx->pc = 0x19c438u;

label_19c438:
    // 0x19c438: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19c43c:
    // 0x19c43c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19c440:
    // 0x19c440: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19c444:
    // 0x19c444: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19c444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c448:
    // 0x19c448: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_19c44c:
    // 0x19c44c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_19c450:
    // 0x19c450: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_19c454:
    // 0x19c454: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_19c458:
    // 0x19c458: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_19c45c:
    // 0x19c45c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x19c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_19c460:
    // 0x19c460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19c464:
    // 0x19c464: 0xc107444  jal         func_41D110
label_19c468:
    if (ctx->pc == 0x19C468u) {
        ctx->pc = 0x19C46Cu;
        goto label_19c46c;
    }
    ctx->pc = 0x19C464u;
    SET_GPR_U32(ctx, 31, 0x19C46Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x19C464u, 0x19C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C46Cu;
label_19c46c:
    // 0x19c46c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_19c470:
    if (ctx->pc == 0x19C470u) {
        ctx->pc = 0x19C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C46Cu;
        // 0x19c470: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C474u;
        goto label_19c474;
    }
    ctx->pc = 0x19C46Cu;
    {
        const bool branch_taken_0x19c46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C46Cu;
        // 0x19c470: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c46c) {
            ctx->pc = 0x19C578u;
            goto label_19c578;
        }
    }
    ctx->pc = 0x19C474u;
label_19c474:
    // 0x19c474: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19c478:
    // 0x19c478: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19c478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c47c:
    // 0x19c47c: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x19c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_19c480:
    // 0x19c480: 0x2675001c  addiu       $s5, $s3, 0x1C
    ctx->pc = 0x19c480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_19c484:
    // 0x19c484: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x19c484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c488:
    // 0x19c488: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x19c488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_19c48c:
    // 0x19c48c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x19c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19c490:
    // 0x19c490: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_19c494:
    // 0x19c494: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x19c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_19c498:
    // 0x19c498: 0x40f809  jalr        $v0
label_19c49c:
    if (ctx->pc == 0x19C49Cu) {
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C498u;
        // 0x19c49c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4A0u;
        goto label_19c4a0;
    }
    ctx->pc = 0x19C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C4A0u);
        ctx->pc = 0x19C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C498u;
        // 0x19c49c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C498u, 0x19C4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C4A0u;
label_19c4a0:
    // 0x19c4a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19c4a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c4a4:
    // 0x19c4a4: 0x0  nop
    ctx->pc = 0x19c4a4u;
    // NOP
label_19c4a8:
    // 0x19c4a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c4ac:
    // 0x19c4ac: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_19c4b0:
    if (ctx->pc == 0x19C4B0u) {
        ctx->pc = 0x19C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4ACu;
        // 0x19c4b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4B4u;
        goto label_19c4b4;
    }
    ctx->pc = 0x19C4ACu;
    {
        const bool branch_taken_0x19c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4ac) {
            ctx->pc = 0x19C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C4ACu;
            // 0x19c4b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C4F8u;
            goto label_19c4f8;
        }
    }
    ctx->pc = 0x19C4B4u;
label_19c4b4:
    // 0x19c4b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x19c4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c4b8:
    // 0x19c4b8: 0x8cc232f4  lw          $v0, 0x32F4($a2)
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13044)));
label_19c4bc:
    // 0x19c4bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_19c4c0:
    if (ctx->pc == 0x19C4C0u) {
        ctx->pc = 0x19C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4BCu;
        // 0x19c4c0: 0x8cc2330c  lw          $v0, 0x330C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4C4u;
        goto label_19c4c4;
    }
    ctx->pc = 0x19C4BCu;
    {
        const bool branch_taken_0x19c4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4bc) {
            ctx->pc = 0x19C4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C4BCu;
            // 0x19c4c0: 0x8cc2330c  lw          $v0, 0x330C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C4D8u;
            goto label_19c4d8;
        }
    }
    ctx->pc = 0x19C4C4u;
label_19c4c4:
    // 0x19c4c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c4c8:
    // 0x19c4c8: 0xc0670ca  jal         func_19C328
label_19c4cc:
    if (ctx->pc == 0x19C4CCu) {
        ctx->pc = 0x19C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4C8u;
        // 0x19c4cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4D0u;
        goto label_19c4d0;
    }
    ctx->pc = 0x19C4C8u;
    SET_GPR_U32(ctx, 31, 0x19C4D0u);
    ctx->pc = 0x19C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4C8u;
    // 0x19c4cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C328u, 0x19C4C8u, 0x19C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4D0u;
label_19c4d0:
    // 0x19c4d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_19c4d4:
    if (ctx->pc == 0x19C4D4u) {
        ctx->pc = 0x19C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D0u;
        // 0x19c4d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4D8u;
        goto label_19c4d8;
    }
    ctx->pc = 0x19C4D0u;
    {
        const bool branch_taken_0x19c4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4D0u;
        // 0x19c4d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4d0) {
            ctx->pc = 0x19C4F8u;
            goto label_19c4f8;
        }
    }
    ctx->pc = 0x19C4D8u;
label_19c4d8:
    // 0x19c4d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19c4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19c4dc:
    // 0x19c4dc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_19c4e0:
    // 0x19c4e0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_19c4e4:
    // 0x19c4e4: 0x60f809  jalr        $v1
label_19c4e8:
    if (ctx->pc == 0x19C4E8u) {
        ctx->pc = 0x19C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4E4u;
        // 0x19c4e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4ECu;
        goto label_19c4ec;
    }
    ctx->pc = 0x19C4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19C4ECu);
        ctx->pc = 0x19C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4E4u;
        // 0x19c4e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C4E4u, 0x19C4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C4ECu;
label_19c4ec:
    // 0x19c4ec: 0xc067572  jal         func_19D5C8
label_19c4f0:
    if (ctx->pc == 0x19C4F0u) {
        ctx->pc = 0x19C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C4ECu;
        // 0x19c4f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C4F4u;
        goto label_19c4f4;
    }
    ctx->pc = 0x19C4ECu;
    SET_GPR_U32(ctx, 31, 0x19C4F4u);
    ctx->pc = 0x19C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C4ECu;
    // 0x19c4f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5C8u, 0x19C4ECu, 0x19C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C4F4u;
label_19c4f4:
    // 0x19c4f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19c4f8:
    // 0x19c4f8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x19c4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_19c4fc:
    // 0x19c4fc: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x19c4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19c500:
    // 0x19c500: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_19c504:
    if (ctx->pc == 0x19C504u) {
        ctx->pc = 0x19C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C500u;
        // 0x19c504: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C508u;
        goto label_19c508;
    }
    ctx->pc = 0x19C500u;
    {
        const bool branch_taken_0x19c500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C500u;
        // 0x19c504: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c500) {
            ctx->pc = 0x19C4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c4a8;
        }
    }
    ctx->pc = 0x19C508u;
label_19c508:
    // 0x19c508: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x19c508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c50c:
    // 0x19c50c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19c50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c510:
    // 0x19c510: 0x26700018  addiu       $s0, $s3, 0x18
    ctx->pc = 0x19c510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_19c514:
    // 0x19c514: 0x0  nop
    ctx->pc = 0x19c514u;
    // NOP
label_19c518:
    // 0x19c518: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c51c:
    // 0x19c51c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_19c520:
    if (ctx->pc == 0x19C520u) {
        ctx->pc = 0x19C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C51Cu;
        // 0x19c520: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C524u;
        goto label_19c524;
    }
    ctx->pc = 0x19C51Cu;
    {
        const bool branch_taken_0x19c51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c51c) {
            ctx->pc = 0x19C520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C51Cu;
            // 0x19c520: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C568u;
            goto label_19c568;
        }
    }
    ctx->pc = 0x19C524u;
label_19c524:
    // 0x19c524: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x19c524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c528:
    // 0x19c528: 0x8cc232f4  lw          $v0, 0x32F4($a2)
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13044)));
label_19c52c:
    // 0x19c52c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_19c530:
    if (ctx->pc == 0x19C530u) {
        ctx->pc = 0x19C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C52Cu;
        // 0x19c530: 0x8cc2330c  lw          $v0, 0x330C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C534u;
        goto label_19c534;
    }
    ctx->pc = 0x19C52Cu;
    {
        const bool branch_taken_0x19c52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c52c) {
            ctx->pc = 0x19C530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C52Cu;
            // 0x19c530: 0x8cc2330c  lw          $v0, 0x330C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C548u;
            goto label_19c548;
        }
    }
    ctx->pc = 0x19C534u;
label_19c534:
    // 0x19c534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19c534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c538:
    // 0x19c538: 0xc0670e6  jal         func_19C398
label_19c53c:
    if (ctx->pc == 0x19C53Cu) {
        ctx->pc = 0x19C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C538u;
        // 0x19c53c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C540u;
        goto label_19c540;
    }
    ctx->pc = 0x19C538u;
    SET_GPR_U32(ctx, 31, 0x19C540u);
    ctx->pc = 0x19C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C538u;
    // 0x19c53c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C398u, 0x19C538u, 0x19C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C540u;
label_19c540:
    // 0x19c540: 0x10000009  b           . + 4 + (0x9 << 2)
label_19c544:
    if (ctx->pc == 0x19C544u) {
        ctx->pc = 0x19C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C540u;
        // 0x19c544: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C548u;
        goto label_19c548;
    }
    ctx->pc = 0x19C540u;
    {
        const bool branch_taken_0x19c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C540u;
        // 0x19c544: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c540) {
            ctx->pc = 0x19C568u;
            goto label_19c568;
        }
    }
    ctx->pc = 0x19C548u;
label_19c548:
    // 0x19c548: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19c548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19c54c:
    // 0x19c54c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x19c54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_19c550:
    // 0x19c550: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x19c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_19c554:
    // 0x19c554: 0x60f809  jalr        $v1
label_19c558:
    if (ctx->pc == 0x19C558u) {
        ctx->pc = 0x19C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C554u;
        // 0x19c558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C55Cu;
        goto label_19c55c;
    }
    ctx->pc = 0x19C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19C55Cu);
        ctx->pc = 0x19C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C554u;
        // 0x19c558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C554u, 0x19C55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C55Cu;
label_19c55c:
    // 0x19c55c: 0xc067572  jal         func_19D5C8
label_19c560:
    if (ctx->pc == 0x19C560u) {
        ctx->pc = 0x19C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C55Cu;
        // 0x19c560: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C564u;
        goto label_19c564;
    }
    ctx->pc = 0x19C55Cu;
    SET_GPR_U32(ctx, 31, 0x19C564u);
    ctx->pc = 0x19C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C55Cu;
    // 0x19c560: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5C8u, 0x19C55Cu, 0x19C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C564u;
label_19c564:
    // 0x19c564: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x19c564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_19c568:
    // 0x19c568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19c56c:
    // 0x19c56c: 0x1220ffea  beqz        $s1, . + 4 + (-0x16 << 2)
label_19c570:
    if (ctx->pc == 0x19C570u) {
        ctx->pc = 0x19C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C56Cu;
        // 0x19c570: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C574u;
        goto label_19c574;
    }
    ctx->pc = 0x19C56Cu;
    {
        const bool branch_taken_0x19c56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C56Cu;
        // 0x19c570: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c56c) {
            ctx->pc = 0x19C518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c518;
        }
    }
    ctx->pc = 0x19C574u;
label_19c574:
    // 0x19c574: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19c574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19c578:
    // 0x19c578: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19c578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19c57c:
    // 0x19c57c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19c57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c580:
    // 0x19c580: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c584:
    // 0x19c584: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19c584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c588:
    // 0x19c588: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x19c588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c58c:
    // 0x19c58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c590:
    // 0x19c590: 0x3e00008  jr          $ra
label_19c594:
    if (ctx->pc == 0x19C594u) {
        ctx->pc = 0x19C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C590u;
        // 0x19c594: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C598u;
        goto label_fallthrough_0x19c590;
    }
    ctx->pc = 0x19C590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C590u;
        // 0x19c594: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19c590:
    ctx->pc = 0x19C598u;
}
