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

// Function: sub_003F7378
// Address: 0x3f7378 - 0x3f74f8
void sub_003F7378_0x3f7378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7378_0x3f7378");
#endif

    switch (ctx->pc) {
        case 0x3f7378u: goto label_3f7378;
        case 0x3f737cu: goto label_3f737c;
        case 0x3f7380u: goto label_3f7380;
        case 0x3f7384u: goto label_3f7384;
        case 0x3f7388u: goto label_3f7388;
        case 0x3f738cu: goto label_3f738c;
        case 0x3f7390u: goto label_3f7390;
        case 0x3f7394u: goto label_3f7394;
        case 0x3f7398u: goto label_3f7398;
        case 0x3f739cu: goto label_3f739c;
        case 0x3f73a0u: goto label_3f73a0;
        case 0x3f73a4u: goto label_3f73a4;
        case 0x3f73a8u: goto label_3f73a8;
        case 0x3f73acu: goto label_3f73ac;
        case 0x3f73b0u: goto label_3f73b0;
        case 0x3f73b4u: goto label_3f73b4;
        case 0x3f73b8u: goto label_3f73b8;
        case 0x3f73bcu: goto label_3f73bc;
        case 0x3f73c0u: goto label_3f73c0;
        case 0x3f73c4u: goto label_3f73c4;
        case 0x3f73c8u: goto label_3f73c8;
        case 0x3f73ccu: goto label_3f73cc;
        case 0x3f73d0u: goto label_3f73d0;
        case 0x3f73d4u: goto label_3f73d4;
        case 0x3f73d8u: goto label_3f73d8;
        case 0x3f73dcu: goto label_3f73dc;
        case 0x3f73e0u: goto label_3f73e0;
        case 0x3f73e4u: goto label_3f73e4;
        case 0x3f73e8u: goto label_3f73e8;
        case 0x3f73ecu: goto label_3f73ec;
        case 0x3f73f0u: goto label_3f73f0;
        case 0x3f73f4u: goto label_3f73f4;
        case 0x3f73f8u: goto label_3f73f8;
        case 0x3f73fcu: goto label_3f73fc;
        case 0x3f7400u: goto label_3f7400;
        case 0x3f7404u: goto label_3f7404;
        case 0x3f7408u: goto label_3f7408;
        case 0x3f740cu: goto label_3f740c;
        case 0x3f7410u: goto label_3f7410;
        case 0x3f7414u: goto label_3f7414;
        case 0x3f7418u: goto label_3f7418;
        case 0x3f741cu: goto label_3f741c;
        case 0x3f7420u: goto label_3f7420;
        case 0x3f7424u: goto label_3f7424;
        case 0x3f7428u: goto label_3f7428;
        case 0x3f742cu: goto label_3f742c;
        case 0x3f7430u: goto label_3f7430;
        case 0x3f7434u: goto label_3f7434;
        case 0x3f7438u: goto label_3f7438;
        case 0x3f743cu: goto label_3f743c;
        case 0x3f7440u: goto label_3f7440;
        case 0x3f7444u: goto label_3f7444;
        case 0x3f7448u: goto label_3f7448;
        case 0x3f744cu: goto label_3f744c;
        case 0x3f7450u: goto label_3f7450;
        case 0x3f7454u: goto label_3f7454;
        case 0x3f7458u: goto label_3f7458;
        case 0x3f745cu: goto label_3f745c;
        case 0x3f7460u: goto label_3f7460;
        case 0x3f7464u: goto label_3f7464;
        case 0x3f7468u: goto label_3f7468;
        case 0x3f746cu: goto label_3f746c;
        case 0x3f7470u: goto label_3f7470;
        case 0x3f7474u: goto label_3f7474;
        case 0x3f7478u: goto label_3f7478;
        case 0x3f747cu: goto label_3f747c;
        case 0x3f7480u: goto label_3f7480;
        case 0x3f7484u: goto label_3f7484;
        case 0x3f7488u: goto label_3f7488;
        case 0x3f748cu: goto label_3f748c;
        case 0x3f7490u: goto label_3f7490;
        case 0x3f7494u: goto label_3f7494;
        case 0x3f7498u: goto label_3f7498;
        case 0x3f749cu: goto label_3f749c;
        case 0x3f74a0u: goto label_3f74a0;
        case 0x3f74a4u: goto label_3f74a4;
        case 0x3f74a8u: goto label_3f74a8;
        case 0x3f74acu: goto label_3f74ac;
        case 0x3f74b0u: goto label_3f74b0;
        case 0x3f74b4u: goto label_3f74b4;
        case 0x3f74b8u: goto label_3f74b8;
        case 0x3f74bcu: goto label_3f74bc;
        case 0x3f74c0u: goto label_3f74c0;
        case 0x3f74c4u: goto label_3f74c4;
        case 0x3f74c8u: goto label_3f74c8;
        case 0x3f74ccu: goto label_3f74cc;
        case 0x3f74d0u: goto label_3f74d0;
        case 0x3f74d4u: goto label_3f74d4;
        case 0x3f74d8u: goto label_3f74d8;
        case 0x3f74dcu: goto label_3f74dc;
        case 0x3f74e0u: goto label_3f74e0;
        case 0x3f74e4u: goto label_3f74e4;
        case 0x3f74e8u: goto label_3f74e8;
        case 0x3f74ecu: goto label_3f74ec;
        case 0x3f74f0u: goto label_3f74f0;
        case 0x3f74f4u: goto label_3f74f4;
        default: break;
    }

    ctx->pc = 0x3f7378u;

