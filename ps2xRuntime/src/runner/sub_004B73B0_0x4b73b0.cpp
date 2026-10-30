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

// Function: sub_004B73B0
// Address: 0x4b73b0 - 0x4b7528
void sub_004B73B0_0x4b73b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B73B0_0x4b73b0");
#endif

    switch (ctx->pc) {
        case 0x4b73e4u: goto label_4b73e4;
        case 0x4b7414u: goto label_4b7414;
        case 0x4b7490u: goto label_4b7490;
        case 0x4b74b4u: goto label_4b74b4;
        case 0x4b74fcu: goto label_4b74fc;
        default: break;
    }

    ctx->pc = 0x4b73b0u;

    // 0x4b73b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b73b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b73b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b73b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b73b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b73b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b73bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b73bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b73c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b73c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b73c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b73c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b73c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b73c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b73cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4b73ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b73d0: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x4b73d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x4b73d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B73D4u;
    {
        const bool branch_taken_0x4b73d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B73D4u;
        // 0x4b73d8: 0x34a20020  ori         $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b73d4) {
            ctx->pc = 0x4B73F4u;
            goto label_4b73f4;
        }
    }
    ctx->pc = 0x4B73DCu;
    // 0x4b73dc: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B73DCu;
    SET_GPR_U32(ctx, 31, 0x4B73E4u);
    ctx->pc = 0x4B73E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B73DCu;
    // 0x4b73e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B73DCu, 0x4B73E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B73E4u;
label_4b73e4:
    // 0x4b73e4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4b73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4b73e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b73e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b73ec: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x4B73ECu;
    {
        const bool branch_taken_0x4b73ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B73ECu;
        // 0x4b73f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b73ec) {
            ctx->pc = 0x4B750Cu;
            goto label_4b750c;
        }
    }
    ctx->pc = 0x4B73F4u;
label_4b73f4:
    // 0x4b73f4: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x4b73f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x4b73f8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4B73F8u;
    {
        const bool branch_taken_0x4b73f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B73F8u;
        // 0x4b73fc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b73f8) {
            ctx->pc = 0x4B7478u;
            goto label_4b7478;
        }
    }
    ctx->pc = 0x4B7400u;
    // 0x4b7400: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4b7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b7404: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B7404u;
    {
        const bool branch_taken_0x4b7404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b7404) {
            ctx->pc = 0x4B7408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7404u;
            // 0x4b7408: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B742Cu;
            goto label_4b742c;
        }
    }
    ctx->pc = 0x4B740Cu;
    // 0x4b740c: 0xc12c3b4  jal         func_4B0ED0
    ctx->pc = 0x4B740Cu;
    SET_GPR_U32(ctx, 31, 0x4B7414u);
    ctx->pc = 0x4B7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B740Cu;
    // 0x4b7410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0ED0u, 0x4B740Cu, 0x4B7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7414u;
label_4b7414:
    // 0x4b7414: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4b7414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4b7418: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4b7418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b741c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4b741cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4b7420: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4b7420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4b7424: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b7424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4b7428: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4b7428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b742c:
    // 0x4b742c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x4b742cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4b7430: 0x54860006  bnel        $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B7430u;
    {
        const bool branch_taken_0x4b7430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x4b7430) {
            ctx->pc = 0x4B7434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7430u;
            // 0x4b7434: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B744Cu;
            goto label_4b744c;
        }
    }
    ctx->pc = 0x4B7438u;
    // 0x4b7438: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4b7438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4b743c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b743cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4b7440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b7440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7444: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4b7444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4b7448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b7448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b744c:
    // 0x4b744c: 0x30a30202  andi        $v1, $a1, 0x202
    ctx->pc = 0x4b744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)514);
    // 0x4b7450: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x4b7450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x4b7454: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4b7454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4b7458: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x4b7458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x4b745c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4b745cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x4b7460: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B7460u;
    {
        const bool branch_taken_0x4b7460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7460u;
        // 0x4b7464: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7460) {
            ctx->pc = 0x4B746Cu;
            goto label_4b746c;
        }
    }
    ctx->pc = 0x4B7468u;
    // 0x4b7468: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x4b7468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_4b746c:
    // 0x4b746c: 0x34a20800  ori         $v0, $a1, 0x800
    ctx->pc = 0x4b746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x4b7470: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b7470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b7474: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4b7474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b7478:
    // 0x4b7478: 0x16320007  bne         $s1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B7478u;
    {
        const bool branch_taken_0x4b7478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x4B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7478u;
        // 0x4b747c: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7478) {
            ctx->pc = 0x4B7498u;
            goto label_4b7498;
        }
    }
    ctx->pc = 0x4B7480u;
    // 0x4b7480: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b7480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b7484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b7484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7488: 0xc12dc58  jal         func_4B7160
    ctx->pc = 0x4B7488u;
    SET_GPR_U32(ctx, 31, 0x4B7490u);
    ctx->pc = 0x4B748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7488u;
    // 0x4b748c: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B7488u, 0x4B7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7490u;
