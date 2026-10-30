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

// Function: sub_003E7378
// Address: 0x3e7378 - 0x3e74a8
void sub_003E7378_0x3e7378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7378_0x3e7378");
#endif

    switch (ctx->pc) {
        case 0x3e7378u: goto label_3e7378;
        case 0x3e737cu: goto label_3e737c;
        case 0x3e7380u: goto label_3e7380;
        case 0x3e7384u: goto label_3e7384;
        case 0x3e7388u: goto label_3e7388;
        case 0x3e738cu: goto label_3e738c;
        case 0x3e7390u: goto label_3e7390;
        case 0x3e7394u: goto label_3e7394;
        case 0x3e7398u: goto label_3e7398;
        case 0x3e739cu: goto label_3e739c;
        case 0x3e73a0u: goto label_3e73a0;
        case 0x3e73a4u: goto label_3e73a4;
        case 0x3e73a8u: goto label_3e73a8;
        case 0x3e73acu: goto label_3e73ac;
        case 0x3e73b0u: goto label_3e73b0;
        case 0x3e73b4u: goto label_3e73b4;
        case 0x3e73b8u: goto label_3e73b8;
        case 0x3e73bcu: goto label_3e73bc;
        case 0x3e73c0u: goto label_3e73c0;
        case 0x3e73c4u: goto label_3e73c4;
        case 0x3e73c8u: goto label_3e73c8;
        case 0x3e73ccu: goto label_3e73cc;
        case 0x3e73d0u: goto label_3e73d0;
        case 0x3e73d4u: goto label_3e73d4;
        case 0x3e73d8u: goto label_3e73d8;
        case 0x3e73dcu: goto label_3e73dc;
        case 0x3e73e0u: goto label_3e73e0;
        case 0x3e73e4u: goto label_3e73e4;
        case 0x3e73e8u: goto label_3e73e8;
        case 0x3e73ecu: goto label_3e73ec;
        case 0x3e73f0u: goto label_3e73f0;
        case 0x3e73f4u: goto label_3e73f4;
        case 0x3e73f8u: goto label_3e73f8;
        case 0x3e73fcu: goto label_3e73fc;
        case 0x3e7400u: goto label_3e7400;
        case 0x3e7404u: goto label_3e7404;
        case 0x3e7408u: goto label_3e7408;
        case 0x3e740cu: goto label_3e740c;
        case 0x3e7410u: goto label_3e7410;
        case 0x3e7414u: goto label_3e7414;
        case 0x3e7418u: goto label_3e7418;
        case 0x3e741cu: goto label_3e741c;
        case 0x3e7420u: goto label_3e7420;
        case 0x3e7424u: goto label_3e7424;
        case 0x3e7428u: goto label_3e7428;
        case 0x3e742cu: goto label_3e742c;
        case 0x3e7430u: goto label_3e7430;
        case 0x3e7434u: goto label_3e7434;
        case 0x3e7438u: goto label_3e7438;
        case 0x3e743cu: goto label_3e743c;
        case 0x3e7440u: goto label_3e7440;
        case 0x3e7444u: goto label_3e7444;
        case 0x3e7448u: goto label_3e7448;
        case 0x3e744cu: goto label_3e744c;
        case 0x3e7450u: goto label_3e7450;
        case 0x3e7454u: goto label_3e7454;
        case 0x3e7458u: goto label_3e7458;
        case 0x3e745cu: goto label_3e745c;
        case 0x3e7460u: goto label_3e7460;
        case 0x3e7464u: goto label_3e7464;
        case 0x3e7468u: goto label_3e7468;
        case 0x3e746cu: goto label_3e746c;
        case 0x3e7470u: goto label_3e7470;
        case 0x3e7474u: goto label_3e7474;
        case 0x3e7478u: goto label_3e7478;
        case 0x3e747cu: goto label_3e747c;
        case 0x3e7480u: goto label_3e7480;
        case 0x3e7484u: goto label_3e7484;
        case 0x3e7488u: goto label_3e7488;
        case 0x3e748cu: goto label_3e748c;
        case 0x3e7490u: goto label_3e7490;
        case 0x3e7494u: goto label_3e7494;
        case 0x3e7498u: goto label_3e7498;
        case 0x3e749cu: goto label_3e749c;
        case 0x3e74a0u: goto label_3e74a0;
        case 0x3e74a4u: goto label_3e74a4;
        default: break;
    }

    ctx->pc = 0x3e7378u;