label_3f7378:
    // 0x3f7378: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3f7378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3f737c:
    // 0x3f737c: 0x7fb008f0  sq          $s0, 0x8F0($sp)
    ctx->pc = 0x3f737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 16));
label_3f7380:
    // 0x3f7380: 0x7fb208d0  sq          $s2, 0x8D0($sp)
    ctx->pc = 0x3f7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 18));
label_3f7384:
    // 0x3f7384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f7384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7388:
    // 0x3f7388: 0x7fb408b0  sq          $s4, 0x8B0($sp)
    ctx->pc = 0x3f7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 20));
label_3f738c:
    // 0x3f738c: 0x7fb108e0  sq          $s1, 0x8E0($sp)
    ctx->pc = 0x3f738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 17));
label_3f7390:
    // 0x3f7390: 0x7fb308c0  sq          $s3, 0x8C0($sp)
    ctx->pc = 0x3f7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 19));
label_3f7394:
    // 0x3f7394: 0xffbf08a0  sd          $ra, 0x8A0($sp)
    ctx->pc = 0x3f7394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 31));
label_3f7398:
    // 0x3f7398: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f7398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f739c:
    // 0x3f739c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f739cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f73a0:
    // 0x3f73a0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f73a4:
    // 0x3f73a4: 0x40f809  jalr        $v0
label_3f73a8:
    if (ctx->pc == 0x3F73A8u) {
        ctx->pc = 0x3F73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73A4u;
        // 0x3f73a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F73ACu;
        goto label_3f73ac;
    }
    ctx->pc = 0x3F73A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F73ACu);
        ctx->pc = 0x3F73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73A4u;
        // 0x3f73a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F73A4u, 0x3F73ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F73ACu;
label_3f73ac:
    // 0x3f73ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f73acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f73b0:
    // 0x3f73b0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3f73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3f73b4:
    // 0x3f73b4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3f73b8:
    if (ctx->pc == 0x3F73B8u) {
        ctx->pc = 0x3F73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73B4u;
        // 0x3f73b8: 0x8e540020  lw          $s4, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F73BCu;
        goto label_3f73bc;
    }
    ctx->pc = 0x3F73B4u;
    {
        const bool branch_taken_0x3f73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73B4u;
        // 0x3f73b8: 0x8e540020  lw          $s4, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f73b4) {
            ctx->pc = 0x3F74D4u;
            goto label_3f74d4;
        }
    }
    ctx->pc = 0x3F73BCu;
label_3f73bc:
    // 0x3f73bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f73bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f73c0:
    // 0x3f73c0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3f73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3f73c4:
    // 0x3f73c4: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3f73c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3f73c8:
    // 0x3f73c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f73c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f73cc:
    // 0x3f73cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f73d0:
    // 0x3f73d0: 0x0  nop
    ctx->pc = 0x3f73d0u;
    // NOP
