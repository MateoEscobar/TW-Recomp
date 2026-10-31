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

// Function: sub_00446400
// Address: 0x446400 - 0x446608
void sub_00446400_0x446400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446400_0x446400");
#endif

    switch (ctx->pc) {
        case 0x446400u: goto label_446400;
        case 0x446404u: goto label_446404;
        case 0x446408u: goto label_446408;
        case 0x44640cu: goto label_44640c;
        case 0x446410u: goto label_446410;
        case 0x446414u: goto label_446414;
        case 0x446418u: goto label_446418;
        case 0x44641cu: goto label_44641c;
        case 0x446420u: goto label_446420;
        case 0x446424u: goto label_446424;
        case 0x446428u: goto label_446428;
        case 0x44642cu: goto label_44642c;
        case 0x446430u: goto label_446430;
        case 0x446434u: goto label_446434;
        case 0x446438u: goto label_446438;
        case 0x44643cu: goto label_44643c;
        case 0x446440u: goto label_446440;
        case 0x446444u: goto label_446444;
        case 0x446448u: goto label_446448;
        case 0x44644cu: goto label_44644c;
        case 0x446450u: goto label_446450;
        case 0x446454u: goto label_446454;
        case 0x446458u: goto label_446458;
        case 0x44645cu: goto label_44645c;
        case 0x446460u: goto label_446460;
        case 0x446464u: goto label_446464;
        case 0x446468u: goto label_446468;
        case 0x44646cu: goto label_44646c;
        case 0x446470u: goto label_446470;
        case 0x446474u: goto label_446474;
        case 0x446478u: goto label_446478;
        case 0x44647cu: goto label_44647c;
        case 0x446480u: goto label_446480;
        case 0x446484u: goto label_446484;
        case 0x446488u: goto label_446488;
        case 0x44648cu: goto label_44648c;
        case 0x446490u: goto label_446490;
        case 0x446494u: goto label_446494;
        case 0x446498u: goto label_446498;
        case 0x44649cu: goto label_44649c;
        case 0x4464a0u: goto label_4464a0;
        case 0x4464a4u: goto label_4464a4;
        case 0x4464a8u: goto label_4464a8;
        case 0x4464acu: goto label_4464ac;
        case 0x4464b0u: goto label_4464b0;
        case 0x4464b4u: goto label_4464b4;
        case 0x4464b8u: goto label_4464b8;
        case 0x4464bcu: goto label_4464bc;
        case 0x4464c0u: goto label_4464c0;
        case 0x4464c4u: goto label_4464c4;
        case 0x4464c8u: goto label_4464c8;
        case 0x4464ccu: goto label_4464cc;
        case 0x4464d0u: goto label_4464d0;
        case 0x4464d4u: goto label_4464d4;
        case 0x4464d8u: goto label_4464d8;
        case 0x4464dcu: goto label_4464dc;
        case 0x4464e0u: goto label_4464e0;
        case 0x4464e4u: goto label_4464e4;
        case 0x4464e8u: goto label_4464e8;
        case 0x4464ecu: goto label_4464ec;
        case 0x4464f0u: goto label_4464f0;
        case 0x4464f4u: goto label_4464f4;
        case 0x4464f8u: goto label_4464f8;
        case 0x4464fcu: goto label_4464fc;
        case 0x446500u: goto label_446500;
        case 0x446504u: goto label_446504;
        case 0x446508u: goto label_446508;
        case 0x44650cu: goto label_44650c;
        case 0x446510u: goto label_446510;
        case 0x446514u: goto label_446514;
        case 0x446518u: goto label_446518;
        case 0x44651cu: goto label_44651c;
        case 0x446520u: goto label_446520;
        case 0x446524u: goto label_446524;
        case 0x446528u: goto label_446528;
        case 0x44652cu: goto label_44652c;
        case 0x446530u: goto label_446530;
        case 0x446534u: goto label_446534;
        case 0x446538u: goto label_446538;
        case 0x44653cu: goto label_44653c;
        case 0x446540u: goto label_446540;
        case 0x446544u: goto label_446544;
        case 0x446548u: goto label_446548;
        case 0x44654cu: goto label_44654c;
        case 0x446550u: goto label_446550;
        case 0x446554u: goto label_446554;
        case 0x446558u: goto label_446558;
        case 0x44655cu: goto label_44655c;
        case 0x446560u: goto label_446560;
        case 0x446564u: goto label_446564;
        case 0x446568u: goto label_446568;
        case 0x44656cu: goto label_44656c;
        case 0x446570u: goto label_446570;
        case 0x446574u: goto label_446574;
        case 0x446578u: goto label_446578;
        case 0x44657cu: goto label_44657c;
        case 0x446580u: goto label_446580;
        case 0x446584u: goto label_446584;
        case 0x446588u: goto label_446588;
        case 0x44658cu: goto label_44658c;
        case 0x446590u: goto label_446590;
        case 0x446594u: goto label_446594;
        case 0x446598u: goto label_446598;
        case 0x44659cu: goto label_44659c;
        case 0x4465a0u: goto label_4465a0;
        case 0x4465a4u: goto label_4465a4;
        case 0x4465a8u: goto label_4465a8;
        case 0x4465acu: goto label_4465ac;
        case 0x4465b0u: goto label_4465b0;
        case 0x4465b4u: goto label_4465b4;
        case 0x4465b8u: goto label_4465b8;
        case 0x4465bcu: goto label_4465bc;
        case 0x4465c0u: goto label_4465c0;
        case 0x4465c4u: goto label_4465c4;
        case 0x4465c8u: goto label_4465c8;
        case 0x4465ccu: goto label_4465cc;
        case 0x4465d0u: goto label_4465d0;
        case 0x4465d4u: goto label_4465d4;
        case 0x4465d8u: goto label_4465d8;
        case 0x4465dcu: goto label_4465dc;
        case 0x4465e0u: goto label_4465e0;
        case 0x4465e4u: goto label_4465e4;
        case 0x4465e8u: goto label_4465e8;
        case 0x4465ecu: goto label_4465ec;
        case 0x4465f0u: goto label_4465f0;
        case 0x4465f4u: goto label_4465f4;
        case 0x4465f8u: goto label_4465f8;
        case 0x4465fcu: goto label_4465fc;
        case 0x446600u: goto label_446600;
        case 0x446604u: goto label_446604;
        default: break;
    }

    ctx->pc = 0x446400u;

