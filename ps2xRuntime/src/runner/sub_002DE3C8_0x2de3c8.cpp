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

// Function: sub_002DE3C8
// Address: 0x2de3c8 - 0x2de498
void sub_002DE3C8_0x2de3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE3C8_0x2de3c8");
#endif

    switch (ctx->pc) {
        case 0x2de3c8u: goto label_2de3c8;
        case 0x2de3ccu: goto label_2de3cc;
        case 0x2de3d0u: goto label_2de3d0;
        case 0x2de3d4u: goto label_2de3d4;
        case 0x2de3d8u: goto label_2de3d8;
        case 0x2de3dcu: goto label_2de3dc;
        case 0x2de3e0u: goto label_2de3e0;
        case 0x2de3e4u: goto label_2de3e4;
        case 0x2de3e8u: goto label_2de3e8;
        case 0x2de3ecu: goto label_2de3ec;
        case 0x2de3f0u: goto label_2de3f0;
        case 0x2de3f4u: goto label_2de3f4;
        case 0x2de3f8u: goto label_2de3f8;
        case 0x2de3fcu: goto label_2de3fc;
        case 0x2de400u: goto label_2de400;
        case 0x2de404u: goto label_2de404;
        case 0x2de408u: goto label_2de408;
        case 0x2de40cu: goto label_2de40c;
        case 0x2de410u: goto label_2de410;
        case 0x2de414u: goto label_2de414;
        case 0x2de418u: goto label_2de418;
        case 0x2de41cu: goto label_2de41c;
        case 0x2de420u: goto label_2de420;
        case 0x2de424u: goto label_2de424;
        case 0x2de428u: goto label_2de428;
        case 0x2de42cu: goto label_2de42c;
        case 0x2de430u: goto label_2de430;
        case 0x2de434u: goto label_2de434;
        case 0x2de438u: goto label_2de438;
        case 0x2de43cu: goto label_2de43c;
        case 0x2de440u: goto label_2de440;
        case 0x2de444u: goto label_2de444;
        case 0x2de448u: goto label_2de448;
        case 0x2de44cu: goto label_2de44c;
        case 0x2de450u: goto label_2de450;
        case 0x2de454u: goto label_2de454;
        case 0x2de458u: goto label_2de458;
        case 0x2de45cu: goto label_2de45c;
        case 0x2de460u: goto label_2de460;
        case 0x2de464u: goto label_2de464;
        case 0x2de468u: goto label_2de468;
        case 0x2de46cu: goto label_2de46c;
        case 0x2de470u: goto label_2de470;
        case 0x2de474u: goto label_2de474;
        case 0x2de478u: goto label_2de478;
        case 0x2de47cu: goto label_2de47c;
        case 0x2de480u: goto label_2de480;
        case 0x2de484u: goto label_2de484;
        case 0x2de488u: goto label_2de488;
        case 0x2de48cu: goto label_2de48c;
        case 0x2de490u: goto label_2de490;
        case 0x2de494u: goto label_2de494;
        default: break;
    }

    ctx->pc = 0x2de3c8u;

label_2de3c8:
    // 0x2de3c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2de3cc:
    // 0x2de3cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2de3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2de3d0:
    // 0x2de3d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2de3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2de3d4:
    // 0x2de3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2de3d8:
    // 0x2de3d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de3dc:
    // 0x2de3dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2de3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de3e0:
    // 0x2de3e0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2de3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2de3e4:
    // 0x2de3e4: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x2de3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
label_2de3e8:
    // 0x2de3e8: 0xa2220026  sb          $v0, 0x26($s1)
    ctx->pc = 0x2de3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 2));
label_2de3ec:
    // 0x2de3ec: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x2de3ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_2de3f0:
    // 0x2de3f0: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2de3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2de3f4:
    // 0x2de3f4: 0x40f809  jalr        $v0
label_2de3f8:
    if (ctx->pc == 0x2DE3F8u) {
        ctx->pc = 0x2DE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3F4u;
        // 0x2de3f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE3FCu;
        goto label_2de3fc;
    }
    ctx->pc = 0x2DE3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE3FCu);
        ctx->pc = 0x2DE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3F4u;
        // 0x2de3f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE3F4u, 0x2DE3FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE3FCu;
label_2de3fc:
    // 0x2de3fc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2de3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2de400:
    // 0x2de400: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de404:
    // 0x2de404: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2de404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de408:
    // 0x2de408: 0xc0e409a  jal         func_390268
label_2de40c:
    if (ctx->pc == 0x2DE40Cu) {
        ctx->pc = 0x2DE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE408u;
        // 0x2de40c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE410u;
        goto label_2de410;
    }
    ctx->pc = 0x2DE408u;
    SET_GPR_U32(ctx, 31, 0x2DE410u);
    ctx->pc = 0x2DE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE408u;
    // 0x2de40c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DE408u, 0x2DE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE410u;
