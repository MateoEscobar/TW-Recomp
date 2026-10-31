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

// Function: sub_003C73C8
// Address: 0x3c73c8 - 0x3c7550
void sub_003C73C8_0x3c73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C73C8_0x3c73c8");
#endif

    switch (ctx->pc) {
        case 0x3c73c8u: goto label_3c73c8;
        case 0x3c73ccu: goto label_3c73cc;
        case 0x3c73d0u: goto label_3c73d0;
        case 0x3c73d4u: goto label_3c73d4;
        case 0x3c73d8u: goto label_3c73d8;
        case 0x3c73dcu: goto label_3c73dc;
        case 0x3c73e0u: goto label_3c73e0;
        case 0x3c73e4u: goto label_3c73e4;
        case 0x3c73e8u: goto label_3c73e8;
        case 0x3c73ecu: goto label_3c73ec;
        case 0x3c73f0u: goto label_3c73f0;
        case 0x3c73f4u: goto label_3c73f4;
        case 0x3c73f8u: goto label_3c73f8;
        case 0x3c73fcu: goto label_3c73fc;
        case 0x3c7400u: goto label_3c7400;
        case 0x3c7404u: goto label_3c7404;
        case 0x3c7408u: goto label_3c7408;
        case 0x3c740cu: goto label_3c740c;
        case 0x3c7410u: goto label_3c7410;
        case 0x3c7414u: goto label_3c7414;
        case 0x3c7418u: goto label_3c7418;
        case 0x3c741cu: goto label_3c741c;
        case 0x3c7420u: goto label_3c7420;
        case 0x3c7424u: goto label_3c7424;
        case 0x3c7428u: goto label_3c7428;
        case 0x3c742cu: goto label_3c742c;
        case 0x3c7430u: goto label_3c7430;
        case 0x3c7434u: goto label_3c7434;
        case 0x3c7438u: goto label_3c7438;
        case 0x3c743cu: goto label_3c743c;
        case 0x3c7440u: goto label_3c7440;
        case 0x3c7444u: goto label_3c7444;
        case 0x3c7448u: goto label_3c7448;
        case 0x3c744cu: goto label_3c744c;
        case 0x3c7450u: goto label_3c7450;
        case 0x3c7454u: goto label_3c7454;
        case 0x3c7458u: goto label_3c7458;
        case 0x3c745cu: goto label_3c745c;
        case 0x3c7460u: goto label_3c7460;
        case 0x3c7464u: goto label_3c7464;
        case 0x3c7468u: goto label_3c7468;
        case 0x3c746cu: goto label_3c746c;
        case 0x3c7470u: goto label_3c7470;
        case 0x3c7474u: goto label_3c7474;
        case 0x3c7478u: goto label_3c7478;
        case 0x3c747cu: goto label_3c747c;
        case 0x3c7480u: goto label_3c7480;
        case 0x3c7484u: goto label_3c7484;
        case 0x3c7488u: goto label_3c7488;
        case 0x3c748cu: goto label_3c748c;
        case 0x3c7490u: goto label_3c7490;
        case 0x3c7494u: goto label_3c7494;
        case 0x3c7498u: goto label_3c7498;
        case 0x3c749cu: goto label_3c749c;
        case 0x3c74a0u: goto label_3c74a0;
        case 0x3c74a4u: goto label_3c74a4;
        case 0x3c74a8u: goto label_3c74a8;
        case 0x3c74acu: goto label_3c74ac;
        case 0x3c74b0u: goto label_3c74b0;
        case 0x3c74b4u: goto label_3c74b4;
        case 0x3c74b8u: goto label_3c74b8;
        case 0x3c74bcu: goto label_3c74bc;
        case 0x3c74c0u: goto label_3c74c0;
        case 0x3c74c4u: goto label_3c74c4;
        case 0x3c74c8u: goto label_3c74c8;
        case 0x3c74ccu: goto label_3c74cc;
        case 0x3c74d0u: goto label_3c74d0;
        case 0x3c74d4u: goto label_3c74d4;
        case 0x3c74d8u: goto label_3c74d8;
        case 0x3c74dcu: goto label_3c74dc;
        case 0x3c74e0u: goto label_3c74e0;
        case 0x3c74e4u: goto label_3c74e4;
        case 0x3c74e8u: goto label_3c74e8;
        case 0x3c74ecu: goto label_3c74ec;
        case 0x3c74f0u: goto label_3c74f0;
        case 0x3c74f4u: goto label_3c74f4;
        case 0x3c74f8u: goto label_3c74f8;
        case 0x3c74fcu: goto label_3c74fc;
        case 0x3c7500u: goto label_3c7500;
        case 0x3c7504u: goto label_3c7504;
        case 0x3c7508u: goto label_3c7508;
        case 0x3c750cu: goto label_3c750c;
        case 0x3c7510u: goto label_3c7510;
        case 0x3c7514u: goto label_3c7514;
        case 0x3c7518u: goto label_3c7518;
        case 0x3c751cu: goto label_3c751c;
        case 0x3c7520u: goto label_3c7520;
        case 0x3c7524u: goto label_3c7524;
        case 0x3c7528u: goto label_3c7528;
        case 0x3c752cu: goto label_3c752c;
        case 0x3c7530u: goto label_3c7530;
        case 0x3c7534u: goto label_3c7534;
        case 0x3c7538u: goto label_3c7538;
        case 0x3c753cu: goto label_3c753c;
        case 0x3c7540u: goto label_3c7540;
        case 0x3c7544u: goto label_3c7544;
        case 0x3c7548u: goto label_3c7548;
        case 0x3c754cu: goto label_3c754c;
        default: break;
    }

    ctx->pc = 0x3c73c8u;