label_446400:
    // 0x446400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x446400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_446404:
    // 0x446404: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x446404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_446408:
    // 0x446408: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x446408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_44640c:
    // 0x44640c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x44640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_446410:
    // 0x446410: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x446410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446414:
    // 0x446414: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x446414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_446418:
    // 0x446418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x446418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44641c:
    // 0x44641c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x44641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_446420:
    // 0x446420: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x446420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_446424:
    // 0x446424: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x446424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_446428:
    // 0x446428: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x446428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_44642c:
    // 0x44642c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_446430:
    if (ctx->pc == 0x446430u) {
        ctx->pc = 0x446430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44642Cu;
        // 0x446430: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446434u;
        goto label_446434;
    }
    ctx->pc = 0x44642Cu;
    {
        const bool branch_taken_0x44642c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x446430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44642Cu;
        // 0x446430: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44642c) {
            ctx->pc = 0x446440u;
            goto label_446440;
        }
    }
    ctx->pc = 0x446434u;
label_446434:
    // 0x446434: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x446434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_446438:
    // 0x446438: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_44643c:
    if (ctx->pc == 0x44643Cu) {
        ctx->pc = 0x44643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446438u;
        // 0x44643c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446440u;
        goto label_446440;
    }
    ctx->pc = 0x446438u;
    {
        const bool branch_taken_0x446438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x446438) {
            ctx->pc = 0x44643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446438u;
            // 0x44643c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446448u;
            goto label_446448;
        }
    }
    ctx->pc = 0x446440u;