label_3f73d4:
    // 0x3f73d4: 0x0  nop
    ctx->pc = 0x3f73d4u;
    // NOP
label_3f73d8:
    // 0x3f73d8: 0x0  nop
    ctx->pc = 0x3f73d8u;
    // NOP
label_3f73dc:
    // 0x3f73dc: 0x0  nop
    ctx->pc = 0x3f73dcu;
    // NOP
label_3f73e0:
    // 0x3f73e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3f73e4:
    if (ctx->pc == 0x3F73E4u) {
        ctx->pc = 0x3F73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73E0u;
        // 0x3f73e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F73E8u;
        goto label_3f73e8;
    }
    ctx->pc = 0x3F73E0u;
    {
        const bool branch_taken_0x3f73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73E0u;
        // 0x3f73e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f73e0) {
            ctx->pc = 0x3F73D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f73d0;
        }
    }
    ctx->pc = 0x3F73E8u;
label_3f73e8:
    // 0x3f73e8: 0xc138ddc  jal         func_4E3770
label_3f73ec:
    if (ctx->pc == 0x3F73ECu) {
        ctx->pc = 0x3F73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73E8u;
        // 0x3f73ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F73F0u;
        goto label_3f73f0;
    }
    ctx->pc = 0x3F73E8u;
    SET_GPR_U32(ctx, 31, 0x3F73F0u);
    ctx->pc = 0x3F73ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F73E8u;
    // 0x3f73ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3F73E8u, 0x3F73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F73F0u;
label_3f73f0:
    // 0x3f73f0: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f73f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f73f4:
    // 0x3f73f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f73f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f73f8:
    // 0x3f73f8: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x3f73f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
label_3f73fc:
    // 0x3f73fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f73fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7400:
    // 0x3f7400: 0xc0e94a0  jal         func_3A5280
label_3f7404:
    if (ctx->pc == 0x3F7404u) {
        ctx->pc = 0x3F7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7400u;
        // 0x3f7404: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7408u;
        goto label_3f7408;
    }
    ctx->pc = 0x3F7400u;
    SET_GPR_U32(ctx, 31, 0x3F7408u);
    ctx->pc = 0x3F7404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7400u;
    // 0x3f7404: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F7400u, 0x3F7408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7408u;
label_3f7408:
    // 0x3f7408: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3f740c:
    if (ctx->pc == 0x3F740Cu) {
        ctx->pc = 0x3F7410u;
        goto label_3f7410;
    }
    ctx->pc = 0x3F7408u;
    {
        const bool branch_taken_0x3f7408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7408) {
            ctx->pc = 0x3F7434u;
            goto label_3f7434;
        }
    }
    ctx->pc = 0x3F7410u;
label_3f7410:
    // 0x3f7410: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3f7410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3f7414:
    // 0x3f7414: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f7414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7418:
    // 0x3f7418: 0xc0e947e  jal         func_3A51F8
label_3f741c:
    if (ctx->pc == 0x3F741Cu) {
        ctx->pc = 0x3F741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7418u;
        // 0x3f741c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7420u;
        goto label_3f7420;
    }
    ctx->pc = 0x3F7418u;
    SET_GPR_U32(ctx, 31, 0x3F7420u);
    ctx->pc = 0x3F741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7418u;
    // 0x3f741c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3F7418u, 0x3F7420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7420u;
label_3f7420:
    // 0x3f7420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f7424:
    if (ctx->pc == 0x3F7424u) {
        ctx->pc = 0x3F7428u;
        goto label_3f7428;
    }
    ctx->pc = 0x3F7420u;
    {
        const bool branch_taken_0x3f7420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7420) {
            ctx->pc = 0x3F7434u;
            goto label_3f7434;
        }
    }
    ctx->pc = 0x3F7428u;
label_3f7428:
    // 0x3f7428: 0xc0e9694  jal         func_3A5A50
