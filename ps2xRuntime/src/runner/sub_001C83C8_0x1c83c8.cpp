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

// Function: sub_001C83C8
// Address: 0x1c83c8 - 0x1c8590
void sub_001C83C8_0x1c83c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C83C8_0x1c83c8");
#endif

    switch (ctx->pc) {
        case 0x1c83c8u: goto label_1c83c8;
        case 0x1c83ccu: goto label_1c83cc;
        case 0x1c83d0u: goto label_1c83d0;
        case 0x1c83d4u: goto label_1c83d4;
        case 0x1c83d8u: goto label_1c83d8;
        case 0x1c83dcu: goto label_1c83dc;
        case 0x1c83e0u: goto label_1c83e0;
        case 0x1c83e4u: goto label_1c83e4;
        case 0x1c83e8u: goto label_1c83e8;
        case 0x1c83ecu: goto label_1c83ec;
        case 0x1c83f0u: goto label_1c83f0;
        case 0x1c83f4u: goto label_1c83f4;
        case 0x1c83f8u: goto label_1c83f8;
        case 0x1c83fcu: goto label_1c83fc;
        case 0x1c8400u: goto label_1c8400;
        case 0x1c8404u: goto label_1c8404;
        case 0x1c8408u: goto label_1c8408;
        case 0x1c840cu: goto label_1c840c;
        case 0x1c8410u: goto label_1c8410;
        case 0x1c8414u: goto label_1c8414;
        case 0x1c8418u: goto label_1c8418;
        case 0x1c841cu: goto label_1c841c;
        case 0x1c8420u: goto label_1c8420;
        case 0x1c8424u: goto label_1c8424;
        case 0x1c8428u: goto label_1c8428;
        case 0x1c842cu: goto label_1c842c;
        case 0x1c8430u: goto label_1c8430;
        case 0x1c8434u: goto label_1c8434;
        case 0x1c8438u: goto label_1c8438;
        case 0x1c843cu: goto label_1c843c;
        case 0x1c8440u: goto label_1c8440;
        case 0x1c8444u: goto label_1c8444;
        case 0x1c8448u: goto label_1c8448;
        case 0x1c844cu: goto label_1c844c;
        case 0x1c8450u: goto label_1c8450;
        case 0x1c8454u: goto label_1c8454;
        case 0x1c8458u: goto label_1c8458;
        case 0x1c845cu: goto label_1c845c;
        case 0x1c8460u: goto label_1c8460;
        case 0x1c8464u: goto label_1c8464;
        case 0x1c8468u: goto label_1c8468;
        case 0x1c846cu: goto label_1c846c;
        case 0x1c8470u: goto label_1c8470;
        case 0x1c8474u: goto label_1c8474;
        case 0x1c8478u: goto label_1c8478;
        case 0x1c847cu: goto label_1c847c;
        case 0x1c8480u: goto label_1c8480;
        case 0x1c8484u: goto label_1c8484;
        case 0x1c8488u: goto label_1c8488;
        case 0x1c848cu: goto label_1c848c;
        case 0x1c8490u: goto label_1c8490;
        case 0x1c8494u: goto label_1c8494;
        case 0x1c8498u: goto label_1c8498;
        case 0x1c849cu: goto label_1c849c;
        case 0x1c84a0u: goto label_1c84a0;
        case 0x1c84a4u: goto label_1c84a4;
        case 0x1c84a8u: goto label_1c84a8;
        case 0x1c84acu: goto label_1c84ac;
        case 0x1c84b0u: goto label_1c84b0;
        case 0x1c84b4u: goto label_1c84b4;
        case 0x1c84b8u: goto label_1c84b8;
        case 0x1c84bcu: goto label_1c84bc;
        case 0x1c84c0u: goto label_1c84c0;
        case 0x1c84c4u: goto label_1c84c4;
        case 0x1c84c8u: goto label_1c84c8;
        case 0x1c84ccu: goto label_1c84cc;
        case 0x1c84d0u: goto label_1c84d0;
        case 0x1c84d4u: goto label_1c84d4;
        case 0x1c84d8u: goto label_1c84d8;
        case 0x1c84dcu: goto label_1c84dc;
        case 0x1c84e0u: goto label_1c84e0;
        case 0x1c84e4u: goto label_1c84e4;
        case 0x1c84e8u: goto label_1c84e8;
        case 0x1c84ecu: goto label_1c84ec;
        case 0x1c84f0u: goto label_1c84f0;
        case 0x1c84f4u: goto label_1c84f4;
        case 0x1c84f8u: goto label_1c84f8;
        case 0x1c84fcu: goto label_1c84fc;
        case 0x1c8500u: goto label_1c8500;
        case 0x1c8504u: goto label_1c8504;
        case 0x1c8508u: goto label_1c8508;
        case 0x1c850cu: goto label_1c850c;
        case 0x1c8510u: goto label_1c8510;
        case 0x1c8514u: goto label_1c8514;
        case 0x1c8518u: goto label_1c8518;
        case 0x1c851cu: goto label_1c851c;
        case 0x1c8520u: goto label_1c8520;
        case 0x1c8524u: goto label_1c8524;
        case 0x1c8528u: goto label_1c8528;
        case 0x1c852cu: goto label_1c852c;
        case 0x1c8530u: goto label_1c8530;
        case 0x1c8534u: goto label_1c8534;
        case 0x1c8538u: goto label_1c8538;
        case 0x1c853cu: goto label_1c853c;
        case 0x1c8540u: goto label_1c8540;
        case 0x1c8544u: goto label_1c8544;
        case 0x1c8548u: goto label_1c8548;
        case 0x1c854cu: goto label_1c854c;
        case 0x1c8550u: goto label_1c8550;
        case 0x1c8554u: goto label_1c8554;
        case 0x1c8558u: goto label_1c8558;
        case 0x1c855cu: goto label_1c855c;
        case 0x1c8560u: goto label_1c8560;
        case 0x1c8564u: goto label_1c8564;
        case 0x1c8568u: goto label_1c8568;
        case 0x1c856cu: goto label_1c856c;
        case 0x1c8570u: goto label_1c8570;
        case 0x1c8574u: goto label_1c8574;
        case 0x1c8578u: goto label_1c8578;
        case 0x1c857cu: goto label_1c857c;
        case 0x1c8580u: goto label_1c8580;
        case 0x1c8584u: goto label_1c8584;
        case 0x1c8588u: goto label_1c8588;
        case 0x1c858cu: goto label_1c858c;
        default: break;
    }

    ctx->pc = 0x1c83c8u;