label_3c73c8:
    // 0x3c73c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c73c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c73cc:
    // 0x3c73cc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3c73d0:
    // 0x3c73d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c73d4:
    // 0x3c73d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c73d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c73d8:
    // 0x3c73d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c73d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3c73dc:
    // 0x3c73dc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c73dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3c73e0:
    // 0x3c73e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c73e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c73e4:
    // 0x3c73e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c73e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c73e8:
    // 0x3c73e8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c73e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c73ec:
    // 0x3c73ec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c73f0:
    // 0x3c73f0: 0x40f809  jalr        $v0
label_3c73f4:
    if (ctx->pc == 0x3C73F4u) {
        ctx->pc = 0x3C73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73F0u;
        // 0x3c73f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C73F8u;
        goto label_3c73f8;
    }
    ctx->pc = 0x3C73F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C73F8u);
        ctx->pc = 0x3C73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73F0u;
        // 0x3c73f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C73F0u, 0x3C73F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C73F8u;
label_3c73f8:
    // 0x3c73f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c73f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c73fc:
    // 0x3c73fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3c73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3c7400:
    // 0x3c7400: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c7404:
    // 0x3c7404: 0x1043004a  beq         $v0, $v1, . + 4 + (0x4A << 2)
label_3c7408:
    if (ctx->pc == 0x3C7408u) {
        ctx->pc = 0x3C7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7404u;
        // 0x3c7408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C740Cu;
        goto label_3c740c;
    }
    ctx->pc = 0x3C7404u;
    {
        const bool branch_taken_0x3c7404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7404u;
        // 0x3c7408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7404) {
            ctx->pc = 0x3C7530u;
            goto label_3c7530;
        }
    }
    ctx->pc = 0x3C740Cu;
label_3c740c:
    // 0x3c740c: 0xc0e9694  jal         func_3A5A50
label_3c7410:
    if (ctx->pc == 0x3C7410u) {
        ctx->pc = 0x3C7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C740Cu;
        // 0x3c7410: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7414u;
        goto label_3c7414;
    }
    ctx->pc = 0x3C740Cu;
    SET_GPR_U32(ctx, 31, 0x3C7414u);
    ctx->pc = 0x3C7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C740Cu;
    // 0x3c7410: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C740Cu, 0x3C7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7414u;
label_3c7414:
    // 0x3c7414: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3c7418:
    if (ctx->pc == 0x3C7418u) {
        ctx->pc = 0x3C7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7414u;
        // 0x3c7418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C741Cu;
        goto label_3c741c;
    }
    ctx->pc = 0x3C7414u;
    {
        const bool branch_taken_0x3c7414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7414u;
        // 0x3c7418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7414) {
            ctx->pc = 0x3C7438u;
            goto label_3c7438;
        }
    }
    ctx->pc = 0x3C741Cu;
label_3c741c:
    // 0x3c741c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3c741cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3c7420:
    // 0x3c7420: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3c7420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3c7424:
    // 0x3c7424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7428:
    // 0x3c7428: 0xc0e947e  jal         func_3A51F8
