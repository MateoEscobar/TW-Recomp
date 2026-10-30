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

// Function: sub_004C1348
// Address: 0x4c1348 - 0x4c14d8
void sub_004C1348_0x4c1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1348_0x4c1348");
#endif

    switch (ctx->pc) {
        case 0x4c1348u: goto label_4c1348;
        case 0x4c134cu: goto label_4c134c;
        case 0x4c1350u: goto label_4c1350;
        case 0x4c1354u: goto label_4c1354;
        case 0x4c1358u: goto label_4c1358;
        case 0x4c135cu: goto label_4c135c;
        case 0x4c1360u: goto label_4c1360;
        case 0x4c1364u: goto label_4c1364;
        case 0x4c1368u: goto label_4c1368;
        case 0x4c136cu: goto label_4c136c;
        case 0x4c1370u: goto label_4c1370;
        case 0x4c1374u: goto label_4c1374;
        case 0x4c1378u: goto label_4c1378;
        case 0x4c137cu: goto label_4c137c;
        case 0x4c1380u: goto label_4c1380;
        case 0x4c1384u: goto label_4c1384;
        case 0x4c1388u: goto label_4c1388;
        case 0x4c138cu: goto label_4c138c;
        case 0x4c1390u: goto label_4c1390;
        case 0x4c1394u: goto label_4c1394;
        case 0x4c1398u: goto label_4c1398;
        case 0x4c139cu: goto label_4c139c;
        case 0x4c13a0u: goto label_4c13a0;
        case 0x4c13a4u: goto label_4c13a4;
        case 0x4c13a8u: goto label_4c13a8;
        case 0x4c13acu: goto label_4c13ac;
        case 0x4c13b0u: goto label_4c13b0;
        case 0x4c13b4u: goto label_4c13b4;
        case 0x4c13b8u: goto label_4c13b8;
        case 0x4c13bcu: goto label_4c13bc;
        case 0x4c13c0u: goto label_4c13c0;
        case 0x4c13c4u: goto label_4c13c4;
        case 0x4c13c8u: goto label_4c13c8;
        case 0x4c13ccu: goto label_4c13cc;
        case 0x4c13d0u: goto label_4c13d0;
        case 0x4c13d4u: goto label_4c13d4;
        case 0x4c13d8u: goto label_4c13d8;
        case 0x4c13dcu: goto label_4c13dc;
        case 0x4c13e0u: goto label_4c13e0;
        case 0x4c13e4u: goto label_4c13e4;
        case 0x4c13e8u: goto label_4c13e8;
        case 0x4c13ecu: goto label_4c13ec;
        case 0x4c13f0u: goto label_4c13f0;
        case 0x4c13f4u: goto label_4c13f4;
        case 0x4c13f8u: goto label_4c13f8;
        case 0x4c13fcu: goto label_4c13fc;
        case 0x4c1400u: goto label_4c1400;
        case 0x4c1404u: goto label_4c1404;
        case 0x4c1408u: goto label_4c1408;
        case 0x4c140cu: goto label_4c140c;
        case 0x4c1410u: goto label_4c1410;
        case 0x4c1414u: goto label_4c1414;
        case 0x4c1418u: goto label_4c1418;
        case 0x4c141cu: goto label_4c141c;
        case 0x4c1420u: goto label_4c1420;
        case 0x4c1424u: goto label_4c1424;
        case 0x4c1428u: goto label_4c1428;
        case 0x4c142cu: goto label_4c142c;
        case 0x4c1430u: goto label_4c1430;
        case 0x4c1434u: goto label_4c1434;
        case 0x4c1438u: goto label_4c1438;
        case 0x4c143cu: goto label_4c143c;
        case 0x4c1440u: goto label_4c1440;
        case 0x4c1444u: goto label_4c1444;
        case 0x4c1448u: goto label_4c1448;
        case 0x4c144cu: goto label_4c144c;
        case 0x4c1450u: goto label_4c1450;
        case 0x4c1454u: goto label_4c1454;
        case 0x4c1458u: goto label_4c1458;
        case 0x4c145cu: goto label_4c145c;
        case 0x4c1460u: goto label_4c1460;
        case 0x4c1464u: goto label_4c1464;
        case 0x4c1468u: goto label_4c1468;
        case 0x4c146cu: goto label_4c146c;
        case 0x4c1470u: goto label_4c1470;
        case 0x4c1474u: goto label_4c1474;
        case 0x4c1478u: goto label_4c1478;
        case 0x4c147cu: goto label_4c147c;
        case 0x4c1480u: goto label_4c1480;
        case 0x4c1484u: goto label_4c1484;
        case 0x4c1488u: goto label_4c1488;
        case 0x4c148cu: goto label_4c148c;
        case 0x4c1490u: goto label_4c1490;
        case 0x4c1494u: goto label_4c1494;
        case 0x4c1498u: goto label_4c1498;
        case 0x4c149cu: goto label_4c149c;
        case 0x4c14a0u: goto label_4c14a0;
        case 0x4c14a4u: goto label_4c14a4;
        case 0x4c14a8u: goto label_4c14a8;
        case 0x4c14acu: goto label_4c14ac;
        case 0x4c14b0u: goto label_4c14b0;
        case 0x4c14b4u: goto label_4c14b4;
        case 0x4c14b8u: goto label_4c14b8;
        case 0x4c14bcu: goto label_4c14bc;
        case 0x4c14c0u: goto label_4c14c0;
        case 0x4c14c4u: goto label_4c14c4;
        case 0x4c14c8u: goto label_4c14c8;
        case 0x4c14ccu: goto label_4c14cc;
        case 0x4c14d0u: goto label_4c14d0;
        case 0x4c14d4u: goto label_4c14d4;
        default: break;
    }

    ctx->pc = 0x4c1348u;

