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

// Function: sub_00440410
// Address: 0x440410 - 0x4404e0
void sub_00440410_0x440410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440410_0x440410");
#endif

    switch (ctx->pc) {
        case 0x440410u: goto label_440410;
        case 0x440414u: goto label_440414;
        case 0x440418u: goto label_440418;
        case 0x44041cu: goto label_44041c;
        case 0x440420u: goto label_440420;
        case 0x440424u: goto label_440424;
        case 0x440428u: goto label_440428;
        case 0x44042cu: goto label_44042c;
        case 0x440430u: goto label_440430;
        case 0x440434u: goto label_440434;
        case 0x440438u: goto label_440438;
        case 0x44043cu: goto label_44043c;
        case 0x440440u: goto label_440440;
        case 0x440444u: goto label_440444;
        case 0x440448u: goto label_440448;
        case 0x44044cu: goto label_44044c;
        case 0x440450u: goto label_440450;
        case 0x440454u: goto label_440454;
        case 0x440458u: goto label_440458;
        case 0x44045cu: goto label_44045c;
        case 0x440460u: goto label_440460;
        case 0x440464u: goto label_440464;
        case 0x440468u: goto label_440468;
        case 0x44046cu: goto label_44046c;
        case 0x440470u: goto label_440470;
        case 0x440474u: goto label_440474;
        case 0x440478u: goto label_440478;
        case 0x44047cu: goto label_44047c;
        case 0x440480u: goto label_440480;
        case 0x440484u: goto label_440484;
        case 0x440488u: goto label_440488;
        case 0x44048cu: goto label_44048c;
        case 0x440490u: goto label_440490;
        case 0x440494u: goto label_440494;
        case 0x440498u: goto label_440498;
        case 0x44049cu: goto label_44049c;
        case 0x4404a0u: goto label_4404a0;
        case 0x4404a4u: goto label_4404a4;
        case 0x4404a8u: goto label_4404a8;
        case 0x4404acu: goto label_4404ac;
        case 0x4404b0u: goto label_4404b0;
        case 0x4404b4u: goto label_4404b4;
        case 0x4404b8u: goto label_4404b8;
        case 0x4404bcu: goto label_4404bc;
        case 0x4404c0u: goto label_4404c0;
        case 0x4404c4u: goto label_4404c4;
        case 0x4404c8u: goto label_4404c8;
        case 0x4404ccu: goto label_4404cc;
        case 0x4404d0u: goto label_4404d0;
        case 0x4404d4u: goto label_4404d4;
        case 0x4404d8u: goto label_4404d8;
        case 0x4404dcu: goto label_4404dc;
        default: break;
    }

    ctx->pc = 0x440410u;

label_440410:
    // 0x440410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x440410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_440414:
    // 0x440414: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x440414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_440418:
    // 0x440418: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x440418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_44041c:
    // 0x44041c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x44041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_440420:
    // 0x440420: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x440420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_440424:
    // 0x440424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x440424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_440428:
    // 0x440428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x440428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_44042c:
    // 0x44042c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_440430:
    // 0x440430: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x440430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_440434:
    // 0x440434: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_440438:
    if (ctx->pc == 0x440438u) {
        ctx->pc = 0x440438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440434u;
        // 0x440438: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44043Cu;
        goto label_44043c;
    }
    ctx->pc = 0x440434u;
    {
        const bool branch_taken_0x440434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x440438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440434u;
        // 0x440438: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x440434) {
            ctx->pc = 0x44045Cu;
            goto label_44045c;
        }
    }
    ctx->pc = 0x44043Cu;
label_44043c:
    // 0x44043c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_440440:
    if (ctx->pc == 0x440440u) {
        ctx->pc = 0x440440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44043Cu;
        // 0x440440: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440444u;
        goto label_440444;
    }
    ctx->pc = 0x44043Cu;
    {
        const bool branch_taken_0x44043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x440440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44043Cu;
        // 0x440440: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44043c) {
            ctx->pc = 0x4404A4u;
            goto label_4404a4;
        }
    }
    ctx->pc = 0x440444u;
label_440444:
    // 0x440444: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x440444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_440448:
    // 0x440448: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x440448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_44044c:
    // 0x44044c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_440450:
    if (ctx->pc == 0x440450u) {
        ctx->pc = 0x440454u;
        goto label_440454;
    }
    ctx->pc = 0x44044Cu;
    {
        const bool branch_taken_0x44044c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x44044c) {
            ctx->pc = 0x440494u;
            goto label_440494;
        }
    }
    ctx->pc = 0x440454u;
label_440454:
    // 0x440454: 0x10000014  b           . + 4 + (0x14 << 2)