label_446440:
    // 0x446440: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x446440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446444:
    // 0x446444: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x446444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_446448:
    // 0x446448: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_44644c:
    if (ctx->pc == 0x44644Cu) {
        ctx->pc = 0x44644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446448u;
        // 0x44644c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446450u;
        goto label_446450;
    }
    ctx->pc = 0x446448u;
    {
        const bool branch_taken_0x446448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446448u;
        // 0x44644c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446448) {
            ctx->pc = 0x44645Cu;
            goto label_44645c;
        }
    }
    ctx->pc = 0x446450u;
label_446450:
    // 0x446450: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x446450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_446454:
    // 0x446454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446458:
    // 0x446458: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x446458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_44645c:
    // 0x44645c: 0xc1117f6  jal         func_445FD8
label_446460:
    if (ctx->pc == 0x446460u) {
        ctx->pc = 0x446460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44645Cu;
        // 0x446460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446464u;
        goto label_446464;
    }
    ctx->pc = 0x44645Cu;
    SET_GPR_U32(ctx, 31, 0x446464u);
    ctx->pc = 0x446460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44645Cu;
    // 0x446460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445FD8u, 0x44645Cu, 0x446464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446464u;
label_446464:
    // 0x446464: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_446468:
    if (ctx->pc == 0x446468u) {
        ctx->pc = 0x446468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446464u;
        // 0x446468: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44646Cu;
        goto label_44646c;
    }
    ctx->pc = 0x446464u;
    {
        const bool branch_taken_0x446464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x446464) {
            ctx->pc = 0x446468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446464u;
            // 0x446468: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446480u;
            goto label_446480;
        }
    }
    ctx->pc = 0x44646Cu;
label_44646c:
    // 0x44646c: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_446470:
    if (ctx->pc == 0x446470u) {
        ctx->pc = 0x446470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44646Cu;
        // 0x446470: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446474u;
        goto label_446474;
    }
    ctx->pc = 0x44646Cu;
    {
        const bool branch_taken_0x44646c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x44646c) {
            ctx->pc = 0x446470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44646Cu;
            // 0x446470: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446480u;
            goto label_446480;
        }
    }
    ctx->pc = 0x446474u;
label_446474:
    // 0x446474: 0xc1119dc  jal         func_446770
label_446478:
    if (ctx->pc == 0x446478u) {
        ctx->pc = 0x446478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446474u;
        // 0x446478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44647Cu;
        goto label_44647c;
    }
    ctx->pc = 0x446474u;
    SET_GPR_U32(ctx, 31, 0x44647Cu);
    ctx->pc = 0x446478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446474u;
    // 0x446478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446770u, 0x446474u, 0x44647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44647Cu;
label_44647c:
    // 0x44647c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_446480:
    // 0x446480: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_446484:
    if (ctx->pc == 0x446484u) {
        ctx->pc = 0x446484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446480u;
        // 0x446484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446488u;
        goto label_446488;
    }
    ctx->pc = 0x446480u;
    {
        const bool branch_taken_0x446480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446480u;
        // 0x446484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446480) {
            ctx->pc = 0x4465A4u;
            goto label_4465a4;
        }
    }
    ctx->pc = 0x446488u;
label_446488:
    // 0x446488: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x446488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44648c:
    // 0x44648c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44648cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446490:
    // 0x446490: 0xc11321a  jal         func_44C868
label_446494:
    if (ctx->pc == 0x446494u) {
        ctx->pc = 0x446494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446490u;
        // 0x446494: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446498u;
        goto label_446498;
    }
    ctx->pc = 0x446490u;
    SET_GPR_U32(ctx, 31, 0x446498u);
    ctx->pc = 0x446494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446490u;
    // 0x446494: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C868u, 0x446490u, 0x446498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446498u;