label_4c1348:
    // 0x4c1348: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4c1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4c134c:
    // 0x4c134c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4c134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4c1350:
    // 0x4c1350: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4c1350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4c1354:
    // 0x4c1354: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4c1354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c1358:
    // 0x4c1358: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4c1358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_4c135c:
    // 0x4c135c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4c135cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c1360:
    // 0x4c1360: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4c1360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4c1364:
    // 0x4c1364: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x4c1364u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c1368:
    // 0x4c1368: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4c1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4c136c:
    // 0x4c136c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4c136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4c1370:
    // 0x4c1370: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4c1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4c1374:
    // 0x4c1374: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c1374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c1378:
    // 0x4c1378: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4c1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4c137c:
    // 0x4c137c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c1380:
    // 0x4c1380: 0xc130536  jal         func_4C14D8
label_4c1384:
    if (ctx->pc == 0x4C1384u) {
        ctx->pc = 0x4C1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1380u;
        // 0x4c1384: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1388u;
        goto label_4c1388;
    }
    ctx->pc = 0x4C1380u;
    SET_GPR_U32(ctx, 31, 0x4C1388u);
    ctx->pc = 0x4C1384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1380u;
    // 0x4c1384: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C14D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C14D8u, 0x4C1380u, 0x4C1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1388u;
label_4c1388:
    // 0x4c1388: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c1388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c138c:
    // 0x4c138c: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
label_4c1390:
    if (ctx->pc == 0x4C1390u) {
        ctx->pc = 0x4C1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C138Cu;
        // 0x4c1390: 0x8f848aa0  lw          $a0, -0x7560($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1394u;
        goto label_4c1394;
    }
    ctx->pc = 0x4C138Cu;
    {
        const bool branch_taken_0x4c138c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C138Cu;
        // 0x4c1390: 0x8f848aa0  lw          $a0, -0x7560($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c138c) {
            ctx->pc = 0x4C14A0u;
            goto label_4c14a0;
        }
    }
    ctx->pc = 0x4C1394u;
label_4c1394:
    // 0x4c1394: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c1394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1398:
    // 0x4c1398: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x4c1398u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c139c:
    // 0x4c139c: 0xc10f438  jal         func_43D0E0
label_4c13a0:
    if (ctx->pc == 0x4C13A0u) {
        ctx->pc = 0x4C13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C139Cu;
        // 0x4c13a0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C13A4u;
        goto label_4c13a4;
    }
    ctx->pc = 0x4C139Cu;
    SET_GPR_U32(ctx, 31, 0x4C13A4u);
    ctx->pc = 0x4C13A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C139Cu;
    // 0x4c13a0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x4C139Cu, 0x4C13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C13A4u;