label_4b7490:
    // 0x4b7490: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4B7490u;
    {
        const bool branch_taken_0x4b7490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7490u;
        // 0x4b7494: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7490) {
            ctx->pc = 0x4B7510u;
            goto label_4b7510;
        }
    }
    ctx->pc = 0x4B7498u;
label_4b7498:
    // 0x4b7498: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4b7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4b749c: 0x54c20009  bnel        $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B749Cu;
    {
        const bool branch_taken_0x4b749c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b749c) {
            ctx->pc = 0x4B74A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B749Cu;
            // 0x4b74a0: 0xa0d10000  sb          $s1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B74C4u;
            goto label_4b74c4;
        }
    }
    ctx->pc = 0x4B74A4u;
    // 0x4b74a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b74a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b74a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b74ac: 0xc12dc58  jal         func_4B7160
    ctx->pc = 0x4B74ACu;
    SET_GPR_U32(ctx, 31, 0x4B74B4u);
    ctx->pc = 0x4B74B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B74ACu;
    // 0x4b74b0: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B74ACu, 0x4B74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B74B4u;
label_4b74b4:
    // 0x4b74b4: 0x10520015  beq         $v0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B74B4u;
    {
        const bool branch_taken_0x4b74b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x4B74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B74B4u;
        // 0x4b74b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b74b4) {
            ctx->pc = 0x4B750Cu;
            goto label_4b750c;
        }
    }
    ctx->pc = 0x4B74BCu;
    // 0x4b74bc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4b74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4b74c0: 0xa0d10000  sb          $s1, 0x0($a2)
    ctx->pc = 0x4b74c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 17));
label_4b74c4:
    // 0x4b74c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4b74c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4b74c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b74c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b74cc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4b74ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x4b74d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B74D0u;
    {
        const bool branch_taken_0x4b74d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B74D0u;
        // 0x4b74d4: 0xae060014  sw          $a2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b74d0) {
            ctx->pc = 0x4B74ECu;
            goto label_4b74ec;
        }
    }
    ctx->pc = 0x4B74D8u;
    // 0x4b74d8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x4b74d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x4b74dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B74DCu;
    {
        const bool branch_taken_0x4b74dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B74DCu;
        // 0x4b74e0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b74dc) {
            ctx->pc = 0x4B7508u;
            goto label_4b7508;
        }
    }
    ctx->pc = 0x4B74E4u;
    // 0x4b74e4: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B74E4u;
    {
        const bool branch_taken_0x4b74e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B74E4u;
        // 0x4b74e8: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b74e4) {
            ctx->pc = 0x4B750Cu;
            goto label_4b750c;
        }
    }
    ctx->pc = 0x4B74ECu;
label_4b74ec:
    // 0x4b74ec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b74f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b74f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b74f4: 0xc12dc58  jal         func_4B7160
    ctx->pc = 0x4B74F4u;
    SET_GPR_U32(ctx, 31, 0x4B74FCu);
    ctx->pc = 0x4B74F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B74F4u;
    // 0x4b74f8: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B74F4u, 0x4B74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B74FCu;
label_4b74fc:
    // 0x4b74fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b7500: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B7500u;
    {
        const bool branch_taken_0x4b7500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7500u;
        // 0x4b7504: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7500) {
            ctx->pc = 0x4B750Cu;
            goto label_4b750c;
        }
    }
    ctx->pc = 0x4B7508u;
label_4b7508:
    // 0x4b7508: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x4b7508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4b750c:
    // 0x4b750c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b750cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b7510:
    // 0x4b7510: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b7510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b7514: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b7514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b751c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B751Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B751Cu;
        // 0x4b7520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B751Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7524u;
    // 0x4b7524: 0x0  nop
    ctx->pc = 0x4b7524u;
    // NOP
    ctx->pc = 0x4b7528u;
}