label_3f742c:
    if (ctx->pc == 0x3F742Cu) {
        ctx->pc = 0x3F742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7428u;
        // 0x3f742c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7430u;
        goto label_3f7430;
    }
    ctx->pc = 0x3F7428u;
    SET_GPR_U32(ctx, 31, 0x3F7430u);
    ctx->pc = 0x3F742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7428u;
    // 0x3f742c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F7428u, 0x3F7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7430u;
label_3f7430:
    // 0x3f7430: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x3f7430u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f7434:
    // 0x3f7434: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_3f7438:
    if (ctx->pc == 0x3F7438u) {
        ctx->pc = 0x3F7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7434u;
        // 0x3f7438: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F743Cu;
        goto label_3f743c;
    }
    ctx->pc = 0x3F7434u;
    {
        const bool branch_taken_0x3f7434 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7434u;
        // 0x3f7438: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7434) {
            ctx->pc = 0x3F74C4u;
            goto label_3f74c4;
        }
    }
    ctx->pc = 0x3F743Cu;
label_3f743c:
    // 0x3f743c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3f7440:
    if (ctx->pc == 0x3F7440u) {
        ctx->pc = 0x3F7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F743Cu;
        // 0x3f7440: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7444u;
        goto label_3f7444;
    }
    ctx->pc = 0x3F743Cu;
    {
        const bool branch_taken_0x3f743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f743c) {
            ctx->pc = 0x3F7440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F743Cu;
            // 0x3f7440: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7454u;
            goto label_3f7454;
        }
    }
    ctx->pc = 0x3F7444u;
label_3f7444:
    // 0x3f7444: 0x92450029  lbu         $a1, 0x29($s2)
    ctx->pc = 0x3f7444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_3f7448:
    // 0x3f7448: 0xc0e858c  jal         func_3A1630
label_3f744c:
    if (ctx->pc == 0x3F744Cu) {
        ctx->pc = 0x3F744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7448u;
        // 0x3f744c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7450u;
        goto label_3f7450;
    }
    ctx->pc = 0x3F7448u;
    SET_GPR_U32(ctx, 31, 0x3F7450u);
    ctx->pc = 0x3F744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7448u;
    // 0x3f744c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F7448u, 0x3F7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7450u;
label_3f7450:
    // 0x3f7450: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f7450u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7454:
    // 0x3f7454: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3f7454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3f7458:
    // 0x3f7458: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f7458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f745c:
    // 0x3f745c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7460:
    // 0x3f7460: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3f7460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3f7464:
    // 0x3f7464: 0x26106868  addiu       $s0, $s0, 0x6868
    ctx->pc = 0x3f7464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26728));
label_3f7468:
    // 0x3f7468: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3f7468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3f746c:
    // 0x3f746c: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3f746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3f7470:
    // 0x3f7470: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3f7470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3f7474:
    // 0x3f7474: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3f7474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3f7478:
    // 0x3f7478: 0x27a80860  addiu       $t0, $sp, 0x860
    ctx->pc = 0x3f7478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3f747c:
    // 0x3f747c: 0x27a90870  addiu       $t1, $sp, 0x870
    ctx->pc = 0x3f747cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3f7480:
    // 0x3f7480: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3f7480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3f7484:
    // 0x3f7484: 0x27aa0880  addiu       $t2, $sp, 0x880
    ctx->pc = 0x3f7484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3f7488:
    // 0x3f7488: 0x27ab0890  addiu       $t3, $sp, 0x890
    ctx->pc = 0x3f7488u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3f748c:
    // 0x3f748c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f748cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7490:
    // 0x3f7490: 0xafa00860  sw          $zero, 0x860($sp)
    ctx->pc = 0x3f7490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 0));
label_3f7494:
    // 0x3f7494: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3f7494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3f7498:
    // 0x3f7498: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x3f7498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_3f749c:
    // 0x3f749c: 0xafb40880  sw          $s4, 0x880($sp)
    ctx->pc = 0x3f749cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 20));
label_3f74a0:
    // 0x3f74a0: 0xafa30870  sw          $v1, 0x870($sp)
    ctx->pc = 0x3f74a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
label_3f74a4:
    // 0x3f74a4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3f74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3f74a8:
    // 0x3f74a8: 0xc0ea084  jal         func_3A8210
