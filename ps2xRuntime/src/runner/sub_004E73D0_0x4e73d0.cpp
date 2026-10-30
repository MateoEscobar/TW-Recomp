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

// Function: sub_004E73D0
// Address: 0x4e73d0 - 0x4e7498
void sub_004E73D0_0x4e73d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E73D0_0x4e73d0");
#endif

    switch (ctx->pc) {
        case 0x4e73d0u: goto label_4e73d0;
        case 0x4e73d4u: goto label_4e73d4;
        case 0x4e73d8u: goto label_4e73d8;
        case 0x4e73dcu: goto label_4e73dc;
        case 0x4e73e0u: goto label_4e73e0;
        case 0x4e73e4u: goto label_4e73e4;
        case 0x4e73e8u: goto label_4e73e8;
        case 0x4e73ecu: goto label_4e73ec;
        case 0x4e73f0u: goto label_4e73f0;
        case 0x4e73f4u: goto label_4e73f4;
        case 0x4e73f8u: goto label_4e73f8;
        case 0x4e73fcu: goto label_4e73fc;
        case 0x4e7400u: goto label_4e7400;
        case 0x4e7404u: goto label_4e7404;
        case 0x4e7408u: goto label_4e7408;
        case 0x4e740cu: goto label_4e740c;
        case 0x4e7410u: goto label_4e7410;
        case 0x4e7414u: goto label_4e7414;
        case 0x4e7418u: goto label_4e7418;
        case 0x4e741cu: goto label_4e741c;
        case 0x4e7420u: goto label_4e7420;
        case 0x4e7424u: goto label_4e7424;
        case 0x4e7428u: goto label_4e7428;
        case 0x4e742cu: goto label_4e742c;
        case 0x4e7430u: goto label_4e7430;
        case 0x4e7434u: goto label_4e7434;
        case 0x4e7438u: goto label_4e7438;
        case 0x4e743cu: goto label_4e743c;
        case 0x4e7440u: goto label_4e7440;
        case 0x4e7444u: goto label_4e7444;
        case 0x4e7448u: goto label_4e7448;
        case 0x4e744cu: goto label_4e744c;
        case 0x4e7450u: goto label_4e7450;
        case 0x4e7454u: goto label_4e7454;
        case 0x4e7458u: goto label_4e7458;
        case 0x4e745cu: goto label_4e745c;
        case 0x4e7460u: goto label_4e7460;
        case 0x4e7464u: goto label_4e7464;
        case 0x4e7468u: goto label_4e7468;
        case 0x4e746cu: goto label_4e746c;
        case 0x4e7470u: goto label_4e7470;
        case 0x4e7474u: goto label_4e7474;
        case 0x4e7478u: goto label_4e7478;
        case 0x4e747cu: goto label_4e747c;
        case 0x4e7480u: goto label_4e7480;
        case 0x4e7484u: goto label_4e7484;
        case 0x4e7488u: goto label_4e7488;
        case 0x4e748cu: goto label_4e748c;
        case 0x4e7490u: goto label_4e7490;
        case 0x4e7494u: goto label_4e7494;
        default: break;
    }

    ctx->pc = 0x4e73d0u;

label_4e73d0:
    // 0x4e73d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e73d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e73d4:
    // 0x4e73d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e73d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e73d8:
    // 0x4e73d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e73dc:
    // 0x4e73dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e73dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e73e0:
    // 0x4e73e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e73e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e73e4:
    // 0x4e73e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e73e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e73e8:
    // 0x4e73e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e73e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e73ec:
    // 0x4e73ec: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4e73f0:
    if (ctx->pc == 0x4E73F0u) {
        ctx->pc = 0x4E73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E73ECu;
        // 0x4e73f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E73F4u;
        goto label_4e73f4;
    }
    ctx->pc = 0x4E73ECu;
    {
        const bool branch_taken_0x4e73ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E73ECu;
        // 0x4e73f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e73ec) {
            ctx->pc = 0x4E7480u;
            goto label_4e7480;
        }
    }
    ctx->pc = 0x4E73F4u;
