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

// Function: sub_001AC400
// Address: 0x1ac400 - 0x1ac4e8
void sub_001AC400_0x1ac400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC400_0x1ac400");
#endif

    switch (ctx->pc) {
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac404u: goto label_1ac404;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac40cu: goto label_1ac40c;
        case 0x1ac410u: goto label_1ac410;
        case 0x1ac414u: goto label_1ac414;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac41cu: goto label_1ac41c;
        case 0x1ac420u: goto label_1ac420;
        case 0x1ac424u: goto label_1ac424;
        case 0x1ac428u: goto label_1ac428;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac430u: goto label_1ac430;
        case 0x1ac434u: goto label_1ac434;
        case 0x1ac438u: goto label_1ac438;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac448u: goto label_1ac448;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac450u: goto label_1ac450;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac458u: goto label_1ac458;
        case 0x1ac45cu: goto label_1ac45c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac464u: goto label_1ac464;
        case 0x1ac468u: goto label_1ac468;
        case 0x1ac46cu: goto label_1ac46c;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac478u: goto label_1ac478;
        case 0x1ac47cu: goto label_1ac47c;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac488u: goto label_1ac488;
        case 0x1ac48cu: goto label_1ac48c;
        case 0x1ac490u: goto label_1ac490;
        case 0x1ac494u: goto label_1ac494;
        case 0x1ac498u: goto label_1ac498;
        case 0x1ac49cu: goto label_1ac49c;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4a4u: goto label_1ac4a4;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac4acu: goto label_1ac4ac;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4b8u: goto label_1ac4b8;
        case 0x1ac4bcu: goto label_1ac4bc;
        case 0x1ac4c0u: goto label_1ac4c0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4c8u: goto label_1ac4c8;
        case 0x1ac4ccu: goto label_1ac4cc;
        case 0x1ac4d0u: goto label_1ac4d0;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4d8u: goto label_1ac4d8;
        case 0x1ac4dcu: goto label_1ac4dc;
        case 0x1ac4e0u: goto label_1ac4e0;
        case 0x1ac4e4u: goto label_1ac4e4;
        default: break;
    }

    ctx->pc = 0x1ac400u;

label_1ac400:
    // 0x1ac400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ac404:
    // 0x1ac404: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ac404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ac408:
    // 0x1ac408: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ac408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1ac40c:
    // 0x1ac40c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac410:
    // 0x1ac410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ac410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ac414:
    // 0x1ac414: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ac414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1ac418:
    // 0x1ac418: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1ac41c:
    // 0x1ac41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac420:
    // 0x1ac420: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ac420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac424:
    // 0x1ac424: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1ac424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_1ac428:
    // 0x1ac428: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1ac428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac42c:
    // 0x1ac42c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ac42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ac430:
    // 0x1ac430: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ac430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ac434:
    // 0x1ac434: 0x84e400e0  lh          $a0, 0xE0($a3)
    ctx->pc = 0x1ac434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 224)));
label_1ac438:
    // 0x1ac438: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ac438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ac43c:
    // 0x1ac43c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1ac440:
    // 0x1ac440: 0x8ce200e4  lw          $v0, 0xE4($a3)
    ctx->pc = 0x1ac440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
label_1ac444:
    // 0x1ac444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ac444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ac448:
    // 0x1ac448: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1ac448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1ac44c:
    // 0x1ac44c: 0xa3302b  sltu        $a2, $a1, $v1
    ctx->pc = 0x1ac44cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ac450:
    // 0x1ac450: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1ac450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ac454:
    // 0x1ac454: 0xa6800b  movn        $s0, $a1, $a2
    ctx->pc = 0x1ac454u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_1ac458:
    // 0x1ac458: 0x40f809  jalr        $v0
label_1ac45c:
    if (ctx->pc == 0x1AC45Cu) {
        ctx->pc = 0x1AC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC458u;
        // 0x1ac45c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC460u;
        goto label_1ac460;
    }
    ctx->pc = 0x1AC458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC460u);
        ctx->pc = 0x1AC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC458u;
        // 0x1ac45c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC458u, 0x1AC460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC460u;