label_1c83c8:
    // 0x1c83c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c83c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1c83cc:
    // 0x1c83cc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1c83ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1c83d0:
    // 0x1c83d0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1c83d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1c83d4:
    // 0x1c83d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c83d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c83d8:
    // 0x1c83d8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1c83d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1c83dc:
    // 0x1c83dc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c83dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1c83e0:
    // 0x1c83e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c83e4:
    // 0x1c83e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c83e8:
    // 0x1c83e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c83ec:
    // 0x1c83ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c83ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1c83f0:
    // 0x1c83f0: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1c83f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c83f4:
    // 0x1c83f4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1c83f8:
    // 0x1c83f8: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1c83fc:
    // 0x1c83fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1c83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1c8400:
    // 0x1c8400: 0x40f809  jalr        $v0
label_1c8404:
    if (ctx->pc == 0x1C8404u) {
        ctx->pc = 0x1C8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8400u;
        // 0x1c8404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8408u;
        goto label_1c8408;
    }
    ctx->pc = 0x1C8400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8408u);
        ctx->pc = 0x1C8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8400u;
        // 0x1c8404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8400u, 0x1C8408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8408u;
label_1c8408:
    // 0x1c8408: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c8408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1c840c:
    // 0x1c840c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8410:
    // 0x1c8410: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1c8410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_1c8414:
    // 0x1c8414: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
label_1c8418:
    if (ctx->pc == 0x1C8418u) {
        ctx->pc = 0x1C8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8414u;
        // 0x1c8418: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C841Cu;
        goto label_1c841c;
    }
    ctx->pc = 0x1C8414u;
    {
        const bool branch_taken_0x1c8414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8414u;
        // 0x1c8418: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8414) {
            ctx->pc = 0x1C8560u;
            goto label_1c8560;
        }
    }
    ctx->pc = 0x1C841Cu;