label_446498:
    // 0x446498: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_44649c:
    if (ctx->pc == 0x44649Cu) {
        ctx->pc = 0x44649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446498u;
        // 0x44649c: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464A0u;
        goto label_4464a0;
    }
    ctx->pc = 0x446498u;
    {
        const bool branch_taken_0x446498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446498) {
            ctx->pc = 0x44649Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446498u;
            // 0x44649c: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4464B4u;
            goto label_4464b4;
        }
    }
    ctx->pc = 0x4464A0u;
label_4464a0:
    // 0x4464a0: 0xc111c94  jal         func_447250
label_4464a4:
    if (ctx->pc == 0x4464A4u) {
        ctx->pc = 0x4464A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464A0u;
        // 0x4464a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464A8u;
        goto label_4464a8;
    }
    ctx->pc = 0x4464A0u;
    SET_GPR_U32(ctx, 31, 0x4464A8u);
    ctx->pc = 0x4464A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4464A0u;
    // 0x4464a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447250u, 0x4464A0u, 0x4464A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4464A8u;
label_4464a8:
    // 0x4464a8: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x4464a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_4464ac:
    // 0x4464ac: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4464b0:
    if (ctx->pc == 0x4464B0u) {
        ctx->pc = 0x4464B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464ACu;
        // 0x4464b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464B4u;
        goto label_4464b4;
    }
    ctx->pc = 0x4464ACu;
    {
        const bool branch_taken_0x4464ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4464B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464ACu;
        // 0x4464b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464ac) {
            ctx->pc = 0x4465A4u;
            goto label_4465a4;
        }
    }
    ctx->pc = 0x4464B4u;
label_4464b4:
    // 0x4464b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4464b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4464b8:
    // 0x4464b8: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x4464b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_4464bc:
    // 0x4464bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4464bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4464c0:
    // 0x4464c0: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x4464c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_4464c4:
    // 0x4464c4: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_4464c8:
    if (ctx->pc == 0x4464C8u) {
        ctx->pc = 0x4464C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464C4u;
        // 0x4464c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464CCu;
        goto label_4464cc;
    }
    ctx->pc = 0x4464C4u;
    {
        const bool branch_taken_0x4464c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4464C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464C4u;
        // 0x4464c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464c4) {
            ctx->pc = 0x4465A4u;
            goto label_4465a4;
        }
    }
    ctx->pc = 0x4464CCu;
label_4464cc:
    // 0x4464cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4464ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4464d0:
    // 0x4464d0: 0xc1117f6  jal         func_445FD8
label_4464d4:
    if (ctx->pc == 0x4464D4u) {
        ctx->pc = 0x4464D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464D0u;
        // 0x4464d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464D8u;
        goto label_4464d8;
    }
    ctx->pc = 0x4464D0u;
    SET_GPR_U32(ctx, 31, 0x4464D8u);
    ctx->pc = 0x4464D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4464D0u;
    // 0x4464d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445FD8u, 0x4464D0u, 0x4464D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4464D8u;
label_4464d8:
    // 0x4464d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4464d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4464dc:
    // 0x4464dc: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x4464dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_4464e0:
    // 0x4464e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4464e4:
    if (ctx->pc == 0x4464E4u) {
        ctx->pc = 0x4464E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464E0u;
        // 0x4464e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464E8u;
        goto label_4464e8;
    }
    ctx->pc = 0x4464E0u;
    {
        const bool branch_taken_0x4464e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4464E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464E0u;
        // 0x4464e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4464e0) {
            ctx->pc = 0x4464FCu;
            goto label_4464fc;
        }
    }
    ctx->pc = 0x4464E8u;
label_4464e8:
    // 0x4464e8: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_4464ec:
    if (ctx->pc == 0x4464ECu) {
        ctx->pc = 0x4464ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464E8u;
        // 0x4464ec: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464F0u;
        goto label_4464f0;
    }
    ctx->pc = 0x4464E8u;
    {
        const bool branch_taken_0x4464e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4464e8) {
            ctx->pc = 0x4464ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4464E8u;
            // 0x4464ec: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446500u;
            goto label_446500;
        }
    }
    ctx->pc = 0x4464F0u;
