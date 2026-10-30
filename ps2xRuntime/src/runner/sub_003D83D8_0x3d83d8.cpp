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

// Function: sub_003D83D8
// Address: 0x3d83d8 - 0x3d85f0
void sub_003D83D8_0x3d83d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D83D8_0x3d83d8");
#endif

    switch (ctx->pc) {
        case 0x3d83d8u: goto label_3d83d8;
        case 0x3d83dcu: goto label_3d83dc;
        case 0x3d83e0u: goto label_3d83e0;
        case 0x3d83e4u: goto label_3d83e4;
        case 0x3d83e8u: goto label_3d83e8;
        case 0x3d83ecu: goto label_3d83ec;
        case 0x3d83f0u: goto label_3d83f0;
        case 0x3d83f4u: goto label_3d83f4;
        case 0x3d83f8u: goto label_3d83f8;
        case 0x3d83fcu: goto label_3d83fc;
        case 0x3d8400u: goto label_3d8400;
        case 0x3d8404u: goto label_3d8404;
        case 0x3d8408u: goto label_3d8408;
        case 0x3d840cu: goto label_3d840c;
        case 0x3d8410u: goto label_3d8410;
        case 0x3d8414u: goto label_3d8414;
        case 0x3d8418u: goto label_3d8418;
        case 0x3d841cu: goto label_3d841c;
        case 0x3d8420u: goto label_3d8420;
        case 0x3d8424u: goto label_3d8424;
        case 0x3d8428u: goto label_3d8428;
        case 0x3d842cu: goto label_3d842c;
        case 0x3d8430u: goto label_3d8430;
        case 0x3d8434u: goto label_3d8434;
        case 0x3d8438u: goto label_3d8438;
        case 0x3d843cu: goto label_3d843c;
        case 0x3d8440u: goto label_3d8440;
        case 0x3d8444u: goto label_3d8444;
        case 0x3d8448u: goto label_3d8448;
        case 0x3d844cu: goto label_3d844c;
        case 0x3d8450u: goto label_3d8450;
        case 0x3d8454u: goto label_3d8454;
        case 0x3d8458u: goto label_3d8458;
        case 0x3d845cu: goto label_3d845c;
        case 0x3d8460u: goto label_3d8460;
        case 0x3d8464u: goto label_3d8464;
        case 0x3d8468u: goto label_3d8468;
        case 0x3d846cu: goto label_3d846c;
        case 0x3d8470u: goto label_3d8470;
        case 0x3d8474u: goto label_3d8474;
        case 0x3d8478u: goto label_3d8478;
        case 0x3d847cu: goto label_3d847c;
        case 0x3d8480u: goto label_3d8480;
        case 0x3d8484u: goto label_3d8484;
        case 0x3d8488u: goto label_3d8488;
        case 0x3d848cu: goto label_3d848c;
        case 0x3d8490u: goto label_3d8490;
        case 0x3d8494u: goto label_3d8494;
        case 0x3d8498u: goto label_3d8498;
        case 0x3d849cu: goto label_3d849c;
        case 0x3d84a0u: goto label_3d84a0;
        case 0x3d84a4u: goto label_3d84a4;
        case 0x3d84a8u: goto label_3d84a8;
        case 0x3d84acu: goto label_3d84ac;
        case 0x3d84b0u: goto label_3d84b0;
        case 0x3d84b4u: goto label_3d84b4;
        case 0x3d84b8u: goto label_3d84b8;
        case 0x3d84bcu: goto label_3d84bc;
        case 0x3d84c0u: goto label_3d84c0;
        case 0x3d84c4u: goto label_3d84c4;
        case 0x3d84c8u: goto label_3d84c8;
        case 0x3d84ccu: goto label_3d84cc;
        case 0x3d84d0u: goto label_3d84d0;
        case 0x3d84d4u: goto label_3d84d4;
        case 0x3d84d8u: goto label_3d84d8;
        case 0x3d84dcu: goto label_3d84dc;
        case 0x3d84e0u: goto label_3d84e0;
        case 0x3d84e4u: goto label_3d84e4;
        case 0x3d84e8u: goto label_3d84e8;
        case 0x3d84ecu: goto label_3d84ec;
        case 0x3d84f0u: goto label_3d84f0;
        case 0x3d84f4u: goto label_3d84f4;
        case 0x3d84f8u: goto label_3d84f8;
        case 0x3d84fcu: goto label_3d84fc;
        case 0x3d8500u: goto label_3d8500;
        case 0x3d8504u: goto label_3d8504;
        case 0x3d8508u: goto label_3d8508;
        case 0x3d850cu: goto label_3d850c;
        case 0x3d8510u: goto label_3d8510;
        case 0x3d8514u: goto label_3d8514;
        case 0x3d8518u: goto label_3d8518;
        case 0x3d851cu: goto label_3d851c;
        case 0x3d8520u: goto label_3d8520;
        case 0x3d8524u: goto label_3d8524;
        case 0x3d8528u: goto label_3d8528;
        case 0x3d852cu: goto label_3d852c;
        case 0x3d8530u: goto label_3d8530;
        case 0x3d8534u: goto label_3d8534;
        case 0x3d8538u: goto label_3d8538;
        case 0x3d853cu: goto label_3d853c;
        case 0x3d8540u: goto label_3d8540;
        case 0x3d8544u: goto label_3d8544;
        case 0x3d8548u: goto label_3d8548;
        case 0x3d854cu: goto label_3d854c;
        case 0x3d8550u: goto label_3d8550;
        case 0x3d8554u: goto label_3d8554;
        case 0x3d8558u: goto label_3d8558;
        case 0x3d855cu: goto label_3d855c;
        case 0x3d8560u: goto label_3d8560;
        case 0x3d8564u: goto label_3d8564;
        case 0x3d8568u: goto label_3d8568;
        case 0x3d856cu: goto label_3d856c;
        case 0x3d8570u: goto label_3d8570;
        case 0x3d8574u: goto label_3d8574;
        case 0x3d8578u: goto label_3d8578;
        case 0x3d857cu: goto label_3d857c;
        case 0x3d8580u: goto label_3d8580;
        case 0x3d8584u: goto label_3d8584;
        case 0x3d8588u: goto label_3d8588;
        case 0x3d858cu: goto label_3d858c;
        case 0x3d8590u: goto label_3d8590;
        case 0x3d8594u: goto label_3d8594;
        case 0x3d8598u: goto label_3d8598;
        case 0x3d859cu: goto label_3d859c;
        case 0x3d85a0u: goto label_3d85a0;
        case 0x3d85a4u: goto label_3d85a4;
        case 0x3d85a8u: goto label_3d85a8;
        case 0x3d85acu: goto label_3d85ac;
        case 0x3d85b0u: goto label_3d85b0;
        case 0x3d85b4u: goto label_3d85b4;
        case 0x3d85b8u: goto label_3d85b8;
        case 0x3d85bcu: goto label_3d85bc;
        case 0x3d85c0u: goto label_3d85c0;
        case 0x3d85c4u: goto label_3d85c4;
        case 0x3d85c8u: goto label_3d85c8;
        case 0x3d85ccu: goto label_3d85cc;
        case 0x3d85d0u: goto label_3d85d0;
        case 0x3d85d4u: goto label_3d85d4;
        case 0x3d85d8u: goto label_3d85d8;
        case 0x3d85dcu: goto label_3d85dc;
        case 0x3d85e0u: goto label_3d85e0;
        case 0x3d85e4u: goto label_3d85e4;
        case 0x3d85e8u: goto label_3d85e8;
        case 0x3d85ecu: goto label_3d85ec;
        default: break;
    }

    ctx->pc = 0x3d83d8u;