label_4c13a4:
    // 0x4c13a4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4c13a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c13a8:
    // 0x4c13a8: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x4c13a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c13ac:
    // 0x4c13ac: 0x0  nop
    ctx->pc = 0x4c13acu;
    // NOP
label_4c13b0:
    // 0x4c13b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4c13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4c13b4:
    // 0x4c13b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4c13b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4c13b8:
    // 0x4c13b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4c13bc:
    if (ctx->pc == 0x4C13BCu) {
        ctx->pc = 0x4C13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13B8u;
        // 0x4c13bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C13C0u;
        goto label_4c13c0;
    }
    ctx->pc = 0x4C13B8u;
    {
        const bool branch_taken_0x4c13b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13B8u;
        // 0x4c13bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c13b8) {
            ctx->pc = 0x4C13E4u;
            goto label_4c13e4;
        }
    }
    ctx->pc = 0x4C13C0u;
label_4c13c0:
    // 0x4c13c0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4c13c4:
    // 0x4c13c4: 0x40f809  jalr        $v0
label_4c13c8:
    if (ctx->pc == 0x4C13C8u) {
        ctx->pc = 0x4C13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13C4u;
        // 0x4c13c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C13CCu;
        goto label_4c13cc;
    }
    ctx->pc = 0x4C13C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C13CCu);
        ctx->pc = 0x4C13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13C4u;
        // 0x4c13c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C13C4u, 0x4C13CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C13CCu;
label_4c13cc:
    // 0x4c13cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4c13ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c13d0:
    // 0x4c13d0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4c13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4c13d4:
    // 0x4c13d4: 0x5454fff6  bnel        $v0, $s4, . + 4 + (-0xA << 2)
label_4c13d8:
    if (ctx->pc == 0x4C13D8u) {
        ctx->pc = 0x4C13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13D4u;
        // 0x4c13d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C13DCu;
        goto label_4c13dc;
    }
    ctx->pc = 0x4C13D4u;
    {
        const bool branch_taken_0x4c13d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x4c13d4) {
            ctx->pc = 0x4C13D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C13D4u;
            // 0x4c13d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C13B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c13b0;
        }
    }
    ctx->pc = 0x4C13DCu;
label_4c13dc:
    // 0x4c13dc: 0xac750038  sw          $s5, 0x38($v1)
    ctx->pc = 0x4c13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 21));
label_4c13e0:
    // 0x4c13e0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x4c13e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c13e4:
    // 0x4c13e4: 0xc10f430  jal         func_43D0C0
label_4c13e8:
    if (ctx->pc == 0x4C13E8u) {
        ctx->pc = 0x4C13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13E4u;
        // 0x4c13e8: 0x8f848aa0  lw          $a0, -0x7560($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C13ECu;
        goto label_4c13ec;
    }
    ctx->pc = 0x4C13E4u;
    SET_GPR_U32(ctx, 31, 0x4C13ECu);
    ctx->pc = 0x4C13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C13E4u;
    // 0x4c13e8: 0x8f848aa0  lw          $a0, -0x7560($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x4C13E4u, 0x4C13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C13ECu;
label_4c13ec:
    // 0x4c13ec: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
label_4c13f0:
    if (ctx->pc == 0x4C13F0u) {
        ctx->pc = 0x4C13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13ECu;
        // 0x4c13f0: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C13F4u;
        goto label_4c13f4;
    }
    ctx->pc = 0x4C13ECu;
    {
        const bool branch_taken_0x4c13ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C13ECu;
        // 0x4c13f0: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c13ec) {
            ctx->pc = 0x4C1424u;
            goto label_4c1424;
        }
    }
    ctx->pc = 0x4C13F4u;
label_4c13f4:
    // 0x4c13f4: 0xc130658  jal         func_4C1960