label_440458:
    if (ctx->pc == 0x440458u) {
        ctx->pc = 0x440458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440454u;
        // 0x440458: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44045Cu;
        goto label_44045c;
    }
    ctx->pc = 0x440454u;
    {
        const bool branch_taken_0x440454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440454u;
        // 0x440458: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440454) {
            ctx->pc = 0x4404A8u;
            goto label_4404a8;
        }
    }
    ctx->pc = 0x44045Cu;
label_44045c:
    // 0x44045c: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x44045cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_440460:
    // 0x440460: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x440460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_440464:
    // 0x440464: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_440468:
    if (ctx->pc == 0x440468u) {
        ctx->pc = 0x440468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440464u;
        // 0x440468: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44046Cu;
        goto label_44046c;
    }
    ctx->pc = 0x440464u;
    {
        const bool branch_taken_0x440464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x440464) {
            ctx->pc = 0x440468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x440464u;
            // 0x440468: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4404A8u;
            goto label_4404a8;
        }
    }
    ctx->pc = 0x44046Cu;
label_44046c:
    // 0x44046c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x44046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_440470:
    // 0x440470: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x440470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_440474:
    // 0x440474: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x440474u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_440478:
    // 0x440478: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x440478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_44047c:
    // 0x44047c: 0x40f809  jalr        $v0
label_440480:
    if (ctx->pc == 0x440480u) {
        ctx->pc = 0x440480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44047Cu;
        // 0x440480: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440484u;
        goto label_440484;
    }
    ctx->pc = 0x44047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x440484u);
        ctx->pc = 0x440480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44047Cu;
        // 0x440480: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44047Cu, 0x440484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x440484u;
label_440484:
    // 0x440484: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x440484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_440488:
    // 0x440488: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x440488u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44048c:
    // 0x44048c: 0x10000005  b           . + 4 + (0x5 << 2)
label_440490:
    if (ctx->pc == 0x440490u) {
        ctx->pc = 0x440490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44048Cu;
        // 0x440490: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x440494u;
        goto label_440494;
    }
    ctx->pc = 0x44048Cu;
    {
        const bool branch_taken_0x44048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44048Cu;
        // 0x440490: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44048c) {
            ctx->pc = 0x4404A4u;
            goto label_4404a4;
        }
    }
    ctx->pc = 0x440494u;
label_440494:
    // 0x440494: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x440494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_440498:
    // 0x440498: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x440498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_44049c:
    // 0x44049c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x44049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4404a0:
    // 0x4404a0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x4404a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_4404a4:
    // 0x4404a4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4404a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4404a8:
    // 0x4404a8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_4404ac:
    if (ctx->pc == 0x4404ACu) {
        ctx->pc = 0x4404B0u;
        goto label_4404b0;
    }
    ctx->pc = 0x4404A8u;
    {
        const bool branch_taken_0x4404a8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4404a8) {
            ctx->pc = 0x4404B8u;
            goto label_4404b8;
        }
    }
    ctx->pc = 0x4404B0u;
label_4404b0:
    // 0x4404b0: 0xc10f434  jal         func_43D0D0
label_4404b4:
    if (ctx->pc == 0x4404B4u) {
        ctx->pc = 0x4404B8u;
        goto label_4404b8;
    }
    ctx->pc = 0x4404B0u;
    SET_GPR_U32(ctx, 31, 0x4404B8u);
    ctx->pc = 0x43D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0D0u, 0x4404B0u, 0x4404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4404B8u;
label_4404b8:
    // 0x4404b8: 0xc1100e0  jal         func_440380
label_4404bc:
    if (ctx->pc == 0x4404BCu) {
        ctx->pc = 0x4404BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404B8u;
        // 0x4404bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4404C0u;
        goto label_4404c0;
    }
    ctx->pc = 0x4404B8u;
    SET_GPR_U32(ctx, 31, 0x4404C0u);
    ctx->pc = 0x4404BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4404B8u;
    // 0x4404bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440380u, 0x4404B8u, 0x4404C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4404C0u;
label_4404c0:
    // 0x4404c0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4404c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4404c4:
    // 0x4404c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4404c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4404c8:
    // 0x4404c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4404c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4404cc:
    // 0x4404cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4404ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4404d0:
    // 0x4404d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4404d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4404d4:
    // 0x4404d4: 0x3e00008  jr          $ra
label_4404d8:
    if (ctx->pc == 0x4404D8u) {
        ctx->pc = 0x4404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404D4u;
        // 0x4404d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4404DCu;
        goto label_4404dc;
    }
    ctx->pc = 0x4404D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4404D4u;
        // 0x4404d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4404D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4404DCu;
label_4404dc:
    // 0x4404dc: 0x0  nop
    ctx->pc = 0x4404dcu;
    // NOP
    ctx->pc = 0x4404e0u;
}