label_3d83d8:
    // 0x3d83d8: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x3d83d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_3d83dc:
    // 0x3d83dc: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x3d83dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_3d83e0:
    // 0x3d83e0: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x3d83e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
label_3d83e4:
    // 0x3d83e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d83e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d83e8:
    // 0x3d83e8: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d83e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_3d83ec:
    // 0x3d83ec: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x3d83ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_3d83f0:
    // 0x3d83f0: 0x7fb40860  sq          $s4, 0x860($sp)
    ctx->pc = 0x3d83f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 20));
label_3d83f4:
    // 0x3d83f4: 0x7fb50850  sq          $s5, 0x850($sp)
    ctx->pc = 0x3d83f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 21));
label_3d83f8:
    // 0x3d83f8: 0xffbf0840  sd          $ra, 0x840($sp)
    ctx->pc = 0x3d83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 31));
label_3d83fc:
    // 0x3d83fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d8400:
    // 0x3d8400: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8404:
    // 0x3d8404: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8408:
    // 0x3d8408: 0x40f809  jalr        $v0
label_3d840c:
    if (ctx->pc == 0x3D840Cu) {
        ctx->pc = 0x3D840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8408u;
        // 0x3d840c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8410u;
        goto label_3d8410;
    }
    ctx->pc = 0x3D8408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8410u);
        ctx->pc = 0x3D840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8408u;
        // 0x3d840c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8408u, 0x3D8410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8410u;