label_4c13f8:
    if (ctx->pc == 0x4C13F8u) {
        ctx->pc = 0x4C13FCu;
        goto label_4c13fc;
    }
    ctx->pc = 0x4C13F4u;
    SET_GPR_U32(ctx, 31, 0x4C13FCu);
    ctx->pc = 0x4C1960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1960u, 0x4C13F4u, 0x4C13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C13FCu;
label_4c13fc:
    // 0x4c13fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4c13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c1400:
    // 0x4c1400: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4c1400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4c1404:
    // 0x4c1404: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x4c1404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_4c1408:
    // 0x4c1408: 0x8c824254  lw          $v0, 0x4254($a0)
    ctx->pc = 0x4c1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16980)));
label_4c140c:
    // 0x4c140c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_4c1410:
    if (ctx->pc == 0x4C1410u) {
        ctx->pc = 0x4C1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C140Cu;
        // 0x4c1410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1414u;
        goto label_4c1414;
    }
    ctx->pc = 0x4C140Cu;
    {
        const bool branch_taken_0x4c140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c140c) {
            ctx->pc = 0x4C1410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C140Cu;
            // 0x4c1410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C14A4u;
            goto label_4c14a4;
        }
    }
    ctx->pc = 0x4C1414u;
label_4c1414:
    // 0x4c1414: 0x40f809  jalr        $v0
label_4c1418:
    if (ctx->pc == 0x4C1418u) {
        ctx->pc = 0x4C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1414u;
        // 0x4c1418: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C141Cu;
        goto label_4c141c;
    }
    ctx->pc = 0x4C1414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C141Cu);
        ctx->pc = 0x4C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1414u;
        // 0x4c1418: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1414u, 0x4C141Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C141Cu;
label_4c141c:
    // 0x4c141c: 0x10000021  b           . + 4 + (0x21 << 2)
label_4c1420:
    if (ctx->pc == 0x4C1420u) {
        ctx->pc = 0x4C1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C141Cu;
        // 0x4c1420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1424u;
        goto label_4c1424;
    }
    ctx->pc = 0x4C141Cu;
    {
        const bool branch_taken_0x4c141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C141Cu;
        // 0x4c1420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c141c) {
            ctx->pc = 0x4C14A4u;
            goto label_4c14a4;
        }
    }
    ctx->pc = 0x4C1424u;
label_4c1424:
    // 0x4c1424: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4c1428:
    if (ctx->pc == 0x4C1428u) {
        ctx->pc = 0x4C1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1424u;
        // 0x4c1428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C142Cu;
        goto label_4c142c;
    }
    ctx->pc = 0x4C1424u;
    {
        const bool branch_taken_0x4c1424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1424u;
        // 0x4c1428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1424) {
            ctx->pc = 0x4C1438u;
            goto label_4c1438;
        }
    }
    ctx->pc = 0x4C142Cu;
label_4c142c:
    // 0x4c142c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x4c142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_4c1430:
    // 0x4c1430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4c1434:
    if (ctx->pc == 0x4C1434u) {
        ctx->pc = 0x4C1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1430u;
        // 0x4c1434: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1438u;
        goto label_4c1438;
    }
    ctx->pc = 0x4C1430u;
    {
        const bool branch_taken_0x4c1430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1430u;
        // 0x4c1434: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1430) {
            ctx->pc = 0x4C1444u;
            goto label_4c1444;
        }
    }
    ctx->pc = 0x4C1438u;
label_4c1438:
    // 0x4c1438: 0xae570048  sw          $s7, 0x48($s2)
    ctx->pc = 0x4c1438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 23));
label_4c143c:
    // 0x4c143c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x4c143cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_4c1440:
    // 0x4c1440: 0xae5e004c  sw          $fp, 0x4C($s2)
    ctx->pc = 0x4c1440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 30));
label_4c1444:
    // 0x4c1444: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4c1448:
    // 0x4c1448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c144c:
    if (ctx->pc == 0x4C144Cu) {
        ctx->pc = 0x4C144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1448u;
        // 0x4c144c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1450u;
        goto label_4c1450;
    }
    ctx->pc = 0x4C1448u;
    {
        const bool branch_taken_0x4c1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1448u;
        // 0x4c144c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1448) {
            ctx->pc = 0x4C1460u;
            goto label_4c1460;
        }
    }
    ctx->pc = 0x4C1450u;
