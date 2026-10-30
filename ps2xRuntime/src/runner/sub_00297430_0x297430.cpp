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

// Function: sub_00297430
// Address: 0x297430 - 0x2975e0
void sub_00297430_0x297430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297430_0x297430");
#endif

    switch (ctx->pc) {
        case 0x297430u: goto label_297430;
        case 0x297434u: goto label_297434;
        case 0x297438u: goto label_297438;
        case 0x29743cu: goto label_29743c;
        case 0x297440u: goto label_297440;
        case 0x297444u: goto label_297444;
        case 0x297448u: goto label_297448;
        case 0x29744cu: goto label_29744c;
        case 0x297450u: goto label_297450;
        case 0x297454u: goto label_297454;
        case 0x297458u: goto label_297458;
        case 0x29745cu: goto label_29745c;
        case 0x297460u: goto label_297460;
        case 0x297464u: goto label_297464;
        case 0x297468u: goto label_297468;
        case 0x29746cu: goto label_29746c;
        case 0x297470u: goto label_297470;
        case 0x297474u: goto label_297474;
        case 0x297478u: goto label_297478;
        case 0x29747cu: goto label_29747c;
        case 0x297480u: goto label_297480;
        case 0x297484u: goto label_297484;
        case 0x297488u: goto label_297488;
        case 0x29748cu: goto label_29748c;
        case 0x297490u: goto label_297490;
        case 0x297494u: goto label_297494;
        case 0x297498u: goto label_297498;
        case 0x29749cu: goto label_29749c;
        case 0x2974a0u: goto label_2974a0;
        case 0x2974a4u: goto label_2974a4;
        case 0x2974a8u: goto label_2974a8;
        case 0x2974acu: goto label_2974ac;
        case 0x2974b0u: goto label_2974b0;
        case 0x2974b4u: goto label_2974b4;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974bcu: goto label_2974bc;
        case 0x2974c0u: goto label_2974c0;
        case 0x2974c4u: goto label_2974c4;
        case 0x2974c8u: goto label_2974c8;
        case 0x2974ccu: goto label_2974cc;
        case 0x2974d0u: goto label_2974d0;
        case 0x2974d4u: goto label_2974d4;
        case 0x2974d8u: goto label_2974d8;
        case 0x2974dcu: goto label_2974dc;
        case 0x2974e0u: goto label_2974e0;
        case 0x2974e4u: goto label_2974e4;
        case 0x2974e8u: goto label_2974e8;
        case 0x2974ecu: goto label_2974ec;
        case 0x2974f0u: goto label_2974f0;
        case 0x2974f4u: goto label_2974f4;
        case 0x2974f8u: goto label_2974f8;
        case 0x2974fcu: goto label_2974fc;
        case 0x297500u: goto label_297500;
        case 0x297504u: goto label_297504;
        case 0x297508u: goto label_297508;
        case 0x29750cu: goto label_29750c;
        case 0x297510u: goto label_297510;
        case 0x297514u: goto label_297514;
        case 0x297518u: goto label_297518;
        case 0x29751cu: goto label_29751c;
        case 0x297520u: goto label_297520;
        case 0x297524u: goto label_297524;
        case 0x297528u: goto label_297528;
        case 0x29752cu: goto label_29752c;
        case 0x297530u: goto label_297530;
        case 0x297534u: goto label_297534;
        case 0x297538u: goto label_297538;
        case 0x29753cu: goto label_29753c;
        case 0x297540u: goto label_297540;
        case 0x297544u: goto label_297544;
        case 0x297548u: goto label_297548;
        case 0x29754cu: goto label_29754c;
        case 0x297550u: goto label_297550;
        case 0x297554u: goto label_297554;
        case 0x297558u: goto label_297558;
        case 0x29755cu: goto label_29755c;
        case 0x297560u: goto label_297560;
        case 0x297564u: goto label_297564;
        case 0x297568u: goto label_297568;
        case 0x29756cu: goto label_29756c;
        case 0x297570u: goto label_297570;
        case 0x297574u: goto label_297574;
        case 0x297578u: goto label_297578;
        case 0x29757cu: goto label_29757c;
        case 0x297580u: goto label_297580;
        case 0x297584u: goto label_297584;
        case 0x297588u: goto label_297588;
        case 0x29758cu: goto label_29758c;
        case 0x297590u: goto label_297590;
        case 0x297594u: goto label_297594;
        case 0x297598u: goto label_297598;
        case 0x29759cu: goto label_29759c;
        case 0x2975a0u: goto label_2975a0;
        case 0x2975a4u: goto label_2975a4;
        case 0x2975a8u: goto label_2975a8;
        case 0x2975acu: goto label_2975ac;
        case 0x2975b0u: goto label_2975b0;
        case 0x2975b4u: goto label_2975b4;
        case 0x2975b8u: goto label_2975b8;
        case 0x2975bcu: goto label_2975bc;
        case 0x2975c0u: goto label_2975c0;
        case 0x2975c4u: goto label_2975c4;
        case 0x2975c8u: goto label_2975c8;
        case 0x2975ccu: goto label_2975cc;
        case 0x2975d0u: goto label_2975d0;
        case 0x2975d4u: goto label_2975d4;
        case 0x2975d8u: goto label_2975d8;
        case 0x2975dcu: goto label_2975dc;
        default: break;
    }

    ctx->pc = 0x297430u;