label_3d8410:
    // 0x3d8410: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d8410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8414:
    // 0x3d8414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d8414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d8418:
    // 0x3d8418: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d8418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d841c:
    // 0x3d841c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d8420:
    // 0x3d8420: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d8424:
    // 0x3d8424: 0x0  nop
    ctx->pc = 0x3d8424u;
    // NOP
label_3d8428:
    // 0x3d8428: 0x0  nop
    ctx->pc = 0x3d8428u;
    // NOP
label_3d842c:
    // 0x3d842c: 0x0  nop
    ctx->pc = 0x3d842cu;
    // NOP
label_3d8430:
    // 0x3d8430: 0x0  nop
    ctx->pc = 0x3d8430u;
    // NOP
label_3d8434:
    // 0x3d8434: 0x0  nop
    ctx->pc = 0x3d8434u;
    // NOP
label_3d8438:
    // 0x3d8438: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d843c:
    if (ctx->pc == 0x3D843Cu) {
        ctx->pc = 0x3D843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8438u;
        // 0x3d843c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8440u;
        goto label_3d8440;
    }
    ctx->pc = 0x3D8438u;
    {
        const bool branch_taken_0x3d8438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8438u;
        // 0x3d843c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8438) {
            ctx->pc = 0x3D8428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D8440u;
label_3d8440:
    // 0x3d8440: 0xc138ddc  jal         func_4E3770
label_3d8444:
    if (ctx->pc == 0x3D8444u) {
        ctx->pc = 0x3D8448u;
        goto label_3d8448;
    }
    ctx->pc = 0x3D8440u;
    SET_GPR_U32(ctx, 31, 0x3D8448u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D8440u, 0x3D8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8448u;
label_3d8448:
    // 0x3d8448: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3d8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d844c:
    // 0x3d844c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3d8450:
    if (ctx->pc == 0x3D8450u) {
        ctx->pc = 0x3D8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D844Cu;
        // 0x3d8450: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8454u;
        goto label_3d8454;
    }
    ctx->pc = 0x3D844Cu;
    {
        const bool branch_taken_0x3d844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d844c) {
            ctx->pc = 0x3D8450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D844Cu;
            // 0x3d8450: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8498u;
            goto label_3d8498;
        }
    }
    ctx->pc = 0x3D8454u;
label_3d8454:
    // 0x3d8454: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d8454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d8458:
    // 0x3d8458: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x3d8458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d845c:
    // 0x3d845c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3d845cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3d8460:
    // 0x3d8460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d8460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d8464:
    // 0x3d8464: 0xc0e94a0  jal         func_3A5280
label_3d8468:
    if (ctx->pc == 0x3D8468u) {
        ctx->pc = 0x3D8468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8464u;
        // 0x3d8468: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D846Cu;
        goto label_3d846c;
    }
    ctx->pc = 0x3D8464u;
    SET_GPR_U32(ctx, 31, 0x3D846Cu);
    ctx->pc = 0x3D8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8464u;
    // 0x3d8468: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3D8464u, 0x3D846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D846Cu;
label_3d846c:
    // 0x3d846c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3d8470:
    if (ctx->pc == 0x3D8470u) {
        ctx->pc = 0x3D8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D846Cu;
        // 0x3d8470: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8474u;
        goto label_3d8474;
    }
    ctx->pc = 0x3D846Cu;
    {
        const bool branch_taken_0x3d846c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D846Cu;
        // 0x3d8470: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d846c) {
            ctx->pc = 0x3D8494u;
            goto label_3d8494;
        }
    }
    ctx->pc = 0x3D8474u;
label_3d8474:
    // 0x3d8474: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d8474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d8478:
    // 0x3d8478: 0xc0cd4ee  jal         func_3353B8
label_3d847c:
    if (ctx->pc == 0x3D847Cu) {
        ctx->pc = 0x3D847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8478u;
        // 0x3d847c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8480u;
        goto label_3d8480;
    }
    ctx->pc = 0x3D8478u;
    SET_GPR_U32(ctx, 31, 0x3D8480u);
    ctx->pc = 0x3D847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8478u;
    // 0x3d847c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D8478u, 0x3D8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8480u;