label_4e73f4:
    // 0x4e73f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4e73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e73f8:
    // 0x4e73f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4e73fc:
    if (ctx->pc == 0x4E73FCu) {
        ctx->pc = 0x4E73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E73F8u;
        // 0x4e73fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7400u;
        goto label_4e7400;
    }
    ctx->pc = 0x4E73F8u;
    {
        const bool branch_taken_0x4e73f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e73f8) {
            ctx->pc = 0x4E73FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E73F8u;
            // 0x4e73fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E742Cu;
            goto label_4e742c;
        }
    }
    ctx->pc = 0x4E7400u;
label_4e7400:
    // 0x4e7400: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4e7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e7404:
    // 0x4e7404: 0xc139a92  jal         func_4E6A48
label_4e7408:
    if (ctx->pc == 0x4E7408u) {
        ctx->pc = 0x4E7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7404u;
        // 0x4e7408: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E740Cu;
        goto label_4e740c;
    }
    ctx->pc = 0x4E7404u;
    SET_GPR_U32(ctx, 31, 0x4E740Cu);
    ctx->pc = 0x4E7408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E7404u;
    // 0x4e7408: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6A48u, 0x4E7404u, 0x4E740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E740Cu;
label_4e740c:
    // 0x4e740c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4e740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e7410:
    // 0x4e7410: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x4e7410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_4e7414:
    // 0x4e7414: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4e7414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e7418:
    // 0x4e7418: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4e7418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4e741c:
    // 0x4e741c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4e741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e7420:
    // 0x4e7420: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x4e7420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_4e7424:
    // 0x4e7424: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4e7424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4e7428:
    // 0x4e7428: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e7428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e742c:
    // 0x4e742c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e7430:
    if (ctx->pc == 0x4E7430u) {
        ctx->pc = 0x4E7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E742Cu;
        // 0x4e7430: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7434u;
        goto label_4e7434;
    }
    ctx->pc = 0x4E742Cu;
    {
        const bool branch_taken_0x4e742c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E742Cu;
        // 0x4e7430: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e742c) {
            ctx->pc = 0x4E7458u;
            goto label_4e7458;
        }
    }
    ctx->pc = 0x4E7434u;
label_4e7434:
    // 0x4e7434: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e7434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e7438:
    // 0x4e7438: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e7438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e743c:
    // 0x4e743c: 0x24c653e8  addiu       $a2, $a2, 0x53E8
    ctx->pc = 0x4e743cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21480));
label_4e7440:
    // 0x4e7440: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e7440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e7444:
    // 0x4e7444: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7448:
    // 0x4e7448: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e744c:
    // 0x4e744c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7450:
    // 0x4e7450: 0x60f809  jalr        $v1
label_4e7454:
    if (ctx->pc == 0x4E7454u) {
        ctx->pc = 0x4E7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7450u;
        // 0x4e7454: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7458u;
        goto label_4e7458;
    }
    ctx->pc = 0x4E7450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7458u);
        ctx->pc = 0x4E7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7450u;
        // 0x4e7454: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7450u, 0x4E7458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7458u;
label_4e7458:
    // 0x4e7458: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e7458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e745c:
    // 0x4e745c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e745cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7460:
    // 0x4e7460: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e7460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e7464:
    // 0x4e7464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e7464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e7468:
    // 0x4e7468: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e7468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e746c:
    // 0x4e746c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7470:
    // 0x4e7470: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7474:
    // 0x4e7474: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7478:
    // 0x4e7478: 0x60f809  jalr        $v1
label_4e747c:
    if (ctx->pc == 0x4E747Cu) {
        ctx->pc = 0x4E747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7478u;
        // 0x4e747c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7480u;
        goto label_4e7480;
    }
    ctx->pc = 0x4E7478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7480u);
        ctx->pc = 0x4E747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7478u;
        // 0x4e747c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7478u, 0x4E7480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7480u;
label_4e7480:
    // 0x4e7480: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e7480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7484:
    // 0x4e7484: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e7484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7488:
    // 0x4e7488: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e7488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e748c:
    // 0x4e748c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e748cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7490:
    // 0x4e7490: 0x3e00008  jr          $ra
label_4e7494:
    if (ctx->pc == 0x4E7494u) {
        ctx->pc = 0x4E7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7490u;
        // 0x4e7494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7498u;
        goto label_fallthrough_0x4e7490;
    }
    ctx->pc = 0x4E7490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7490u;
        // 0x4e7494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e7490:
    ctx->pc = 0x4E7498u;
}