label_297430:
    // 0x297430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x297430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_297434:
    // 0x297434: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x297434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_297438:
    // 0x297438: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x297438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_29743c:
    // 0x29743c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29743cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297440:
    // 0x297440: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x297440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_297444:
    // 0x297444: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x297444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_297448:
    // 0x297448: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x297448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_29744c:
    // 0x29744c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_297450:
    // 0x297450: 0xc0a5d08  jal         func_297420
label_297454:
    if (ctx->pc == 0x297454u) {
        ctx->pc = 0x297454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297450u;
        // 0x297454: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297458u;
        goto label_297458;
    }
    ctx->pc = 0x297450u;
    SET_GPR_U32(ctx, 31, 0x297458u);
    ctx->pc = 0x297454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297450u;
    // 0x297454: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297420u, 0x297450u, 0x297458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297458u;
label_297458:
    // 0x297458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29745c:
    // 0x29745c: 0x5043005a  beql        $v0, $v1, . + 4 + (0x5A << 2)
label_297460:
    if (ctx->pc == 0x297460u) {
        ctx->pc = 0x297460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29745Cu;
        // 0x297460: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297464u;
        goto label_297464;
    }
    ctx->pc = 0x29745Cu;
    {
        const bool branch_taken_0x29745c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29745c) {
            ctx->pc = 0x297460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29745Cu;
            // 0x297460: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x297464u;
label_297464:
    // 0x297464: 0xc0a5a72  jal         func_2969C8
label_297468:
    if (ctx->pc == 0x297468u) {
        ctx->pc = 0x297468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297464u;
        // 0x297468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29746Cu;
        goto label_29746c;
    }
    ctx->pc = 0x297464u;
    SET_GPR_U32(ctx, 31, 0x29746Cu);
    ctx->pc = 0x297468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297464u;
    // 0x297468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297464u, 0x29746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29746Cu;
label_29746c:
    // 0x29746c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_297470:
    // 0x297470: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x297470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_297474:
    // 0x297474: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_297478:
    if (ctx->pc == 0x297478u) {
        ctx->pc = 0x297478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297474u;
        // 0x297478: 0x24730284  addiu       $s3, $v1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29747Cu;
        goto label_29747c;
    }
    ctx->pc = 0x297474u;
    {
        const bool branch_taken_0x297474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297474u;
        // 0x297478: 0x24730284  addiu       $s3, $v1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297474) {
            ctx->pc = 0x2975C4u;
            goto label_2975c4;
        }
    }
    ctx->pc = 0x29747Cu;
label_29747c:
    // 0x29747c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x29747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_297480:
    // 0x297480: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x297480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_297484:
    // 0x297484: 0x244211a0  addiu       $v0, $v0, 0x11A0
    ctx->pc = 0x297484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4512));