label_3d8480:
    // 0x3d8480: 0x2445001e  addiu       $a1, $v0, 0x1E
    ctx->pc = 0x3d8480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_3d8484:
    // 0x3d8484: 0xc0e858c  jal         func_3A1630
label_3d8488:
    if (ctx->pc == 0x3D8488u) {
        ctx->pc = 0x3D8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8484u;
        // 0x3d8488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D848Cu;
        goto label_3d848c;
    }
    ctx->pc = 0x3D8484u;
    SET_GPR_U32(ctx, 31, 0x3D848Cu);
    ctx->pc = 0x3D8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8484u;
    // 0x3d8488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8484u, 0x3D848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D848Cu;
label_3d848c:
    // 0x3d848c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8490:
    // 0x3d8490: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3d8490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_3d8494:
    // 0x3d8494: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3d8494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3d8498:
    // 0x3d8498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d8498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d849c:
    // 0x3d849c: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_3d84a0:
    if (ctx->pc == 0x3D84A0u) {
        ctx->pc = 0x3D84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D849Cu;
        // 0x3d84a0: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D84A4u;
        goto label_3d84a4;
    }
    ctx->pc = 0x3D849Cu;
    {
        const bool branch_taken_0x3d849c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D849Cu;
        // 0x3d84a0: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d849c) {
            ctx->pc = 0x3D85CCu;
            goto label_3d85cc;
        }
    }
    ctx->pc = 0x3D84A4u;
label_3d84a4:
    // 0x3d84a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d84a8:
    // 0x3d84a8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x3d84a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3d84ac:
    // 0x3d84ac: 0x2455b8b8  addiu       $s5, $v0, -0x4748
    ctx->pc = 0x3d84acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3d84b0:
    // 0x3d84b0: 0xc0cd4ee  jal         func_3353B8
label_3d84b4:
    if (ctx->pc == 0x3D84B4u) {
        ctx->pc = 0x3D84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84B0u;
        // 0x3d84b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D84B8u;
        goto label_3d84b8;
    }
    ctx->pc = 0x3D84B0u;
    SET_GPR_U32(ctx, 31, 0x3D84B8u);
    ctx->pc = 0x3D84B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D84B0u;
    // 0x3d84b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D84B0u, 0x3D84B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D84B8u;
label_3d84b8:
    // 0x3d84b8: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x3d84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3d84bc:
    // 0x3d84bc: 0xc0e858c  jal         func_3A1630
label_3d84c0:
    if (ctx->pc == 0x3D84C0u) {
        ctx->pc = 0x3D84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84BCu;
        // 0x3d84c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D84C4u;
        goto label_3d84c4;
    }
    ctx->pc = 0x3D84BCu;
    SET_GPR_U32(ctx, 31, 0x3D84C4u);
    ctx->pc = 0x3D84C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D84BCu;
    // 0x3d84c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D84BCu, 0x3D84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D84C4u;
label_3d84c4:
    // 0x3d84c4: 0x9642006e  lhu         $v0, 0x6E($s2)
    ctx->pc = 0x3d84c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
label_3d84c8:
    // 0x3d84c8: 0x27b40410  addiu       $s4, $sp, 0x410
    ctx->pc = 0x3d84c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d84cc:
    // 0x3d84cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d84d0:
    // 0x3d84d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3d84d4:
    if (ctx->pc == 0x3D84D4u) {
        ctx->pc = 0x3D84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84D0u;
        // 0x3d84d4: 0xae4000b4  sw          $zero, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D84D8u;
        goto label_3d84d8;
    }
    ctx->pc = 0x3D84D0u;
    {
        const bool branch_taken_0x3d84d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D84D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84D0u;
        // 0x3d84d4: 0xae4000b4  sw          $zero, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d84d0) {
            ctx->pc = 0x3D8518u;
            goto label_3d8518;
        }
    }
    ctx->pc = 0x3D84D8u;
label_3d84d8:
    // 0x3d84d8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d84d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d84dc:
    // 0x3d84dc: 0x3c04810e  lui         $a0, 0x810E
    ctx->pc = 0x3d84dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33038 << 16));
label_3d84e0:
    // 0x3d84e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d84e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d84e4:
    // 0x3d84e4: 0x34842b6f  ori         $a0, $a0, 0x2B6F
    ctx->pc = 0x3d84e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11119);