label_1ac460:
    // 0x1ac460: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1ac464:
    if (ctx->pc == 0x1AC464u) {
        ctx->pc = 0x1AC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC460u;
        // 0x1ac464: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC468u;
        goto label_1ac468;
    }
    ctx->pc = 0x1AC460u;
    {
        const bool branch_taken_0x1ac460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac460) {
            ctx->pc = 0x1AC464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC460u;
            // 0x1ac464: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC4D0u;
            goto label_1ac4d0;
        }
    }
    ctx->pc = 0x1AC468u;
label_1ac468:
    // 0x1ac468: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1ac468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ac46c:
    // 0x1ac46c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1ac46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ac470:
    // 0x1ac470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ac474:
    // 0x1ac474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ac474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ac478:
    // 0x1ac478: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ac478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac47c:
    // 0x1ac47c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ac47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac480:
    // 0x1ac480: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1ac484:
    // 0x1ac484: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1ac484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1ac488:
    // 0x1ac488: 0x60f809  jalr        $v1
label_1ac48c:
    if (ctx->pc == 0x1AC48Cu) {
        ctx->pc = 0x1AC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC488u;
        // 0x1ac48c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC490u;
        goto label_1ac490;
    }
    ctx->pc = 0x1AC488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC490u);
        ctx->pc = 0x1AC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC488u;
        // 0x1ac48c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC488u, 0x1AC490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC490u;
label_1ac490:
    // 0x1ac490: 0xae3000c0  sw          $s0, 0xC0($s1)
    ctx->pc = 0x1ac490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 16));
label_1ac494:
    // 0x1ac494: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ac494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ac498:
    // 0x1ac498: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ac498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ac49c:
    // 0x1ac49c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac4a0:
    // 0x1ac4a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ac4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac4a4:
    // 0x1ac4a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac4a8:
    // 0x1ac4a8: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1ac4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1ac4ac:
    // 0x1ac4ac: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1ac4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1ac4b0:
    // 0x1ac4b0: 0x40f809  jalr        $v0
label_1ac4b4:
    if (ctx->pc == 0x1AC4B4u) {
        ctx->pc = 0x1AC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4B0u;
        // 0x1ac4b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4B8u;
        goto label_1ac4b8;
    }
    ctx->pc = 0x1AC4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC4B8u);
        ctx->pc = 0x1AC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4B0u;
        // 0x1ac4b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC4B0u, 0x1AC4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC4B8u;
label_1ac4b8:
    // 0x1ac4b8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_1ac4bc:
    if (ctx->pc == 0x1AC4BCu) {
        ctx->pc = 0x1AC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4B8u;
        // 0x1ac4bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4C0u;
        goto label_1ac4c0;
    }
    ctx->pc = 0x1AC4B8u;
    {
        const bool branch_taken_0x1ac4b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4B8u;
        // 0x1ac4bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4b8) {
            ctx->pc = 0x1AC4CCu;
            goto label_1ac4cc;
        }
    }
    ctx->pc = 0x1AC4C0u;
label_1ac4c0:
    // 0x1ac4c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac4c4:
    // 0x1ac4c4: 0xc043f0c  jal         func_10FC30
label_1ac4c8:
    if (ctx->pc == 0x1AC4C8u) {
        ctx->pc = 0x1AC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4C4u;
        // 0x1ac4c8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4CCu;
        goto label_1ac4cc;
    }
    ctx->pc = 0x1AC4C4u;
    SET_GPR_U32(ctx, 31, 0x1AC4CCu);
    ctx->pc = 0x1AC4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4C4u;
    // 0x1ac4c8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1AC4C4u, 0x1AC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4CCu;
label_1ac4cc:
    // 0x1ac4cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ac4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac4d0:
    // 0x1ac4d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ac4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac4d4:
    // 0x1ac4d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ac4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac4d8:
    // 0x1ac4d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ac4d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac4dc:
    // 0x1ac4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac4e0:
    // 0x1ac4e0: 0x3e00008  jr          $ra
label_1ac4e4:
    if (ctx->pc == 0x1AC4E4u) {
        ctx->pc = 0x1AC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4E0u;
        // 0x1ac4e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4E8u;
        goto label_fallthrough_0x1ac4e0;
    }
    ctx->pc = 0x1AC4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4E0u;
        // 0x1ac4e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac4e0:
    ctx->pc = 0x1AC4E8u;
}