label_3c742c:
    if (ctx->pc == 0x3C742Cu) {
        ctx->pc = 0x3C742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7428u;
        // 0x3c742c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7430u;
        goto label_3c7430;
    }
    ctx->pc = 0x3C7428u;
    SET_GPR_U32(ctx, 31, 0x3C7430u);
    ctx->pc = 0x3C742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7428u;
    // 0x3c742c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3C7428u, 0x3C7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7430u;
label_3c7430:
    // 0x3c7430: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3c7434:
    if (ctx->pc == 0x3C7434u) {
        ctx->pc = 0x3C7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7430u;
        // 0x3c7434: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7438u;
        goto label_3c7438;
    }
    ctx->pc = 0x3C7430u;
    {
        const bool branch_taken_0x3c7430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7430) {
            ctx->pc = 0x3C7434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7430u;
            // 0x3c7434: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7440u;
            goto label_3c7440;
        }
    }
    ctx->pc = 0x3C7438u;
label_3c7438:
    // 0x3c7438: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3c743c:
    if (ctx->pc == 0x3C743Cu) {
        ctx->pc = 0x3C743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7438u;
        // 0x3c743c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7440u;
        goto label_3c7440;
    }
    ctx->pc = 0x3C7438u;
    {
        const bool branch_taken_0x3c7438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7438u;
        // 0x3c743c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7438) {
            ctx->pc = 0x3C7530u;
            goto label_3c7530;
        }
    }
    ctx->pc = 0x3C7440u;
label_3c7440:
    // 0x3c7440: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3c7440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c7444:
    // 0x3c7444: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_3c7448:
    if (ctx->pc == 0x3C7448u) {
        ctx->pc = 0x3C7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7444u;
        // 0x3c7448: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C744Cu;
        goto label_3c744c;
    }
    ctx->pc = 0x3C7444u;
    {
        const bool branch_taken_0x3c7444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7444) {
            ctx->pc = 0x3C7448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7444u;
            // 0x3c7448: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C74BCu;
            goto label_3c74bc;
        }
    }
    ctx->pc = 0x3C744Cu;
label_3c744c:
    // 0x3c744c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3c744cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3c7450:
    // 0x3c7450: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x3c7450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
label_3c7454:
    // 0x3c7454: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x3c7454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_3c7458:
    // 0x3c7458: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c745c:
    // 0x3c745c: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3c745cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3c7460:
    // 0x3c7460: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3c7460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3c7464:
    // 0x3c7464: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3c7464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3c7468:
    // 0x3c7468: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c746c:
    // 0x3c746c: 0xc0cd508  jal         func_335420
label_3c7470:
    if (ctx->pc == 0x3C7470u) {
        ctx->pc = 0x3C7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C746Cu;
        // 0x3c7470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7474u;
        goto label_3c7474;
    }
    ctx->pc = 0x3C746Cu;
    SET_GPR_U32(ctx, 31, 0x3C7474u);
    ctx->pc = 0x3C7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C746Cu;
    // 0x3c7470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C746Cu, 0x3C7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7474u;
label_3c7474:
    // 0x3c7474: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3c7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7478:
    // 0x3c7478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c747c:
    // 0x3c747c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c7480:
    // 0x3c7480: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c7480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c7484:
    // 0x3c7484: 0xc0cd4ee  jal         func_3353B8
label_3c7488:
    if (ctx->pc == 0x3C7488u) {
        ctx->pc = 0x3C7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7484u;
        // 0x3c7488: 0xe64100c0  swc1        $f1, 0xC0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C748Cu;
        goto label_3c748c;
    }
    ctx->pc = 0x3C7484u;
    SET_GPR_U32(ctx, 31, 0x3C748Cu);
    ctx->pc = 0x3C7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7484u;
    // 0x3c7488: 0xe64100c0  swc1        $f1, 0xC0($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C7484u, 0x3C748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C748Cu;
label_3c748c:
    // 0x3c748c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3c748cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3c7490:
    // 0x3c7490: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3c7490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3c7494:
    // 0x3c7494: 0x34630036  ori         $v1, $v1, 0x36
    ctx->pc = 0x3c7494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54);
label_3c7498:
    // 0x3c7498: 0x24844488  addiu       $a0, $a0, 0x4488
    ctx->pc = 0x3c7498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17544));