label_3d84e8:
    // 0x3d84e8: 0xc045c8e  jal         func_117238
label_3d84ec:
    if (ctx->pc == 0x3D84ECu) {
        ctx->pc = 0x3D84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D84E8u;
        // 0x3d84ec: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D84F0u;
        goto label_3d84f0;
    }
    ctx->pc = 0x3D84E8u;
    SET_GPR_U32(ctx, 31, 0x3D84F0u);
    ctx->pc = 0x3D84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D84E8u;
    // 0x3d84ec: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3D84E8u, 0x3D84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D84F0u;
label_3d84f0:
    // 0x3d84f0: 0x3c03baba  lui         $v1, 0xBABA
    ctx->pc = 0x3d84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47802 << 16));
label_3d84f4:
    // 0x3d84f4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3d84f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3d84f8:
    // 0x3d84f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d84f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d84fc:
    // 0x3d84fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d84fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d8500:
    // 0x3d8500: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3d8500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3d8504:
    // 0x3d8504: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d8504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d8508:
    // 0x3d8508: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x3d8508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_3d850c:
    // 0x3d850c: 0xc0cd518  jal         func_335460
label_3d8510:
    if (ctx->pc == 0x3D8510u) {
        ctx->pc = 0x3D8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D850Cu;
        // 0x3d8510: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8514u;
        goto label_3d8514;
    }
    ctx->pc = 0x3D850Cu;
    SET_GPR_U32(ctx, 31, 0x3D8514u);
    ctx->pc = 0x3D8510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D850Cu;
    // 0x3d8510: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D850Cu, 0x3D8514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8514u;
label_3d8514:
    // 0x3d8514: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3d8514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3d8518:
    // 0x3d8518: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3d8518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d851c:
    // 0x3d851c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3d851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d8520:
    // 0x3d8520: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
label_3d8524:
    if (ctx->pc == 0x3D8524u) {
        ctx->pc = 0x3D8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8520u;
        // 0x3d8524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8528u;
        goto label_3d8528;
    }
    ctx->pc = 0x3D8520u;
    {
        const bool branch_taken_0x3d8520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d8520) {
            ctx->pc = 0x3D8524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8520u;
            // 0x3d8524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8594u;
            goto label_3d8594;
        }
    }
    ctx->pc = 0x3D8528u;
label_3d8528:
    // 0x3d8528: 0x3c02baba  lui         $v0, 0xBABA
    ctx->pc = 0x3d8528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47802 << 16));
label_3d852c:
    // 0x3d852c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3d852cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3d8530:
    // 0x3d8530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d8530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d8534:
    // 0x3d8534: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3d8534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3d8538:
    // 0x3d8538: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x3d8538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_3d853c:
    // 0x3d853c: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d853cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d8540:
    // 0x3d8540: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d8540u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d8544:
    // 0x3d8544: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d8544u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d8548:
    // 0x3d8548: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3d8548u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3d854c:
    // 0x3d854c: 0x27a60830  addiu       $a2, $sp, 0x830
    ctx->pc = 0x3d854cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d8550:
    // 0x3d8550: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3d8550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3d8554:
    // 0x3d8554: 0x261048d8  addiu       $s0, $s0, 0x48D8
    ctx->pc = 0x3d8554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18648));
label_3d8558:
    // 0x3d8558: 0x7fa40830  sq          $a0, 0x830($sp)
    ctx->pc = 0x3d8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 4));
label_3d855c:
    // 0x3d855c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d8560:
    // 0x3d8560: 0xc0e9f84  jal         func_3A7E10
label_3d8564:
    if (ctx->pc == 0x3D8564u) {
        ctx->pc = 0x3D8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8560u;
        // 0x3d8564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8568u;
        goto label_3d8568;
    }
    ctx->pc = 0x3D8560u;
    SET_GPR_U32(ctx, 31, 0x3D8568u);
    ctx->pc = 0x3D8564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8560u;
    // 0x3d8564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3D8560u, 0x3D8568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8568u;
label_3d8568:
    // 0x3d8568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d856c:
    // 0x3d856c: 0xc0f15bc  jal         func_3C56F0