label_2de410:
    // 0x2de410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de414:
    // 0x2de414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2de414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de418:
    // 0x2de418: 0xc0a352c  jal         func_28D4B0
label_2de41c:
    if (ctx->pc == 0x2DE41Cu) {
        ctx->pc = 0x2DE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE418u;
        // 0x2de41c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE420u;
        goto label_2de420;
    }
    ctx->pc = 0x2DE418u;
    SET_GPR_U32(ctx, 31, 0x2DE420u);
    ctx->pc = 0x2DE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE418u;
    // 0x2de41c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DE418u, 0x2DE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE420u;
label_2de420:
    // 0x2de420: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2de424:
    if (ctx->pc == 0x2DE424u) {
        ctx->pc = 0x2DE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE420u;
        // 0x2de424: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE428u;
        goto label_2de428;
    }
    ctx->pc = 0x2DE420u;
    {
        const bool branch_taken_0x2de420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE420u;
        // 0x2de424: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de420) {
            ctx->pc = 0x2DE488u;
            goto label_2de488;
        }
    }
    ctx->pc = 0x2DE428u;
label_2de428:
    // 0x2de428: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2de428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de42c:
    // 0x2de42c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2de42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2de430:
    // 0x2de430: 0x908300dd  lbu         $v1, 0xDD($a0)
    ctx->pc = 0x2de430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 221)));
label_2de434:
    // 0x2de434: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2de434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2de438:
    // 0x2de438: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2de438u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2de43c:
    // 0x2de43c: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_2de440:
    if (ctx->pc == 0x2DE440u) {
        ctx->pc = 0x2DE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE43Cu;
        // 0x2de440: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE444u;
        goto label_2de444;
    }
    ctx->pc = 0x2DE43Cu;
    {
        const bool branch_taken_0x2de43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de43c) {
            ctx->pc = 0x2DE440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE43Cu;
            // 0x2de440: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE48Cu;
            goto label_2de48c;
        }
    }
    ctx->pc = 0x2DE444u;
label_2de444:
    // 0x2de444: 0xc0a4e54  jal         func_293950
label_2de448:
    if (ctx->pc == 0x2DE448u) {
        ctx->pc = 0x2DE44Cu;
        goto label_2de44c;
    }
    ctx->pc = 0x2DE444u;
    SET_GPR_U32(ctx, 31, 0x2DE44Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DE444u, 0x2DE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE44Cu;
label_2de44c:
    // 0x2de44c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de450:
    // 0x2de450: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2de454:
    if (ctx->pc == 0x2DE454u) {
        ctx->pc = 0x2DE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE450u;
        // 0x2de454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE458u;
        goto label_2de458;
    }
    ctx->pc = 0x2DE450u;
    {
        const bool branch_taken_0x2de450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE450u;
        // 0x2de454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de450) {
            ctx->pc = 0x2DE478u;
            goto label_2de478;
        }
    }
    ctx->pc = 0x2DE458u;
label_2de458:
    // 0x2de458: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2de458u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_2de45c:
    // 0x2de45c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2de45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de460:
    // 0x2de460: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2de460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2de464:
    // 0x2de464: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2de464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_2de468:
    // 0x2de468: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2de468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2de46c:
    // 0x2de46c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2de46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de470:
    // 0x2de470: 0xc0b7eea  jal         func_2DFBA8
label_2de474:
    if (ctx->pc == 0x2DE474u) {
        ctx->pc = 0x2DE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE470u;
        // 0x2de474: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE478u;
        goto label_2de478;
    }
    ctx->pc = 0x2DE470u;
    SET_GPR_U32(ctx, 31, 0x2DE478u);
    ctx->pc = 0x2DE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE470u;
    // 0x2de474: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2DE470u, 0x2DE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE478u;
label_2de478:
    // 0x2de478: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2de478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de47c:
    // 0x2de47c: 0xc0a35d6  jal         func_28D758
label_2de480:
    if (ctx->pc == 0x2DE480u) {
        ctx->pc = 0x2DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE47Cu;
        // 0x2de480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE484u;
        goto label_2de484;
    }
    ctx->pc = 0x2DE47Cu;
    SET_GPR_U32(ctx, 31, 0x2DE484u);
    ctx->pc = 0x2DE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE47Cu;
    // 0x2de480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DE47Cu, 0x2DE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE484u;
label_2de484:
    // 0x2de484: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2de484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2de488:
    // 0x2de488: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2de488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de48c:
    // 0x2de48c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2de490:
    // 0x2de490: 0x3e00008  jr          $ra
label_2de494:
    if (ctx->pc == 0x2DE494u) {
        ctx->pc = 0x2DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE490u;
        // 0x2de494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE498u;
        goto label_fallthrough_0x2de490;
    }
    ctx->pc = 0x2DE490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE490u;
        // 0x2de494: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de490:
    ctx->pc = 0x2DE498u;
}