label_4c1450:
    // 0x4c1450: 0xae570048  sw          $s7, 0x48($s2)
    ctx->pc = 0x4c1450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 23));
label_4c1454:
    // 0x4c1454: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x4c1454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_4c1458:
    // 0x4c1458: 0x36760010  ori         $s6, $s3, 0x10
    ctx->pc = 0x4c1458u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
label_4c145c:
    // 0x4c145c: 0xae5e004c  sw          $fp, 0x4C($s2)
    ctx->pc = 0x4c145cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 30));
label_4c1460:
    // 0x4c1460: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x4c1460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4c1464:
    // 0x4c1464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c1464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c1468:
    // 0x4c1468: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4c1468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c146c:
    // 0x4c146c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4c146cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c1470:
    // 0x4c1470: 0x40f809  jalr        $v0
label_4c1474:
    if (ctx->pc == 0x4C1474u) {
        ctx->pc = 0x4C1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1470u;
        // 0x4c1474: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1478u;
        goto label_4c1478;
    }
    ctx->pc = 0x4C1470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1478u);
        ctx->pc = 0x4C1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1470u;
        // 0x4c1474: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1470u, 0x4C1478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1478u;
label_4c1478:
    // 0x4c1478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c1478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c147c:
    // 0x4c147c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_4c1480:
    if (ctx->pc == 0x4C1480u) {
        ctx->pc = 0x4C1484u;
        goto label_4c1484;
    }
    ctx->pc = 0x4C147Cu;
    {
        const bool branch_taken_0x4c147c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c147c) {
            ctx->pc = 0x4C148Cu;
            goto label_4c148c;
        }
    }
    ctx->pc = 0x4C1484u;
label_4c1484:
    // 0x4c1484: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x4c1484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_4c1488:
    // 0x4c1488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c1488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c148c:
    // 0x4c148c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_4c1490:
    if (ctx->pc == 0x4C1490u) {
        ctx->pc = 0x4C1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C148Cu;
        // 0x4c1490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1494u;
        goto label_4c1494;
    }
    ctx->pc = 0x4C148Cu;
    {
        const bool branch_taken_0x4c148c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C148Cu;
        // 0x4c1490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c148c) {
            ctx->pc = 0x4C1498u;
            goto label_4c1498;
        }
    }
    ctx->pc = 0x4C1494u;
label_4c1494:
    // 0x4c1494: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x4c1494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_4c1498:
    // 0x4c1498: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c149c:
    if (ctx->pc == 0x4C149Cu) {
        ctx->pc = 0x4C149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1498u;
        // 0x4c149c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C14A0u;
        goto label_4c14a0;
    }
    ctx->pc = 0x4C1498u;
    {
        const bool branch_taken_0x4c1498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1498u;
        // 0x4c149c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1498) {
            ctx->pc = 0x4C14A4u;
            goto label_4c14a4;
        }
    }
    ctx->pc = 0x4C14A0u;
label_4c14a0:
    // 0x4c14a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c14a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c14a4:
    // 0x4c14a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4c14a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4c14a8:
    // 0x4c14a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4c14a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4c14ac:
    // 0x4c14ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4c14acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4c14b0:
    // 0x4c14b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4c14b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c14b4:
    // 0x4c14b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4c14b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c14b8:
    // 0x4c14b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c14b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c14bc:
    // 0x4c14bc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4c14bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c14c0:
    // 0x4c14c0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4c14c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c14c4:
    // 0x4c14c4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4c14c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c14c8:
    // 0x4c14c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c14c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c14cc:
    // 0x4c14cc: 0x3e00008  jr          $ra
label_4c14d0:
    if (ctx->pc == 0x4C14D0u) {
        ctx->pc = 0x4C14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C14CCu;
        // 0x4c14d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C14D4u;
        goto label_4c14d4;
    }
    ctx->pc = 0x4C14CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C14CCu;
        // 0x4c14d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C14CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C14D4u;
label_4c14d4:
    // 0x4c14d4: 0x0  nop
    ctx->pc = 0x4c14d4u;
    // NOP
    ctx->pc = 0x4c14d8u;
}