label_3d8570:
    if (ctx->pc == 0x3D8570u) {
        ctx->pc = 0x3D8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D856Cu;
        // 0x3d8570: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8574u;
        goto label_3d8574;
    }
    ctx->pc = 0x3D856Cu;
    SET_GPR_U32(ctx, 31, 0x3D8574u);
    ctx->pc = 0x3D8570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D856Cu;
    // 0x3d8570: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D856Cu, 0x3D8574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8574u;
label_3d8574:
    // 0x3d8574: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3d8574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3d8578:
    // 0x3d8578: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d8578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d857c:
    // 0x3d857c: 0xc0cd4ee  jal         func_3353B8
label_3d8580:
    if (ctx->pc == 0x3D8580u) {
        ctx->pc = 0x3D8580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D857Cu;
        // 0x3d8580: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8584u;
        goto label_3d8584;
    }
    ctx->pc = 0x3D857Cu;
    SET_GPR_U32(ctx, 31, 0x3D8584u);
    ctx->pc = 0x3D8580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D857Cu;
    // 0x3d8580: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D857Cu, 0x3D8584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8584u;
label_3d8584:
    // 0x3d8584: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3d8584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3d8588:
    // 0x3d8588: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3d8588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3d858c:
    // 0x3d858c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3d858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d8590:
    // 0x3d8590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d8590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d8594:
    // 0x3d8594: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3d8594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3d8598:
    // 0x3d8598: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d8598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d859c:
    // 0x3d859c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d85a0:
    // 0x3d85a0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3d85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_3d85a4:
    // 0x3d85a4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d85a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d85a8:
    // 0x3d85a8: 0xc0e94a0  jal         func_3A5280
label_3d85ac:
    if (ctx->pc == 0x3D85ACu) {
        ctx->pc = 0x3D85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85A8u;
        // 0x3d85ac: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D85B0u;
        goto label_3d85b0;
    }
    ctx->pc = 0x3D85A8u;
    SET_GPR_U32(ctx, 31, 0x3D85B0u);
    ctx->pc = 0x3D85ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85A8u;
    // 0x3d85ac: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3D85A8u, 0x3D85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85B0u;
label_3d85b0:
    // 0x3d85b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d85b4:
    if (ctx->pc == 0x3D85B4u) {
        ctx->pc = 0x3D85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85B0u;
        // 0x3d85b4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D85B8u;
        goto label_3d85b8;
    }
    ctx->pc = 0x3D85B0u;
    {
        const bool branch_taken_0x3d85b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85B0u;
        // 0x3d85b4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d85b0) {
            ctx->pc = 0x3D85CCu;
            goto label_3d85cc;
        }
    }
    ctx->pc = 0x3D85B8u;
label_3d85b8:
    // 0x3d85b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d85b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d85bc:
    // 0x3d85bc: 0xc0e858c  jal         func_3A1630
label_3d85c0:
    if (ctx->pc == 0x3D85C0u) {
        ctx->pc = 0x3D85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85BCu;
        // 0x3d85c0: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D85C4u;
        goto label_3d85c4;
    }
    ctx->pc = 0x3D85BCu;
    SET_GPR_U32(ctx, 31, 0x3D85C4u);
    ctx->pc = 0x3D85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85BCu;
    // 0x3d85c0: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D85BCu, 0x3D85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85C4u;
label_3d85c4:
    // 0x3d85c4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3d85c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3d85c8:
    // 0x3d85c8: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d85c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3d85cc:
    // 0x3d85cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d85ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d85d0:
    // 0x3d85d0: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x3d85d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3d85d4:
    // 0x3d85d4: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x3d85d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3d85d8:
    // 0x3d85d8: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x3d85d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3d85dc:
    // 0x3d85dc: 0x7bb40860  lq          $s4, 0x860($sp)
    ctx->pc = 0x3d85dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_3d85e0:
    // 0x3d85e0: 0x7bb50850  lq          $s5, 0x850($sp)
    ctx->pc = 0x3d85e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_3d85e4:
    // 0x3d85e4: 0xdfbf0840  ld          $ra, 0x840($sp)
    ctx->pc = 0x3d85e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
label_3d85e8:
    // 0x3d85e8: 0x3e00008  jr          $ra
label_3d85ec:
    if (ctx->pc == 0x3D85ECu) {
        ctx->pc = 0x3D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85E8u;
        // 0x3d85ec: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D85F0u;
        goto label_fallthrough_0x3d85e8;
    }
    ctx->pc = 0x3D85E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85E8u;
        // 0x3d85ec: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D85E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d85e8:
    ctx->pc = 0x3D85F0u;
}