label_297488:
    // 0x297488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29748c:
    // 0x29748c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_297490:
    // 0x297490: 0x800008  jr          $a0
label_297494:
    if (ctx->pc == 0x297494u) {
        ctx->pc = 0x297498u;
        goto label_297498;
    }
    ctx->pc = 0x297490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297498u: goto label_297498;
            case 0x2974BCu: goto label_2974bc;
            case 0x297500u: goto label_297500;
            case 0x297530u: goto label_297530;
            case 0x297560u: goto label_297560;
            case 0x2975A8u: goto label_2975a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297498u;
label_297498:
    // 0x297498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29749c:
    // 0x29749c: 0xa232000e  sb          $s2, 0xE($s1)
    ctx->pc = 0x29749cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 18));
label_2974a0:
    // 0x2974a0: 0xa220000f  sb          $zero, 0xF($s1)
    ctx->pc = 0x2974a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
label_2974a4:
    // 0x2974a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2974a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2974a8:
    // 0x2974a8: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x2974a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_2974ac:
    // 0x2974ac: 0xc0a67bc  jal         func_299EF0
label_2974b0:
    if (ctx->pc == 0x2974B0u) {
        ctx->pc = 0x2974B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974ACu;
        // 0x2974b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2974B4u;
        goto label_2974b4;
    }
    ctx->pc = 0x2974ACu;
    SET_GPR_U32(ctx, 31, 0x2974B4u);
    ctx->pc = 0x2974B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974ACu;
    // 0x2974b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x2974ACu, 0x2974B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974B4u;
label_2974b4:
    // 0x2974b4: 0x10000044  b           . + 4 + (0x44 << 2)
label_2974b8:
    if (ctx->pc == 0x2974B8u) {
        ctx->pc = 0x2974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974B4u;
        // 0x2974b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2974BCu;
        goto label_2974bc;
    }
    ctx->pc = 0x2974B4u;
    {
        const bool branch_taken_0x2974b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974B4u;
        // 0x2974b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974b4) {
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x2974BCu;
label_2974bc:
    // 0x2974bc: 0x52000042  beql        $s0, $zero, . + 4 + (0x42 << 2)
label_2974c0:
    if (ctx->pc == 0x2974C0u) {
        ctx->pc = 0x2974C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974BCu;
        // 0x2974c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2974C4u;
        goto label_2974c4;
    }
    ctx->pc = 0x2974BCu;
    {
        const bool branch_taken_0x2974bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2974bc) {
            ctx->pc = 0x2974C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2974BCu;
            // 0x2974c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x2974C4u;
label_2974c4:
    // 0x2974c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2974c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2974c8:
    // 0x2974c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2974c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2974cc:
    // 0x2974cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2974ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2974d0:
    // 0x2974d0: 0x40f809  jalr        $v0
label_2974d4:
    if (ctx->pc == 0x2974D4u) {
        ctx->pc = 0x2974D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974D0u;
        // 0x2974d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2974D8u;
        goto label_2974d8;
    }
    ctx->pc = 0x2974D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2974D8u);
        ctx->pc = 0x2974D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974D0u;
        // 0x2974d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2974D0u, 0x2974D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2974D8u;
label_2974d8:
    // 0x2974d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2974d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2974dc:
    // 0x2974dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2974dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2974e0:
    // 0x2974e0: 0xa232000e  sb          $s2, 0xE($s1)
    ctx->pc = 0x2974e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 18));
label_2974e4:
    // 0x2974e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2974e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2974e8:
    // 0x2974e8: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x2974e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2974ec:
    // 0x2974ec: 0xa220000f  sb          $zero, 0xF($s1)
    ctx->pc = 0x2974ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
label_2974f0:
    // 0x2974f0: 0xc0a67bc  jal         func_299EF0
label_2974f4:
    if (ctx->pc == 0x2974F4u) {
        ctx->pc = 0x2974F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974F0u;
        // 0x2974f4: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2974F8u;
        goto label_2974f8;
    }
    ctx->pc = 0x2974F0u;
    SET_GPR_U32(ctx, 31, 0x2974F8u);
    ctx->pc = 0x2974F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974F0u;
    // 0x2974f4: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x2974F0u, 0x2974F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974F8u;
