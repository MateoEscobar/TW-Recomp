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

// Function: sub_004B13F8
// Address: 0x4b13f8 - 0x4b1478
void sub_004B13F8_0x4b13f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B13F8_0x4b13f8");
#endif

    switch (ctx->pc) {
        case 0x4b13f8u: goto label_4b13f8;
        case 0x4b13fcu: goto label_4b13fc;
        case 0x4b1400u: goto label_4b1400;
        case 0x4b1404u: goto label_4b1404;
        case 0x4b1408u: goto label_4b1408;
        case 0x4b140cu: goto label_4b140c;
        case 0x4b1410u: goto label_4b1410;
        case 0x4b1414u: goto label_4b1414;
        case 0x4b1418u: goto label_4b1418;
        case 0x4b141cu: goto label_4b141c;
        case 0x4b1420u: goto label_4b1420;
        case 0x4b1424u: goto label_4b1424;
        case 0x4b1428u: goto label_4b1428;
        case 0x4b142cu: goto label_4b142c;
        case 0x4b1430u: goto label_4b1430;
        case 0x4b1434u: goto label_4b1434;
        case 0x4b1438u: goto label_4b1438;
        case 0x4b143cu: goto label_4b143c;
        case 0x4b1440u: goto label_4b1440;
        case 0x4b1444u: goto label_4b1444;
        case 0x4b1448u: goto label_4b1448;
        case 0x4b144cu: goto label_4b144c;
        case 0x4b1450u: goto label_4b1450;
        case 0x4b1454u: goto label_4b1454;
        case 0x4b1458u: goto label_4b1458;
        case 0x4b145cu: goto label_4b145c;
        case 0x4b1460u: goto label_4b1460;
        case 0x4b1464u: goto label_4b1464;
        case 0x4b1468u: goto label_4b1468;
        case 0x4b146cu: goto label_4b146c;
        case 0x4b1470u: goto label_4b1470;
        case 0x4b1474u: goto label_4b1474;
        default: break;
    }

    ctx->pc = 0x4b13f8u;

label_4b13f8:
    // 0x4b13f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b13f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b13fc:
    // 0x4b13fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b13fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b1400:
    // 0x4b1400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b1400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b1404:
    // 0x4b1404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b1408:
    // 0x4b1408: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b1408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b140c:
    // 0x4b140c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4b140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4b1410:
    // 0x4b1410: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4b1410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b1414:
    // 0x4b1414: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4b1418:
    if (ctx->pc == 0x4B1418u) {
        ctx->pc = 0x4B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1414u;
        // 0x4b1418: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B141Cu;
        goto label_4b141c;
    }
    ctx->pc = 0x4B1414u;
    {
        const bool branch_taken_0x4b1414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1414u;
        // 0x4b1418: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1414) {
            ctx->pc = 0x4B1434u;
            goto label_4b1434;
        }
    }
    ctx->pc = 0x4B141Cu;
label_4b141c:
    // 0x4b141c: 0x9064ffff  lbu         $a0, -0x1($v1)
    ctx->pc = 0x4b141cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_4b1420:
    // 0x4b1420: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
label_4b1424:
    if (ctx->pc == 0x4B1424u) {
        ctx->pc = 0x4B1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1420u;
        // 0x4b1424: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1428u;
        goto label_4b1428;
    }
    ctx->pc = 0x4B1420u;
    {
        const bool branch_taken_0x4b1420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b1420) {
            ctx->pc = 0x4B1424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1420u;
            // 0x4b1424: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1438u;
            goto label_4b1438;
        }
    }
    ctx->pc = 0x4B1428u;
label_4b1428:
    // 0x4b1428: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4b1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4b142c:
    // 0x4b142c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4b1430:
    if (ctx->pc == 0x4B1430u) {
        ctx->pc = 0x4B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B142Cu;
        // 0x4b1430: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1434u;
        goto label_4b1434;
    }
    ctx->pc = 0x4B142Cu;
    {
        const bool branch_taken_0x4b142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B142Cu;
        // 0x4b1430: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b142c) {
            ctx->pc = 0x4B1448u;
            goto label_4b1448;
        }
    }
    ctx->pc = 0x4B1434u;
label_4b1434:
    // 0x4b1434: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b1434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b1438:
    // 0x4b1438: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4b1438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4b143c:
    // 0x4b143c: 0x40f809  jalr        $v0
label_4b1440:
    if (ctx->pc == 0x4B1440u) {
        ctx->pc = 0x4B1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B143Cu;
        // 0x4b1440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1444u;
        goto label_4b1444;
    }
    ctx->pc = 0x4B143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B1444u);
        ctx->pc = 0x4B1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B143Cu;
        // 0x4b1440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B143Cu, 0x4B1444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B1444u;
label_4b1444:
    // 0x4b1444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b1444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1448:
    // 0x4b1448: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b144c:
    // 0x4b144c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_4b1450:
    if (ctx->pc == 0x4B1450u) {
        ctx->pc = 0x4B1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B144Cu;
        // 0x4b1450: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1454u;
        goto label_4b1454;
    }
    ctx->pc = 0x4B144Cu;
    {
        const bool branch_taken_0x4b144c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B144Cu;
        // 0x4b1450: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b144c) {
            ctx->pc = 0x4B1460u;
            goto label_4b1460;
        }
    }
    ctx->pc = 0x4B1454u;
label_4b1454:
    // 0x4b1454: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b1458:
    // 0x4b1458: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4b145c:
    // 0x4b145c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b145cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b1460:
    // 0x4b1460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b1460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b1464:
    // 0x4b1464: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b1464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b1468:
    // 0x4b1468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b1468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b146c:
    // 0x4b146c: 0x3e00008  jr          $ra
label_4b1470:
    if (ctx->pc == 0x4B1470u) {
        ctx->pc = 0x4B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B146Cu;
        // 0x4b1470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B1474u;
        goto label_4b1474;
    }
    ctx->pc = 0x4B146Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B146Cu;
        // 0x4b1470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B146Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1474u;
label_4b1474:
    // 0x4b1474: 0x0  nop
    ctx->pc = 0x4b1474u;
    // NOP
    ctx->pc = 0x4b1478u;
}