label_1c841c:
    // 0x1c841c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1c8420:
    // 0x1c8420: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1c8424:
    // 0x1c8424: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_1c8428:
    if (ctx->pc == 0x1C8428u) {
        ctx->pc = 0x1C8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8424u;
        // 0x1c8428: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C842Cu;
        goto label_1c842c;
    }
    ctx->pc = 0x1C8424u;
    {
        const bool branch_taken_0x1c8424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8424u;
        // 0x1c8428: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8424) {
            ctx->pc = 0x1C8468u;
            goto label_1c8468;
        }
    }
    ctx->pc = 0x1C842Cu;
label_1c842c:
    // 0x1c842c: 0xc0720ba  jal         func_1C82E8
label_1c8430:
    if (ctx->pc == 0x1C8430u) {
        ctx->pc = 0x1C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C842Cu;
        // 0x1c8430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8434u;
        goto label_1c8434;
    }
    ctx->pc = 0x1C842Cu;
    SET_GPR_U32(ctx, 31, 0x1C8434u);
    ctx->pc = 0x1C8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C842Cu;
    // 0x1c8430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C82E8u, 0x1C842Cu, 0x1C8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8434u;
label_1c8434:
    // 0x1c8434: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1c8438:
    if (ctx->pc == 0x1C8438u) {
        ctx->pc = 0x1C8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8434u;
        // 0x1c8438: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C843Cu;
        goto label_1c843c;
    }
    ctx->pc = 0x1C8434u;
    {
        const bool branch_taken_0x1c8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8434u;
        // 0x1c8438: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8434) {
            ctx->pc = 0x1C8564u;
            goto label_1c8564;
        }
    }
    ctx->pc = 0x1C843Cu;
label_1c843c:
    // 0x1c843c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c843cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8440:
    // 0x1c8440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c8440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c8444:
    // 0x1c8444: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c8444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c8448:
    // 0x1c8448: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c844c:
    // 0x1c844c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c844cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c8450:
    // 0x1c8450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c8454:
    // 0x1c8454: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1c8454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_1c8458:
    // 0x1c8458: 0xc07207a  jal         func_1C81E8
label_1c845c:
    if (ctx->pc == 0x1C845Cu) {
        ctx->pc = 0x1C845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8458u;
        // 0x1c845c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8460u;
        goto label_1c8460;
    }
    ctx->pc = 0x1C8458u;
    SET_GPR_U32(ctx, 31, 0x1C8460u);
    ctx->pc = 0x1C845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8458u;
    // 0x1c845c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81E8u, 0x1C8458u, 0x1C8460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8460u;
label_1c8460:
    // 0x1c8460: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1c8464:
    if (ctx->pc == 0x1C8464u) {
        ctx->pc = 0x1C8468u;
        goto label_1c8468;
    }
    ctx->pc = 0x1C8460u;
    {
        const bool branch_taken_0x1c8460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8460) {
            ctx->pc = 0x1C854Cu;
            goto label_1c854c;
        }
    }
    ctx->pc = 0x1C8468u;
label_1c8468:
    // 0x1c8468: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c846c:
    // 0x1c846c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c8470:
    // 0x1c8470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8474:
    // 0x1c8474: 0xc139cb2  jal         func_4E72C8
label_1c8478:
    if (ctx->pc == 0x1C8478u) {
        ctx->pc = 0x1C8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8474u;
        // 0x1c8478: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C847Cu;
        goto label_1c847c;
    }
    ctx->pc = 0x1C8474u;
    SET_GPR_U32(ctx, 31, 0x1C847Cu);
    ctx->pc = 0x1C8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8474u;
    // 0x1c8478: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E72C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E72C8u, 0x1C8474u, 0x1C847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C847Cu;
label_1c847c:
    // 0x1c847c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c8480:
    // 0x1c8480: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c8480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8484:
    // 0x1c8484: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_1c8488:
    if (ctx->pc == 0x1C8488u) {
        ctx->pc = 0x1C8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8484u;
        // 0x1c8488: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C848Cu;
        goto label_1c848c;
    }
    ctx->pc = 0x1C8484u;
    {
        const bool branch_taken_0x1c8484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8484u;
        // 0x1c8488: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8484) {
            ctx->pc = 0x1C8560u;
            goto label_1c8560;
        }
    }
    ctx->pc = 0x1C848Cu;