label_2974f8:
    // 0x2974f8: 0x10000033  b           . + 4 + (0x33 << 2)
label_2974fc:
    if (ctx->pc == 0x2974FCu) {
        ctx->pc = 0x2974FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974F8u;
        // 0x2974fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297500u;
        goto label_297500;
    }
    ctx->pc = 0x2974F8u;
    {
        const bool branch_taken_0x2974f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974F8u;
        // 0x2974fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974f8) {
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x297500u;
label_297500:
    // 0x297500: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
label_297504:
    if (ctx->pc == 0x297504u) {
        ctx->pc = 0x297504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297500u;
        // 0x297504: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297508u;
        goto label_297508;
    }
    ctx->pc = 0x297500u;
    {
        const bool branch_taken_0x297500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x297500) {
            ctx->pc = 0x297504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297500u;
            // 0x297504: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x297508u;
label_297508:
    // 0x297508: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29750c:
    // 0x29750c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29750cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_297510:
    // 0x297510: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x297510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_297514:
    // 0x297514: 0x40f809  jalr        $v0
label_297518:
    if (ctx->pc == 0x297518u) {
        ctx->pc = 0x297518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297514u;
        // 0x297518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29751Cu;
        goto label_29751c;
    }
    ctx->pc = 0x297514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29751Cu);
        ctx->pc = 0x297518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297514u;
        // 0x297518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297514u, 0x29751Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29751Cu;
label_29751c:
    // 0x29751c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x29751cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_297520:
    // 0x297520: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297524:
    // 0x297524: 0xa232000e  sb          $s2, 0xE($s1)
    ctx->pc = 0x297524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 18));
label_297528:
    // 0x297528: 0x10000018  b           . + 4 + (0x18 << 2)
label_29752c:
    if (ctx->pc == 0x29752Cu) {
        ctx->pc = 0x29752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297528u;
        // 0x29752c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297530u;
        goto label_297530;
    }
    ctx->pc = 0x297528u;
    {
        const bool branch_taken_0x297528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297528u;
        // 0x29752c: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297528) {
            ctx->pc = 0x29758Cu;
            goto label_29758c;
        }
    }
    ctx->pc = 0x297530u;
label_297530:
    // 0x297530: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
label_297534:
    if (ctx->pc == 0x297534u) {
        ctx->pc = 0x297534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297530u;
        // 0x297534: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297538u;
        goto label_297538;
    }
    ctx->pc = 0x297530u;
    {
        const bool branch_taken_0x297530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x297530) {
            ctx->pc = 0x297534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297530u;
            // 0x297534: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x297538u;
label_297538:
    // 0x297538: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29753c:
    // 0x29753c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29753cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_297540:
    // 0x297540: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x297540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_297544:
    // 0x297544: 0x40f809  jalr        $v0
label_297548:
    if (ctx->pc == 0x297548u) {
        ctx->pc = 0x297548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297544u;
        // 0x297548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29754Cu;
        goto label_29754c;
    }
    ctx->pc = 0x297544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29754Cu);
        ctx->pc = 0x297548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297544u;
        // 0x297548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297544u, 0x29754Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29754Cu;
label_29754c:
    // 0x29754c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x29754cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_297550:
    // 0x297550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297554:
    // 0x297554: 0xa232000e  sb          $s2, 0xE($s1)
    ctx->pc = 0x297554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 18));
label_297558:
    // 0x297558: 0x1000000c  b           . + 4 + (0xC << 2)
label_29755c:
    if (ctx->pc == 0x29755Cu) {
        ctx->pc = 0x29755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297558u;
        // 0x29755c: 0x27a20008  addiu       $v0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297560u;
        goto label_297560;
    }
    ctx->pc = 0x297558u;
    {
        const bool branch_taken_0x297558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297558u;
        // 0x29755c: 0x27a20008  addiu       $v0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297558) {
            ctx->pc = 0x29758Cu;
            goto label_29758c;
        }
    }
    ctx->pc = 0x297560u;