label_3c749c:
    // 0x3c749c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c74a0:
    // 0x3c74a0: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3c74a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3c74a4:
    // 0x3c74a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3c74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c74a8:
    // 0x3c74a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c74ac:
    // 0x3c74ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c74acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3c74b0:
    // 0x3c74b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c74b4:
    // 0x3c74b4: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3c74b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3c74b8:
    // 0x3c74b8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3c74b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c74bc:
    // 0x3c74bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c74bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c74c0:
    // 0x3c74c0: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3c74c0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3c74c4:
    // 0x3c74c4: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3c74c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3c74c8:
    // 0x3c74c8: 0xc0e87c0  jal         func_3A1F00
label_3c74cc:
    if (ctx->pc == 0x3C74CCu) {
        ctx->pc = 0x3C74CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C74C8u;
        // 0x3c74cc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C74D0u;
        goto label_3c74d0;
    }
    ctx->pc = 0x3C74C8u;
    SET_GPR_U32(ctx, 31, 0x3C74D0u);
    ctx->pc = 0x3C74CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C74C8u;
    // 0x3c74cc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3C74C8u, 0x3C74D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C74D0u;
label_3c74d0:
    // 0x3c74d0: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x3c74d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_3c74d4:
    // 0x3c74d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3c74d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3c74d8:
    // 0x3c74d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c74d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c74dc:
    // 0x3c74dc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3c74dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3c74e0:
    // 0x3c74e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c74e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c74e4:
    // 0x3c74e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c74e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c74e8:
    // 0x3c74e8: 0xc136b24  jal         func_4DAC90
label_3c74ec:
    if (ctx->pc == 0x3C74ECu) {
        ctx->pc = 0x3C74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C74E8u;
        // 0x3c74ec: 0x24a531a0  addiu       $a1, $a1, 0x31A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C74F0u;
        goto label_3c74f0;
    }
    ctx->pc = 0x3C74E8u;
    SET_GPR_U32(ctx, 31, 0x3C74F0u);
    ctx->pc = 0x3C74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C74E8u;
    // 0x3c74ec: 0x24a531a0  addiu       $a1, $a1, 0x31A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C74E8u, 0x3C74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C74F0u;
label_3c74f0:
    // 0x3c74f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c74f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c74f4:
    // 0x3c74f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c74f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c74f8:
    // 0x3c74f8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3c74f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c74fc:
    // 0x3c74fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c74fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c7500:
    // 0x3c7500: 0xc136b18  jal         func_4DAC60
label_3c7504:
    if (ctx->pc == 0x3C7504u) {
        ctx->pc = 0x3C7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7500u;
        // 0x3c7504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7508u;
        goto label_3c7508;
    }
    ctx->pc = 0x3C7500u;
    SET_GPR_U32(ctx, 31, 0x3C7508u);
    ctx->pc = 0x3C7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7500u;
    // 0x3c7504: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7500u, 0x3C7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7508u;
label_3c7508:
    // 0x3c7508: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c7508u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c750c:
    // 0x3c750c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c750cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7510:
    // 0x3c7510: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c7510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c7514:
    // 0x3c7514: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c7518:
    // 0x3c7518: 0x40f809  jalr        $v0
label_3c751c:
    if (ctx->pc == 0x3C751Cu) {
        ctx->pc = 0x3C751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7518u;
        // 0x3c751c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7520u;
        goto label_3c7520;
    }
    ctx->pc = 0x3C7518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7520u);
        ctx->pc = 0x3C751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7518u;
        // 0x3c751c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7518u, 0x3C7520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7520u;
label_3c7520:
    // 0x3c7520: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c7520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c7524:
    // 0x3c7524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c7524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7528:
    // 0x3c7528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c7528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c752c:
    // 0x3c752c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3c752cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3c7530:
    // 0x3c7530: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c7530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c7534:
    // 0x3c7534: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c7534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c7538:
    // 0x3c7538: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c7538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c753c:
    // 0x3c753c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c753cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7540:
    // 0x3c7540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c7540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7544:
    // 0x3c7544: 0x3e00008  jr          $ra
label_3c7548:
    if (ctx->pc == 0x3C7548u) {
        ctx->pc = 0x3C7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7544u;
        // 0x3c7548: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C754Cu;
        goto label_3c754c;
    }
    ctx->pc = 0x3C7544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7544u;
        // 0x3c7548: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C754Cu;
label_3c754c:
    // 0x3c754c: 0x0  nop
    ctx->pc = 0x3c754cu;
    // NOP
    ctx->pc = 0x3c7550u;
}