label_1c848c:
    // 0x1c848c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c8490:
    // 0x1c8490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8494:
    // 0x1c8494: 0xc139ab8  jal         func_4E6AE0
label_1c8498:
    if (ctx->pc == 0x1C8498u) {
        ctx->pc = 0x1C8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8494u;
        // 0x1c8498: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C849Cu;
        goto label_1c849c;
    }
    ctx->pc = 0x1C8494u;
    SET_GPR_U32(ctx, 31, 0x1C849Cu);
    ctx->pc = 0x1C8498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8494u;
    // 0x1c8498: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6AE0u, 0x1C8494u, 0x1C849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C849Cu;
label_1c849c:
    // 0x1c849c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c84a0:
    // 0x1c84a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c84a4:
    // 0x1c84a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c84a8:
    // 0x1c84a8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1c84ac:
    if (ctx->pc == 0x1C84ACu) {
        ctx->pc = 0x1C84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84A8u;
        // 0x1c84ac: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84B0u;
        goto label_1c84b0;
    }
    ctx->pc = 0x1C84A8u;
    {
        const bool branch_taken_0x1c84a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84A8u;
        // 0x1c84ac: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84a8) {
            ctx->pc = 0x1C84C4u;
            goto label_1c84c4;
        }
    }
    ctx->pc = 0x1C84B0u;
label_1c84b0:
    // 0x1c84b0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1c84b4:
    // 0x1c84b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1c84b8:
    // 0x1c84b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c84b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1c84bc:
    // 0x1c84bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c84c0:
    if (ctx->pc == 0x1C84C0u) {
        ctx->pc = 0x1C84C4u;
        goto label_1c84c4;
    }
    ctx->pc = 0x1C84BCu;
    {
        const bool branch_taken_0x1c84bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c84bc) {
            ctx->pc = 0x1C84C8u;
            goto label_1c84c8;
        }
    }
    ctx->pc = 0x1C84C4u;
label_1c84c4:
    // 0x1c84c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c84c8:
    // 0x1c84c8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1c84cc:
    if (ctx->pc == 0x1C84CCu) {
        ctx->pc = 0x1C84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84C8u;
        // 0x1c84cc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84D0u;
        goto label_1c84d0;
    }
    ctx->pc = 0x1C84C8u;
    {
        const bool branch_taken_0x1c84c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84C8u;
        // 0x1c84cc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c84c8) {
            ctx->pc = 0x1C8500u;
            goto label_1c8500;
        }
    }
    ctx->pc = 0x1C84D0u;
label_1c84d0:
    // 0x1c84d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c84d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c84d4:
    // 0x1c84d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c84d8:
    // 0x1c84d8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c84dc:
    // 0x1c84dc: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1c84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1c84e0:
    // 0x1c84e0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1c84e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c84e4:
    // 0x1c84e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c84e8:
    // 0x1c84e8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1c84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1c84ec:
    // 0x1c84ec: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1c84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_1c84f0:
    // 0x1c84f0: 0xc139c12  jal         func_4E7048
label_1c84f4:
    if (ctx->pc == 0x1C84F4u) {
        ctx->pc = 0x1C84F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84F0u;
        // 0x1c84f4: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84F8u;
        goto label_1c84f8;
    }
    ctx->pc = 0x1C84F0u;
    SET_GPR_U32(ctx, 31, 0x1C84F8u);
    ctx->pc = 0x1C84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C84F0u;
    // 0x1c84f4: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7048u, 0x1C84F0u, 0x1C84F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C84F8u;
label_1c84f8:
    // 0x1c84f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c84fc:
    // 0x1c84fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c8500:
    // 0x1c8500: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c8500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8504:
    // 0x1c8504: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x1c8504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c8508:
    // 0x1c8508: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1c850c:
    if (ctx->pc == 0x1C850Cu) {
        ctx->pc = 0x1C850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8508u;
        // 0x1c850c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8510u;
        goto label_1c8510;
    }
    ctx->pc = 0x1C8508u;
    {
        const bool branch_taken_0x1c8508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8508u;
        // 0x1c850c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8508) {
            ctx->pc = 0x1C8560u;
            goto label_1c8560;
        }
    }
    ctx->pc = 0x1C8510u;