label_4464f0:
    // 0x4464f0: 0xc1119dc  jal         func_446770
label_4464f4:
    if (ctx->pc == 0x4464F4u) {
        ctx->pc = 0x4464F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4464F0u;
        // 0x4464f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4464F8u;
        goto label_4464f8;
    }
    ctx->pc = 0x4464F0u;
    SET_GPR_U32(ctx, 31, 0x4464F8u);
    ctx->pc = 0x4464F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4464F0u;
    // 0x4464f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446770u, 0x4464F0u, 0x4464F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4464F8u;
label_4464f8:
    // 0x4464f8: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x4464f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_4464fc:
    // 0x4464fc: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x4464fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_446500:
    // 0x446500: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_446504:
    if (ctx->pc == 0x446504u) {
        ctx->pc = 0x446504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446500u;
        // 0x446504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446508u;
        goto label_446508;
    }
    ctx->pc = 0x446500u;
    {
        const bool branch_taken_0x446500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446500u;
        // 0x446504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446500) {
            ctx->pc = 0x4465A4u;
            goto label_4465a4;
        }
    }
    ctx->pc = 0x446508u;
label_446508:
    // 0x446508: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x446508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_44650c:
    // 0x44650c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446510:
    // 0x446510: 0xc111cc4  jal         func_447310
label_446514:
    if (ctx->pc == 0x446514u) {
        ctx->pc = 0x446514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446510u;
        // 0x446514: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446518u;
        goto label_446518;
    }
    ctx->pc = 0x446510u;
    SET_GPR_U32(ctx, 31, 0x446518u);
    ctx->pc = 0x446514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446510u;
    // 0x446514: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447310u, 0x446510u, 0x446518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446518u;
label_446518:
    // 0x446518: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x446518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_44651c:
    // 0x44651c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x44651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_446520:
    // 0x446520: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x446520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_446524:
    // 0x446524: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x446524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_446528:
    // 0x446528: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x446528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_44652c:
    // 0x44652c: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x44652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_446530:
    // 0x446530: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x446530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_446534:
    // 0x446534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x446534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_446538:
    // 0x446538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x446538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_44653c:
    // 0x44653c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x44653cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_446540:
    // 0x446540: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_446544:
    if (ctx->pc == 0x446544u) {
        ctx->pc = 0x446544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446540u;
        // 0x446544: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446548u;
        goto label_446548;
    }
    ctx->pc = 0x446540u;
    {
        const bool branch_taken_0x446540 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x446544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446540u;
        // 0x446544: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446540) {
            ctx->pc = 0x4465A0u;
            goto label_4465a0;
        }
    }
    ctx->pc = 0x446548u;
label_446548:
    // 0x446548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44654c:
    // 0x44654c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_446550:
    if (ctx->pc == 0x446550u) {
        ctx->pc = 0x446550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44654Cu;
        // 0x446550: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446554u;
        goto label_446554;
    }
    ctx->pc = 0x44654Cu;
    {
        const bool branch_taken_0x44654c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x446550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44654Cu;
        // 0x446550: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44654c) {
            ctx->pc = 0x4465A0u;
            goto label_4465a0;
        }
    }
    ctx->pc = 0x446554u;
label_446554:
    // 0x446554: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x446554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_446558:
    // 0x446558: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_44655c:
    if (ctx->pc == 0x44655Cu) {
        ctx->pc = 0x44655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446558u;
        // 0x44655c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446560u;
        goto label_446560;
    }
    ctx->pc = 0x446558u;
    {
        const bool branch_taken_0x446558 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x44655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446558u;
        // 0x44655c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446558) {
            ctx->pc = 0x4465A4u;
            goto label_4465a4;
        }
    }
    ctx->pc = 0x446560u;