label_3e7378:
    // 0x3e7378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e7378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e737c:
    // 0x3e737c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3e7380:
    // 0x3e7380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e7384:
    // 0x3e7384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e7388:
    // 0x3e7388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e7388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e738c:
    // 0x3e738c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e7390:
    // 0x3e7390: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e7390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e7394:
    // 0x3e7394: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e7394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e7398:
    // 0x3e7398: 0x40f809  jalr        $v0
label_3e739c:
    if (ctx->pc == 0x3E739Cu) {
        ctx->pc = 0x3E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7398u;
        // 0x3e739c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E73A0u;
        goto label_3e73a0;
    }
    ctx->pc = 0x3E7398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E73A0u);
        ctx->pc = 0x3E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7398u;
        // 0x3e739c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7398u, 0x3E73A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E73A0u;
label_3e73a0:
    // 0x3e73a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e73a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e73a4:
    // 0x3e73a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e73a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e73a8:
    // 0x3e73a8: 0xc0f9b6e  jal         func_3E6DB8
label_3e73ac:
    if (ctx->pc == 0x3E73ACu) {
        ctx->pc = 0x3E73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E73A8u;
        // 0x3e73ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E73B0u;
        goto label_3e73b0;
    }
    ctx->pc = 0x3E73A8u;
    SET_GPR_U32(ctx, 31, 0x3E73B0u);
    ctx->pc = 0x3E73ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E73A8u;
    // 0x3e73ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6DB8u, 0x3E73A8u, 0x3E73B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E73B0u;
label_3e73b0:
    // 0x3e73b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e73b4:
    // 0x3e73b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e73b8:
    if (ctx->pc == 0x3E73B8u) {
        ctx->pc = 0x3E73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E73B4u;
        // 0x3e73b8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E73BCu;
        goto label_3e73bc;
    }
    ctx->pc = 0x3E73B4u;
    {
        const bool branch_taken_0x3e73b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e73b4) {
            ctx->pc = 0x3E73B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E73B4u;
            // 0x3e73b8: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E73D4u;
            goto label_3e73d4;
        }
    }
    ctx->pc = 0x3E73BCu;
label_3e73bc:
    // 0x3e73bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e73c0:
    // 0x3e73c0: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e73c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3e73c4:
    // 0x3e73c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e73c8:
    // 0x3e73c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e73cc:
    // 0x3e73cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e73d0:
    // 0x3e73d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e73d4:
    // 0x3e73d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e73d8:
    // 0x3e73d8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e73dc:
    if (ctx->pc == 0x3E73DCu) {
        ctx->pc = 0x3E73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E73D8u;
        // 0x3e73dc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E73E0u;
        goto label_3e73e0;
    }
    ctx->pc = 0x3E73D8u;
    {
        const bool branch_taken_0x3e73d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e73d8) {
            ctx->pc = 0x3E73DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E73D8u;
            // 0x3e73dc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E73ECu;
            goto label_3e73ec;
        }
    }
    ctx->pc = 0x3E73E0u;
label_3e73e0:
    // 0x3e73e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e73e4:
    // 0x3e73e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e73e8:
    // 0x3e73e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e73ec:
    // 0x3e73ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3e73ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e73f0:
    // 0x3e73f0: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
label_3e73f4:
    if (ctx->pc == 0x3E73F4u) {
        ctx->pc = 0x3E73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E73F0u;
        // 0x3e73f4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E73F8u;
        goto label_3e73f8;
    }
    ctx->pc = 0x3E73F0u;
    {
        const bool branch_taken_0x3e73f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e73f0) {
            ctx->pc = 0x3E73F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E73F0u;
            // 0x3e73f4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7418u;
            goto label_3e7418;
        }
    }
    ctx->pc = 0x3E73F8u;