label_3f74ac:
    if (ctx->pc == 0x3F74ACu) {
        ctx->pc = 0x3F74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74A8u;
        // 0x3f74ac: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F74B0u;
        goto label_3f74b0;
    }
    ctx->pc = 0x3F74A8u;
    SET_GPR_U32(ctx, 31, 0x3F74B0u);
    ctx->pc = 0x3F74ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F74A8u;
    // 0x3f74ac: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3F74A8u, 0x3F74B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F74B0u;
label_3f74b0:
    // 0x3f74b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f74b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f74b4:
    // 0x3f74b4: 0xc0f15bc  jal         func_3C56F0
label_3f74b8:
    if (ctx->pc == 0x3F74B8u) {
        ctx->pc = 0x3F74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74B4u;
        // 0x3f74b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F74BCu;
        goto label_3f74bc;
    }
    ctx->pc = 0x3F74B4u;
    SET_GPR_U32(ctx, 31, 0x3F74BCu);
    ctx->pc = 0x3F74B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F74B4u;
    // 0x3f74b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F74B4u, 0x3F74BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F74BCu;
label_3f74bc:
    // 0x3f74bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f74c0:
    if (ctx->pc == 0x3F74C0u) {
        ctx->pc = 0x3F74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74BCu;
        // 0x3f74c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F74C4u;
        goto label_3f74c4;
    }
    ctx->pc = 0x3F74BCu;
    {
        const bool branch_taken_0x3f74bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74BCu;
        // 0x3f74c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f74bc) {
            ctx->pc = 0x3F74D8u;
            goto label_3f74d8;
        }
    }
    ctx->pc = 0x3F74C4u;
label_3f74c4:
    // 0x3f74c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3f74c8:
    if (ctx->pc == 0x3F74C8u) {
        ctx->pc = 0x3F74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74C4u;
        // 0x3f74c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F74CCu;
        goto label_3f74cc;
    }
    ctx->pc = 0x3F74C4u;
    {
        const bool branch_taken_0x3f74c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74C4u;
        // 0x3f74c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f74c4) {
            ctx->pc = 0x3F74D4u;
            goto label_3f74d4;
        }
    }
    ctx->pc = 0x3F74CCu;
label_3f74cc:
    // 0x3f74cc: 0xc0e858c  jal         func_3A1630
label_3f74d0:
    if (ctx->pc == 0x3F74D0u) {
        ctx->pc = 0x3F74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74CCu;
        // 0x3f74d0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F74D4u;
        goto label_3f74d4;
    }
    ctx->pc = 0x3F74CCu;
    SET_GPR_U32(ctx, 31, 0x3F74D4u);
    ctx->pc = 0x3F74D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F74CCu;
    // 0x3f74d0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F74CCu, 0x3F74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F74D4u;
label_3f74d4:
    // 0x3f74d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f74d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f74d8:
    // 0x3f74d8: 0x7bb008f0  lq          $s0, 0x8F0($sp)
    ctx->pc = 0x3f74d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3f74dc:
    // 0x3f74dc: 0x7bb108e0  lq          $s1, 0x8E0($sp)
    ctx->pc = 0x3f74dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3f74e0:
    // 0x3f74e0: 0x7bb208d0  lq          $s2, 0x8D0($sp)
    ctx->pc = 0x3f74e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3f74e4:
    // 0x3f74e4: 0x7bb308c0  lq          $s3, 0x8C0($sp)
    ctx->pc = 0x3f74e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3f74e8:
    // 0x3f74e8: 0x7bb408b0  lq          $s4, 0x8B0($sp)
    ctx->pc = 0x3f74e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3f74ec:
    // 0x3f74ec: 0xdfbf08a0  ld          $ra, 0x8A0($sp)
    ctx->pc = 0x3f74ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
label_3f74f0:
    // 0x3f74f0: 0x3e00008  jr          $ra
label_3f74f4:
    if (ctx->pc == 0x3F74F4u) {
        ctx->pc = 0x3F74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74F0u;
        // 0x3f74f4: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F74F8u;
        goto label_fallthrough_0x3f74f0;
    }
    ctx->pc = 0x3F74F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74F0u;
        // 0x3f74f4: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F74F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f74f0:
    ctx->pc = 0x3F74F8u;
}