label_1c8510:
    // 0x1c8510: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c8514:
    // 0x1c8514: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c8514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c8518:
    // 0x1c8518: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c851c:
    if (ctx->pc == 0x1C851Cu) {
        ctx->pc = 0x1C851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8518u;
        // 0x1c851c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8520u;
        goto label_1c8520;
    }
    ctx->pc = 0x1C8518u;
    {
        const bool branch_taken_0x1c8518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8518u;
        // 0x1c851c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8518) {
            ctx->pc = 0x1C853Cu;
            goto label_1c853c;
        }
    }
    ctx->pc = 0x1C8520u;
label_1c8520:
    // 0x1c8520: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x1c8520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8524:
    // 0x1c8524: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1c8524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1c8528:
    // 0x1c8528: 0x5050ffc4  beql        $v0, $s0, . + 4 + (-0x3C << 2)
label_1c852c:
    if (ctx->pc == 0x1C852Cu) {
        ctx->pc = 0x1C852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8528u;
        // 0x1c852c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8530u;
        goto label_1c8530;
    }
    ctx->pc = 0x1C8528u;
    {
        const bool branch_taken_0x1c8528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c8528) {
            ctx->pc = 0x1C852Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8528u;
            // 0x1c852c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C843Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c843c;
        }
    }
    ctx->pc = 0x1C8530u;
label_1c8530:
    // 0x1c8530: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x1c8530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_1c8534:
    // 0x1c8534: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1c8534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1c8538:
    // 0x1c8538: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1c8538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_1c853c:
    // 0x1c853c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1c853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1c8540:
    // 0x1c8540: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c8544:
    // 0x1c8544: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_1c8548:
    if (ctx->pc == 0x1C8548u) {
        ctx->pc = 0x1C8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8544u;
        // 0x1c8548: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C854Cu;
        goto label_1c854c;
    }
    ctx->pc = 0x1C8544u;
    {
        const bool branch_taken_0x1c8544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8544u;
        // 0x1c8548: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8544) {
            ctx->pc = 0x1C8520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8520;
        }
    }
    ctx->pc = 0x1C854Cu;
label_1c854c:
    // 0x1c854c: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
label_1c8550:
    if (ctx->pc == 0x1C8550u) {
        ctx->pc = 0x1C8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C854Cu;
        // 0x1c8550: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8554u;
        goto label_1c8554;
    }
    ctx->pc = 0x1C854Cu;
    {
        const bool branch_taken_0x1c854c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c854c) {
            ctx->pc = 0x1C8550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C854Cu;
            // 0x1c8550: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8564u;
            goto label_1c8564;
        }
    }
    ctx->pc = 0x1C8554u;
label_1c8554:
    // 0x1c8554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8558:
    // 0x1c8558: 0xc07203a  jal         func_1C80E8
label_1c855c:
    if (ctx->pc == 0x1C855Cu) {
        ctx->pc = 0x1C855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8558u;
        // 0x1c855c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8560u;
        goto label_1c8560;
    }
    ctx->pc = 0x1C8558u;
    SET_GPR_U32(ctx, 31, 0x1C8560u);
    ctx->pc = 0x1C855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8558u;
    // 0x1c855c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80E8u, 0x1C8558u, 0x1C8560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8560u;
label_1c8560:
    // 0x1c8560: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c8560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c8564:
    // 0x1c8564: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1c8564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c8568:
    // 0x1c8568: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c856c:
    // 0x1c856c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1c856cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c8570:
    // 0x1c8570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c8570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c8574:
    // 0x1c8574: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1c8574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c8578:
    // 0x1c8578: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c8578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1c857c:
    // 0x1c857c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c857cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1c8580:
    // 0x1c8580: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c8580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1c8584:
    // 0x1c8584: 0x3e00008  jr          $ra
label_1c8588:
    if (ctx->pc == 0x1C8588u) {
        ctx->pc = 0x1C8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8584u;
        // 0x1c8588: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C858Cu;
        goto label_1c858c;
    }
    ctx->pc = 0x1C8584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8584u;
        // 0x1c8588: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C858Cu;
label_1c858c:
    // 0x1c858c: 0x0  nop
    ctx->pc = 0x1c858cu;
    // NOP
    ctx->pc = 0x1c8590u;
}