label_446560:
    // 0x446560: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x446560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_446564:
    // 0x446564: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_446568:
    if (ctx->pc == 0x446568u) {
        ctx->pc = 0x446568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446564u;
        // 0x446568: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44656Cu;
        goto label_44656c;
    }
    ctx->pc = 0x446564u;
    {
        const bool branch_taken_0x446564 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x446568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446564u;
        // 0x446568: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446564) {
            ctx->pc = 0x4465A8u;
            goto label_4465a8;
        }
    }
    ctx->pc = 0x44656Cu;
label_44656c:
    // 0x44656c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x44656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_446570:
    // 0x446570: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x446570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_446574:
    // 0x446574: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x446574u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446578:
    // 0x446578: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x446578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44657c:
    // 0x44657c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x44657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_446580:
    // 0x446580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x446580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_446584:
    // 0x446584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x446584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_446588:
    // 0x446588: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x446588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_44658c:
    // 0x44658c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x44658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_446590:
    // 0x446590: 0xe0f809  jalr        $a3
label_446594:
    if (ctx->pc == 0x446594u) {
        ctx->pc = 0x446594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446590u;
        // 0x446594: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446598u;
        goto label_446598;
    }
    ctx->pc = 0x446590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x446598u);
        ctx->pc = 0x446594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446590u;
        // 0x446594: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446590u, 0x446598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446598u;
label_446598:
    // 0x446598: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x446598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_44659c:
    // 0x44659c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x44659cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4465a0:
    // 0x4465a0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4465a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4465a4:
    // 0x4465a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4465a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4465a8:
    // 0x4465a8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x4465a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4465ac:
    // 0x4465ac: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x4465acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4465b0:
    // 0x4465b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4465b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4465b4:
    // 0x4465b4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4465b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4465b8:
    // 0x4465b8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4465b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4465bc:
    // 0x4465bc: 0x3e00008  jr          $ra
label_4465c0:
    if (ctx->pc == 0x4465C0u) {
        ctx->pc = 0x4465C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4465BCu;
        // 0x4465c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4465C4u;
        goto label_4465c4;
    }
    ctx->pc = 0x4465BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4465C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4465BCu;
        // 0x4465c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4465BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4465C4u;
label_4465c4:
    // 0x4465c4: 0x0  nop
    ctx->pc = 0x4465c4u;
    // NOP
label_4465c8:
    // 0x4465c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4465c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4465cc:
    // 0x4465cc: 0x0  nop
    ctx->pc = 0x4465ccu;
    // NOP
label_4465d0:
    // 0x4465d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4465d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4465d4:
    // 0x4465d4: 0x0  nop
    ctx->pc = 0x4465d4u;
    // NOP
label_4465d8:
    // 0x4465d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4465d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4465dc:
    // 0x4465dc: 0x0  nop
    ctx->pc = 0x4465dcu;
    // NOP
label_4465e0:
    // 0x4465e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4465e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4465e4:
    // 0x4465e4: 0x0  nop
    ctx->pc = 0x4465e4u;
    // NOP
label_4465e8:
    // 0x4465e8: 0xac4600ac  sw          $a2, 0xAC($v0)
    ctx->pc = 0x4465e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
label_4465ec:
    // 0x4465ec: 0x0  nop
    ctx->pc = 0x4465ecu;
    // NOP
label_4465f0:
    // 0x4465f0: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x4465f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
label_4465f4:
    // 0x4465f4: 0x0  nop
    ctx->pc = 0x4465f4u;
    // NOP
label_4465f8:
    // 0x4465f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4465f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4465fc:
    // 0x4465fc: 0x0  nop
    ctx->pc = 0x4465fcu;
    // NOP
label_446600:
    // 0x446600: 0x8c62087c  lw          $v0, 0x87C($v1)
    ctx->pc = 0x446600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2172)));
label_446604:
    // 0x446604: 0x0  nop
    ctx->pc = 0x446604u;
    // NOP
    ctx->pc = 0x446608u;
}