label_3e73f8:
    // 0x3e73f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e73f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e73fc:
    // 0x3e73fc: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3e73fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e7400:
    // 0x3e7400: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3e7400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3e7404:
    // 0x3e7404: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3e7404u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3e7408:
    // 0x3e7408: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e740c:
    // 0x3e740c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e7410:
    // 0x3e7410: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3e7410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3e7414:
    // 0x3e7414: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e7414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e7418:
    // 0x3e7418: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e7418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e741c:
    // 0x3e741c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e7420:
    if (ctx->pc == 0x3E7420u) {
        ctx->pc = 0x3E7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E741Cu;
        // 0x3e7420: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7424u;
        goto label_3e7424;
    }
    ctx->pc = 0x3E741Cu;
    {
        const bool branch_taken_0x3e741c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e741c) {
            ctx->pc = 0x3E7420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E741Cu;
            // 0x3e7420: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7430u;
            goto label_3e7430;
        }
    }
    ctx->pc = 0x3E7424u;
label_3e7424:
    // 0x3e7424: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e7424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e7428:
    // 0x3e7428: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e7428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e742c:
    // 0x3e742c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e7430:
    // 0x3e7430: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e7434:
    // 0x3e7434: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3e7438:
    if (ctx->pc == 0x3E7438u) {
        ctx->pc = 0x3E7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7434u;
        // 0x3e7438: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E743Cu;
        goto label_3e743c;
    }
    ctx->pc = 0x3E7434u;
    {
        const bool branch_taken_0x3e7434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7434) {
            ctx->pc = 0x3E7438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7434u;
            // 0x3e7438: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7448u;
            goto label_3e7448;
        }
    }
    ctx->pc = 0x3E743Cu;
label_3e743c:
    // 0x3e743c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3e743cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3e7440:
    // 0x3e7440: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e7440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_3e7444:
    // 0x3e7444: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3e7444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e7448:
    // 0x3e7448: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3e7448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e744c:
    // 0x3e744c: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_3e7450:
    if (ctx->pc == 0x3E7450u) {
        ctx->pc = 0x3E7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E744Cu;
        // 0x3e7450: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7454u;
        goto label_3e7454;
    }
    ctx->pc = 0x3E744Cu;
    {
        const bool branch_taken_0x3e744c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e744c) {
            ctx->pc = 0x3E7450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E744Cu;
            // 0x3e7450: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7494u;
            goto label_3e7494;
        }
    }
    ctx->pc = 0x3E7454u;
label_3e7454:
    // 0x3e7454: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7458:
    // 0x3e7458: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x3e7458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e745c:
    // 0x3e745c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7460:
    // 0x3e7460: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e7460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e7464:
    // 0x3e7464: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x3e7464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3e7468:
    // 0x3e7468: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3e7468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e746c:
    // 0x3e746c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e7470:
    // 0x3e7470: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3e7470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3e7474:
    // 0x3e7474: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3e7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e7478:
    // 0x3e7478: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3e7478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_3e747c:
    // 0x3e747c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3e747cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3e7480:
    // 0x3e7480: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e7484:
    // 0x3e7484: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3e7484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_3e7488:
    // 0x3e7488: 0xc0e858c  jal         func_3A1630
label_3e748c:
    if (ctx->pc == 0x3E748Cu) {
        ctx->pc = 0x3E748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7488u;
        // 0x3e748c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7490u;
        goto label_3e7490;
    }
    ctx->pc = 0x3E7488u;
    SET_GPR_U32(ctx, 31, 0x3E7490u);
    ctx->pc = 0x3E748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7488u;
    // 0x3e748c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E7488u, 0x3E7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7490u;
label_3e7490:
    // 0x3e7490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e7490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e7494:
    // 0x3e7494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e7494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e7498:
    // 0x3e7498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e749c:
    // 0x3e749c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e749cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e74a0:
    // 0x3e74a0: 0x3e00008  jr          $ra
label_3e74a4:
    if (ctx->pc == 0x3E74A4u) {
        ctx->pc = 0x3E74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E74A0u;
        // 0x3e74a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E74A8u;
        goto label_fallthrough_0x3e74a0;
    }
    ctx->pc = 0x3E74A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E74A0u;
        // 0x3e74a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E74A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e74a0:
    ctx->pc = 0x3E74A8u;
}