label_297560:
    // 0x297560: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_297564:
    if (ctx->pc == 0x297564u) {
        ctx->pc = 0x297564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297560u;
        // 0x297564: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297568u;
        goto label_297568;
    }
    ctx->pc = 0x297560u;
    {
        const bool branch_taken_0x297560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x297560) {
            ctx->pc = 0x297564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297560u;
            // 0x297564: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x297568u;
label_297568:
    // 0x297568: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29756c:
    // 0x29756c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x29756cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_297570:
    // 0x297570: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x297570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_297574:
    // 0x297574: 0x40f809  jalr        $v0
label_297578:
    if (ctx->pc == 0x297578u) {
        ctx->pc = 0x297578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297574u;
        // 0x297578: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29757Cu;
        goto label_29757c;
    }
    ctx->pc = 0x297574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29757Cu);
        ctx->pc = 0x297578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297574u;
        // 0x297578: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297574u, 0x29757Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29757Cu;
label_29757c:
    // 0x29757c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x29757cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_297580:
    // 0x297580: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297584:
    // 0x297584: 0xa232000e  sb          $s2, 0xE($s1)
    ctx->pc = 0x297584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 18));
label_297588:
    // 0x297588: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x297588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_29758c:
    // 0x29758c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297590:
    // 0x297590: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x297590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_297594:
    // 0x297594: 0xa220000f  sb          $zero, 0xF($s1)
    ctx->pc = 0x297594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
label_297598:
    // 0x297598: 0xc0a67bc  jal         func_299EF0
label_29759c:
    if (ctx->pc == 0x29759Cu) {
        ctx->pc = 0x29759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297598u;
        // 0x29759c: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975A0u;
        goto label_2975a0;
    }
    ctx->pc = 0x297598u;
    SET_GPR_U32(ctx, 31, 0x2975A0u);
    ctx->pc = 0x29759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297598u;
    // 0x29759c: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x297598u, 0x2975A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975A0u;
label_2975a0:
    // 0x2975a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2975a4:
    if (ctx->pc == 0x2975A4u) {
        ctx->pc = 0x2975A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975A0u;
        // 0x2975a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975A8u;
        goto label_2975a8;
    }
    ctx->pc = 0x2975A0u;
    {
        const bool branch_taken_0x2975a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975A0u;
        // 0x2975a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975a0) {
            ctx->pc = 0x2975C8u;
            goto label_2975c8;
        }
    }
    ctx->pc = 0x2975A8u;
label_2975a8:
    // 0x2975a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2975ac:
    // 0x2975ac: 0xa232000e  sb          $s2, 0xE($s1)
    ctx->pc = 0x2975acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 18));
label_2975b0:
    // 0x2975b0: 0xa220000f  sb          $zero, 0xF($s1)
    ctx->pc = 0x2975b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
label_2975b4:
    // 0x2975b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2975b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2975b8:
    // 0x2975b8: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x2975b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_2975bc:
    // 0x2975bc: 0xc0a67bc  jal         func_299EF0
label_2975c0:
    if (ctx->pc == 0x2975C0u) {
        ctx->pc = 0x2975C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975BCu;
        // 0x2975c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975C4u;
        goto label_2975c4;
    }
    ctx->pc = 0x2975BCu;
    SET_GPR_U32(ctx, 31, 0x2975C4u);
    ctx->pc = 0x2975C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975BCu;
    // 0x2975c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x2975BCu, 0x2975C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975C4u;
label_2975c4:
    // 0x2975c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2975c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2975c8:
    // 0x2975c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2975c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2975cc:
    // 0x2975cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2975ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2975d0:
    // 0x2975d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2975d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2975d4:
    // 0x2975d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2975d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2975d8:
    // 0x2975d8: 0x3e00008  jr          $ra
label_2975dc:
    if (ctx->pc == 0x2975DCu) {
        ctx->pc = 0x2975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975D8u;
        // 0x2975dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2975E0u;
        goto label_fallthrough_0x2975d8;
    }
    ctx->pc = 0x2975D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2975DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975D8u;
        // 0x2975dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2975D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2975d8:
    ctx->pc = 0x2975E0u;
}
